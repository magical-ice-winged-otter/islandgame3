#ifndef GUARD_ISLANDGAME_MAPGEN_H
#define GUARD_ISLANDGAME_MAPGEN_H

#include "global.h"

#define MAPGEN_MAX_SPACES 64

struct Mapgen_Space
{
    u8 x, y, width, height;
};

struct Mapgen_Generator
{
    struct Mapgen_Space spaces[MAPGEN_MAX_SPACES];
    int spaceCount;
    u32 randomSeed;
};

struct Mapgen_Result
{
    bool32 isValid;
    int x, y;
};

void Mapgen_Init(struct Mapgen_Generator *generator, int randomSeed);
void Mapgen_AddSpace_XYWH(struct Mapgen_Generator *generator, int x, int y, int w, int h);
struct Mapgen_Result Mapgen_Generate(struct Mapgen_Generator *generator, int width, int height);
struct Mapgen_Result Mapgen_GenerateNoSplit(struct Mapgen_Generator *generator, int width, int height);

#endif // GUARD_ISLANDGAME_MAPGEN_H
