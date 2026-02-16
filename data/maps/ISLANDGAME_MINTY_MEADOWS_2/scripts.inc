ISLANDGAME_MINTY_MEADOWS_2_MapScripts::
# 9 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_RESUME
# 13 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_RESUME:
# 10 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call Common_TryRemoveTemporaryObject
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettimeofday
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 20 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_MINTY_MEADOWS_STATE, 0
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 24 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 25 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 29 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 34 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 16 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_DRIFLOON
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 21 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_HideExtraMareep
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 26 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_OLD_MAN, 10, 9
# 27 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 34, 10
# 28 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_LOOK_AROUND
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 30 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_OLD_MAN, 10, 9
# 31 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 66, 18
# 32 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_DOWN
# 33 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_MIGHTYENA, 61, 15
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 35 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_RIVAL
# 36 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_OLD_MAN
# 37 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_MAREEP
# 38 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_MIGHTYENA
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan::
# 46 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 47 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_2
# 49 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_3
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_2:
# 48 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_Text_0, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_3:
# 50 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_Text_1, MSGBOX_NPC
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival::
# 58 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 59 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_2
# 61 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_3
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_2:
# 60 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_Text_0, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_3:
# 62 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_Text_1, MSGBOX_NPC
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_Mareep::
# 67 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 68 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mareep_Text_0, MSGBOX_AUTOCLOSE
# 69 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena::
# 73 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	faceplayer
# 74 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 75 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_NO_CATCHING
# 76 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_NO_RUNNING
# 77 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 79 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SHADOW_MIGHTYENA, 25, ITEM_SITRUS_BERRY, NUM_NATURES, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_SNARL, MOVE_POISON_FANG, MOVE_SAND_ATTACK, MOVE_SWAGGER
# 85 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setwilddoubleflag
# 86 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 87 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 88 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dowildbattle
# 89 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 90 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 91 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 92 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_2
# 98 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	unsetfollowernpc LOCALID_RIVAL
# 99 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_DOWN
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_5
# 105 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 3
# 107 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_0, MSGBOX_AUTOCLOSE
# 114 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 115 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_MAREEP, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_0
# 116 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 118 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_1, MSGBOX_AUTOCLOSE
# 123 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_1
# 124 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 125 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_2, MSGBOX_AUTOCLOSE
# 126 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_2
# 127 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 128 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_3
# 129 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 131 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_3, MSGBOX_AUTOCLOSE
# 137 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 138 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	teleportcamera 11, 8
# 139 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject OBJ_EVENT_ID_PLAYER
# 140 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject LOCALID_RIVAL
# 141 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject LOCALID_OLD_MAN
# 142 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject LOCALID_MAREEP
# 143 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_4
# 144 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_5
# 145 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_5
# 146 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 11, 8
# 147 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy LOCALID_RIVAL, 10, 8
# 148 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy LOCALID_OLD_MAN, 11, 6
# 149 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy LOCALID_MAREEP, 10, 6
# 150 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 152 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_4, MSGBOX_AUTOCLOSE
# 158 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_6
# 159 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 160 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 161 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 162 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_7
# 163 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 164 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_5, MSGBOX_AUTOCLOSE
# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_8
# 166 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 167 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 168 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_MAREEP, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_9
# 169 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 170 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 171 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_MAREEP, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_8
# 172 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 173 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_1
# 174 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 175 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_10
# 177 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_6, MSGBOX_AUTOCLOSE
# 182 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_11
# 183 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 184 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_12
# 186 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 190 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_7
# 197 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_8
# 205 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_9
# 212 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_10, MSGBOX_AUTOCLOSE
# 219 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_4
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_13
# 221 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 222 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_RIVAL
# 223 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_OLD_MAN
# 224 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_MAREEP
# 225 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	special HealPlayerParty
# 226 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	completequest QUEST_MINTY_MEADOWS_MELISSA
# 227 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	startquest QUEST_MARYA_GYM_CHALLENGE
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_2:
	end

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_5:
	end


ISLANDGAME_MINTY_MEADOWS_2_Interact_Drifloon::
# 231 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	faceplayer
# 232 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_DRIFLOON, CRY_MODE_ENCOUNTER
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 234 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 235 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 236 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setwildbattle SPECIES_DRIFLOON, 13
# 237 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dowildbattle
# 238 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 239 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 240 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 242 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_Interact_Drifloon_1
# 242 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_Interact_Drifloon_1
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_Drifloon_1:
# 243 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_DAILY_MINTY_MEADOWS_DRIFLOON
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_FlowerSign::
# 248 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_FlowerSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_TunnelSign::
# 255 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_TunnelSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_PopsHouse::
# 262 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_PopsHouse_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right2::
# 271 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right2_Movement_0
# 272 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right1::
# 277 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right1_Movement_0
# 278 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 279 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight::
# 283 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left1::
# 287 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left1_Movement_0
# 288 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 289 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left2::
# 293 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left2_Movement_0
# 294 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 295 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left3::
# 299 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left3_Movement_0
# 300 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 301 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest::
# 305 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 306 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 0, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_2
# 314 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_3
# 315 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_3
	return

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_2:
# 307 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 308 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_0
# 309 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 310 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_0, MSGBOX_AUTOCLOSE
# 311 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_1
# 312 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_2
# 313 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
	return

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_3:
	checkfollowernpc
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_4
# 342 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_5
# 343 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 344 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 345 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_6
# 346 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_6, MSGBOX_AUTOCLOSE
# 347 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_4
# 348 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 349 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setfollowernpc LOCALID_RIVAL, FNPC_ALL, 0, PARTNER_MEADOWS_RIVAL
	return

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_4:
# 317 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	facefollowernpc
# 319 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	message ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_1
# 324 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmessage
# 325 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_2, YES
# 326 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_3, NO
# 328 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultistack 20, 8, TRUE, 3, FALSE, NO, DYN_MULTICHOICE_CB_NONE
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_RESULT
# 329 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case YES, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_8
# 335 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case NO, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_9
	return

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_8:
# 330 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_4, MSGBOX_AUTOCLOSE
# 331 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	unsetfollowernpc LOCALID_RIVAL
# 332 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_2
# 333 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_3
# 334 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
	return

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_9:
# 336 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_5, MSGBOX_AUTOCLOSE
# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_4
# 338 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep::
# 355 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Text_0, MSGBOX_AUTOCLOSE
# 356 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_MIGHTYENA, ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Movement_0
# 357 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_MAREEP, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_6
# 358 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 359 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 360 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 361 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement LOCALID_MIGHTYENA
# 362 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 363 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 364 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Movement_1
# 365 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 366 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Text_1, MSGBOX_AUTOCLOSE
# 367 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 2
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_Cave::
# 371 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_Cave_Text_0, MSGBOX_AUTOCLOSE
# 372 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_6
# 373 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher::
# 379 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_11, ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_1
# 380 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl::
# 384 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_12, ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_1
# 385 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher::
# 389 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_13, ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_1
# 391 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass::
# 399 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_14, ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_1
# 400 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac::
# 404 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_15, ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_1
# 405 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster::
# 409 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_16, ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_1
# 410 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight::
# 416 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_0
# 433 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 435 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_0, MSGBOX_AUTOCLOSE
# 441 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_1
# 442 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 443 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playbgm MUS_HG_LYRA, TRUE
# 444 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_2
# 445 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 446 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_1, MSGBOX_AUTOCLOSE
# 447 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_3
# 448 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 449 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 450 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_4
# 451 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 453 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_2, MSGBOX_AUTOCLOSE
# 462 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_no_intro TRAINER_MINTY_MEADOWS_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_3
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_RivalFight_2
# 468 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_4, MSGBOX_AUTOCLOSE
# 474 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_MINTY_MEADOWS_RIVAL_DEFEATED
# 475 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	savebgm MUS_DUMMY
# 476 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadedefaultbgm
# 477 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_HideExtraMareep
# 478 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject LOCALID_OLD_MAN
# 479 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy LOCALID_OLD_MAN, 18, 12
# 480 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_5, MSGBOX_AUTOCLOSE
# 481 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_5
# 482 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	copyobjectxytoperm LOCALID_OLD_MAN
# 483 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 484 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_4
# 485 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 487 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_6, MSGBOX_AUTOCLOSE
# 494 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 495 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_4
# 496 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 497 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_7, MSGBOX_AUTOCLOSE
# 498 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_6
# 499 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 501 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_8, MSGBOX_AUTOCLOSE
# 506 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_5
# 507 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 508 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_9, MSGBOX_AUTOCLOSE
# 509 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_4
# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_7
# 511 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 512 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy LOCALID_RIVAL, 34, 10
# 513 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 514 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	special HealPlayerParty
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 1
	return

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_2:
	return


ISLANDGAME_MINTY_MEADOWS_2_HideExtraMareep::
# 519 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_MAREEP_EXTRA1
# 520 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_MAREEP_EXTRA2
# 521 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjecthidden LOCALID_MAREEP_EXTRA3
	return


# 115 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_0:
# 115 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_player
# 115 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
# 115 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
# 115 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
	step_end

# 123 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_1:
# 123 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_player
	step_end

# 126 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_2:
# 126 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_slow_up
	step_end

# 128 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_3:
# 128 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 128 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_question_mark
	step_end

# 143 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_4:
# 143 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
	step_end

# 144 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_5:
# 144 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 158 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_6:
# 158 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

# 162 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_7:
# 162 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 162 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 162 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 162 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 162 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 162 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 162 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 162 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
	step_end

# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_8:
# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 168 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_9:
# 168 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
# 168 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
# 168 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
	step_end

# 175 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_10:
# 175 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
	step_end

# 182 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_11:
# 182 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_question_mark
# 182 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 182 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 182 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 182 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_12:
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_faster_right
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_13:
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
	step_end

# 271 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right2_Movement_0:
# 271 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 271 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 271 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 277 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right1_Movement_0:
# 277 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 277 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 287 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left1_Movement_0:
# 287 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 287 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 293 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left2_Movement_0:
# 293 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 293 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 293 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 299 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left3_Movement_0:
# 299 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 299 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 299 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 299 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 308 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_0:
# 308 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 308 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 308 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 308 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 308 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 308 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 308 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 308 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_player
	step_end

# 311 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_1:
# 311 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_original_direction
	step_end

# 312 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_2:
# 312 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
	step_end

# 333 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_3:
# 333 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
	step_end

# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_4:
# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
	step_end

# 342 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_5:
# 342 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_left
	step_end

# 345 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_6:
# 345 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
	step_end

# 356 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Movement_0:
# 356 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 364 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Movement_1:
# 364 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 364 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 364 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 364 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 364 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 364 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 364 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 364 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_faster_up
	step_end

# 416 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_0:
# 417 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 418 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 418 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_4
# 419 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
# 420 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 420 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 420 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 421 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
# 422 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 422 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 422 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 423 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 424 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 425 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 428 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 429 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_faster_up
# 430 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 430 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 441 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_1:
# 441 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_question_mark
# 441 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 441 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 441 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 441 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 441 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 441 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 441 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
	step_end

# 444 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_2:
# 444 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 444 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 444 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 444 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

# 447 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_3:
# 447 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_up
# 447 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 447 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 450 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_4:
# 450 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 450 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 450 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 450 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 450 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 450 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 450 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
	step_end

# 481 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_5:
# 481 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 481 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 481 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 481 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 481 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 481 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 481 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 481 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 481 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 481 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 481 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 498 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_6:
# 498 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 498 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 498 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 498 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_faster_up
# 498 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 498 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 498 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 498 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 498 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_7:
# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
	step_end

ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_Text_0:
# 48 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I could've sworn it was somewhere in the\n"
	.string "forest to the east...$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_Text_1:
# 51 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "What? A wild Mightyena was chasing my\n"
	.string "precious Mareep?\p"
	.string "You have to save him, please!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_Text_0:
# 60 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Hmm... where could it be?$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_Text_1:
# 62 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "We need to save that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mareep_Text_0:
# 68 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Reep! Reep! {COLOR BLUE}(BRO HELP ME PLZ)$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_0:
# 108 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR RED}(That Mightyena...{PAUSE 30} Something seemed off\n"
	.string "about it.)\p"
	.string "{COLOR RED}(It had some sort of dark aura...\n"
	.string "radiating from it?)\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Phew... That was an intense\n"
	.string "fight. Thank goodness we came in time!\p"
	.string "It looks like Mareep isn't hurt at all.\n"
	.string "That's a relief...$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_1:
# 119 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Reeeep...\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Awh. It's okay. You're safe with\n"
	.string "us now!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_2:
# 125 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ehe...! We make a pretty solid team,\n"
	.string "don't we, {PLAYER}?$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_3:
# 132 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "...Eh? Something was off about the\n"
	.string "Pokémon? What do you mean?\p"
	.string "Red eyes? A wicked dark aura? Hmmmn... I\n"
	.string "didn't see any of that.\p"
	.string "Well, either way, what's important is\n"
	.string "that Mareep is safe! Let's get him back\l"
	.string "to old man Paulie!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_4:
# 153 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Oh, my precious baby is safe and\n"
	.string "sound! I am in your debt, trainers!\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Heheh. It was nothing, really!\n"
	.string "That big Mightyena didn't stand a\l"
	.string "chance!\p"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Please, take one of these as a\n"
	.string "token of my gratitude!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_5:
# 164 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Feel free to visit our farm\n"
	.string "anytime!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_6:
# 178 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Watching how in sync you and\n"
	.string "your Pokémon are, despite having just\l"
	.string "met them...\p"
	.string "{PLAYER}!{PAUSE 30} You should enter the\n"
	.string "Silverwing Festival Tournament!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_7:
# 191 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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
# 198 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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
# 206 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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
# 213 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "With that said, bye-bye for now,\n"
	.string "{PLAYER}!\p"
	.string "Oh! I almost forgot! Let's exchange\n"
	.string "phone numbers so we can keep in touch!\p"
	.string "Mhm...{PAUSE 30} Alright...{PAUSE 30} and there we go! All set!\p"
	.string "Let's meet up again soon!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_FlowerSign_Text_0:
# 249 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "MINTY MEADOWS\n"
	.string "Beware of scary Drifloon at night!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_TunnelSign_Text_0:
# 256 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "TRAVELER'S TUNNEL\n"
	.string "WARNING: THICK FOG INSIDE!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_PopsHouse_Text_0:
# 263 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "POPS' RESIDENCE\n"
	.string "Owner of Minty Meadows!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_0:
# 310 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ah, young trainer! Please give me a\n"
	.string "moment. I am trying to count my Mareep.$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_1:
# 320 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Eh? We can't leave yet! We told\n"
	.string "old man Paulie we'd help find his Mareep!\p"
	.string "Do you really have to leave?$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_2:
# 325 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Yes$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_3:
# 326 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "No$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_4:
# 330 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Okay... Please come back as soon as you\n"
	.string "can!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_5:
# 336 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Alright! Let's get back to business!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_6:
# 346 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Let's go get that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Text_0:
# 355 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}We finally found it!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Text_1:
# 366 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Agh! Quick, {PLAYER}! We need\n"
	.string "to save that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Cave_Text_0:
# 371 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Huh? We have to help Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_0:
# 379 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Howdy pardner! Howsabout we get a\n"
	.string "quick scrap in?$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_1:
# 379 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Well I'll be.$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_2:
# 380 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "A mighty fine party of Pokes ya got on\n"
	.string "ya.$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_0:
# 384 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "My Pokemans are purty cute. Wanna take\n"
	.string "a gander?$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_1:
# 384 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ain't she just the sweetest lil thang\n"
	.string "you've eva laid yer eyes on?$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_2:
# 385 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I love my darlin' lil ball of cotton\n"
	.string "candy. Even if she don't fight too well.$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_0:
# 389 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I have a super special Bug Pokémon. You\n"
	.string "literally can't get it.\p"
	.string "How jealous are you?$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_1:
# 389 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ack! My super special bug Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_2:
# 392 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Okay, maybe I should be more specific.\p"
	.string "You can't catch a Vivillon with the same\n"
	.string "pattern as mine here in Marya.\p"
	.string "That's because a Vivillon's pattern is\n"
	.string "dependent on where it lives!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_0:
# 399 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Hi!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_1:
# 399 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Heck!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_2:
# 400 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I'm not a very interesting person, so I\n"
	.string "don't really say much.$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_0:
# 404 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "POKÉMON IS LOVE! POKÉMON IS LIFE!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_1:
# 404 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "It's all Kyogre now...$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_2:
# 405 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I was only nine years old when I met my\n"
	.string "Riolu. It's the coolest Pokémon ever.$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_0:
# 409 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Shorts are awesome. They're so comfy to\n"
	.string "wear. Don't you agree?$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_1:
# 409 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I think I'm going to need a new pair of\n"
	.string "shorts...$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_2:
# 410 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Shorts are easily an S tier pick for\n"
	.string "pants!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_0:
# 436 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Nnngh...{PAUSE 30} I'm only missing one\n"
	.string "more Pokémon!{PAUSE 30} Where in the world is it?\p"
	.string "Waah! I give up! I'm convinced it\n"
	.string "doesn't even exist!\p"
	.string "Eh?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_1:
# 446 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Hiya there!{PAUSE 30}... Err...{PAUSE 30} umm,{PAUSE 30} have we met\n"
	.string "before?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_2:
# 454 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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
# 462 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ack! Looks like I was the one doing the\n"
	.string "underestimating!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_4:
# 469 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Drats, I wasn't expecting to\n"
	.string "lose to you, {PLAYER}...\p"
	.string "W-Wait, I didn't mean it like that! I was\n"
	.string "just surprised at how skilled you are!\p"
	.string "Sorry... I say things before I speak a\n"
	.string "lot, ehe...$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_5:
# 480 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Excuse me! Young trainers!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_6:
# 488 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}I'm Paul, I'm one of the\n"
	.string "owners of Fresa Farms.\p"
	.string "Have you two seen a Mareep with a blue\n"
	.string "collar wandering around by chance?\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}I haven't... Did you lose one?\p"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}I'm afraid so... When I was\n"
	.string "counting my Mareep after taking them\l"
	.string "out to graze, I noticed one was missing.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_7:
# 497 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Oh my... that's terrible! We'll\n"
	.string "help you look, right {PLAYER}?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_8:
# 502 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Really? Oh, I can't thank you two\n"
	.string "enough!\p"
	.string "The last place I saw my precious Mareep\n"
	.string "was in the forest to the east.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_9:
# 508 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Sounds good! {PLAYER}! Let's\n"
	.string "head over there immediately!$"
