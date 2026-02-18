#ifndef GUARD_ISLANDGAME_MAPGEN_H
#define GUARD_ISLANDGAME_MAPGEN_H

#include "global.h"

#define MAPGEN_MAX_SPACES 256

struct Mapgen_Space
{
    unsigned char x, y, width, height;
};

struct Mapgen_Map
{
    struct Mapgen_Space spaces[MAPGEN_MAX_SPACES];
    int spaceCount;
    int randomSeed;
};

struct Mapgen_Result
{
    bool32 isValid;
    int x, y;
};

void Mapgen_Init(struct Mapgen_Map *map, int randomSeed);
void Mapgen_AddSpace_XYWH(struct Mapgen_Map *map, int x, int y, int w, int h);
struct Mapgen_Result Mapgen_Generate(struct Mapgen_Map *map, int width, int height);
struct Mapgen_Result Mapgen_GenerateNoSplit(struct Mapgen_Map *map, int width, int height);

#endif // GUARD_ISLANDGAME_MAPGEN_H
