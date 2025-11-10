ISLANDGAME_MINTY_MEADOWS_MapScripts::
# 9 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MINTY_MEADOWS_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MINTY_MEADOWS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setobjectaswildencounter 19, ENCOUNTER_LAND
# 11 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setobjectaswildencounter 20, ENCOUNTER_LAND
	return


ISLANDGAME_MINTY_MEADOWS_Interact_EntranceSign::
# 16 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_Trainer1::
# 20 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_double TRAINER_MINTY_MEADOWS_1, ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_1, ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_2
# 21 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_3, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer3::
# 34 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_3, ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_1
# 35 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer4::
# 40 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_4, ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_1
# 41 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer6::
# 45 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_6, ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_1
# 46 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer7::
# 50 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_7, ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_1
# 51 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer8::
# 56 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_8, ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_1
# 57 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_FlabebeRed::
# 64 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 65 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 66 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 67 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setcwildbattle 0, SPECIES_FLABEBE_RED, 8, ITEM_NONE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
# 68 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE_RED, CRY_MODE_ENCOUNTER
# 69 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 70 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 71 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 72 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 73 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 75 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	switch VAR_RESULT
# 76 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_FlabebeRed_3
# 78 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_FlabebeRed_4
# 80 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_FlabebeRed_5
# 83 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_FlabebeRed_6
# 87 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_1
# 88 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_FlabebeRed_1:
# 90 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_FlabebeRed_3:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeRed_1

ISLANDGAME_MINTY_MEADOWS_FlabebeRed_4:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeRed_1

ISLANDGAME_MINTY_MEADOWS_FlabebeRed_5:
# 81 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_1
# 82 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeRed_1

ISLANDGAME_MINTY_MEADOWS_FlabebeRed_6:
# 84 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_1
# 85 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeRed_1


ISLANDGAME_MINTY_MEADOWS_FlabebeOrange::
# 94 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 95 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 96 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 97 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setcwildbattle 0, SPECIES_FLABEBE_ORANGE, 8, ITEM_NONE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
# 98 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE_RED, CRY_MODE_ENCOUNTER
# 99 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 100 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 101 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 102 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 103 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 105 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	switch VAR_RESULT
# 106 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_3
# 108 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_4
# 110 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_5
# 113 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_6
# 117 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_2
# 118 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_1:
# 120 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_3:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_1

ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_4:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_1

ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_5:
# 111 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_2
# 112 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_1

ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_6:
# 114 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_2
# 115 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_1


ISLANDGAME_MINTY_MEADOWS_FlabebeYellow::
# 124 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 125 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 126 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 127 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setcwildbattle 0, SPECIES_FLABEBE_YELLOW, 8, ITEM_NONE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
# 128 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE_RED, CRY_MODE_ENCOUNTER
# 129 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 130 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 131 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 132 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 133 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 135 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	switch VAR_RESULT
# 136 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_3
# 138 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_4
# 140 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_5
# 143 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_6
# 147 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_3
# 148 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_1:
# 150 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_3:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_1

ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_4:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_1

ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_5:
# 141 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_3
# 142 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_1

ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_6:
# 144 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_3
# 145 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_1


ISLANDGAME_MINTY_MEADOWS_FlabebeBlue::
# 154 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 155 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 156 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 157 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setcwildbattle 0, SPECIES_FLABEBE_BLUE, 8, ITEM_NONE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
# 158 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE_RED, CRY_MODE_ENCOUNTER
# 159 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 160 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 161 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 162 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 163 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	switch VAR_RESULT
# 166 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_3
# 168 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_4
# 170 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_5
# 173 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_6
# 177 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_4
# 178 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_1:
# 180 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_3:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_1

ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_4:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_1

ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_5:
# 171 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_4
# 172 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_1

ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_6:
# 174 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_4
# 175 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_1


ISLANDGAME_MINTY_MEADOWS_FlabebeWhite::
# 184 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 186 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 187 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setcwildbattle 0, SPECIES_FLABEBE_WHITE, 8, ITEM_NONE, NUM_NATURES, 1, 0, 0, 0, 0, 0, 0
# 188 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE_RED, CRY_MODE_ENCOUNTER
# 189 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 190 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 191 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 192 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 193 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 195 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	switch VAR_RESULT
# 196 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_3
# 198 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_4
# 200 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_5
# 203 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_6
# 207 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_5
# 208 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_1:
# 210 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_3:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_1

ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_4:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_1

ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_5:
# 201 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_5
# 202 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_1

ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_6:
# 204 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_5
# 205 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_1


ISLANDGAME_MINTY_MEADOWS_Interact_EntranceSign_Text_0:
# 16 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{LEFT_ARROW} MAPLEGROVE\n"
	.string "{RIGHT_ARROW} MINTY MEADOWS$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_0:
# 20 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}Oi! You're ruining our romantic\n"
	.string "excursion!$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_1:
# 20 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Lizzy: Ugh! Worst date ever!\pOwen: W-Wait! Don't leave!$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_2:
# 20 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}Go away! We're having a touching\n"
	.string "moment!$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_3:
# 21 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}Ugh, now we have to take our Pokémon to\n"
	.string "Nurse Joy.\p"
	.string "Thanks a lot.$"

ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_0:
# 34 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Hey! Get out of my way! I'm trying to\n"
	.string "keep up my pace here!$"

ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_1:
# 34 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "I couldn't keep up the momentum...$"

ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_2:
# 35 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "I need to get stronger... Fight, Jack...\n"
	.string "Fight! TATAKAE!!!$"

ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_0:
# 40 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}Let our Pokémon bloom in the meadow's\n"
	.string "embrace!$"

ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_1:
# 40 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Your Pokémon flourished beautifully!$"

ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_2:
# 41 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}I suppose it is still too early for me to\n"
	.string "bloom.$"

ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_0:
# 45 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "I will find you my queen... I'll stop at\n"
	.string "nothing to see your beauty!$"

ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_1:
# 45 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "How dare you come between me and Her\nMajesty!$"

ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_2:
# 46 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "You'll pay for this... Delaying my search\n"
	.string "for my lovely Vespiquen!$"

ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_0:
# 50 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Go Go Go! My awesome Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_1:
# 50 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "No No No! My awesome Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_2:
# 51 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "My Pokémon are awesome, so yours must\n"
	.string "be awesomer!$"

ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_0:
# 56 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "This was the worst place for a picnic...\n"
	.string "I'm allergic to the flowers here.$"

ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_1:
# 56 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "It's hard to concentrate in battle when\nyou're sneezing constantly!$"

ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_2:
# 57 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}Do you have any tissues? I'm not sure\n"
	.string "how much more of this I can take.$"
