ISLANDGAME_MINTY_MEADOWS_2_MapScripts::
# 12 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_RESUME
# 16 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_RESUME:
# 13 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call Common_RemoveTemporaryObject
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettimeofday
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 23 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_MINTY_MEADOWS_STATE, 0
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 27 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 28 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 32 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 37 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 19 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_DRIFLOON, -3, 1
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 24 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_HideExtraMareep
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 29 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_OLD_MAN, 10, 9
# 30 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 34, 10
# 31 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_LOOK_AROUND
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 33 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_OLD_MAN, 10, 9
# 34 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 66, 18
# 35 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_DOWN
# 36 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_MIGHTYENA, 61, 15
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 38 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, -3, 1
# 39 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_OLD_MAN, -3, 1
# 40 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_MAREEP, -3, 1
# 41 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_MIGHTYENA, -3, 1
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan::
# 49 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 50 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_2
# 52 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_3
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_2:
# 51 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_Text_0, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_3:
# 53 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_Text_1, MSGBOX_NPC
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival::
# 61 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 62 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_2
# 64 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_3
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_2:
# 63 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_Text_0, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_3:
# 65 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_Text_1, MSGBOX_NPC
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_Mareep::
# 70 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 71 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mareep_Text_0, MSGBOX_AUTOCLOSE
# 72 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena::
# 76 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	faceplayer
# 77 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 78 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_NO_CATCHING
# 79 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_NO_RUNNING
# 80 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 82 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SHADOW_MIGHTYENA, 25, ITEM_SITRUS_BERRY, NUM_NATURES, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_SNARL, MOVE_POISON_FANG, MOVE_SAND_ATTACK, MOVE_SWAGGER
# 88 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setwilddoubleflag
# 89 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 90 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 91 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dowildbattle
# 92 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 93 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 94 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 95 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_2
# 101 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	unsetfollowernpc LOCALID_RIVAL
# 102 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_DOWN
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_5
# 108 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 3
# 110 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_0, MSGBOX_AUTOCLOSE
# 117 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 118 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_MAREEP, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_0
# 119 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 121 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_1, MSGBOX_AUTOCLOSE
# 126 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_1
# 127 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 128 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_2, MSGBOX_AUTOCLOSE
# 129 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_2
# 130 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 131 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_3
# 132 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 134 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_3, MSGBOX_AUTOCLOSE
# 140 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 141 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	teleportcamera 11, 8
# 142 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject OBJ_EVENT_ID_PLAYER
# 143 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject LOCALID_RIVAL
# 144 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject LOCALID_OLD_MAN
# 145 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject LOCALID_MAREEP
# 146 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_4
# 147 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_5
# 148 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_5
# 149 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 11, 8
# 150 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy LOCALID_RIVAL, 10, 8
# 151 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy LOCALID_OLD_MAN, 11, 6
# 152 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy LOCALID_MAREEP, 10, 6
# 153 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 155 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_4, MSGBOX_AUTOCLOSE
# 161 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_6
# 162 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 163 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 164 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_7
# 166 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 167 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_5, MSGBOX_AUTOCLOSE
# 168 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_8
# 169 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 170 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 171 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_MAREEP, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_9
# 172 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 173 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 174 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_MAREEP, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_8
# 175 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 176 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_1
# 177 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 178 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_10
# 180 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_6, MSGBOX_AUTOCLOSE
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_11
# 186 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 187 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 188 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_12
# 189 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 193 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_7
# 200 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_8
# 208 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_9
# 215 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_10, MSGBOX_AUTOCLOSE
# 222 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_4
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_13
# 224 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 225 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject LOCALID_RIVAL
# 226 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject LOCALID_MAREEP
# 227 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject LOCALID_OLD_MAN
# 228 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, -3, 1
# 229 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_OLD_MAN, -3, 1
# 230 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_MAREEP, -3, 1
# 231 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	special HealPlayerParty
# 232 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	completequest QUEST_MINTY_MEADOWS_MELISSA
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	startquest QUEST_MARYA_GYM_CHALLENGE
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_2:
	end

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_5:
	end


ISLANDGAME_MINTY_MEADOWS_2_Interact_Drifloon::
# 237 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	faceplayer
# 238 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_DRIFLOON, CRY_MODE_ENCOUNTER
# 239 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 240 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 241 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 242 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setwildbattle SPECIES_DRIFLOON, 13
# 243 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dowildbattle
# 244 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 245 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 246 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 248 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_Interact_Drifloon_1
# 248 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_Interact_Drifloon_1
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_Drifloon_1:
# 249 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_DAILY_MINTY_MEADOWS_DRIFLOON
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_FlowerSign::
# 254 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_FlowerSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_TunnelSign::
# 261 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_TunnelSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_PopsHouse::
# 268 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_PopsHouse_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right2::
# 277 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right2_Movement_0
# 278 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 279 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right1::
# 283 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right1_Movement_0
# 284 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 285 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight::
# 289 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left1::
# 293 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left1_Movement_0
# 294 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 295 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left2::
# 299 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left2_Movement_0
# 300 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 301 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left3::
# 305 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left3_Movement_0
# 306 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 307 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest::
# 311 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 312 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 0, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_2
# 320 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_3
# 321 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_3
	return

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_2:
# 313 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 314 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_0
# 315 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 316 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_0, MSGBOX_AUTOCLOSE
# 317 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_1
# 318 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_2
# 319 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
	return

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_3:
	checkfollowernpc
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_4
# 348 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_5
# 349 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 350 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 351 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_6
# 352 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_6, MSGBOX_AUTOCLOSE
# 353 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_4
# 354 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 355 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setfollowernpc LOCALID_RIVAL, FNPC_ALL, 0, PARTNER_MEADOWS_RIVAL
	return

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_4:
# 323 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	facefollowernpc
# 325 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	message ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_1
# 330 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmessage
# 331 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_2, YES
# 332 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_3, NO
# 334 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultistack 20, 8, TRUE, 3, FALSE, NO, DYN_MULTICHOICE_CB_NONE
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_RESULT
# 335 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case YES, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_8
# 341 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case NO, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_9
	return

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_8:
# 336 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_4, MSGBOX_AUTOCLOSE
# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	unsetfollowernpc LOCALID_RIVAL
# 338 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_2
# 339 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_3
# 340 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
	return

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_9:
# 342 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_5, MSGBOX_AUTOCLOSE
# 343 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_4
# 344 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep::
# 361 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Text_0, MSGBOX_AUTOCLOSE
# 362 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_MIGHTYENA, ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Movement_0
# 363 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_MAREEP, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_6
# 364 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 365 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 366 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 367 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement LOCALID_MIGHTYENA
# 368 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 369 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 370 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Movement_1
# 371 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 372 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Text_1, MSGBOX_AUTOCLOSE
# 373 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 2
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_Cave::
# 377 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_Cave_Text_0, MSGBOX_AUTOCLOSE
# 378 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_6
# 379 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher::
# 385 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_11, ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_1
# 386 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl::
# 390 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_12, ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_1
# 391 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher::
# 395 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_13, ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_1
# 397 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass::
# 405 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_14, ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_1
# 406 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac::
# 410 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_15, ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_1
# 411 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster::
# 415 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_16, ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_1
# 416 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight::
# 422 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_0
# 439 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 441 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_0, MSGBOX_AUTOCLOSE
# 447 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_1
# 448 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 449 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playbgm MUS_HG_LYRA, TRUE
# 450 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_2
# 451 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 452 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_1, MSGBOX_AUTOCLOSE
# 453 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_3
# 454 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 455 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 456 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_4
# 457 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 459 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_2, MSGBOX_AUTOCLOSE
# 468 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_no_intro TRAINER_MINTY_MEADOWS_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_3
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_RivalFight_2
# 474 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_4, MSGBOX_AUTOCLOSE
# 480 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_MINTY_MEADOWS_RIVAL_DEFEATED
# 481 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	savebgm MUS_DUMMY
# 482 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadedefaultbgm
# 483 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_HideExtraMareep
# 484 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject LOCALID_OLD_MAN
# 485 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy LOCALID_OLD_MAN, 18, 12
# 486 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_5, MSGBOX_AUTOCLOSE
# 487 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_5
# 488 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	copyobjectxytoperm LOCALID_OLD_MAN
# 489 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 490 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_4
# 491 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 493 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_6, MSGBOX_AUTOCLOSE
# 500 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 501 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_4
# 502 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 503 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_7, MSGBOX_AUTOCLOSE
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_6
# 505 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 507 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_8, MSGBOX_AUTOCLOSE
# 512 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_5
# 513 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 514 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_9, MSGBOX_AUTOCLOSE
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_4
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_7
# 517 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 518 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy LOCALID_RIVAL, 34, 10
# 519 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 520 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	special HealPlayerParty
# 521 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 1
	return

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_2:
	return


ISLANDGAME_MINTY_MEADOWS_2_HideExtraMareep::
# 525 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_MAREEP_EXTRA1, -3, 1
# 526 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_MAREEP_EXTRA2, -3, 1
# 527 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_MAREEP_EXTRA3, -3, 1
	return


# 118 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_0:
# 118 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_player
# 118 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
# 118 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
# 118 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
	step_end

# 126 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_1:
# 126 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_player
	step_end

# 129 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_2:
# 129 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_slow_up
	step_end

# 131 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_3:
# 131 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 131 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_question_mark
	step_end

# 146 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_4:
# 146 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
	step_end

# 147 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_5:
# 147 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 161 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_6:
# 161 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_7:
# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
	step_end

# 168 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_8:
# 168 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 168 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 168 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 168 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 171 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_9:
# 171 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
# 171 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
# 171 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
	step_end

# 178 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_10:
# 178 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
	step_end

# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_11:
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_question_mark
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 188 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_12:
# 188 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 188 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_faster_right
# 188 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 188 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 188 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 188 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_13:
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
	step_end

# 277 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right2_Movement_0:
# 277 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 277 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 277 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 283 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right1_Movement_0:
# 283 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 283 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 293 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left1_Movement_0:
# 293 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 293 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 299 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left2_Movement_0:
# 299 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 299 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 299 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 305 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left3_Movement_0:
# 305 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 305 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 305 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 305 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 314 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_0:
# 314 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 314 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 314 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 314 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 314 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 314 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 314 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 314 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_player
	step_end

# 317 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_1:
# 317 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_original_direction
	step_end

# 318 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_2:
# 318 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
	step_end

# 339 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_3:
# 339 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
	step_end

# 343 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_4:
# 343 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 343 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
	step_end

# 348 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_5:
# 348 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_left
	step_end

# 351 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_6:
# 351 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
	step_end

# 362 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Movement_0:
# 362 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 370 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Movement_1:
# 370 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 370 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 370 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 370 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 370 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 370 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 370 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 370 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_faster_up
	step_end

# 422 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_0:
# 423 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 424 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 424 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_4
# 425 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
# 428 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 428 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 428 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 429 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 430 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 431 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
# 432 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 432 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 432 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 433 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 434 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 435 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_faster_up
# 436 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 436 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 447 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_1:
# 447 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_question_mark
# 447 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 447 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 447 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 447 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 447 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 447 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 447 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
	step_end

# 450 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_2:
# 450 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 450 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 450 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 450 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

# 453 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_3:
# 453 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_up
# 453 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 453 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 456 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_4:
# 456 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 456 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 456 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 456 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 456 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 456 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 456 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
	step_end

# 487 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_5:
# 487 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 487 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 487 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 487 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 487 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 487 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 487 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 487 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 487 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 487 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 487 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_6:
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_faster_up
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_7:
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
	step_end

ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_Text_0:
# 51 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I could've sworn it was somewhere in the\n"
	.string "forest to the east...$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_Text_1:
# 54 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "What? A wild Mightyena was chasing my\n"
	.string "precious Mareep?\p"
	.string "You have to save him, please!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_Text_0:
# 63 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Hmm... where could it be?$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_Text_1:
# 65 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "We need to save that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mareep_Text_0:
# 71 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Reep! Reep! {COLOR BLUE}(BRO HELP ME PLZ)$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_0:
# 111 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR RED}(That Mightyena...{PAUSE 30} Something seemed off\n"
	.string "about it.)\p"
	.string "{COLOR RED}(It had some sort of dark aura...\n"
	.string "radiating from it?)\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Phew... That was an intense\n"
	.string "fight. Thank goodness we came in time!\p"
	.string "It looks like Mareep isn't hurt at all.\n"
	.string "That's a relief...$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_1:
# 122 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Reeeep...\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Awh. It's okay. You're safe with\n"
	.string "us now!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_2:
# 128 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ehe...! We make a pretty solid team,\n"
	.string "don't we, {PLAYER}?$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_3:
# 135 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "...Eh? Something was off about the\n"
	.string "Pokémon? What do you mean?\p"
	.string "Red eyes? A wicked dark aura? Hmmmn... I\n"
	.string "didn't see any of that.\p"
	.string "Well, either way, what's important is\n"
	.string "that Mareep is safe! Let's get him back\l"
	.string "to old man Paulie!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_4:
# 156 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Oh, my precious baby is safe and\n"
	.string "sound! I am in your debt, trainers!\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Heheh. It was nothing, really!\n"
	.string "That big Mightyena didn't stand a\l"
	.string "chance!\p"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Please, take one of these as a\n"
	.string "token of my gratitude!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_5:
# 167 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Feel free to visit our farm\n"
	.string "anytime!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_6:
# 181 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Watching how in sync you and\n"
	.string "your Pokémon are, despite having just\l"
	.string "met them...\p"
	.string "{PLAYER}!{PAUSE 30} You should enter the\n"
	.string "Silverwing Festival Tournament!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_7:
# 194 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Eeeh!?{PAUSE 60} You don't know about the\n"
	.string "tournament!?\p"
	.string "It's a tournament hosted during the\n"
	.string "Silverwing Festival where only the best\l"
	.string "trainers of Marya assemble to compete\l"
	.string "for the Silverwing Cup!\p"
	.string "I'm taking part in it, and I think you\n"
	.string "should to! As a natural trainer, you'd be\l"
	.string "a great competitor!\p"
	.string "But in order to qualify...{PAUSE 30} you'll have to\n"
	.string "complete the Marya Gym Challenge!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_8:
# 201 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "You'll have to travel across the three\n"
	.string "main islands of Oranna, Lumine, and\l"
	.string "Minerva...\p"
	.string "...and defeat their respective gym\n"
	.string "leaders in battle!\p"
	.string "Ooh... I can't wait! I wish the festival\n"
	.string "was tomorrow!\p"
	.string "Oh, you're right.{PAUSE 30} Neither of us would\n"
	.string "qualify if it started tomorrow...\p"
	.string "There I go being silly again, ehe.$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_9:
# 209 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Well, I'm going to go back to the\n"
	.string "professor to report my findings.\p"
	.string "But {PLAYER}, you should go west of\n"
	.string "Maplegrove and head up to Tidalcove!\p"
	.string "That's where you'll find the first gym\n"
	.string "leader: Ruka!\p"
	.string "Ruka is really famous around here. On\n"
	.string "top of being a gym leader, she used to\l"
	.string "be a professional swimmer and swimsuit\l"
	.string "model!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_10:
# 216 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "With that said, bye-bye for now,\n"
	.string "{PLAYER}!\p"
	.string "Oh! I almost forgot! Let's exchange\n"
	.string "phone numbers so we can keep in touch!\p"
	.string "Mhm...{PAUSE 30} Alright...{PAUSE 30} and there we go! All set!\p"
	.string "Let's meet up again soon!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_FlowerSign_Text_0:
# 255 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "MINTY MEADOWS\n"
	.string "Beware of scary Drifloon at night!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_TunnelSign_Text_0:
# 262 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "TRAVELER'S TUNNEL\n"
	.string "WARNING: THICK FOG INSIDE!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_PopsHouse_Text_0:
# 269 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "POPS' RESIDENCE\n"
	.string "Owner of Minty Meadows!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_0:
# 316 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ah, young trainer! Please give me a\n"
	.string "moment. I am trying to count my Mareep.$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_1:
# 326 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Eh? We can't leave yet! We told\n"
	.string "old man Paulie we'd help find his Mareep!\p"
	.string "Do you really have to leave?$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_2:
# 331 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Yes$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_3:
# 332 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "No$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_4:
# 336 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Okay... Please come back as soon as you\n"
	.string "can!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_5:
# 342 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Alright! Let's get back to business!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_6:
# 352 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Let's go get that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Text_0:
# 361 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}We finally found it!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Text_1:
# 372 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Agh! Quick, {PLAYER}! We need\n"
	.string "to save that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Cave_Text_0:
# 377 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Huh? We have to help Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_0:
# 385 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Howdy pardner! Howsabout we get a\n"
	.string "quick scrap in?$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_1:
# 385 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Well I'll be.$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_2:
# 386 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "A mighty fine party of Pokes ya got on\n"
	.string "ya.$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_0:
# 390 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "My Pokemans are purty cute. Wanna take\n"
	.string "a gander?$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_1:
# 390 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ain't she just the sweetest lil thang\n"
	.string "you've eva laid yer eyes on?$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_2:
# 391 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I love my darlin' lil ball of cotton\n"
	.string "candy. Even if she don't fight too well.$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_0:
# 395 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I have a super special Bug Pokémon. You\n"
	.string "literally can't get it.\p"
	.string "How jealous are you?$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_1:
# 395 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ack! My super special bug Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_2:
# 398 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Okay, maybe I should be more specific.\p"
	.string "You can't catch a Vivillon with the same\n"
	.string "pattern as mine here in Marya.\p"
	.string "That's because a Vivillon's pattern is\n"
	.string "dependent on where it lives!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_0:
# 405 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Hi!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_1:
# 405 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Heck!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_2:
# 406 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I'm not a very interesting person, so I\n"
	.string "don't really say much.$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_0:
# 410 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "POKÉMON IS LOVE! POKÉMON IS LIFE!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_1:
# 410 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "It's all Kyogre now...$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_2:
# 411 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I was only nine years old when I met my\n"
	.string "Riolu. It's the coolest Pokémon ever.$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_0:
# 415 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Shorts are awesome. They're so comfy to\n"
	.string "wear. Don't you agree?$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_1:
# 415 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I think I'm going to need a new pair of\n"
	.string "shorts...$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_2:
# 416 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Shorts are easily an S tier pick for\n"
	.string "pants!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_0:
# 442 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Nnngh...{PAUSE 30} I'm only missing one\n"
	.string "more Pokémon!{PAUSE 30} Where in the world is it?\p"
	.string "Waah! I give up! I'm convinced it\n"
	.string "doesn't even exist!\p"
	.string "Eh?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_1:
# 452 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Hiya there!{PAUSE 30}... Err...{PAUSE 30} umm,{PAUSE 30} have we met\n"
	.string "before?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_2:
# 460 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ooooh! You're {PLAYER}? The\n"
	.string "professor told me about you earlier\l"
	.string "today!\p"
	.string "It's good to meet you! I'm Melissa, a\n"
	.string "rising Pokémon trainer just like you!\p"
	.string "I was trying to fill out my Pokédex\n"
	.string "here, but I couldn't find a Scorbunny,\l"
	.string "no matter how hard I looked...\p"
	.string "Hope the isles are treating you kindly\n"
	.string "so far! I've been here all my life, so if\l"
	.string "ya ever need guidance, leave it to me!\p"
	.string "Oh!{PAUSE 30} Now that you're here, let's have a\n"
	.string "Pokémon battle! I need some action!\p"
	.string "I might be new just like you... but don't\n"
	.string "you underestimate me!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_3:
# 468 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ack! Looks like I was the one doing the\n"
	.string "underestimating!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_4:
# 475 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Drats, I wasn't expecting to\n"
	.string "lose to you, {PLAYER}...\p"
	.string "W-Wait, I didn't mean it like that! I was\n"
	.string "just surprised at how skilled you are!\p"
	.string "Sorry... I say things before I speak a\n"
	.string "lot, ehe...$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_5:
# 486 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Excuse me! Young trainers!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_6:
# 494 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}I'm Paul, I'm one of the\n"
	.string "owners of Fresa Farms.\p"
	.string "Have you two seen a Mareep with a blue\n"
	.string "collar wandering around by chance?\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}I haven't... Did you lose one?\p"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}I'm afraid so... When I was\n"
	.string "counting my Mareep after taking them\l"
	.string "out to graze, I noticed one was missing.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_7:
# 503 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Oh my... that's terrible! We'll\n"
	.string "help you look, right {PLAYER}?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_8:
# 508 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Really? Oh, I can't thank you two\n"
	.string "enough!\p"
	.string "The last place I saw my precious Mareep\n"
	.string "was in the forest to the east.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_9:
# 514 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Sounds good! {PLAYER}! Let's\n"
	.string "head over there immediately!$"
