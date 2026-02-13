ISLANDGAME_MINTY_MEADOWS_2_MapScripts::
# 41 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 42 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	gettime
# 44 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 44 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 48 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_TEMP_2
# 49 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 17, -3, 1
ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 52 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 53 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 0, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 54 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
# 55 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
# 56 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
# 57 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 4, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 60 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto_if_set FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 45 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_TEMP_1
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 53 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_InitialRival
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 54 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_StartedQuest
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 55 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_PausedQuest
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 56 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_SawMareepPreFight
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 57 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 61 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_5, 1
	return


ISLANDGAME_MINTY_MEADOWS_2_InitialRival::
# 74 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, 12, 5
# 75 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 9, 32, 10
# 76 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 14, 35, 8
# 77 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 15, 34, 10
# 78 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 16, 33, 12
# 79 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 6, -3, 1
# 80 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, -3, 1
	return


ISLANDGAME_MINTY_MEADOWS_2_StartedQuest::
# 85 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_4, 1
# 86 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 9, 10, 9
# 87 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 6, 61, 13
# 88 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, 61, 15
# 89 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 90 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	return


ISLANDGAME_MINTY_MEADOWS_2_PausedQuest::
# 96 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_4, 1
# 97 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, 34, 10
# 98 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_LOOK_AROUND
# 99 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 9, 10, 9
# 100 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 6, 61, 13
# 101 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, 61, 15
# 102 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 103 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	return


ISLANDGAME_MINTY_MEADOWS_2_SawMareepPreFight::
# 108 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_4, 1
# 109 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 9, 10, 9
# 110 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 6, 61, 13
# 111 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, 61, 14
# 112 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 113 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	return


ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena::
# 118 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_4, 0
# 122 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, -3, 1
	return


ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact::
# 128 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 129 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 0, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_2
# 130 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_2
# 131 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_3
# 132 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_4
# 133 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 4, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_5
	return

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_2:
# 130 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_0, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_3:
# 131 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_0, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_4:
# 132 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_1, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_5:
# 133 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_2, MSGBOX_NPC
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact::
# 138 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 139 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_3
# 140 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_3
# 146 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_4
# 147 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 4, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_5
ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1:
# 155 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 156 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_3:
# 141 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_6
# 144 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_1, MSGBOX_NPC
	goto ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_4:
# 146 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_2, MSGBOX_NPC
	goto ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_5:
# 147 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_3, MSGBOX_NPC
	goto ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_6:
# 142 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_0, MSGBOX_NPC
	goto ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1


ISLANDGAME_MINTY_MEADOWS_2_FlowerSign_Interact::
# 160 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_FlowerSign_Interact_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_TunnelSign_Interact::
# 164 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_TunnelSign_Interact_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_PopsHouse_Interact::
# 168 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PopsHouse_Interact_Text_0, MSGBOX_SIGN
	return


# 174 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Player_StepBack:
# 175 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 176 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
	step_end

ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival::
# 180 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 181 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 182 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 183 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 184 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Common_Movement_Delay48
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 186 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Common_Movement_FacePlayer
# 187 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 188 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Text_0
# 189 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 190 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Common_Movement_FaceOriginalDirection
# 191 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Player_StepBack
# 192 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 193 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


# 196 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement1:
# 197 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 197 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 198 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger1::
# 202 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 203 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement1
# 204 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 205 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


# 208 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement2:
# 209 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 210 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger2::
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 215 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement2
# 216 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 217 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger3::
# 221 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 222 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


# 225 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement4:
# 226 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 227 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger4::
# 231 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 232 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement4
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 234 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


# 237 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement5:
# 238 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 238 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 239 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger5::
# 243 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 244 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement5
# 245 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 246 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


# 249 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement6:
# 250 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 250 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 250 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 251 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger6::
# 255 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 256 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement6
# 257 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 258 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


# 261 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalWalkDown:
# 262 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 262 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 263 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 263 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

# 266 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_OldManWalkUp:
# 267 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 267 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 267 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 267 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 267 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 267 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 267 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 267 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 268 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 268 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 268 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 271 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalRunDown:
# 272 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
	step_end

# 276 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalLookAround:
# 277 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 278 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 279 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_4
# 280 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
# 281 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 282 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 283 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
# 284 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 285 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 286 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 287 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 288 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
# 289 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 290 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 291 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 292 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 293 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

ISLANDGAME_MINTY_MEADOWS_2_TeleportGauntlet::
# 297 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 298 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 8
# 299 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, -3, 1
# 301 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8000, 34
# 302 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8001, 11
# 303 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	callnative TeleportCamera
# 304 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject OBJ_EVENT_ID_PLAYER
# 306 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 34, 11
# 311 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 314 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	createfollowernpc OBJ_EVENT_GFX_MELISSA, FNPC_ALL, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact, PARTNER_MEADOWS_RIVAL
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main::
# 323 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_FOLLOWERS_DISABLED
# 326 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_RivalLookAround
# 327 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 328 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterUp
# 329 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 330 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay 30
# 331 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_0
# 338 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 339 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_QuestionMark
# 340 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 341 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 342 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 343 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 344 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 345 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playbgm MUS_HG_LYRA, TRUE
# 347 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_RivalWalkDown
# 348 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 351 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_1
# 356 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 357 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 358 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 359 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay 30
# 360 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 361 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 362 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 363 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 364 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 365 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_2
# 377 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_no_intro TRAINER_MINTY_MEADOWS_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_3
# 378 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 379 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_2
# 384 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_4
# 391 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	savebgm MUS_DUMMY
# 392 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadedefaultbgm
# 395 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 9
# 396 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 14, -3, 1
# 397 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 15, -3, 1
# 398 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 16, -3, 1
# 399 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 9, 18, 12
# 400 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_5
# 401 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 402 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, ISLANDGAME_MINTY_MEADOWS_2_OldManWalkUp
# 403 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 9
# 404 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 405 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 407 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_6
# 415 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 416 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 417 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 418 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 419 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 420 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 421 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_7
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 428 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 429 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 430 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 431 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 432 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 433 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 434 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 435 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 436 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 437 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 438 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 439 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_8
# 447 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 448 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 450 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_9
# 451 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 452 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 453 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 454 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	special HealPlayerParty
# 457 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_TeleportGauntlet
# 459 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 1
# 460 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_StartedQuest
# 461 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_2:
	return


ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1::
# 467 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_MINTY_MEADOWS_STATE, 1
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1_1
	return

ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1_1:
# 468 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 470 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 473 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 6
# 474 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 6, 32, 37
# 475 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, Phase1_MareepRun_1
# 476 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 6
# 477 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 480 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, Common_Movement_Delay48
# 481 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 6
# 484 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 485 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, Phase1_MareepRun_2
# 486 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 6
# 489 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 7
# 490 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 7, 32, 37
# 491 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, Phase1_MareepRun_3
# 492 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 7, Phase1_MightyenaChase
# 493 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 7
# 494 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 6
# 495 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 6
# 496 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 7
# 498 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_0, 1
# 499 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


# 503 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase1_RivalEnter:
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 505 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 505 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 505 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 505 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 506 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 507 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 508 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 509 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
# 511 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 512 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 513 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 514 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
	step_end

# 517 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase1_MareepRun_1:
# 518 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 518 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 518 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 518 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 519 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

# 522 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase1_MareepRun_2:
# 523 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 524 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 525 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 526 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

# 529 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase1_MareepRun_3:
# 530 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 530 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 530 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 530 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 530 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 530 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 530 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 530 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 530 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 530 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 530 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 530 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 530 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 531 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

# 534 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase1_MightyenaChase:
# 535 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 535 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 535 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 535 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 536 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 536 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 536 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 536 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 536 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 536 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 536 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 536 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 536 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 536 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 536 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 536 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 536 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 537 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2::
# 543 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 546 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_0
# 551 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 552 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 7, Phase2_MightyenaWalksForward
# 553 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 554 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 555 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 556 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 557 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 7
# 558 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 559 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 560 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 561 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 562 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 563 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 564 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterUp
# 565 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 566 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_1
# 572 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 3
# 573 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_SawMareepPreFight
# 574 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


# 577 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase2_RivalCatchUp:
# 578 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 578 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 578 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 579 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 579 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 579 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 579 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 579 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 579 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 580 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 581 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
	step_end

# 584 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase2_MightyenaWalksForward:
# 585 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena::
# 592 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 593 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	faceplayer
# 594 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 595 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_NO_CATCHING
# 596 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_NO_RUNNING
# 597 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SHADOW_MIGHTYENA, 25, ITEM_SITRUS_BERRY, NUM_NATURES, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_SNARL, MOVE_POISON_FANG, MOVE_SAND_ATTACK, MOVE_SWAGGER
# 598 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setwilddoubleflag
# 599 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 600 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 601 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dowildbattle
# 602 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 603 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 604 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 605 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 607 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_RESULT
# 608 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_3
# 610 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_4
# 613 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	destroyfollowernpc
# 614 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1:
# 616 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_3:
# 609 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	destroyfollowernpc
	goto ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_4:
	goto ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1


# 619 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
RivalChecksMareep:
# 620 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 620 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 620 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 621 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
	step_end

# 624 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
MareepHappy:
# 625 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
# 626 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
# 626 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
# 626 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
	step_end

# 629 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
MareepGoodbye:
# 630 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
# 630 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
# 630 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
	step_end

# 633 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
TalkToAudrey:
# 634 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_slow_up
	step_end

# 637 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
AudreyConfused:
# 638 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 639 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_question_mark
	step_end

# 642 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
LookBackAtMareep:
# 643 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
	step_end

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene::
# 647 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 4
# 648 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena
# 651 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8000, 61
# 652 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8001, 16
# 653 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	callnative TeleportCamera
# 654 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 8
# 655 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 656 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 657 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 61, 16
# 658 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 8, 60, 16
# 659 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 660 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 7
# 661 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, -3, 1
# 662 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 665 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_0
# 672 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 673 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, RivalChecksMareep
# 674 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 675 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_1
# 676 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 677 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 678 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, MareepHappy
# 679 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 680 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_2
# 687 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 688 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 690 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_3
# 695 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 696 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TalkToAudrey
# 697 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 698 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, AudreyConfused
# 699 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 700 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_4
# 706 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, LookBackAtMareep
# 707 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 708 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_5
# 709 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 712 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 713 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8000, 11
# 714 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8001, 8
# 715 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	callnative TeleportCamera
# 716 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject OBJ_EVENT_ID_PLAYER
# 717 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 8
# 718 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 9
# 719 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 6
# 720 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 721 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 9
# 722 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 723 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 724 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 725 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 726 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 11, 8
# 727 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 8, 10, 8
# 728 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 9, 11, 6
# 729 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 6, 10, 6
# 730 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 733 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_6
# 740 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 741 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Phase3_OldManGivesItem_Part1
# 742 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 9
# 743 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 744 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Phase3_OldManGivesItem_Part2
# 745 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 9
# 748 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_7
# 753 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 755 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, WalkBackToFarm
# 756 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 757 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 758 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, MareepGoodbye
# 759 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 760 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 761 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, WalkBackToFarm
# 762 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 763 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FacePlayer
# 764 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 765 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 766 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_8
# 772 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 773 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 774 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 775 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay 60
# 776 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 777 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 778 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 779 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterRight
# 780 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 781 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay 60
# 782 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_9
# 788 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_10
# 795 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_11
# 801 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_12
# 808 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 809 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Phase3_RivalRunsOff
# 810 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 811 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 812 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 813 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 8
# 814 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 6
# 815 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 9
# 816 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, -3, 1
# 817 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 9, -3, 1
# 818 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 6, -3, 1
# 819 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	special HealPlayerParty
# 821 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	completequest QUEST_MINTY_MEADOWS_MELISSA
# 822 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	startquest QUEST_MARYA_GYM_CHALLENGE
# 823 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
# 824 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_MINTY_MEADOWS_RIVAL_DEFEATED
# 825 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_5, 1
# 826 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


# 829 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase3_OldManGivesItem_Part1:
# 830 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

# 833 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase3_OldManGivesItem_Part2:
# 834 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 835 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 836 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 836 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 836 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 837 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 838 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 839 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
	step_end

# 842 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
WalkBackToFarm:
# 843 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 843 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 843 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 843 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 846 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase3_RivalRunsOff:
# 847 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 847 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 847 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 847 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 847 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 848 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 848 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 848 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 848 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 848 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 848 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 849 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 849 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 849 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 849 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 849 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

ISLANDGAME_MINTY_MEADOWS_2_Mareep::
# 857 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 858 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 859 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox MareepHelp_Text
# 860 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_Mark_Audrey::
# 869 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 2
	return


ISLANDGAME_MINTY_MEADOWS_2_WelcomeBack::
# 877 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 878 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 879 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 880 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 881 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_WelcomeBack_Text_0
# 882 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 886 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 1
# 888 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_TeleportGauntlet
	return


ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage::
# 894 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_0
# 895 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	message ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_1
# 896 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmessage
# 897 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_2, YES
# 898 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_3, NO
# 899 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultistack 20, 8, TRUE, 3, FALSE, NO, DYN_MULTICHOICE_CB_NONE
	return


ISLANDGAME_MINTY_MEADOWS_2_CantLeave::
# 905 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 906 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 907 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_3
# 909 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_4
# 949 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_5
ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1:
# 991 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_3:
# 908 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_WelcomeBack
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_4:
# 910 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	facefollowernpc
# 911 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage
# 912 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_RESULT
# 913 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case YES, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_7
# 943 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case NO, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_8
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_5:
# 950 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	facefollowernpc
# 951 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage
# 952 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_RESULT
# 953 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case YES, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_10
# 984 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case NO, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_11
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_7:
# 914 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_Mark_Audrey
# 916 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_0
# 917 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 919 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 921 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	destroyfollowernpc
# 923 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, 34, 10
# 925 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8000, 30
# 926 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8001, 10
# 927 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	callnative TeleportCamera
# 928 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject OBJ_EVENT_ID_PLAYER
# 930 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 30, 10
# 932 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_8:
# 944 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_1
# 945 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 946 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 947 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_10:
# 954 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_Mark_Audrey
# 957 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_0
# 958 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 960 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 962 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	destroyfollowernpc
# 964 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, 34, 10
# 966 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8000, 30
# 967 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8001, 10
# 968 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	callnative TeleportCamera
# 969 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject OBJ_EVENT_ID_PLAYER
# 971 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 30, 10
# 973 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_11:
# 985 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_1
# 986 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 987 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 988 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1


ISLANDGAME_MINTY_MEADOWS_2_CantLeave2::
# 995 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_MINTY_MEADOWS_2_CantLeave2_1
	return

ISLANDGAME_MINTY_MEADOWS_2_CantLeave2_1:
# 996 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave2_Text_0
# 997 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkDown
# 998 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 999 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	return


ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle::
# 1004 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 1005 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	faceplayer
# 1006 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 1007 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_DRIFLOON, 13, 0, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0
# 1008 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_DRIFLOON, CRY_MODE_ENCOUNTER
# 1009 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 1010 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1011 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dowildbattle
# 1012 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 1013 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 1015 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_RESULT
# 1016 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_3
# 1018 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_4
# 1020 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_5
# 1023 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_6
# 1027 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1:
# 1029 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_3:
	goto ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1

ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_4:
	goto ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1

ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_5:
# 1021 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_DAILY_MINTY_MEADOWS_DRIFLOON
# 1022 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1

ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_6:
# 1024 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_DAILY_MINTY_MEADOWS_DRIFLOON
# 1025 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1


ISLANDGAME_MINTY_MEADOWS_2_CantGoYet::
# 1033 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_MINTY_MEADOWS_2_CantGoYet_1
	return

ISLANDGAME_MINTY_MEADOWS_2_CantGoYet_1:
# 1034 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantGoYet_Text_0
# 1035 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkDown
# 1036 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1037 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3::
# 1054 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_11, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Loss
# 1055 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4::
# 1059 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_12, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Loss
# 1060 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5::
# 1064 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_13, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Loss
# 1065 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6::
# 1069 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_14, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Loss
# 1070 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7::
# 1074 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_15, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Loss
# 1075 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8::
# 1079 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_16, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Loss
# 1080 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_0:
# 130 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I could've sworn it was somewhere in the\n"
	.string "forest to the east...$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_1:
# 132 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "What? A wild Mightyena was chasing my\n"
	.string "precious Mareep?\p"
	.string "You have to save him, please!$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_2:
# 133 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Thank you so much for saving my\n"
	.string "precious Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_0:
# 142 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}That must be the lost Mareep!\n"
	.string "I think it ran off to the end of the\l"
	.string "forest!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_1:
# 144 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Hmm... where could it be?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_2:
# 146 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "We need to save that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_3:
# 147 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Phew... I need to take a break after all\n"
	.string "that running...$"

ISLANDGAME_MINTY_MEADOWS_2_FlowerSign_Interact_Text_0:
# 160 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}MINTY MEADOWS\n"
	.string "Beware of scary Drifloon at night!$"

ISLANDGAME_MINTY_MEADOWS_2_TunnelSign_Interact_Text_0:
# 164 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}TRAVELER'S TUNNEL\n"
	.string "WARNING: THICK FOG INSIDE!$"

ISLANDGAME_MINTY_MEADOWS_2_PopsHouse_Interact_Text_0:
# 168 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}POPS' RESIDENCE\n"
	.string "Owner of Minty Meadows!$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Text_0:
# 188 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Ah, young trainer! Please give me a\n"
	.string "moment. I am trying to count my Mareep.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_0:
# 333 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Nnngh...{PAUSE 30} I'm only missing one\n"
	.string "more Pokémon!{PAUSE 30} Where in the world is it?\p"
	.string "{COLOR DARK_GRAY}Waah! I give up! I'm convinced it\n"
	.string "doesn't even exist!\p"
	.string "{COLOR DARK_GRAY}Eh?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_1:
# 353 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Hiya there!{PAUSE 30}... Err...{PAUSE 30} umm,{PAUSE 30} have we met\n"
	.string "before?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_2:
# 367 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_3:
# 377 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ack! Looks like I was the one doing the\nunderestimating!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_4:
# 386 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Drats, I wasn't expecting to\n"
	.string "lose to you, {PLAYER}...\p"
	.string "{COLOR DARK_GRAY}W-Wait, I didn't mean it like that! I was\n"
	.string "just surprised at how skilled you are!\p"
	.string "{COLOR DARK_GRAY}Sorry... I say things before I speak a\n"
	.string "lot, ehe...$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_5:
# 400 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Excuse me! Young trainers!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_6:
# 409 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}I'm Paul, I'm one of the\n"
	.string "owners of Fresa Farms.\p"
	.string "{COLOR DARK_GRAY}Have you two seen a Mareep with a blue\n"
	.string "collar wandering around by chance?\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}I haven't... Did you lose one?\p"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}I'm afraid so... When I was\n"
	.string "counting my Mareep after taking them\l"
	.string "out to graze, I noticed one was missing.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_7:
# 423 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Oh my... that's terrible! We'll\n"
	.string "help you look, right {PLAYER}?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_8:
# 441 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Really? Oh, I can't thank you two\n"
	.string "enough!\p"
	.string "{COLOR DARK_GRAY}The last place I saw my precious Mareep\n"
	.string "was in the forest to the east.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_9:
# 450 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Sounds good! {PLAYER}! Let's\n"
	.string "head over there immediately!$"

ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_0:
# 548 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}We finally found it!$"

ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_1:
# 568 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Agh! Quick, {PLAYER}! We need\n"
	.string "to save that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_0:
# 667 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Phew... That was an intense\n"
	.string "fight. Thank goodness we came in time!\p"
	.string "{COLOR RED}(That Mightyena...{PAUSE 30} Something seemed off\n"
	.string "about it.)\p"
	.string "{COLOR RED}(It had some sort of dark aura...\n"
	.string "radiating from it?)$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_1:
# 675 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}It looks like Mareep isn't hurt at all.\n"
	.string "That's a relief...$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_2:
# 682 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Reeeep...\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Awh. It's okay. You're safe with\n"
	.string "us now!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_3:
# 692 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Ehe...! We make a pretty solid team,\n"
	.string "don't we, {PLAYER}?$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_4:
# 702 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}...Eh? Something was off about the\n"
	.string "Pokémon? What do you mean?\p"
	.string "{COLOR DARK_GRAY}Red eyes? A wicked dark aura? Hmmmn... I\n"
	.string "didn't see any of that.$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_5:
# 708 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Well, either way, what's important is\n"
	.string "that Mareep is safe! Let's get him back\l"
	.string "to old man Paulie!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_6:
# 735 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Oh, my precious baby is safe and\n"
	.string "sound! I am in your debt, trainers!\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Heheh. It was nothing, really!\n"
	.string "That big Mightyena didn't stand a\l"
	.string "chance!\p"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Please, take one of these as a\n"
	.string "token of my gratitude!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_7:
# 750 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Feel free to visit our farm\n"
	.string "anytime!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_8:
# 768 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Watching how in sync you and\n"
	.string "your Pokémon are, despite having just\l"
	.string "met them...\p"
	.string "{COLOR DARK_GRAY}{PLAYER}!{PAUSE 30} You should enter the\n"
	.string "Silverwing Festival Tournament!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_9:
# 783 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_10:
# 789 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_11:
# 796 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_12:
# 802 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}With that said, bye-bye for now,\n"
	.string "{PLAYER}!\p"
	.string "{COLOR DARK_GRAY}Oh! I almost forgot! Let's exchange\n"
	.string "phone numbers so we can keep in touch!\p"
	.string "{COLOR DARK_GRAY}Mhm...{PAUSE 30} Alright...{PAUSE 30} and there we go! All set!\p"
	.string "{COLOR DARK_GRAY}Let's meet up again soon!$"

ISLANDGAME_MINTY_MEADOWS_2_WelcomeBack_Text_0:
# 881 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}You're back! Let's go get that\n"
	.string "Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_0:
# 894 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Eh? We can't leave yet! We told\n"
	.string "old man Paulie we'd help find his Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_1:
# 895 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Do you really have to leave?$"

ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_2:
# 897 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Yes$"

ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_3:
# 898 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "No$"

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_0:
# 916 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Okay... Please come back as soon as you\n"
	.string "can!$"

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_1:
# 944 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Alright! Let's get back to business!$"

ISLANDGAME_MINTY_MEADOWS_2_CantLeave2_Text_0:
# 996 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Huh? We have to help Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_CantGoYet_Text_0:
# 1034 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR RED}(I should really help the farm owner\n"
	.string "find his Mareep first...)$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_0:
# 1054 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Howdy pardner! Howsabout we get a\n"
	.string "quick scrap in?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_1:
# 1055 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "A mighty fine party of Pokes ya got on\n"
	.string "ya.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_0:
# 1059 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}My Pokemans are purty cute. Wanna take\n"
	.string "a gander?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_1:
# 1060 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I love my darlin' lil ball of cotton\n"
	.string "candy. Even if she don't fight too well.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_0:
# 1064 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}I have a super special Bug Pokémon. You\n"
	.string "literally can't get it.\p"
	.string "How jealous are you?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_1:
# 1065 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Okay, maybe I should be more specific.\p"
	.string "You can't catch a Vivillon with the same\n"
	.string "pattern as mine here in Marya.\p"
	.string "That's because a Vivillon's pattern is\n"
	.string "dependent on where it lives!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_0:
# 1069 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Hi!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_1:
# 1070 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I'm not a very interesting person, so I\n"
	.string "don't really say much.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_0:
# 1074 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}POKÉMON IS LOVE! POKÉMON IS LIFE!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_1:
# 1075 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I was only nine years old when I met my\n"
	.string "Riolu. It's the coolest Pokémon ever.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_0:
# 1079 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Shorts are awesome. They're so comfy to\n"
	.string "wear. Don't you agree?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_1:
# 1080 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Shorts are easily an S tier pick for\n"
	.string "pants!$"

ConqueredMightyena_Text::
# 852 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY} gg u won$"

MareepHelp_Text::
# 863 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Reep! Reep! {COLOR BLUE}(BRO HELP ME PLZ)$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Loss::
# 1091 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Well I'll be.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Loss::
# 1094 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ain't she just the sweetest lil thang\n you've eva laid yer eyes on?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Loss::
# 1097 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ack! My super special bug Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Loss::
# 1101 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Heck!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Loss::
# 1105 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "It's all Kyogre now...$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Loss::
# 1109 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I think I'm going to need a new pair of\nshorts...$"
