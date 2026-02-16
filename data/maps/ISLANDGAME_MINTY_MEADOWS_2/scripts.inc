ISLANDGAME_MINTY_MEADOWS_2_MapScripts::
# 3 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_RESUME
# 7 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call Common_TryRemoveTemporaryObject
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettimeofday
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_MINTY_MEADOWS_STATE, MINTY_MEADOWS_BATTLING_RIVAL
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 18 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 19 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case MINTY_MEADOWS_SEARCHING_FOR_MAREEP, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 23 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case MINTY_MEADOWS_BATTLING_MIGHTYENA, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 28 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case MINTY_MEADOWS_SAVED_MAREEP, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_DRIFLOON
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 15 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_HideExtraMareep
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 20 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_OLD_MAN, 10, 9
# 21 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 34, 10
# 22 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_LOOK_AROUND
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 24 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_OLD_MAN, 10, 9
# 25 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 66, 18
# 26 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_DOWN
# 27 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_MIGHTYENA, 61, 15
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 29 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_RIVAL
# 30 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_OLD_MAN
# 31 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_MAREEP
# 32 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_MIGHTYENA
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan::
# 40 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 41 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case MINTY_MEADOWS_SEARCHING_FOR_MAREEP, ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_2
# 43 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case MINTY_MEADOWS_BATTLING_MIGHTYENA, ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_3
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_2:
# 42 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_Text_0, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_3:
# 44 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_Text_1, MSGBOX_NPC
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival::
# 52 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 53 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case MINTY_MEADOWS_SEARCHING_FOR_MAREEP, ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_2
# 55 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case MINTY_MEADOWS_BATTLING_MIGHTYENA, ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_3
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_2:
# 54 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_Text_0, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_3:
# 56 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_Text_1, MSGBOX_NPC
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_Mareep::
# 61 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 62 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mareep_Text_0, MSGBOX_AUTOCLOSE
# 63 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena::
# 67 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	faceplayer
# 68 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 69 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_NO_CATCHING
# 70 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_NO_RUNNING
# 71 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 73 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SHADOW_MIGHTYENA, 25, ITEM_SITRUS_BERRY, NUM_NATURES, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_SNARL, MOVE_POISON_FANG, MOVE_SAND_ATTACK, MOVE_SWAGGER
# 79 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setwilddoubleflag
# 80 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 81 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 82 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dowildbattle
# 83 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 84 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 85 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 86 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_2
# 92 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	unsetfollowernpc LOCALID_RIVAL
# 93 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_DOWN
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_5
# 99 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, MINTY_MEADOWS_SAVED_MAREEP
# 101 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_0, MSGBOX_AUTOCLOSE
# 108 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 109 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_MAREEP, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_0
# 110 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 112 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_1, MSGBOX_AUTOCLOSE
# 117 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_1
# 118 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 119 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_2, MSGBOX_AUTOCLOSE
# 120 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_2
# 121 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 122 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_3
# 123 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 125 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_3, MSGBOX_AUTOCLOSE
# 131 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 132 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	teleportcamera 11, 8
# 133 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject OBJ_EVENT_ID_PLAYER
# 134 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject LOCALID_RIVAL
# 135 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject LOCALID_OLD_MAN
# 136 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject LOCALID_MAREEP
# 137 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_4
# 138 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_5
# 139 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_5
# 140 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 11, 8
# 141 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy LOCALID_RIVAL, 10, 8
# 142 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy LOCALID_OLD_MAN, 11, 6
# 143 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy LOCALID_MAREEP, 10, 6
# 144 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 146 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_4, MSGBOX_AUTOCLOSE
# 152 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_6
# 153 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 154 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 155 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 156 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_7
# 157 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 158 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_5, MSGBOX_AUTOCLOSE
# 159 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_8
# 160 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 161 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 162 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_MAREEP, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_9
# 163 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 164 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_MAREEP, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_8
# 166 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 167 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_1
# 168 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 169 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_10
# 171 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_6, MSGBOX_AUTOCLOSE
# 176 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_11
# 177 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 178 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 179 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_12
# 180 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 184 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_7
# 191 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_8
# 199 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_9
# 206 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_10, MSGBOX_AUTOCLOSE
# 213 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_4
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_13
# 215 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 216 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_RIVAL
# 217 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_OLD_MAN
# 218 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_MAREEP
# 219 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	special HealPlayerParty
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	completequest QUEST_MINTY_MEADOWS_MELISSA
# 221 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	startquest QUEST_MARYA_GYM_CHALLENGE
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_2:
	end

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_5:
	end


ISLANDGAME_MINTY_MEADOWS_2_Interact_Drifloon::
# 225 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	faceplayer
# 226 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_DRIFLOON, CRY_MODE_ENCOUNTER
# 227 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 228 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 229 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 230 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setwildbattle SPECIES_DRIFLOON, 13
# 231 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dowildbattle
# 232 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 234 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 236 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_Interact_Drifloon_1
# 236 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_Interact_Drifloon_1
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_Drifloon_1:
# 237 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_DAILY_MINTY_MEADOWS_DRIFLOON
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_FlowerSign::
# 242 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_FlowerSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_TunnelSign::
# 249 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_TunnelSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_PopsHouse::
# 256 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_PopsHouse_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right2::
# 265 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right2_Movement_0
# 266 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 267 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right1::
# 271 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right1_Movement_0
# 272 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight::
# 277 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left1::
# 281 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left1_Movement_0
# 282 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 283 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left2::
# 287 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left2_Movement_0
# 288 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 289 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left3::
# 293 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left3_Movement_0
# 294 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 295 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest::
# 299 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 300 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case MINTY_MEADOWS_BATTLING_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_2
# 308 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case MINTY_MEADOWS_SEARCHING_FOR_MAREEP, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_3
# 309 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case MINTY_MEADOWS_BATTLING_MIGHTYENA, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_3
	return

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_2:
# 301 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 302 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_0
# 303 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 304 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_0, MSGBOX_AUTOCLOSE
# 305 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_1
# 306 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_2
# 307 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
	return

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_3:
	checkfollowernpc
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_4
# 336 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_5
# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 338 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 339 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_6
# 340 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_6, MSGBOX_AUTOCLOSE
# 341 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_4
# 342 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 343 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setfollowernpc LOCALID_RIVAL, FNPC_ALL, 0, PARTNER_MEADOWS_RIVAL
	return

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_4:
# 311 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	facefollowernpc
# 313 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	message ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_1
# 318 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmessage
# 319 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_2, YES
# 320 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_3, NO
# 322 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultistack 20, 8, TRUE, 3, FALSE, NO, DYN_MULTICHOICE_CB_NONE
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_RESULT
# 323 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case YES, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_8
# 329 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case NO, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_9
	return

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_8:
# 324 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_4, MSGBOX_AUTOCLOSE
# 325 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	unsetfollowernpc LOCALID_RIVAL
# 326 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_2
# 327 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_3
# 328 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
	return

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_9:
# 330 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_5, MSGBOX_AUTOCLOSE
# 331 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_4
# 332 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep::
# 349 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Text_0, MSGBOX_AUTOCLOSE
# 350 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_MIGHTYENA, ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Movement_0
# 351 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_MAREEP, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_6
# 352 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 353 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 354 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 355 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement LOCALID_MIGHTYENA
# 356 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 357 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 358 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Movement_1
# 359 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 360 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Text_1, MSGBOX_AUTOCLOSE
# 361 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, MINTY_MEADOWS_BATTLING_MIGHTYENA
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_Cave::
# 365 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_Cave_Text_0, MSGBOX_AUTOCLOSE
# 366 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_6
# 367 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher::
# 373 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_11, ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_1
# 374 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl::
# 378 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_12, ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_1
# 379 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher::
# 383 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_13, ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_1
# 385 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass::
# 393 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_14, ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_1
# 394 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac::
# 398 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_15, ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_1
# 399 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster::
# 403 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_16, ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_1
# 404 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight::
# 410 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_0
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 429 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_0, MSGBOX_AUTOCLOSE
# 435 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_1
# 436 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 437 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playbgm MUS_HG_LYRA, TRUE
# 438 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_2
# 439 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 440 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_1, MSGBOX_AUTOCLOSE
# 441 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_3
# 442 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 443 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 444 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_4
# 445 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 447 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_2, MSGBOX_AUTOCLOSE
# 456 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_no_intro TRAINER_MINTY_MEADOWS_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_3
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_RivalFight_2
# 462 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_4, MSGBOX_AUTOCLOSE
# 468 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_MINTY_MEADOWS_RIVAL_DEFEATED
# 469 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	savebgm MUS_DUMMY
# 470 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadedefaultbgm
# 471 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_HideExtraMareep
# 472 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject LOCALID_OLD_MAN
# 473 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy LOCALID_OLD_MAN, 18, 12
# 474 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_5, MSGBOX_AUTOCLOSE
# 475 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_5
# 476 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	copyobjectxytoperm LOCALID_OLD_MAN
# 477 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 478 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_4
# 479 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 481 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_6, MSGBOX_AUTOCLOSE
# 488 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 489 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_4
# 490 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 491 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_7, MSGBOX_AUTOCLOSE
# 492 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_6
# 493 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 495 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_8, MSGBOX_AUTOCLOSE
# 500 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_5
# 501 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 502 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_9, MSGBOX_AUTOCLOSE
# 503 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_4
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_7
# 505 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 506 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy LOCALID_RIVAL, 34, 10
# 507 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 508 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	special HealPlayerParty
# 509 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, MINTY_MEADOWS_SEARCHING_FOR_MAREEP
	return

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_2:
	return


ISLANDGAME_MINTY_MEADOWS_2_HideExtraMareep::
# 513 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_MAREEP_EXTRA1
# 514 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_MAREEP_EXTRA2
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_MAREEP_EXTRA3
	return


# 109 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_0:
# 109 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_player
# 109 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
# 109 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
# 109 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
	step_end

# 117 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_1:
# 117 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_player
	step_end

# 120 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_2:
# 120 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_slow_up
	step_end

# 122 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_3:
# 122 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 122 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_question_mark
	step_end

# 137 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_4:
# 137 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
	step_end

# 138 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_5:
# 138 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 152 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_6:
# 152 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

# 156 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_7:
# 156 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 156 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 156 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 156 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 156 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 156 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 156 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 156 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
	step_end

# 159 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_8:
# 159 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 159 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 159 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 159 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 162 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_9:
# 162 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
# 162 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
# 162 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
	step_end

# 169 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_10:
# 169 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
	step_end

# 176 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_11:
# 176 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_question_mark
# 176 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 176 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 176 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 176 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 179 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_12:
# 179 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 179 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_faster_right
# 179 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 179 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 179 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 179 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_13:
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
	step_end

# 265 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right2_Movement_0:
# 265 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 265 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 265 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 271 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right1_Movement_0:
# 271 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 271 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 281 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left1_Movement_0:
# 281 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 281 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 287 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left2_Movement_0:
# 287 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 287 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 287 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 293 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left3_Movement_0:
# 293 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 293 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 293 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 293 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 302 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_0:
# 302 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 302 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 302 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 302 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 302 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 302 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 302 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 302 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_player
	step_end

# 305 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_1:
# 305 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_original_direction
	step_end

# 306 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_2:
# 306 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
	step_end

# 327 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_3:
# 327 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
	step_end

# 331 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_4:
# 331 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 331 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
	step_end

# 336 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_5:
# 336 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_left
	step_end

# 339 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_6:
# 339 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
	step_end

# 350 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Movement_0:
# 350 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 358 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Movement_1:
# 358 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 358 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 358 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 358 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 358 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 358 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 358 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 358 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_faster_up
	step_end

# 410 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_0:
# 411 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 412 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 412 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_4
# 413 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
# 414 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 414 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 414 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 415 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
# 416 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 416 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 416 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 417 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 418 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 419 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
# 420 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 420 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 420 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 421 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 422 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 423 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_faster_up
# 424 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 424 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 435 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_1:
# 435 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_question_mark
# 435 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 435 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 435 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 435 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 435 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 435 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 435 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
	step_end

# 438 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_2:
# 438 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 438 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 438 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 438 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

# 441 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_3:
# 441 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_up
# 441 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 441 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 444 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_4:
# 444 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 444 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 444 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 444 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 444 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 444 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 444 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
	step_end

# 475 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_5:
# 475 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 475 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 475 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 475 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 475 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 475 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 475 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 475 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 475 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 475 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 475 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 492 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_6:
# 492 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 492 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 492 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 492 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_faster_up
# 492 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 492 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 492 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 492 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 492 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_7:
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
	step_end

ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_Text_0:
# 42 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I could've sworn it was somewhere in the\n"
	.string "forest to the east...$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_Text_1:
# 45 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "What? A wild Mightyena was chasing my\n"
	.string "precious Mareep?\p"
	.string "You have to save him, please!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_Text_0:
# 54 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Hmm... where could it be?$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_Text_1:
# 56 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "We need to save that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mareep_Text_0:
# 62 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Reep! Reep! {COLOR BLUE}(BRO HELP ME PLZ)$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_0:
# 102 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR RED}(That Mightyena...{PAUSE 30} Something seemed off\n"
	.string "about it.)\p"
	.string "{COLOR RED}(It had some sort of dark aura...\n"
	.string "radiating from it?)\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Phew... That was an intense\n"
	.string "fight. Thank goodness we came in time!\p"
	.string "It looks like Mareep isn't hurt at all.\n"
	.string "That's a relief...$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_1:
# 113 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Reeeep...\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Awh. It's okay. You're safe with\n"
	.string "us now!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_2:
# 119 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ehe...! We make a pretty solid team,\n"
	.string "don't we, {PLAYER}?$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_3:
# 126 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "...Eh? Something was off about the\n"
	.string "Pokémon? What do you mean?\p"
	.string "Red eyes? A wicked dark aura? Hmmmn... I\n"
	.string "didn't see any of that.\p"
	.string "Well, either way, what's important is\n"
	.string "that Mareep is safe! Let's get him back\l"
	.string "to old man Paulie!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_4:
# 147 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Oh, my precious baby is safe and\n"
	.string "sound! I am in your debt, trainers!\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Heheh. It was nothing, really!\n"
	.string "That big Mightyena didn't stand a\l"
	.string "chance!\p"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Please, take one of these as a\n"
	.string "token of my gratitude!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_5:
# 158 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Feel free to visit our farm\n"
	.string "anytime!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_6:
# 172 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Watching how in sync you and\n"
	.string "your Pokémon are, despite having just\l"
	.string "met them...\p"
	.string "{PLAYER}!{PAUSE 30} You should enter the\n"
	.string "Silverwing Festival Tournament!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_7:
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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
# 192 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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
# 200 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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
# 207 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "With that said, bye-bye for now,\n"
	.string "{PLAYER}!\p"
	.string "Oh! I almost forgot! Let's exchange\n"
	.string "phone numbers so we can keep in touch!\p"
	.string "Mhm...{PAUSE 30} Alright...{PAUSE 30} and there we go! All set!\p"
	.string "Let's meet up again soon!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_FlowerSign_Text_0:
# 243 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "MINTY MEADOWS\n"
	.string "Beware of scary Drifloon at night!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_TunnelSign_Text_0:
# 250 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "TRAVELER'S TUNNEL\n"
	.string "WARNING: THICK FOG INSIDE!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_PopsHouse_Text_0:
# 257 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "POPS' RESIDENCE\n"
	.string "Owner of Minty Meadows!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_0:
# 304 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ah, young trainer! Please give me a\n"
	.string "moment. I am trying to count my Mareep.$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_1:
# 314 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Eh? We can't leave yet! We told\n"
	.string "old man Paulie we'd help find his Mareep!\p"
	.string "Do you really have to leave?$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_2:
# 319 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Yes$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_3:
# 320 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "No$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_4:
# 324 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Okay... Please come back as soon as you\n"
	.string "can!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_5:
# 330 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Alright! Let's get back to business!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_6:
# 340 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Let's go get that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Text_0:
# 349 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}We finally found it!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Text_1:
# 360 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Agh! Quick, {PLAYER}! We need\n"
	.string "to save that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Cave_Text_0:
# 365 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Huh? We have to help Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_0:
# 373 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Howdy pardner! Howsabout we get a\n"
	.string "quick scrap in?$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_1:
# 373 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Well I'll be.$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_2:
# 374 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "A mighty fine party of Pokes ya got on\n"
	.string "ya.$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_0:
# 378 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "My Pokemans are purty cute. Wanna take\n"
	.string "a gander?$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_1:
# 378 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ain't she just the sweetest lil thang\n"
	.string "you've eva laid yer eyes on?$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_2:
# 379 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I love my darlin' lil ball of cotton\n"
	.string "candy. Even if she don't fight too well.$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_0:
# 383 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I have a super special Bug Pokémon. You\n"
	.string "literally can't get it.\p"
	.string "How jealous are you?$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_1:
# 383 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ack! My super special bug Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_2:
# 386 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Okay, maybe I should be more specific.\p"
	.string "You can't catch a Vivillon with the same\n"
	.string "pattern as mine here in Marya.\p"
	.string "That's because a Vivillon's pattern is\n"
	.string "dependent on where it lives!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_0:
# 393 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Hi!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_1:
# 393 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Heck!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_2:
# 394 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I'm not a very interesting person, so I\n"
	.string "don't really say much.$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_0:
# 398 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "POKÉMON IS LOVE! POKÉMON IS LIFE!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_1:
# 398 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "It's all Kyogre now...$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_2:
# 399 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I was only nine years old when I met my\n"
	.string "Riolu. It's the coolest Pokémon ever.$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_0:
# 403 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Shorts are awesome. They're so comfy to\n"
	.string "wear. Don't you agree?$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_1:
# 403 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I think I'm going to need a new pair of\n"
	.string "shorts...$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_2:
# 404 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Shorts are easily an S tier pick for\n"
	.string "pants!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_0:
# 430 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Nnngh...{PAUSE 30} I'm only missing one\n"
	.string "more Pokémon!{PAUSE 30} Where in the world is it?\p"
	.string "Waah! I give up! I'm convinced it\n"
	.string "doesn't even exist!\p"
	.string "Eh?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_1:
# 440 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Hiya there!{PAUSE 30}... Err...{PAUSE 30} umm,{PAUSE 30} have we met\n"
	.string "before?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_2:
# 448 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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
# 456 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ack! Looks like I was the one doing the\n"
	.string "underestimating!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_4:
# 463 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Drats, I wasn't expecting to\n"
	.string "lose to you, {PLAYER}...\p"
	.string "W-Wait, I didn't mean it like that! I was\n"
	.string "just surprised at how skilled you are!\p"
	.string "Sorry... I say things before I speak a\n"
	.string "lot, ehe...$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_5:
# 474 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Excuse me! Young trainers!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_6:
# 482 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}I'm Paul, I'm one of the\n"
	.string "owners of Fresa Farms.\p"
	.string "Have you two seen a Mareep with a blue\n"
	.string "collar wandering around by chance?\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}I haven't... Did you lose one?\p"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}I'm afraid so... When I was\n"
	.string "counting my Mareep after taking them\l"
	.string "out to graze, I noticed one was missing.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_7:
# 491 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Oh my... that's terrible! We'll\n"
	.string "help you look, right {PLAYER}?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_8:
# 496 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Really? Oh, I can't thank you two\n"
	.string "enough!\p"
	.string "The last place I saw my precious Mareep\n"
	.string "was in the forest to the east.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_9:
# 502 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Sounds good! {PLAYER}! Let's\n"
	.string "head over there immediately!$"
