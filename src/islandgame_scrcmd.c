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

static struct Mapgen_Map sMapGenerator;

void Script_MapgenInit(void)
{
    Mapgen_Init(&sMapGenerator, Random());
}

void Script_MapgenAddSpace(void)
{
    u16 xMin = gSpecialVar_0x8000;
    u16 yMin = gSpecialVar_0x8001;
    u16 xMax = gSpecialVar_0x8002;
    u16 yMax = gSpecialVar_0x8003;
    Mapgen_AddSpace_XYWH(&sMapGenerator, xMin, yMin, xMax - xMin, yMax - yMin);
}

void Script_MapgenSpawn(void)
{
    u16 xMin = gSpecialVar_0x8000;
    u16 yMin = gSpecialVar_0x8001;
    u16 xMax = gSpecialVar_0x8002;
    u16 yMax = gSpecialVar_0x8003;
    int width = xMax - xMin + 1;
    int height = yMax - yMin + 1;
    struct Mapgen_Result result = Mapgen_Generate(&sMapGenerator, width, height);

    if (result.isValid)
    {
        for (int y = 0; y < height; y++)
        {
            for (int x = 0; x < width; x++)
            {
                u32 metatileId = MapGridGetMetatileIdAt(xMin + x + MAP_OFFSET, yMin + y + MAP_OFFSET);
                MapGridSetMetatileIdAt(result.x + x + MAP_OFFSET, result.y + y + MAP_OFFSET, metatileId);
            }
        }

        DrawWholeMapView();
    }
}
