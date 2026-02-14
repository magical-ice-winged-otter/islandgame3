ISLANDGAME_MINTY_MEADOWS_2_MapScripts::
# 12 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_RESUME
# 20 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_RESUME:
# 13 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_RESUME_2
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 16 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject VAR_LAST_TALKED
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 15 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_RESUME_1
# 15 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettimeofday
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 27 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_MINTY_MEADOWS_STATE, 0
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 31 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 32 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 36 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 41 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 23 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_DRIFLOON, -3, 1
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 28 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_HideExtraMareep
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 33 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_OLD_MAN, 10, 9
# 34 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 34, 10
# 35 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_LOOK_AROUND
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 37 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_OLD_MAN, 10, 9
# 38 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 66, 18
# 39 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_DOWN
# 40 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_MIGHTYENA, 61, 15
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 42 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, -3, 1
# 43 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_OLD_MAN, -3, 1
# 44 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_MAREEP, -3, 1
# 45 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_MIGHTYENA, -3, 1
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan::
# 53 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 54 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_2
# 56 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_3
# 58 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_4
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_2:
# 55 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_Text_0, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_3:
# 57 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_Text_1, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_4:
# 59 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_Text_2, MSGBOX_NPC
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival::
# 64 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 65 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_2
# 67 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_3
# 69 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_4
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_2:
# 66 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_Text_0, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_3:
# 68 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_Text_1, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_4:
# 70 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_Text_2, MSGBOX_NPC
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_Mareep::
# 75 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 76 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mareep_Text_0
# 77 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena::
# 81 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	faceplayer
# 82 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 83 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_NO_CATCHING
# 84 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_NO_RUNNING
# 85 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 87 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SHADOW_MIGHTYENA, 25, ITEM_SITRUS_BERRY, NUM_NATURES, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_SNARL, MOVE_POISON_FANG, MOVE_SAND_ATTACK, MOVE_SWAGGER
# 93 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setwilddoubleflag
# 94 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 95 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 96 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dowildbattle
# 97 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 98 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 99 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 100 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_2
# 106 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	unsetfollowernpc LOCALID_RIVAL
# 107 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_DOWN
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_5
# 113 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 3
# 115 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_0
# 122 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 123 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 124 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_MAREEP, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_0
# 125 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 127 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_1
# 132 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_1
# 133 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 134 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_2
# 135 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 136 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_2
# 137 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 138 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_3
# 139 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 141 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_3
# 147 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 148 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 149 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	teleportcamera 11, 8
# 150 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject OBJ_EVENT_ID_PLAYER
# 151 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject LOCALID_RIVAL
# 152 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject LOCALID_OLD_MAN
# 153 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject LOCALID_MAREEP
# 154 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_4
# 155 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_5
# 156 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_5
# 157 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 11, 8
# 158 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy LOCALID_RIVAL, 10, 8
# 159 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy LOCALID_OLD_MAN, 11, 6
# 160 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy LOCALID_MAREEP, 10, 6
# 161 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 163 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_4
# 169 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 170 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_6
# 171 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 172 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 173 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 174 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_7
# 175 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 176 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_5
# 177 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 178 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_8
# 179 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 180 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 181 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_MAREEP, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_9
# 182 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 183 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 184 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_MAREEP, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_8
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 186 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_1
# 187 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 188 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_10
# 190 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_6
# 195 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 196 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_11
# 197 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 198 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 199 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_12
# 200 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 202 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_7
# 209 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_8
# 217 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_9
# 224 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_10
# 231 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 232 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_4
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_13
# 234 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 235 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject LOCALID_RIVAL
# 236 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject LOCALID_MAREEP
# 237 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject LOCALID_OLD_MAN
# 238 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, -3, 1
# 239 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_OLD_MAN, -3, 1
# 240 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_MAREEP, -3, 1
# 241 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	special HealPlayerParty
# 242 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	completequest QUEST_MINTY_MEADOWS_MELISSA
# 243 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	startquest QUEST_MARYA_GYM_CHALLENGE
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_2:
	end

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_5:
	end


ISLANDGAME_MINTY_MEADOWS_2_Interact_Drifloon::
# 247 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	faceplayer
# 248 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_DRIFLOON, CRY_MODE_ENCOUNTER
# 249 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 250 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 251 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 252 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setwildbattle SPECIES_DRIFLOON, 13
# 253 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dowildbattle
# 254 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 255 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 256 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 258 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_Interact_Drifloon_1
# 258 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_Interact_Drifloon_1
	return

ISLANDGAME_MINTY_MEADOWS_2_Interact_Drifloon_1:
# 259 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_DAILY_MINTY_MEADOWS_DRIFLOON
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_FlowerSign::
# 264 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_FlowerSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_TunnelSign::
# 268 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_TunnelSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_Interact_PopsHouse::
# 272 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Interact_PopsHouse_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right2::
# 278 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right2_Movement_0
# 279 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 280 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right1::
# 284 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right1_Movement_0
# 285 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 286 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight::
# 290 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left1::
# 294 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left1_Movement_0
# 295 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 296 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left2::
# 300 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left2_Movement_0
# 301 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 302 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left3::
# 306 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left3_Movement_0
# 307 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 308 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest::
# 312 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 313 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 0, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_2
# 322 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_3
# 323 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_3
	return

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_2:
# 314 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 315 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_0
# 316 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 317 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_0
# 318 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 319 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_1
# 320 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_2
# 321 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
	return

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_3:
	checkfollowernpc
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_4
# 351 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_6
# 352 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 353 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 354 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_7
# 355 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_6
# 356 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 357 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_5
# 358 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 359 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setfollowernpc LOCALID_RIVAL, FNPC_ALL, 0, PARTNER_MEADOWS_RIVAL
# 360 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	return

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_4:
# 325 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	facefollowernpc
# 327 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_1
# 332 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_2, YES
# 333 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_3, NO
# 335 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultistack 20, 8, TRUE, 3, FALSE, NO, DYN_MULTICHOICE_CB_NONE
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_RESULT
# 336 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case YES, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_8
# 343 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case NO, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_9
	return

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_8:
# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_4
# 338 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 339 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	unsetfollowernpc LOCALID_RIVAL
# 340 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_3
# 341 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_4
# 342 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
	return

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_9:
# 344 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_5
# 345 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 346 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_5
# 347 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep::
# 366 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Text_0
# 367 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 368 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_MIGHTYENA, ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Movement_0
# 369 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_MAREEP, ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_7
# 370 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 371 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 372 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 373 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement LOCALID_MIGHTYENA
# 374 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 375 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 376 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Movement_1
# 377 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 378 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Text_1
# 379 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 380 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 2
	return


ISLANDGAME_MINTY_MEADOWS_2_Trigger_Cave::
# 384 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trigger_Cave_Text_0
# 385 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 386 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_6
# 387 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher::
# 393 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_11, ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_1
# 394 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl::
# 398 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_12, ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_1
# 399 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher::
# 403 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_13, ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_1
# 404 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass::
# 408 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_14, ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_1
# 409 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac::
# 413 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_15, ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_1
# 414 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster::
# 418 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_16, ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_1
# 419 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight::
# 425 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_0
# 443 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 445 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_0
# 451 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 452 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_1
# 453 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 454 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playbgm MUS_HG_LYRA, TRUE
# 455 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_2
# 456 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 457 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_1
# 458 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 459 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_3
# 460 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 461 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 462 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_4
# 463 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 465 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_2
# 474 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 475 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_no_intro TRAINER_MINTY_MEADOWS_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_3
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_RivalFight_2
# 481 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_4
# 487 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_MINTY_MEADOWS_RIVAL_DEFEATED
# 488 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 489 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	savebgm MUS_DUMMY
# 490 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadedefaultbgm
# 491 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_HideExtraMareep
# 492 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject LOCALID_OLD_MAN
# 493 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy LOCALID_OLD_MAN, 18, 12
# 494 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_5
# 495 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 496 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_OLD_MAN, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_5
# 497 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_OLD_MAN, 10, 9
# 498 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 499 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_4
# 500 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 502 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_6
# 509 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 511 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_4
# 512 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 513 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_7
# 514 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_6
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 518 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_8
# 523 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 524 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_5
# 525 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 526 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_9
# 527 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 528 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_4
# 529 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement LOCALID_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_7
# 530 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement
# 531 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy LOCALID_RIVAL, 34, 10
# 532 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 533 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	special HealPlayerParty
# 534 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 1
	return

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_2:
	return


ISLANDGAME_MINTY_MEADOWS_2_HideExtraMareep::
# 538 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_MAREEP_EXTRA1, -3, 1
# 539 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_MAREEP_EXTRA2, -3, 1
# 540 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm LOCALID_MAREEP_EXTRA3, -3, 1
	return


# 124 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_0:
# 124 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_player
# 124 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
# 124 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
# 124 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
	step_end

# 132 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_1:
# 132 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_player
	step_end

# 136 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_2:
# 136 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_slow_up
	step_end

# 138 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_3:
# 138 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 138 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_question_mark
	step_end

# 154 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_4:
# 154 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
	step_end

# 155 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_5:
# 155 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 170 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_6:
# 170 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

# 174 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_7:
# 174 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 174 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 174 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 174 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 174 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 174 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 174 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 174 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
	step_end

# 178 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_8:
# 178 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 178 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 178 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 178 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 181 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_9:
# 181 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
# 181 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
# 181 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
	step_end

# 188 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_10:
# 188 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
	step_end

# 196 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_11:
# 196 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_question_mark
# 196 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 196 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 196 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 196 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 199 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_12:
# 199 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 199 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_faster_right
# 199 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 199 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 199 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 199 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Movement_13:
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
	step_end

# 278 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right2_Movement_0:
# 278 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 278 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 278 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 284 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Right1_Movement_0:
# 284 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 284 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 294 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left1_Movement_0:
# 294 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 294 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 300 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left2_Movement_0:
# 300 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 300 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 300 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 306 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_RivalFight_Left3_Movement_0:
# 306 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 306 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 306 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 306 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 315 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_0:
# 315 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 315 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 315 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 315 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 315 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 315 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 315 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 315 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_player
	step_end

# 319 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_1:
# 319 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_original_direction
	step_end

# 320 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_2:
# 320 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 320 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
	step_end

# 340 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_3:
# 340 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
	step_end

# 341 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_4:
# 341 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
	step_end

# 346 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_5:
# 346 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 346 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
	step_end

# 351 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_6:
# 351 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_left
	step_end

# 354 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Movement_7:
# 354 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
	step_end

# 368 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Movement_0:
# 368 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 368 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

# 376 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Movement_1:
# 376 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 376 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 376 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 376 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 376 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 376 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 376 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 376 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_faster_up
	step_end

# 425 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_0:
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_4
# 428 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
# 429 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 429 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 429 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 430 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
# 431 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 431 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 431 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 432 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 433 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 434 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
# 435 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 435 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 435 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 436 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 437 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 438 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

# 452 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_1:
# 452 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_question_mark
# 452 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 452 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 452 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 452 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 452 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 452 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 452 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
	step_end

# 455 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_2:
# 455 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 455 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 455 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 455 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

# 459 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_3:
# 459 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_up
# 459 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 459 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 462 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_4:
# 462 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 462 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 462 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 462 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 462 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 462 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 462 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
	step_end

# 496 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_5:
# 496 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 496 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 496 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 496 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 496 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 496 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 496 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 496 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 496 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 496 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 496 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_6:
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_faster_up
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 529 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement_7:
# 529 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 529 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 529 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 529 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 529 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 529 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 529 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 529 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 529 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 529 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 529 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 529 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 529 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
# 529 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_right
	step_end

ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_Text_0:
# 55 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I could've sworn it was somewhere in the\n"
	.string "forest to the east...$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_Text_1:
# 57 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "What? A wild Mightyena was chasing my\n"
	.string "precious Mareep?\p"
	.string "You have to save him, please!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_OldMan_Text_2:
# 59 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Thank you so much for saving my\n"
	.string "precious Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_Text_0:
# 66 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Hmm... where could it be?$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_Text_1:
# 68 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "We need to save that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Rival_Text_2:
# 70 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Phew... I need to take a break after all\n"
	.string "that running...$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mareep_Text_0:
# 76 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Reep! Reep! {COLOR BLUE}(BRO HELP ME PLZ)$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_0:
# 116 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR RED}(That Mightyena...{PAUSE 30} Something seemed off\n"
	.string "about it.)\p"
	.string "{COLOR RED}(It had some sort of dark aura...\n"
	.string "radiating from it?)\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Phew... That was an intense\n"
	.string "fight. Thank goodness we came in time!\p"
	.string "{COLOR DARK_GRAY}It looks like Mareep isn't hurt at all.\n"
	.string "That's a relief...$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_1:
# 128 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Reeeep...\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Awh. It's okay. You're safe with\n"
	.string "us now!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_2:
# 134 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Ehe...! We make a pretty solid team,\n"
	.string "don't we, {PLAYER}?$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_3:
# 142 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}...Eh? Something was off about the\n"
	.string "Pokémon? What do you mean?\p"
	.string "{COLOR DARK_GRAY}Red eyes? A wicked dark aura? Hmmmn... I\n"
	.string "didn't see any of that.\p"
	.string "{COLOR DARK_GRAY}Well, either way, what's important is\n"
	.string "that Mareep is safe! Let's get him back\l"
	.string "to old man Paulie!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_4:
# 164 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Oh, my precious baby is safe and\n"
	.string "sound! I am in your debt, trainers!\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Heheh. It was nothing, really!\n"
	.string "That big Mightyena didn't stand a\l"
	.string "chance!\p"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Please, take one of these as a\n"
	.string "token of my gratitude!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_5:
# 176 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Feel free to visit our farm\n"
	.string "anytime!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_6:
# 191 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Watching how in sync you and\n"
	.string "your Pokémon are, despite having just\l"
	.string "met them...\p"
	.string "{COLOR DARK_GRAY}{PLAYER}!{PAUSE 30} You should enter the\n"
	.string "Silverwing Festival Tournament!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_7:
# 203 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Eeeh!?{PAUSE 60} You don't know about the\n"
	.string "tournament!?\p"
	.string "{COLOR DARK_GRAY}It's a tournament hosted during the\n"
	.string "Silverwing Festival where only the best\l"
	.string "trainers of Marya assemble to compete\l"
	.string "for the Silverwing Cup!\p"
	.string "{COLOR DARK_GRAY}I'm taking part in it, and I think you\n"
	.string "should to! As a natural trainer, you'd be\l"
	.string "a great competitor!\p"
	.string "{COLOR DARK_GRAY}But in order to qualify...{PAUSE 30} you'll have to\n"
	.string "complete the Marya Gym Challenge!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_8:
# 210 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}You'll have to travel across the three\n"
	.string "main islands of Oranna, Lumine, and\l"
	.string "Minerva...\p"
	.string "{COLOR DARK_GRAY}...and defeat their respective gym\n"
	.string "leaders in battle!\p"
	.string "{COLOR DARK_GRAY}Ooh... I can't wait! I wish the festival\n"
	.string "was tomorrow!\p"
	.string "{COLOR DARK_GRAY}Oh, you're right.{PAUSE 30} Neither of us would\n"
	.string "qualify if it started tomorrow...\p"
	.string "There I go being silly again, ehe.$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_9:
# 218 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Well, I'm going to go back to the\n"
	.string "professor to report my findings.\p"
	.string "{COLOR DARK_GRAY}But {PLAYER}, you should go west of\n"
	.string "Maplegrove and head up to Tidalcove!\p"
	.string "{COLOR DARK_GRAY}That's where you'll find the first gym\n"
	.string "leader: Ruka!\p"
	.string "{COLOR DARK_GRAY}Ruka is really famous around here. On\n"
	.string "top of being a gym leader, she used to\l"
	.string "be a professional swimmer and swimsuit\l"
	.string "model!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_Mightyena_Text_10:
# 225 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}With that said, bye-bye for now,\n"
	.string "{PLAYER}!\p"
	.string "{COLOR DARK_GRAY}Oh! I almost forgot! Let's exchange\n"
	.string "phone numbers so we can keep in touch!\p"
	.string "{COLOR DARK_GRAY}Mhm...{PAUSE 30} Alright...{PAUSE 30} and there we go! All set!\p"
	.string "{COLOR DARK_GRAY}Let's meet up again soon!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_FlowerSign_Text_0:
# 264 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}MINTY MEADOWS\n"
	.string "Beware of scary Drifloon at night!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_TunnelSign_Text_0:
# 268 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}TRAVELER'S TUNNEL\n"
	.string "WARNING: THICK FOG INSIDE!$"

ISLANDGAME_MINTY_MEADOWS_2_Interact_PopsHouse_Text_0:
# 272 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}POPS' RESIDENCE\n"
	.string "Owner of Minty Meadows!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_0:
# 317 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Ah, young trainer! Please give me a\n"
	.string "moment. I am trying to count my Mareep.$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_1:
# 328 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Eh? We can't leave yet! We told\n"
	.string "old man Paulie we'd help find his Mareep!\p"
	.string "Do you really have to leave?$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_2:
# 332 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Yes$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_3:
# 333 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "No$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_4:
# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Okay... Please come back as soon as you\n"
	.string "can!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_5:
# 344 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Alright! Let's get back to business!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Forest_Text_6:
# 355 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Let's go get that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Text_0:
# 366 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}We finally found it!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_SeeMareep_Text_1:
# 378 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Agh! Quick, {PLAYER}! We need\n"
	.string "to save that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Trigger_Cave_Text_0:
# 384 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Huh? We have to help Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_0:
# 393 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Howdy pardner! Howsabout we get a\n"
	.string "quick scrap in?$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_1:
# 393 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Well I'll be.$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Rancher_Text_2:
# 394 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "A mighty fine party of Pokes ya got on\n"
	.string "ya.$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_0:
# 398 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}My Pokemans are purty cute. Wanna take\n"
	.string "a gander?$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_1:
# 398 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ain't she just the sweetest lil thang\n you've eva laid yer eyes on?$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_UpperDouble_Cowgirl_Text_2:
# 399 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I love my darlin' lil ball of cotton\n"
	.string "candy. Even if she don't fight too well.$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_0:
# 403 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}I have a super special Bug Pokémon. You\n"
	.string "literally can't get it.\p"
	.string "How jealous are you?$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_1:
# 403 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ack! My super special bug Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_BugCatcher_Text_2:
# 404 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Okay, maybe I should be more specific.\p"
	.string "You can't catch a Vivillon with the same\n"
	.string "pattern as mine here in Marya.\p"
	.string "That's because a Vivillon's pattern is\n"
	.string "dependent on where it lives!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_0:
# 408 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Hi!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_1:
# 408 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Heck!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_LowerDouble_Lass_Text_2:
# 409 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I'm not a very interesting person, so I\n"
	.string "don't really say much.$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_0:
# 413 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}POKÉMON IS LOVE! POKÉMON IS LIFE!$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_1:
# 413 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "It's all Kyogre now...$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Maniac_Text_2:
# 414 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I was only nine years old when I met my\n"
	.string "Riolu. It's the coolest Pokémon ever.$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_0:
# 418 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Shorts are awesome. They're so comfy to\n"
	.string "wear. Don't you agree?$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_1:
# 418 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I think I'm going to need a new pair of\nshorts...$"

ISLANDGAME_MINTY_MEADOWS_2_Trainer_FinalDouble_Youngster_Text_2:
# 419 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Shorts are easily an S tier pick for\n"
	.string "pants!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_0:
# 446 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Nnngh...{PAUSE 30} I'm only missing one\n"
	.string "more Pokémon!{PAUSE 30} Where in the world is it?\p"
	.string "{COLOR DARK_GRAY}Waah! I give up! I'm convinced it\n"
	.string "doesn't even exist!\p"
	.string "{COLOR DARK_GRAY}Eh?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_1:
# 457 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Hiya there!{PAUSE 30}... Err...{PAUSE 30} umm,{PAUSE 30} have we met\n"
	.string "before?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_2:
# 466 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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
# 475 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ack! Looks like I was the one doing the\nunderestimating!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_4:
# 482 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Drats, I wasn't expecting to\n"
	.string "lose to you, {PLAYER}...\p"
	.string "{COLOR DARK_GRAY}W-Wait, I didn't mean it like that! I was\n"
	.string "just surprised at how skilled you are!\p"
	.string "{COLOR DARK_GRAY}Sorry... I say things before I speak a\n"
	.string "lot, ehe...$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_5:
# 494 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Excuse me! Young trainers!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_6:
# 503 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}I'm Paul, I'm one of the\n"
	.string "owners of Fresa Farms.\p"
	.string "{COLOR DARK_GRAY}Have you two seen a Mareep with a blue\n"
	.string "collar wandering around by chance?\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}I haven't... Did you lose one?\p"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}I'm afraid so... When I was\n"
	.string "counting my Mareep after taking them\l"
	.string "out to graze, I noticed one was missing.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_7:
# 513 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Oh my... that's terrible! We'll\n"
	.string "help you look, right {PLAYER}?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_8:
# 519 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Really? Oh, I can't thank you two\n"
	.string "enough!\p"
	.string "{COLOR DARK_GRAY}The last place I saw my precious Mareep\n"
	.string "was in the forest to the east.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Text_9:
# 526 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Sounds good! {PLAYER}! Let's\n"
	.string "head over there immediately!$"
