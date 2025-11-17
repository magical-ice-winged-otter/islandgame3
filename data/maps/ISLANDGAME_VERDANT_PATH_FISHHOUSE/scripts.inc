ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts::
# 13 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_unset FLAG_DAILY_VERDANT_PATH_ARNIE_ROLL, ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 41 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_TEMP_E, VAR_VERDANT_PATH_STATE
ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 44 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	quest_emote_on_warp 3, QUEST_ARNIE_FISHING_QUESTS
# 48 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_unset FLAG_TIDALCOVE_RUKA_DEFEATED, ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 16 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	random 100
# 17 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_VERDANT_PATH_STATE, VAR_RESULT
# 18 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setflag FLAG_DAILY_VERDANT_PATH_ARNIE_ROLL
# 20 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_VERDANT_PATH_STATE, 50
	goto_if_lt ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 24 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_VERDANT_PATH_STATE, 50 + 30
	goto_if_lt ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 28 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_VERDANT_PATH_STATE, 50 + 30 + 15
	goto_if_lt ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 33 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_TEMP_E, 3
# 34 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_VERDANT_PATH_STATE, 3
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	return

ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 21 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_TEMP_E, 0
# 22 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_VERDANT_PATH_STATE, 0
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 25 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_TEMP_E, 1
# 26 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_VERDANT_PATH_STATE, 1
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 29 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_TEMP_E, 2
# 30 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_VERDANT_PATH_STATE, 2
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Arnie::
# 56 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	lock
# 57 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	faceplayer
# 58 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_set FLAG_VERDANT_PATH_ROD_RECEIVED, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived
# 59 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	showmoneybox 0, 0
# 60 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieIntro, MSGBOX_YESNO
# 61 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieDecline
# 62 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	checkmoney 2500
# 63 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieBroke
# 64 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	removemoney 2500
# 65 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	updatemoneybox
# 66 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_JoinClub
# 67 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 68 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 69 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setflag FLAG_VERDANT_PATH_ROD_RECEIVED
# 70 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieOutro
# 71 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived
# 72 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived::
# 76 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
# 78 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
ArnieServices:
# 79 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_0
# 82 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	dynmultipush ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_1, 1
# 83 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	dynmultipush ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_2, 2
# 84 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	dynmultipush ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_3, 3
# 85 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	dynmultipush ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_4, 4
# 86 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	dynmultipush ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_5, 5
# 87 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	dynmultistack 0, 0, TRUE, 4, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 89 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 1, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_3
# 92 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 2, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_4
# 116 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 3, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_5
# 122 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 4, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_6
# 126 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices_End
ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_1:
# 129 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
ArnieFishingQuest:
# 130 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_TEMP_B, 0
# 131 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_TEMP_A, SUB_QUEST_COUNT_ARNIE
# 132 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_TEMP_C, QUEST_ARNIE_FISHING_QUESTS
# 133 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	call Common_NextSubQuest
# 140 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	switch VAR_TEMP_B
# 141 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 0, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_10
# 142 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 1, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_11
# 143 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 2, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_12
# 144 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 3, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_13
# 145 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 4, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_14
# 146 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 5, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_15
# 147 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_0x8000, SPECIES_RELICANTH
ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8:
# 149 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	callnative CheckPartyMon
# 150 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_21
# 188 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	switch VAR_TEMP_B
# 189 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 0, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_39
# 194 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 1, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_40
# 199 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 2, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_41
ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_37:
# 210 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_20:
# 213 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
ArnieCatchOfTheDay:
# 214 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	showmoneybox 17, 1
# 215 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	switch VAR_TEMP_E
# 216 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 1, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_29
# 253 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 2, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_30
# 289 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 3, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_31
# 327 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_25, MSGBOX_YESNO
# 331 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_51
# 358 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 359 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27:
# 362 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
ArnieServices_End:
# 363 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_27
# 366 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_3:
# 91 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieCatchOfTheDay
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_4:
# 93 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	returnqueststate QUEST_ARNIE_FISHING_QUESTS
# 94 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_17
# 114 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieFishingQuest
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_5:
# 117 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_8
# 121 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_6:
# 123 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_9
# 124 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_10:
# 141 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_0x8000, SPECIES_MUDKIP
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_11:
# 142 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_0x8000, SPECIES_FEEBAS_MARYAN
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_12:
# 143 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_0x8000, SPECIES_LUMINEON
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_13:
# 144 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_0x8000, SPECIES_SEADRA
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_14:
# 145 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_0x8000, SPECIES_PALAFIN
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_15:
# 146 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_0x8000, SPECIES_CLAMPERL
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_17:
# 95 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_6, MSGBOX_YESNO
# 100 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_24
# 110 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_21:
# 151 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	switch VAR_TEMP_B
# 152 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 0, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_35
# 165 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 1, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_36
ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_33:
# 185 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices_End
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_20

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_24:
# 101 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	startquest QUEST_ARNIE_FISHING_QUESTS
# 102 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_7
# 107 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices_End
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_29:
# 217 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_17, MSGBOX_YESNO
# 223 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_42
# 250 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 251 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_30:
# 254 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_21, MSGBOX_YESNO
# 259 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_45
# 286 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 287 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_31:
# 290 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_23, MSGBOX_YESNO
# 296 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_48
# 323 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 324 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_35:
# 153 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_10
# 157 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	giveitem ITEM_MYSTIC_WATER
# 158 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ARNIE_FISHING_QUESTS, VAR_TEMP_B
# 159 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	addvar VAR_TEMP_B, 1
# 160 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_11
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_33

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_36:
# 166 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_12
# 170 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	giveitem ITEM_PRISM_SCALE
# 171 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ARNIE_FISHING_QUESTS, VAR_TEMP_B
# 172 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	addvar VAR_TEMP_B, 1
# 173 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_13
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_33

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_39:
# 190 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_14
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_37

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_40:
# 195 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_15
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_37

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_41:
# 200 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_16
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_37

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_42:
# 224 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	checkmoney 1000
# 225 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_54
# 233 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	removemoney 1000
# 234 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	updatemoneybox
# 235 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playse SE_PIN
# 236 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitse
# 237 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	givemon SPECIES_WISHIWASHI, 5
# 238 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 239 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_WISHIWASHI
# 240 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_19
# 241 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitfanfare
# 242 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_20
# 245 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 246 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_45:
# 260 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	checkmoney 1500
# 261 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_57
# 269 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	removemoney 1500
# 270 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	updatemoneybox
# 271 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playse SE_PIN
# 272 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitse
# 273 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	givemon SPECIES_SLOWPOKE, 5, , , , 2
# 274 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 275 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SLOWPOKE
# 276 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_22
# 277 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitfanfare
# 278 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_20
# 281 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 282 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_48:
# 297 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	checkmoney 2000
# 298 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_60
# 306 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	removemoney 2000
# 307 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	updatemoneybox
# 308 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playse SE_PIN
# 309 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitse
# 310 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	givemon SPECIES_SHELLDER, 5, , , , 1, , , , , , , , , , , , , , MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_RAPID_SPIN, MOVE_TWINEEDLE
# 311 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 312 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SHELLDER
# 313 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_24
# 314 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitfanfare
# 315 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_20
# 318 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 319 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_51:
# 332 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	checkmoney 500
# 333 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_63
# 341 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	removemoney 500
# 342 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	updatemoneybox
# 343 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playse SE_PIN
# 344 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitse
# 345 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	givemon SPECIES_MAGIKARP, 5
# 346 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 347 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MAGIKARP
# 348 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_26
# 349 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitfanfare
# 350 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_20
# 353 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 354 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_54:
# 226 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_18
# 229 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 230 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_57:
# 262 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_18
# 265 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 266 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_60:
# 299 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_18
# 302 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 303 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_63:
# 334 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_18
# 337 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 338 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27


ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieDecline::
# 377 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieDecline_Text_0
# 378 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 379 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieBroke::
# 383 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieBroke_Text_0
# 384 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 385 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade::
# 403 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	lock
# 404 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	faceplayer
# 405 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_set FLAG_VERDANT_PATH_TRADE_DONE, ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeFinished
# 406 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_STARYU
# 407 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 408 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 409 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 410 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeTalk
# 411 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	special ChoosePartyMon
# 412 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitstate
# 413 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 414 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong
# 415 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 416 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 417 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 418 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong
# 419 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_Text_0, MSGBOX_YESNO
# 423 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_2
ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_1:
# 426 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 427 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 428 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	special CreateInGameTradePokemon
# 429 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	special DoInGameTradeScene
# 430 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitstate
# 431 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 432 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_Text_1
# 433 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setflag FLAG_VERDANT_PATH_TRADE_DONE
# 434 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_2:
# 424 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_1


ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeFinished::
# 447 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_Text_1
# 448 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong::
# 452 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong_Text_0
# 453 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline::
# 457 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline_Text_0
# 460 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_NPC::
# 463 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	lock
# 464 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	faceplayer
# 465 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_NPCTalk
# 466 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2::
# 476 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	lock
# 477 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	faceplayer
# 478 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_set FLAG_VERDANT_PATH_TRADE_2, ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_2
# 482 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_QWILFISH
# 483 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 484 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 485 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 486 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_Text_1, MSGBOX_YESNO
# 490 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_6
ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_5:
# 493 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	special ChoosePartyMon
# 494 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitstate
# 495 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 496 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, VerdantPath_FishHouse_Trade2_End
# 497 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 498 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 499 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 500 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, VerdantPath_FishHouse_Trade2_End2
# 501 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	lock
# 502 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_Text_2, MSGBOX_YESNO
# 506 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_9
ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_8:
# 512 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 513 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 514 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	special CreateInGameTradePokemon
# 515 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	special DoInGameTradeScene
# 516 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitstate
# 517 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 518 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	lock
# 519 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_Text_0
# 520 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setflag FLAG_VERDANT_PATH_TRADE_2
ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_1:
# 522 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto VerdantPath_FishHouse_Trade2_End
# 524 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
VerdantPath_FishHouse_Trade2_End2:
# 525 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	lock
# 526 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_Text_4
# 529 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto VerdantPath_FishHouse_Trade2_End
# 531 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
VerdantPath_FishHouse_Trade2_End:
# 532 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	closemessage
# 533 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_2:
# 479 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_Text_0
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_6:
# 491 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto VerdantPath_FishHouse_Trade2_End
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_5

ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_9:
# 507 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_Text_3
# 510 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto VerdantPath_FishHouse_Trade2_End
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_8


ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_0:
# 80 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "How's it hangin'?$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_1:
# 82 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Catch of the Day$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_2:
# 83 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Fishing Quest$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_3:
# 84 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Trading$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_4:
# 85 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "How to fish$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_5:
# 86 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Later, dude$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_6:
# 96 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Ah, so you think you're ready to take on\n"
	.string "my famous fishing challenge, do ya?\p"
	.string "The format is pretty simple. I ask you\n"
	.string "for a specific Pokémon, and you show me\l"
	.string "it. I'll even throw in a little reward for\l"
	.string "each one you show!\p"
	.string "So how 'bout it? Think you're up to the\n"
	.string "task?$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_7:
# 103 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Heh. I like your enthusiasm, kiddo! Let's\n"
	.string "kick this gauntlet off with something\l"
	.string "sweet and simple!\p"
	.string "Your first trial will be... to catch and\n"
	.string "show me a Mudkip! I hear many trainers\l"
	.string "are quite fond of them.\p"
	.string "They're pretty rare sights in the wild,\n"
	.string "but you might be able to find one in the\l"
	.string "ponds of Oranna.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_8:
# 118 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "This club is a great place to trade with\n"
	.string "other fellow fishing fanatics!\p"
	.string "There's always new faces popping in and\n"
	.string "out, so be sure to check in often!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_9:
# 123 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "The second you get a bite, you gotta\n"
	.string "reel it in only once so you don't break\l"
	.string "your line.\p"
	.string "Then keep at it every time 'till a\n"
	.string "Pokémon's on the line!\p"
	.string "It takes a lot of practice and a little\n"
	.string "bit of luck, but with enough time, you'll\l"
	.string "become a master hooker!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_10:
# 154 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Ah, looks like you found a Kipperino!\n"
	.string "Not too bad for a rookie.\p"
	.string "Here's your reward for completing the\n"
	.string "trial!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_11:
# 161 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Now that you've gotten your feet wet,\n"
	.string "why don't we swim out a little farther?\p"
	.string "For your next trial, you'll need to\n"
	.string "venture into the subzero caves of Mt.\l"
	.string "Aurora, where you'll find and show me\l"
	.string "the shabbiest swimmer of them all,\l"
	.string "Feebas!\p"
	.string "Don't be too quick to judge it by its\n"
	.string "appearance... like many Pokémon in the\l"
	.string "world, they can be quite deceiving!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_12:
# 167 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Heh, looks like you're startin' to get\n"
	.string "the hang of things! That's a pretty\l"
	.string "darn ugly lookin' Feebas, ain't it?\p"
	.string "Here's your reward for completing the\n"
	.string "trial!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_13:
# 174 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Don't get too comfortable yet... You're\n"
	.string "still a ways away from the finish line!\p"
	.string "Your next hunt will be the Maryan fish\n"
	.string "of the forest, Lumineon!\p"
	.string "Their home lies in the freshwater lakes\n"
	.string "of the lush Arborian Thicket, found\l"
	.string "only on Lumine Island.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_14:
# 191 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Your first trial will be... to catch and\n"
	.string "show me a Mudkip! I hear many trainers\l"
	.string "are quite fond of them.\p"
	.string "They're pretty rare sights in the wild,\n"
	.string "but you might be able to find one in the\l"
	.string "ponds of Oranna.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_15:
# 196 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "For your next trial, you'll need to\n"
	.string "venture into the subzero caves of Mt.\l"
	.string "Aurora, where you'll find and show me\l"
	.string "Marya's shabbiest swimmer, Feebas!\p"
	.string "Don't be too quick to judge it by its\n"
	.string "appearance... like many Pokémon in the\l"
	.string "world, they can be quite deceiving!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_16:
# 201 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Your next hunt will be the Maryan fish\n"
	.string "of the forest, Lumineon!\p"
	.string "Their home lies in the freshwater lakes\n"
	.string "of the lush Arborian Thicket on Lumine\l"
	.string "Island.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_17:
# 218 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Our catch of the day is known as “the\n"
	.string "demon of the sea” in Alola and Galar...\p"
	.string "The small fry Pokémon, Wishiwashi!\p"
	.string "Don't let its size fool you, though, for\n"
	.string "when they come together into their\l"
	.string "School Form, a single water gun is more\l"
	.string "powerful than a hydro pump!\p"
	.string "For just ¥1000, you too can get a taste\n"
	.string "of this lil sea demon!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_18:
# 227 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Sorry, ya don't got enough clams.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_19:
# 240 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "You received a Wishiwashi!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_20:
# 243 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Enjoy the fresh catch!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_21:
# 255 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Our catch of the day is a fisherman's\n"
	.string "best bud, the dopey Pokémon Slowpoke!\p"
	.string "Its tail not only serves as a tasty\n"
	.string "treat, but also a lure for fishing too!\p"
	.string "For ¥1500, this absentminded animal is\n"
	.string "all yours!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_22:
# 276 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "You received a Slowpoke!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_23:
# 291 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Our catch of the day is courtesy of\n"
	.string "Tidalcove's sandy shore...\p"
	.string "Shellder, the Bivalve Pokémon!\p"
	.string "Its tender, soft body is enveloped by\n"
	.string "diamond-hard shell, said to have once\l"
	.string "been used by our ancestors to craft\l"
	.string "shields!\p"
	.string "For ¥2,000, this tiny tanky mollusk is\n"
	.string "all yours for the taking!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_24:
# 313 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "You received a Shellder!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_25:
# 328 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Our catch of the day is none other than\n"
	.string "the king of losers himself, Magikarp!\p"
	.string "For the low-low price of ¥500, you too\n"
	.string "can wear the crown of loserdom!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_26:
# 348 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "You received a Magikarp!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_27:
# 364 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Tight lines!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieDecline_Text_0:
# 377 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Well, if you ever change your mind, I'll\n"
	.string "always be here!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieBroke_Text_0:
# 383 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Sorry, I can't sell them for any less\n"
	.string "than 2500¥.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_Text_0:
# 420 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "W-What!? Could it be...!? The LEGENDARY\n"
	.string "Gyarados in all of its glory!? T-Trainer!\l"
	.string "You MUST let me have it! H-Here, I'll\l"
	.string "even give you my prized Staryu for it!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_Text_1:
# 432 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Finally... I have a Gyarados all of my\n"
	.string "own... I can rest easy now, knowing that\l"
	.string "I have one of the rarest water Pokémon\l"
	.string "known to mankind!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong_Text_0:
# 452 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Unless you've a Gyarados to show me, go\n"
	.string "away!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline_Text_0:
# 458 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "C-Come on, man! Do me a solid!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_Text_0:
# 479 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Aye, matey. Thank ye fer the swap.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_Text_1:
# 487 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Ahoy there! I come from arctic seas in\n"
	.string "search of exotic breeds!\p"
	.string "Do ye got a tropical Qwilfish that yer\n"
	.string "willin' to swap for an arctic one?$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_Text_2:
# 503 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Yo-ho! So ye do got one of yer own! It\n"
	.string "looks just like the ones from me port!\p"
	.string "Well, whaddaya say? Care to swap fer me\n"
	.string "native Qwilfish?$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_Text_3:
# 508 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Ah, ye got me hopes up.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade2_Text_4:
# 527 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Aye, that don't look like no Qwilfish to\n"
	.string "me, bub.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieIntro::
# 369 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Howdy there, trainer! I'm Arnie,\n"
	.string "renowned fishing guru and president of\l"
	.string "the Fishing Fanatics!\p"
	.string "{COLOR DARK_GRAY}Would you like to join us? It's only\n"
	.string "¥2500 for a membership!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_JoinClub::
# 389 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Congrats! You're a Fishing Fanatic now!\n"
	.string "Here's a little welcome gift from me.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieOutro::
# 395 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}That right there is a custom-made\n"
	.string "fishing rod hand-crafted by yours\l"
	.string "truly.\p"
	.string "{COLOR DARK_GRAY}It's proof of your admission to our\n"
	.string "AWEsome club!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeTalk::
# 437 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Urgg... I'm convinced it doesn't exist!\p"
	.string "The legendary Gyarados... I've been\n"
	.string "searching for it for YEARS!\p"
	.string "But all I've found are these worthless\n"
	.string "Magikarps...\p"
	.string "I'd do anything to get my hands on a\n"
	.string "mythical beast like Gyarados. Heck, I'd\l"
	.string "even be willing to trade my SUPER\l"
	.string "SPECIAL Staryu for it!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_NPCTalk::
# 469 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Nothing beats Arnie's custom-made\n"
	.string "rods. They're positively remarkable.$"
