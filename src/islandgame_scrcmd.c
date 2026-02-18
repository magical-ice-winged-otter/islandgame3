#include "constants/global.h"
#include "gba/defines.h"
#include "gba/isagbprint.h"
#include "global.h"
#include "party_menu.h"
#include "pokedex.h"
#include "islandgame.h"
#include "list_menu.h"
#include "event_data.h" // for gSpecialVar
#include "field_camera.h" // for MoveCameraAndRedrawMap
#include "pokemon.h"
#include "rtc.h" // for gLocalTime
#include "clock.h" // for InitTimeBasedEvents
#include "overworld.h"
#include "main.h"
#include "event_object_movement.h"
#include "follower_npc.h"
#include "islandgame_mapgen.h"
#include "random.h"
#include "fieldmap.h"
#include "malloc.h"

void CheckDexCount(void)
{
    gSpecialVar_0x8000 = GetNationalPokedexCount(FLAG_GET_CAUGHT);
}

void TeleportCamera(void)
{
    u16 x = gSpecialVar_0x8000;
    u16 y = gSpecialVar_0x8001;
    s16 deltaX = (s16)x - gSaveBlock1Ptr->pos.x;
    s16 deltaY = (s16)y - gSaveBlock1Ptr->pos.y;
    MoveCameraAndRedrawMap(deltaX, deltaY);
}

void SetObjectMovementRadius(void)
{
    u16 localId = gSpecialVar_0x8000;
    u16 x = gSpecialVar_0x8001;
    u16 y = gSpecialVar_0x8002;

    for (int i = 0; i < OBJECT_EVENT_TEMPLATES_COUNT; i++)
    {
        if (localId == gSaveBlock1Ptr->objectEventTemplates[i].localId)
        {
            struct ObjectEventTemplate *template = &gSaveBlock1Ptr->objectEventTemplates[i];
            template->movementRangeX = x;
            template->movementRangeY = y;
            return;
        }
    }
}

void UnsetFollower(void)
{
    if (PlayerHasFollowerNPC())
    {
        u16 localId = gSpecialVar_0x8000;
        struct ObjectEvent *follower = &gObjectEvents[GetFollowerNPCData(FNPC_DATA_OBJ_ID)];
        struct ObjectEvent *npc = &gObjectEvents[TrySpawnObjectEvent(localId, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup)];
        FlagClear(GetFollowerNPCData(FNPC_DATA_EVENT_FLAG));
        MoveObjectEventToMapCoords(npc, follower->currentCoords.x, follower->currentCoords.y);
        ObjectEventTurn(npc, follower->facingDirection);
        DestroyFollowerNPC();
    }
}

void CheckPartyMon(void) 
{
    u16 species = gSpecialVar_0x8000;
    gSpecialVar_Result = FALSE;

    for (int i = 0; i < CalculatePlayerPartyCount(); i++)
    {
        struct Pokemon *pokemon = &gPlayerParty[i];
        bool16 isEgg = GetMonData(pokemon, MON_DATA_IS_EGG);
        bool16 hasSpecies = GetMonData(pokemon, MON_DATA_SANITY_HAS_SPECIES);
        bool16 isCorrectSpecies = GetMonData(pokemon, MON_DATA_SPECIES) == species;

        if (hasSpecies && isCorrectSpecies && !isEgg)
        {
            gSpecialVar_Result = TRUE;
            break;
        }
    }
}

void setTime(void) 
{
    u16 days = gSpecialVar_0x8009;
    u16 hours = gSpecialVar_0x800A;
    u16 minutes = gSpecialVar_0x800B;
    u16 seconds = gSpecialVar_0x8014;
    RtcCalcLocalTimeOffset(days, hours, minutes, seconds);
}

///////////////////////////////
// MAPGEN
//

struct Mapgen_Prefab
{
    u8 x, y, width, height;
};

#define MAPGEN_MAX_PREFABS 16
EWRAM_DATA static struct Mapgen_Prefab sMapPrefabs[MAPGEN_MAX_PREFABS];
static struct Mapgen_Generator *sMapGenerator;

// TODO(poe): How to set elevation at runtime?
// TODO(poe): Move to one file, better integrate

static bool32 Mapgen_HasGeneratorOtherwiseWarn()
{
    if (!sMapGenerator)
    {
        DebugPrintfLevel(MGBA_LOG_ERROR, "The map generator has not been initialized! Ensure you called 'mapgen_begin'");
        return FALSE;
    }

    return TRUE;
}

static void Mapgen_MoveObjects(int dstX, int dstY, int srcX, int srcY, int width, int height)
{
    for (int i = 0; i < OBJECT_EVENT_TEMPLATES_COUNT; i++)
    {
        struct ObjectEventTemplate *template = &gSaveBlock1Ptr->objectEventTemplates[i];
        bool32 doesOverlapX = template->x >= srcX && template->x < srcX + width;
        bool32 doesOverlapY = template->y >= srcY && template->y < srcY + height;

        if (doesOverlapX && doesOverlapY)
        {
            template->x = dstX + (template->x - srcX);
            template->y = dstY + (template->y - srcY);
        }
    }
}

static void Mapgen_CopyMetatiles(int dstX, int dstY, int srcX, int srcY, int width, int height)
{
    for (int iy = 0; iy < height; iy++)
    {
        for (int ix = 0; ix < width; ix++)
        {
            u32 metatileId = MapGridGetMetatileIdAt(srcX + ix + MAP_OFFSET, srcY + iy + MAP_OFFSET);
            MapGridSetMetatileIdAt(dstX + ix + MAP_OFFSET, dstY + iy + MAP_OFFSET, metatileId);

            bool32 hasCollision = MapGridGetCollisionAt(srcX + ix + MAP_OFFSET, srcY + iy + MAP_OFFSET);
            MapGridSetMetatileImpassabilityAt(dstX + ix + MAP_OFFSET, dstY + iy + MAP_OFFSET, hasCollision);
        }
    }
}

void Mapgen_Script_Begin(void)
{
    if (sMapGenerator != NULL)
    {
        DebugPrintfLevel(MGBA_LOG_ERROR, "An old map generator has not been ended! Ensure you called 'mapgen_end' after 'mapgen_begin'");
    }
    else
    {
        sMapGenerator = Alloc(sizeof *sMapGenerator);

        if (sMapGenerator)
        {
            // TODO(poe): No longer really need to generate the random seed here, since its 
            // passed in from a var each time
            Mapgen_Init(sMapGenerator, Random());
        }
        else
        {
            DebugPrintfLevel(MGBA_LOG_ERROR, "Failed to allocate map generator on the heap. This should never happen");
        }
    }
}

void Mapgen_Script_End(void)
{
    if (Mapgen_HasGeneratorOtherwiseWarn())
    {
        FREE_AND_SET_NULL(sMapGenerator);
        DrawWholeMapView();
    }
}

void Mapgen_Script_SetSeed(void)
{
    u16 seed = gSpecialVar_0x8000;

    if (Mapgen_HasGeneratorOtherwiseWarn())
    {
        sMapGenerator->randomSeed = seed;
    }
}

void Mapgen_Script_SetPrefab(void)
{
    u16 id = gSpecialVar_0x8000;
    u16 xMin = gSpecialVar_0x8001;
    u16 yMin = gSpecialVar_0x8002;
    u16 xMax = gSpecialVar_0x8003;
    u16 yMax = gSpecialVar_0x8004;

    if (id >= MAPGEN_MAX_PREFABS)
    {
        DebugPrintfLevel(MGBA_LOG_ERROR, "Prefab %i is too high! Only %i prefabs are allowed", id, MAPGEN_MAX_PREFABS);
    }
    else
    {
        struct Mapgen_Prefab *prefab = &sMapPrefabs[id];
        prefab->x = xMin;
        prefab->y = yMin;
        prefab->width = xMax - xMin + 1;
        prefab->height = yMax - yMin + 1;
    }
}

void Mapgen_Script_Space(void)
{
    u16 xMin = gSpecialVar_0x8000;
    u16 yMin = gSpecialVar_0x8001;
    u16 xMax = gSpecialVar_0x8002;
    u16 yMax = gSpecialVar_0x8003;

    if (Mapgen_HasGeneratorOtherwiseWarn())
    {
        Mapgen_AddSpace_XYWH(sMapGenerator, xMin, yMin, xMax - xMin, yMax - yMin);
    }
}

void Mapgen_Script_Spawn(void)
{
    u16 id = gSpecialVar_0x8000;
    u16 count = gSpecialVar_0x8001;

    if (Mapgen_HasGeneratorOtherwiseWarn())
    {
        struct Mapgen_Prefab prefab = sMapPrefabs[id];

        for (int i = 0; i < count; i++)
        {
            struct Mapgen_Result result = Mapgen_Generate(sMapGenerator, prefab.width, prefab.height);

            if (result.isValid)
            {
                Mapgen_CopyMetatiles(result.x, result.y, prefab.x, prefab.y, prefab.width, prefab.height);
            }
        }
    }
}

void Mapgen_Script_SpawnSingle(void)
{
    u16 xMin = gSpecialVar_0x8000;
    u16 yMin = gSpecialVar_0x8001;
    u16 xMax = gSpecialVar_0x8002;
    u16 yMax = gSpecialVar_0x8003;

    if (Mapgen_HasGeneratorOtherwiseWarn())
    {
        int width = xMax - xMin + 1;
        int height = yMax - yMin + 1;
        struct Mapgen_Result result = Mapgen_Generate(sMapGenerator, width, height);

        if (result.isValid)
        {
            Mapgen_CopyMetatiles(result.x, result.y, xMin, yMin, width, height);
            Mapgen_MoveObjects(result.x, result.y, xMin, yMin, width, height);
        }
    }
}

void Mapgen_Script_SpawnNoSplit(void)
{
    u16 id = gSpecialVar_0x8000;
    u16 count = gSpecialVar_0x8001;

    if (Mapgen_HasGeneratorOtherwiseWarn())
    {
        struct Mapgen_Prefab prefab = sMapPrefabs[id];

        for (int i = 0; i < count; i++)
        {
            struct Mapgen_Result result = Mapgen_GenerateNoSplit(sMapGenerator, prefab.width, prefab.height);

            if (result.isValid)
            {
                Mapgen_CopyMetatiles(result.x, result.y, prefab.x, prefab.y, prefab.width, prefab.height);
            }
        }
    }
}
