//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file see expansion PR #7154
//

#line 1 "src/data/battle_partners.party"

#line 1
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7
        .trainerBackPic = TRAINER_BACK_PIC_BRENDAN,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 9
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
#line 10
        .trainerName = _("STEVEN"),
#line 11
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 14
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 16
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 15
        .trainerBackPic = TRAINER_BACK_PIC_STEVEN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 18
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 22
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 21
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 20
            .lvl = 42,
#line 19
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 23
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 28
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 32
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 31
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 30
            .lvl = 43,
#line 29
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 33
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 38
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 42
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 41
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 40
            .lvl = 44,
#line 39
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 43
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 48
    [DIFFICULTY_NORMAL][PARTNER_MEADOWS_RIVAL] =
    {
#line 49
        .trainerName = _("Melissa"),
#line 50
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 51
        .trainerPic = TRAINER_PIC_MELISSA,
        .encounterMusic_gender =
#line 52
F_TRAINER_FEMALE | 
#line 53
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 54
        .trainerBackPic = TRAINER_BACK_PIC_MELISSA,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 56
            .species = SPECIES_ROCKRUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 59
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 60
            .ability = ABILITY_VITAL_SPIRIT,
#line 58
            .lvl = 15,
#line 57
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 61
                MOVE_ROCK_TOMB,
                MOVE_SAND_ATTACK,
                MOVE_FIRE_FANG,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 66
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 69
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 70
            .ability = ABILITY_MOLD_BREAKER,
#line 68
            .lvl = 15,
#line 67
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 71
                MOVE_METAL_CLAW,
                MOVE_MUD_SLAP,
                MOVE_HONE_CLAWS,
                MOVE_RAPID_SPIN,
            },
            },
            {
#line 76
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 79
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 80
            .ability = ABILITY_ROUGH_SKIN,
#line 78
            .lvl = 15,
#line 77
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 81
                MOVE_SAND_TOMB,
                MOVE_OUTRAGE,
                MOVE_SAND_ATTACK,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 86
    [DIFFICULTY_NORMAL][PARTNER_AETHERIA_WALLY] =
    {
#line 87
        .trainerName = _("Wally"),
#line 88
        .trainerClass = TRAINER_CLASS_RIVAL_HOENN,
#line 89
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 91
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 92
        .trainerBackPic = TRAINER_BACK_PIC_WALLY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 94
            .species = SPECIES_ALTARIA,
#line 94
            .gender = TRAINER_MON_MALE,
#line 94
            .heldItem = ITEM_SITRUS_BERRY,
#line 97
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 96
            .ability = ABILITY_CLOUD_NINE,
#line 95
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 97
                MOVE_DRAGON_BREATH,
                MOVE_FLY,
                MOVE_TAILWIND,
                MOVE_PROTECT,
            },
            },
            {
#line 102
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 102
            .heldItem = ITEM_MAGNET,
#line 105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 104
            .ability = ABILITY_ANALYTIC,
#line 103
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 105
                MOVE_SHOCK_WAVE,
                MOVE_FLASH_CANNON,
                MOVE_THUNDER_WAVE,
                MOVE_REFLECT,
            },
            },
            {
#line 110
            .species = SPECIES_GALLADE,
#line 110
            .gender = TRAINER_MON_MALE,
#line 110
            .heldItem = ITEM_GALLADITE,
#line 113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 112
            .ability = ABILITY_STEADFAST,
#line 111
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 113
                MOVE_PSYCHO_CUT,
                MOVE_LEAF_BLADE,
                MOVE_CLOSE_COMBAT,
                MOVE_NIGHT_SLASH,
            },
            },
        },
    },
