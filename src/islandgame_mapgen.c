#include "islandgame_mapgen.h"

struct Mapgen_Coordinates
{
    int x, y;
};

// TODO(poe): Update random generator to use u16 seeds?
// TODO(poe): Optimize by avoiding modulo operations? (see: base game random code)

static unsigned int Mapgen_Random(struct Mapgen_Generator *generator);
static int Mapgen_RandomRange(struct Mapgen_Generator *generator, int minInclusive, int maxInclusive);
static int Mapgen_RandomWeightedArray(struct Mapgen_Generator *generator, const int *weights, int weightCount, int weightSum);
static int Mapgen_FindSpace(struct Mapgen_Generator *generator, int width, int height);
static void Mapgen_FreeSpace(struct Mapgen_Generator *generator, int spaceIndex);
static struct Mapgen_Coordinates Mapgen_GetRandomPositionInSpace(struct Mapgen_Generator *generator, int spaceIndex, int width, int height);
static void Mapgen_SplitSpace(struct Mapgen_Generator *generator, int spaceIndex, int x, int y, int w, int h);

void Mapgen_Init(struct Mapgen_Generator *generator, int randomSeed)
{
    generator->spaceCount = 0;
    generator->randomSeed = randomSeed;
}

void Mapgen_AddSpace_LRTB(struct Mapgen_Generator *generator, int left, int right, int top, int bottom)
{
    if (generator->spaceCount < MAPGEN_MAX_SPACES)
    {
        struct Mapgen_Space *space;
        space = &generator->spaces[generator->spaceCount++];
        space->x = left;
        space->y = top;
        space->width = right - left;
        space->height = bottom - top;
    }
}

void Mapgen_AddSpace_XYWH(struct Mapgen_Generator *generator, int x, int y, int width, int height)
{
    if (generator->spaceCount < MAPGEN_MAX_SPACES)
    {
        struct Mapgen_Space *space;
        space = &generator->spaces[generator->spaceCount++];
        space->x = x;
        space->y = y;
        space->width = width;
        space->height = height;
    }
}

struct Mapgen_Result Mapgen_GenerateNoSplit(struct Mapgen_Generator *generator, int width, int height)
{
    struct Mapgen_Result result;
    int spaceIndex;
    spaceIndex = Mapgen_FindSpace(generator, width, height);

    if (spaceIndex == generator->spaceCount)
    {
        result.isValid = FALSE;
    }
    else
    {
        struct Mapgen_Coordinates randomPosition;
        randomPosition = Mapgen_GetRandomPositionInSpace(generator, spaceIndex, width, height);
        Mapgen_FreeSpace(generator, spaceIndex);

        result.x = randomPosition.x;
        result.y = randomPosition.y;
        result.isValid = TRUE;
    }

    return result;
}

struct Mapgen_Result Mapgen_Generate(struct Mapgen_Generator *generator, int width, int height)
{
    struct Mapgen_Result result;
    int spaceIndex;
    spaceIndex = Mapgen_FindSpace(generator, width, height);

    if (spaceIndex == generator->spaceCount)
    {
        result.isValid = FALSE;
    }
    else
    {
        struct Mapgen_Coordinates randomPosition;
        randomPosition = Mapgen_GetRandomPositionInSpace(generator, spaceIndex, width, height);
        Mapgen_SplitSpace(generator, spaceIndex, randomPosition.x, randomPosition.y, width, height);

        result.x = randomPosition.x;
        result.y = randomPosition.y;
        result.isValid = TRUE;
    }

    return result;
}

static unsigned int Mapgen_Random(struct Mapgen_Generator *generator)
{
    // xorshift-32: https://en.wikipedia.org/wiki/Xorshift
    unsigned int x;
    x = generator->randomSeed;
    x ^= x << 13;
    x ^= x >> 17;
    x ^= x << 5;
    generator->randomSeed = x;
    return x;
}

static int Mapgen_RandomRange(struct Mapgen_Generator *generator, int minInclusive, int maxInclusive)
{
    unsigned int range = maxInclusive - minInclusive + 1;
    unsigned int offset = Mapgen_Random(generator) % range;
    return minInclusive + offset;
}

static int Mapgen_RandomWeightedArray(struct Mapgen_Generator *generator, const int *weights, int weightCount, int weightSum)
{
    // https://github.com/rh-hideout/pokeemerald-expansion/blob/56f22adc158ca840eba154152fccb456e7083bd6/src/random.c#L191
    int i, targetSum;
    targetSum = Mapgen_RandomRange(generator, 0, weightSum);

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

#define MAPGEN_MAX_VALID_SPACES 5

// Returns a random free space from all of the spaces that are big enough, with bigger spaces more likely to be chosen 
static int Mapgen_FindSpace(struct Mapgen_Generator *generator, int width, int height)
{
    int validSpaceIndices[MAPGEN_MAX_VALID_SPACES];
    int validSpaceWeights[MAPGEN_MAX_VALID_SPACES];
    int validSpaceCount = 0;
    int totalWeight = 0;
    int i;

    for (i = 0; i < generator->spaceCount; i++)
    {
        int spaceWidth = generator->spaces[i].width;
        int spaceHeight = generator->spaces[i].height;

        if (spaceWidth >= width && spaceHeight >= height)
        {
            int weight = spaceWidth * spaceHeight;
            validSpaceIndices[validSpaceCount] = i;
            validSpaceWeights[validSpaceCount] = weight;
            totalWeight += weight;

            if (validSpaceCount++ >= MAPGEN_MAX_VALID_SPACES)
            {
                break;
            }
        }
    }

    if (validSpaceCount == 0)
    {
        return generator->spaceCount;
    }
    else 
    {
        int randomIndex = Mapgen_RandomWeightedArray(generator, validSpaceWeights, validSpaceCount, totalWeight);
        int randomSpaceIndex = validSpaceIndices[randomIndex];
        return randomSpaceIndex;
    }
}

static struct Mapgen_Coordinates Mapgen_GetRandomPositionInSpace(struct Mapgen_Generator *generator, int spaceIndex, int width, int height)
{
    struct Mapgen_Space space;
    struct Mapgen_Coordinates coordinates;
    space = generator->spaces[spaceIndex];
    coordinates.x = Mapgen_RandomRange(generator, space.x, space.x + (space.width - width));
    coordinates.y = Mapgen_RandomRange(generator, space.y, space.y + (space.height - height));
    return coordinates;
}

static void Mapgen_FreeSpace(struct Mapgen_Generator *generator, int spaceIndex)
{
    generator->spaces[spaceIndex] = generator->spaces[generator->spaceCount - 1];
    generator->spaceCount--;
}

static void Mapgen_SplitSpace(struct Mapgen_Generator *generator, int spaceIndex, int x, int y, int w, int h)
{
    int leftBorder, rightBorder, topBorder, bottomBorder;
    int leftSplit, rightSplit, topSplit, bottomSplit;
    int leftDistance, rightDistance, topDistance, bottomDistance;

    leftSplit = x;
    leftBorder = generator->spaces[spaceIndex].x;
    leftDistance = leftSplit - leftBorder;

    topSplit = y;
    topBorder = generator->spaces[spaceIndex].y;
    topDistance = topSplit - topBorder;

    rightSplit = x + w;
    rightBorder = leftBorder + generator->spaces[spaceIndex].width;
    rightDistance = rightBorder - rightSplit;

    bottomSplit = y + h;
    bottomBorder = topBorder + generator->spaces[spaceIndex].height;
    bottomDistance = bottomBorder - bottomSplit;

    Mapgen_FreeSpace(generator, spaceIndex);

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
            Mapgen_AddSpace_LRTB(generator, leftBorder, leftSplit, topBorder, bottomBorder);
        }

        if (rightDistance > 0)
        {
            Mapgen_AddSpace_LRTB(generator, rightSplit, rightBorder, topBorder, bottomBorder);
        }

        if (bottomDistance > 0)
        {
            Mapgen_AddSpace_LRTB(generator, leftSplit, rightSplit, bottomSplit, bottomBorder);
        }

        if (topDistance > 0)
        {
            Mapgen_AddSpace_LRTB(generator, leftSplit, rightSplit, topBorder, topSplit);
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
            Mapgen_AddSpace_LRTB(generator, leftBorder, leftSplit, topSplit, bottomSplit);
        }

        if (rightDistance > 0)
        {
            Mapgen_AddSpace_LRTB(generator, rightSplit, rightBorder, topSplit, bottomSplit);
        }

        if (bottomDistance > 0)
        {
            Mapgen_AddSpace_LRTB(generator, leftBorder, rightBorder, bottomSplit, bottomBorder);
        }

        if (topDistance > 0)
        {
            Mapgen_AddSpace_LRTB(generator, leftBorder, rightBorder, topBorder, topSplit);
        }
    }
}
