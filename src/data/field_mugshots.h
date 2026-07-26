static const u32 sFieldMugshotGfx_TestNormal[] = INCBIN_U32("graphics/field_mugshots/test/normal.4bpp.lz");
static const u16 sFieldMugshotPal_TestNormal[] = INCBIN_U16("graphics/field_mugshots/test/normal.gbapal");

static const u32 sFieldMugshotGfx_TestAlt[] = INCBIN_U32("graphics/field_mugshots/test/alt.4bpp.lz");
static const u16 sFieldMugshotPal_TestAlt[] = INCBIN_U16("graphics/field_mugshots/test/alt.gbapal");

static const u32 sFieldMugshotGfx_JonasDefault[] = INCBIN_U32("graphics/field_mugshots/test/jonas_default.4bpp.lz");
static const u16 sFieldMugshotPal_JonasDefault[] = INCBIN_U16("graphics/field_mugshots/test/jonas_default.gbapal");

static const u32 sFieldMugshotGfx_JonasHappy[] = INCBIN_U32("graphics/field_mugshots/test/jonas_happy.4bpp.lz");
static const u16 sFieldMugshotPal_JonasHappy[] = INCBIN_U16("graphics/field_mugshots/test/jonas_happy.gbapal");

struct MugshotGfx
{
    const u32 *gfx;
    const u16 *pal;
};

static const struct MugshotGfx sFieldMugshots[MUGSHOT_COUNT][EMOTE_COUNT] =
{
    [MUGSHOT_TEST] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_TestNormal,
            .pal = sFieldMugshotPal_TestNormal,
        },

        [EMOTE_ALT] =
        {
            .gfx = sFieldMugshotGfx_TestAlt,
            .pal = sFieldMugshotPal_TestAlt,
        },
    },

    [MUGSHOT_JONAS] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_JonasDefault,
            .pal = sFieldMugshotPal_JonasDefault,
        },

        [EMOTE_ALT] =
        {
            .gfx = sFieldMugshotGfx_JonasHappy,
            .pal = sFieldMugshotPal_JonasHappy,
        },
    },
};
