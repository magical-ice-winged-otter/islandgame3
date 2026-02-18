#include "islandgame_mapgen.h"

struct Mapgen_Coordinates
{
    int x, y;
};

static unsigned int Mapgen_Random(struct Mapgen_Map *map);
static int Mapgen_RandomRange(struct Mapgen_Map *map, int minInclusive, int maxInclusive);
static int Mapgen_RandomWeightedArray(struct Mapgen_Map *map, const int *weights, int weightCount, int weightSum);
static int Mapgen_FindSpace(struct Mapgen_Map *map, int width, int height);
static void Mapgen_FreeSpace(struct Mapgen_Map *map, int spaceIndex);
static struct Mapgen_Coordinates Mapgen_GetRandomPositionInSpace(struct Mapgen_Map *map, int spaceIndex, int width, int height);
static void Mapgen_SliceSpace(struct Mapgen_Map *map, int spaceIndex, int x, int y, int w, int h);

void Mapgen_Init(struct Mapgen_Map *map, int randomSeed)
{
    map->spaceCount = 0;
    map->randomSeed = randomSeed;
}

void Mapgen_AddSpace_LRTB(struct Mapgen_Map *map, int left, int right, int top, int bottom)
{
    if (map->spaceCount < MAPGEN_MAX_SPACES)
    {
        struct Mapgen_Space *space;
        space = &map->spaces[map->spaceCount++];
        space->x = left;
        space->y = top;
        space->width = right - left;
        space->height = bottom - top;
    }
}

void Mapgen_AddSpace_XYWH(struct Mapgen_Map *map, int x, int y, int width, int height)
{
    if (map->spaceCount < MAPGEN_MAX_SPACES)
    {
        struct Mapgen_Space *space;
        space = &map->spaces[map->spaceCount++];
        space->x = x;
        space->y = y;
        space->width = width;
        space->height = height;
    }
}

struct Mapgen_Result Mapgen_GenerateNoSplit(struct Mapgen_Map *map, int width, int height)
{
    struct Mapgen_Result result;
    int spaceIndex;
    spaceIndex = Mapgen_FindSpace(map, width, height);

    if (spaceIndex == map->spaceCount)
    {
        result.isValid = FALSE;
    }
    else
    {
        struct Mapgen_Coordinates randomPosition;
        randomPosition = Mapgen_GetRandomPositionInSpace(map, spaceIndex, width, height);
        Mapgen_FreeSpace(map, spaceIndex);

        result.x = randomPosition.x;
        result.y = randomPosition.y;
        result.isValid = TRUE;
    }

    return result;
}

struct Mapgen_Result Mapgen_Generate(struct Mapgen_Map *map, int width, int height)
{
    struct Mapgen_Result result;
    int spaceIndex;
    spaceIndex = Mapgen_FindSpace(map, width, height);

    if (spaceIndex == map->spaceCount)
    {
        result.isValid = FALSE;
    }
    else
    {
        struct Mapgen_Coordinates randomPosition;
        randomPosition = Mapgen_GetRandomPositionInSpace(map, spaceIndex, width, height);
        Mapgen_SliceSpace(map, spaceIndex, randomPosition.x, randomPosition.y, width, height);

        result.x = randomPosition.x;
        result.y = randomPosition.y;
        result.isValid = TRUE;
    }

    return result;
}

static unsigned int Mapgen_Random(struct Mapgen_Map *map)
{
    // xorshift-32: https://en.wikipedia.org/wiki/Xorshift
    unsigned int x;
    x = map->randomSeed;
    x ^= x << 13;
    x ^= x >> 17;
    x ^= x << 5;
    map->randomSeed = x;
    return x;
}

static int Mapgen_RandomRange(struct Mapgen_Map *map, int minInclusive, int maxInclusive)
{
    unsigned int range = maxInclusive - minInclusive + 1;
    unsigned int offset = Mapgen_Random(map) % range;
    return minInclusive + offset;
}

static int Mapgen_RandomWeightedArray(struct Mapgen_Map *map, const int *weights, int weightCount, int weightSum)
{
    // https://github.com/rh-hideout/pokeemerald-expansion/blob/56f22adc158ca840eba154152fccb456e7083bd6/src/random.c#L191
    int i, targetSum;
    targetSum = Mapgen_RandomRange(map, 0, weightSum);

    for (i = 0; i < weightCount - 1; i++)
    {
        targetSum -= weights[i];

        if (targetSum < 0)
        {
            return i;
        }
    }

    return weightCount - 1;
}

static int spaceIndices[MAPGEN_MAX_SPACES];
static int spaceWeights[MAPGEN_MAX_SPACES];

// Returns a random free space from all of the spaces that are big enough, with bigger spaces more likely to be chosen 
static int Mapgen_FindSpace(struct Mapgen_Map *map, int width, int height)
{
    int spaceIndexCount = 0;
    int totalWeight = 0;
    int i;

    for (i = 0; i < map->spaceCount; i++)
    {
        int spaceWidth = map->spaces[i].width;
        int spaceHeight = map->spaces[i].height;

        if (spaceWidth >= width && spaceHeight >= height)
        {
            int index = spaceIndexCount++;
            int weight = spaceWidth * spaceHeight;
            spaceIndices[index] = i;
            spaceWeights[index] = weight;
            totalWeight += weight;
        }
    }

    if (spaceIndexCount == 0)
    {
        return map->spaceCount;
    }
    else 
    {
        int randomIndex = Mapgen_RandomWeightedArray(map, spaceWeights, spaceIndexCount, totalWeight);
        int randomSpaceIndex = spaceIndices[randomIndex];
        return randomSpaceIndex;
    }
}

static struct Mapgen_Coordinates Mapgen_GetRandomPositionInSpace(struct Mapgen_Map *map, int spaceIndex, int width, int height)
{
    struct Mapgen_Space space;
    struct Mapgen_Coordinates coordinates;
    space = map->spaces[spaceIndex];
    coordinates.x = Mapgen_RandomRange(map, space.x, space.x + (space.width - width));
    coordinates.y = Mapgen_RandomRange(map, space.y, space.y + (space.height - height));
    return coordinates;
}

static void Mapgen_FreeSpace(struct Mapgen_Map *map, int spaceIndex)
{
    map->spaces[spaceIndex] = map->spaces[map->spaceCount - 1];
    map->spaceCount--;
}

static void Mapgen_SliceSpace(struct Mapgen_Map *map, int spaceIndex, int x, int y, int w, int h)
{
    int leftBorder, rightBorder, topBorder, bottomBorder;
    int leftSplit, rightSplit, topSplit, bottomSplit;
    int leftDistance, rightDistance, topDistance, bottomDistance;

    leftSplit = x;
    leftBorder = map->spaces[spaceIndex].x;
    leftDistance = leftSplit - leftBorder;

    topSplit = y;
    topBorder = map->spaces[spaceIndex].y;
    topDistance = topSplit - topBorder;

    rightSplit = x + w;
    rightBorder = leftBorder + map->spaces[spaceIndex].width;
    rightDistance = rightBorder - rightSplit;

    bottomSplit = y + h;
    bottomBorder = topBorder + map->spaces[spaceIndex].height;
    bottomDistance = bottomBorder - bottomSplit;

    Mapgen_FreeSpace(map, spaceIndex);

    // We want to avoid small spaces, so prioritize whichever sides are larger 
    if (leftDistance + rightDistance > bottomDistance + topDistance)
    {
        // vertical split
        // .....|..|.....
        // .....++++.....
        // .....+..+.....
        // .....++++.....
        // .....|..|.....

        if (leftDistance > 0)
        {
            Mapgen_AddSpace_LRTB(map, leftBorder, leftSplit, topBorder, bottomBorder);
        }

        if (rightDistance > 0)
        {
            Mapgen_AddSpace_LRTB(map, rightSplit, rightBorder, topBorder, bottomBorder);
        }

        if (bottomDistance > 0)
        {
            Mapgen_AddSpace_LRTB(map, leftSplit, rightSplit, bottomSplit, bottomBorder);
        }

        if (topDistance > 0)
        {
            Mapgen_AddSpace_LRTB(map, leftSplit, rightSplit, topBorder, topSplit);
        }
    }
    else
    {
        // horizontal split
        //..............
        //-----++++-----
        //.....+..+.....
        //-----++++-----
        //..............

        if (leftDistance > 0)
        {
            Mapgen_AddSpace_LRTB(map, leftBorder, leftSplit, topSplit, bottomSplit);
        }

        if (rightDistance > 0)
        {
            Mapgen_AddSpace_LRTB(map, rightSplit, rightBorder, topSplit, bottomSplit);
        }

        if (bottomDistance > 0)
        {
            Mapgen_AddSpace_LRTB(map, leftBorder, rightBorder, bottomSplit, bottomBorder);
        }

        if (topDistance > 0)
        {
            Mapgen_AddSpace_LRTB(map, leftBorder, rightBorder, topBorder, topSplit);
        }
    }
}
