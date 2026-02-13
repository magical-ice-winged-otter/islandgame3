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


ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival::
# 175 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 176 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 177 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Movement_0
# 178 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 179 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Common_Movement_Delay48
# 180 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 181 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Common_Movement_FacePlayer
# 182 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 183 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Text_0
# 184 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Common_Movement_FaceOriginalDirection
# 186 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Movement_1
# 187 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 188 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger1::
# 192 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 193 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger1_Movement_0
# 194 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 195 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger2::
# 199 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 200 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger2_Movement_0
# 201 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 202 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger3::
# 206 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 207 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger4::
# 211 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 212 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger4_Movement_0
# 213 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger5::
# 218 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 219 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger5_Movement_0
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 221 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger6::
# 225 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 226 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger6_Movement_0
# 227 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 228 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_TeleportGauntlet::
# 232 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 8
# 234 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, -3, 1
# 236 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8000, 34
# 237 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8001, 11
# 238 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	callnative TeleportCamera
# 239 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject OBJ_EVENT_ID_PLAYER
# 241 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 34, 11
# 246 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 249 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	createfollowernpc OBJ_EVENT_GFX_MELISSA, FNPC_ALL, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact, PARTNER_MEADOWS_RIVAL
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main::
# 258 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_FOLLOWERS_DISABLED
# 261 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_0
# 262 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 263 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterUp
# 264 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 265 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay 30
# 266 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_0
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 274 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_QuestionMark
# 275 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 276 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 277 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 278 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 279 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 280 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playbgm MUS_HG_LYRA, TRUE
# 282 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_1
# 283 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 286 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_1
# 291 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 292 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 293 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 294 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay 30
# 295 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 296 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Movement_0
# 297 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 298 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 299 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 300 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_2
# 312 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_no_intro TRAINER_MINTY_MEADOWS_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_3
# 313 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 314 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_2
# 319 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_4
# 326 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	savebgm MUS_DUMMY
# 327 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadedefaultbgm
# 330 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 9
# 331 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 14, -3, 1
# 332 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 15, -3, 1
# 333 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 16, -3, 1
# 334 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 9, 18, 12
# 335 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_5
# 336 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_2
# 338 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 9
# 339 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 340 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 342 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_6
# 350 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 351 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 352 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Movement_0
# 353 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 354 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 355 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 356 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_7
# 361 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 362 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 363 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 364 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 365 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 366 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 367 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 368 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 369 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 370 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 371 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 372 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 373 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 374 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_8
# 382 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 383 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 385 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_9
# 386 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 387 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 388 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 389 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	special HealPlayerParty
# 392 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_TeleportGauntlet
# 394 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 1
# 395 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_StartedQuest
# 396 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_2:
	return


ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1::
# 402 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_MINTY_MEADOWS_STATE, 1
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1_1
	return

ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1_1:
# 403 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 405 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 408 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 6
# 409 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 6, 32, 37
# 410 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1_Movement_0
# 411 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 6
# 412 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 415 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, Common_Movement_Delay48
# 416 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 6
# 419 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 420 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1_Movement_1
# 421 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 6
# 424 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 7
# 425 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 7, 32, 37
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1_Movement_2
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 7, ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1_Movement_3
# 428 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 7
# 429 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 6
# 430 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 6
# 431 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 7
# 433 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_0, 1
# 434 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2::
# 441 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 444 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_0
# 449 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 450 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 7, ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Movement_0
# 451 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Movement_0
# 452 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 453 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 454 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 455 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 7
# 456 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 457 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 458 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Movement_0
# 459 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 460 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 461 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 462 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterUp
# 463 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 464 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_1
# 470 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 3
# 471 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_SawMareepPreFight
# 472 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena::
# 478 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 479 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	faceplayer
# 480 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 481 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_NO_CATCHING
# 482 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_NO_RUNNING
# 483 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SHADOW_MIGHTYENA, 25, ITEM_SITRUS_BERRY, NUM_NATURES, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_SNARL, MOVE_POISON_FANG, MOVE_SAND_ATTACK, MOVE_SWAGGER
# 484 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setwilddoubleflag
# 485 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 486 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 487 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dowildbattle
# 488 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 489 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 490 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 491 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 493 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_RESULT
# 494 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_3
# 496 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_4
# 499 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	destroyfollowernpc
# 500 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1:
# 502 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_3:
# 495 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	destroyfollowernpc
	goto ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_4:
	goto ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1


ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene::
# 506 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 4
# 507 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena
# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8000, 61
# 511 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8001, 16
# 512 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	callnative TeleportCamera
# 513 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 8
# 514 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 61, 16
# 517 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 8, 60, 16
# 518 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 519 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 7
# 520 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, -3, 1
# 521 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 524 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_0
# 531 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 532 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Movement_0
# 533 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 534 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_1
# 535 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 536 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 537 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Movement_1
# 538 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 539 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_2
# 546 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 547 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 549 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_3
# 554 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 555 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Movement_2
# 556 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 557 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Movement_3
# 558 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 559 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_4
# 565 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Movement_4
# 566 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 567 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_5
# 568 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 571 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 572 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8000, 11
# 573 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8001, 8
# 574 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	callnative TeleportCamera
# 575 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject OBJ_EVENT_ID_PLAYER
# 576 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 8
# 577 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 9
# 578 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 6
# 579 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 580 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 9
# 581 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 582 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 583 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 584 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 585 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 11, 8
# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 8, 10, 8
# 587 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 9, 11, 6
# 588 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 6, 10, 6
# 589 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 592 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_6
# 599 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 600 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Movement_5
# 601 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 9
# 602 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 603 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Movement_6
# 604 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 9
# 607 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_7
# 612 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 614 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1_Movement_0
# 615 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 616 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 617 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Movement_7
# 618 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 619 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 620 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1_Movement_0
# 621 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 622 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FacePlayer
# 623 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 624 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 625 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_8
# 631 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 632 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 633 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 634 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay 60
# 635 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 636 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Movement_0
# 637 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 638 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterRight
# 639 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 640 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay 60
# 641 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_9
# 647 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_10
# 654 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_11
# 660 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_12
# 667 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 668 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Movement_8
# 669 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 670 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 671 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 672 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 8
# 673 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 6
# 674 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 9
# 675 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, -3, 1
# 676 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 9, -3, 1
# 677 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 6, -3, 1
# 678 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	special HealPlayerParty
# 680 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	completequest QUEST_MINTY_MEADOWS_MELISSA
# 681 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	startquest QUEST_MARYA_GYM_CHALLENGE
# 682 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
# 683 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_MINTY_MEADOWS_RIVAL_DEFEATED
# 684 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_5, 1
# 685 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_Mareep::
# 693 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 694 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 695 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox MareepHelp_Text
# 696 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_Mark_Audrey::
# 705 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 2
	return


ISLANDGAME_MINTY_MEADOWS_2_WelcomeBack::
# 713 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 714 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 715 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 716 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Movement_0
# 717 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_WelcomeBack_Text_0
# 718 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 722 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 1
# 724 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_TeleportGauntlet
	return


ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage::
# 730 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_0
# 731 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	message ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_1
# 732 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmessage
# 733 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_2, YES
# 734 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_3, NO
# 735 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultistack 20, 8, TRUE, 3, FALSE, NO, DYN_MULTICHOICE_CB_NONE
	return


ISLANDGAME_MINTY_MEADOWS_2_CantLeave::
# 741 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 742 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 743 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_3
# 745 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_4
# 784 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_5
ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1:
# 825 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_3:
# 744 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_WelcomeBack
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_4:
# 746 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	facefollowernpc
# 747 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage
# 748 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_RESULT
# 749 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case YES, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_7
# 778 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case NO, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_8
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_5:
# 785 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	facefollowernpc
# 786 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage
# 787 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_RESULT
# 788 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case YES, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_10
# 818 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case NO, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_11
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_7:
# 750 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_Mark_Audrey
# 752 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_0
# 753 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 755 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 757 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8000, 30
# 758 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8001, 10
# 759 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	callnative TeleportCamera
# 760 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject OBJ_EVENT_ID_PLAYER
# 762 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 30, 10
# 763 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	destroyfollowernpc
# 764 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 8
# 765 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, 34, 10
# 767 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_8:
# 779 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_1
# 780 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 781 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 782 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_10:
# 789 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_Mark_Audrey
# 792 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_0
# 793 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 795 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 797 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8000, 30
# 798 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8001, 10
# 799 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	callnative TeleportCamera
# 800 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject OBJ_EVENT_ID_PLAYER
# 802 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 30, 10
# 803 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	destroyfollowernpc
# 804 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 8
# 805 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, 34, 10
# 807 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_11:
# 819 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_1
# 820 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 821 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 822 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1


ISLANDGAME_MINTY_MEADOWS_2_CantLeave2::
# 829 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_MINTY_MEADOWS_2_CantLeave2_1
	return

ISLANDGAME_MINTY_MEADOWS_2_CantLeave2_1:
# 830 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave2_Text_0
# 831 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkDown
# 832 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 833 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	return


ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle::
# 838 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 839 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	faceplayer
# 840 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 841 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_DRIFLOON, 13, 0, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0
# 842 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_DRIFLOON, CRY_MODE_ENCOUNTER
# 843 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 844 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 845 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dowildbattle
# 846 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 847 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 849 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_RESULT
# 850 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_3
# 852 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_4
# 854 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_5
# 857 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_6
# 861 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1:
# 863 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_3:
	goto ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1

ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_4:
	goto ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1

ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_5:
# 855 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_DAILY_MINTY_MEADOWS_DRIFLOON
# 856 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1

ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_6:
# 858 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_DAILY_MINTY_MEADOWS_DRIFLOON
# 859 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1


ISLANDGAME_MINTY_MEADOWS_2_CantGoYet::
# 867 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_MINTY_MEADOWS_2_CantGoYet_1
	return

ISLANDGAME_MINTY_MEADOWS_2_CantGoYet_1:
# 868 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantGoYet_Text_0
# 869 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkDown
# 870 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 871 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3::
# 888 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_11, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Loss
# 889 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4::
# 893 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_12, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Loss
# 894 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5::
# 898 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_13, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Loss
# 899 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6::
# 903 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_14, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Loss
# 904 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7::
# 908 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_15, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Loss
# 909 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8::
# 913 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_16, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Loss
# 914 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_1, MSGBOX_AUTOCLOSE
	return


# 177 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Movement_0:
# 177 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
	step_end

# 186 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Movement_1:
# 186 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 186 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
	step_end

# 193 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger1_Movement_0:
# 193 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 193 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 193 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 200 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger2_Movement_0:
# 200 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 200 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 212 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger4_Movement_0:
# 212 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 212 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 219 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger5_Movement_0:
# 219 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 219 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 219 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 226 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger6_Movement_0:
# 226 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 226 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 226 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 226 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 261 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_0:
# 261 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 261 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 261 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_4
# 261 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
# 261 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 261 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 261 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 261 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 261 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
# 261 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 261 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 261 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 261 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 282 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_1:
# 282 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 282 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 282 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 282 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_2:
# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 410 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1_Movement_0:
# 410 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 410 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 410 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 410 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 420 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1_Movement_1:
# 420 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 420 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 420 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1_Movement_2:
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 426 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
	step_end

# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1_Movement_3:
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 427 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
	step_end

# 450 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Movement_0:
# 450 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 532 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Movement_0:
# 532 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 532 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 532 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 532 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
	step_end

# 537 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Movement_1:
# 537 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
# 537 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
# 537 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
# 537 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
	step_end

# 555 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Movement_2:
# 555 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_slow_up
	step_end

# 557 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Movement_3:
# 557 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 557 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_question_mark
	step_end

# 565 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Movement_4:
# 565 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
	step_end

# 600 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Movement_5:
# 600 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

# 603 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Movement_6:
# 603 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 603 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 603 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 603 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 603 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 603 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 603 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 603 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

# 617 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Movement_7:
# 617 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
# 617 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
# 617 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
	step_end

# 668 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Movement_8:
# 668 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 668 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 668 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 668 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 668 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 668 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 668 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 668 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 668 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 668 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 668 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 668 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 668 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 668 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 668 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 668 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

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
# 183 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Ah, young trainer! Please give me a\n"
	.string "moment. I am trying to count my Mareep.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_0:
# 268 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Nnngh...{PAUSE 30} I'm only missing one\n"
	.string "more Pokémon!{PAUSE 30} Where in the world is it?\p"
	.string "{COLOR DARK_GRAY}Waah! I give up! I'm convinced it\n"
	.string "doesn't even exist!\p"
	.string "{COLOR DARK_GRAY}Eh?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_1:
# 288 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Hiya there!{PAUSE 30}... Err...{PAUSE 30} umm,{PAUSE 30} have we met\n"
	.string "before?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_2:
# 302 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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
# 312 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ack! Looks like I was the one doing the\nunderestimating!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_4:
# 321 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Drats, I wasn't expecting to\n"
	.string "lose to you, {PLAYER}...\p"
	.string "{COLOR DARK_GRAY}W-Wait, I didn't mean it like that! I was\n"
	.string "just surprised at how skilled you are!\p"
	.string "{COLOR DARK_GRAY}Sorry... I say things before I speak a\n"
	.string "lot, ehe...$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_5:
# 335 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Excuse me! Young trainers!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_6:
# 344 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}I'm Paul, I'm one of the\n"
	.string "owners of Fresa Farms.\p"
	.string "{COLOR DARK_GRAY}Have you two seen a Mareep with a blue\n"
	.string "collar wandering around by chance?\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}I haven't... Did you lose one?\p"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}I'm afraid so... When I was\n"
	.string "counting my Mareep after taking them\l"
	.string "out to graze, I noticed one was missing.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_7:
# 358 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Oh my... that's terrible! We'll\n"
	.string "help you look, right {PLAYER}?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_8:
# 376 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Really? Oh, I can't thank you two\n"
	.string "enough!\p"
	.string "{COLOR DARK_GRAY}The last place I saw my precious Mareep\n"
	.string "was in the forest to the east.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_9:
# 385 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Sounds good! {PLAYER}! Let's\n"
	.string "head over there immediately!$"

ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_0:
# 446 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}We finally found it!$"

ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_1:
# 466 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Agh! Quick, {PLAYER}! We need\n"
	.string "to save that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_0:
# 526 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Phew... That was an intense\n"
	.string "fight. Thank goodness we came in time!\p"
	.string "{COLOR RED}(That Mightyena...{PAUSE 30} Something seemed off\n"
	.string "about it.)\p"
	.string "{COLOR RED}(It had some sort of dark aura...\n"
	.string "radiating from it?)$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_1:
# 534 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}It looks like Mareep isn't hurt at all.\n"
	.string "That's a relief...$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_2:
# 541 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Reeeep...\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Awh. It's okay. You're safe with\n"
	.string "us now!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_3:
# 551 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Ehe...! We make a pretty solid team,\n"
	.string "don't we, {PLAYER}?$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_4:
# 561 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}...Eh? Something was off about the\n"
	.string "Pokémon? What do you mean?\p"
	.string "{COLOR DARK_GRAY}Red eyes? A wicked dark aura? Hmmmn... I\n"
	.string "didn't see any of that.$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_5:
# 567 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Well, either way, what's important is\n"
	.string "that Mareep is safe! Let's get him back\l"
	.string "to old man Paulie!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_6:
# 594 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Oh, my precious baby is safe and\n"
	.string "sound! I am in your debt, trainers!\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Heheh. It was nothing, really!\n"
	.string "That big Mightyena didn't stand a\l"
	.string "chance!\p"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Please, take one of these as a\n"
	.string "token of my gratitude!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_7:
# 609 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Feel free to visit our farm\n"
	.string "anytime!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_8:
# 627 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Watching how in sync you and\n"
	.string "your Pokémon are, despite having just\l"
	.string "met them...\p"
	.string "{COLOR DARK_GRAY}{PLAYER}!{PAUSE 30} You should enter the\n"
	.string "Silverwing Festival Tournament!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_9:
# 642 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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
# 648 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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
# 655 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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
# 661 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}With that said, bye-bye for now,\n"
	.string "{PLAYER}!\p"
	.string "{COLOR DARK_GRAY}Oh! I almost forgot! Let's exchange\n"
	.string "phone numbers so we can keep in touch!\p"
	.string "{COLOR DARK_GRAY}Mhm...{PAUSE 30} Alright...{PAUSE 30} and there we go! All set!\p"
	.string "{COLOR DARK_GRAY}Let's meet up again soon!$"

ISLANDGAME_MINTY_MEADOWS_2_WelcomeBack_Text_0:
# 717 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}You're back! Let's go get that\n"
	.string "Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_0:
# 730 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Eh? We can't leave yet! We told\n"
	.string "old man Paulie we'd help find his Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_1:
# 731 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Do you really have to leave?$"

ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_2:
# 733 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Yes$"

ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_3:
# 734 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "No$"

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_0:
# 752 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Okay... Please come back as soon as you\n"
	.string "can!$"

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_1:
# 779 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Alright! Let's get back to business!$"

ISLANDGAME_MINTY_MEADOWS_2_CantLeave2_Text_0:
# 830 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Huh? We have to help Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_CantGoYet_Text_0:
# 868 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR RED}(I should really help the farm owner\n"
	.string "find his Mareep first...)$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_0:
# 888 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Howdy pardner! Howsabout we get a\n"
	.string "quick scrap in?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_1:
# 889 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "A mighty fine party of Pokes ya got on\n"
	.string "ya.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_0:
# 893 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}My Pokemans are purty cute. Wanna take\n"
	.string "a gander?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_1:
# 894 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I love my darlin' lil ball of cotton\n"
	.string "candy. Even if she don't fight too well.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_0:
# 898 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}I have a super special Bug Pokémon. You\n"
	.string "literally can't get it.\p"
	.string "How jealous are you?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_1:
# 899 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Okay, maybe I should be more specific.\p"
	.string "You can't catch a Vivillon with the same\n"
	.string "pattern as mine here in Marya.\p"
	.string "That's because a Vivillon's pattern is\n"
	.string "dependent on where it lives!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_0:
# 903 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Hi!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_1:
# 904 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I'm not a very interesting person, so I\n"
	.string "don't really say much.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_0:
# 908 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}POKÉMON IS LOVE! POKÉMON IS LIFE!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_1:
# 909 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I was only nine years old when I met my\n"
	.string "Riolu. It's the coolest Pokémon ever.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_0:
# 913 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Shorts are awesome. They're so comfy to\n"
	.string "wear. Don't you agree?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_1:
# 914 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Shorts are easily an S tier pick for\n"
	.string "pants!$"

ConqueredMightyena_Text::
# 688 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY} gg u won$"

MareepHelp_Text::
# 699 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Reep! Reep! {COLOR BLUE}(BRO HELP ME PLZ)$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Loss::
# 925 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Well I'll be.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Loss::
# 928 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ain't she just the sweetest lil thang\n you've eva laid yer eyes on?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Loss::
# 931 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ack! My super special bug Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Loss::
# 935 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Heck!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Loss::
# 939 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "It's all Kyogre now...$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Loss::
# 943 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I think I'm going to need a new pair of\nshorts...$"
