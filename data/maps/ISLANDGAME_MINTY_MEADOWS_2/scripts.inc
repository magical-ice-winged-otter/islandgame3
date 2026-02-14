ISLANDGAME_MINTY_MEADOWS_2_MapScripts::
# 24 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_RESUME
# 29 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_RESUME:
# 25 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_RESUME_2
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 26 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject VAR_LAST_TALKED
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettimeofday
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 36 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto_if_set FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 40 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 41 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 0, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 42 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 43 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
# 44 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
# 45 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 4, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 32 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 17, -3, 1
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 37 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_5, 1
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 41 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_InitialRival
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 42 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_StartedQuest
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 43 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_PausedQuest
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 44 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_SawMareepPreFight
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 45 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena
	return


ISLANDGAME_MINTY_MEADOWS_2_InitialRival::
# 57 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, 12, 5
# 58 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 9, 32, 10
# 59 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 14, 35, 8
# 60 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 15, 34, 10
# 61 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 16, 33, 12
# 62 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 6, -3, 1
# 63 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, -3, 1
	return


ISLANDGAME_MINTY_MEADOWS_2_StartedQuest::
# 70 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_4, 1
# 72 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 9, 10, 9
# 73 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 6, 61, 13
# 74 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, 61, 15
# 75 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 76 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	return


ISLANDGAME_MINTY_MEADOWS_2_PausedQuest::
# 82 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_4, 1
# 83 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, 34, 10
# 84 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_LOOK_AROUND
# 85 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 9, 10, 9
# 86 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 6, 61, 13
# 87 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, 61, 15
# 88 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 89 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	return


ISLANDGAME_MINTY_MEADOWS_2_SawMareepPreFight::
# 95 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_4, 1
# 96 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 9, 10, 9
# 97 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 6, 61, 13
# 98 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, 61, 14
# 99 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 100 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	return


ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena::
# 106 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_4, 0
# 110 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, -3, 1
	return


ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact::
# 117 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 118 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 0, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_2
# 119 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_2
# 120 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_3
# 121 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_4
# 122 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 4, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_5
	return

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_2:
# 119 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_0, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_3:
# 120 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_0, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_4:
# 121 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_1, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_5:
# 122 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_2, MSGBOX_NPC
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact::
# 127 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 128 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_3
# 129 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_3
# 130 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_4
# 131 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 4, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_5
ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1:
# 139 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 140 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_3:
# 129 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_0, MSGBOX_NPC
	goto ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_4:
# 130 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_1, MSGBOX_NPC
	goto ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_5:
# 131 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_2, MSGBOX_NPC
	goto ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1


ISLANDGAME_MINTY_MEADOWS_2_FlowerSign_Interact::
# 144 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_FlowerSign_Interact_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_TunnelSign_Interact::
# 148 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_TunnelSign_Interact_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_PopsHouse_Interact::
# 152 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PopsHouse_Interact_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival::
# 159 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 160 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 161 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Movement_0
# 162 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 163 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Text_0
# 164 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Movement_1
# 166 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Movement_2
# 167 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 168 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger1::
# 172 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 173 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger1_Movement_0
# 174 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 175 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger2::
# 179 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 180 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger2_Movement_0
# 181 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 182 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger3::
# 186 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 187 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger4::
# 191 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 192 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger4_Movement_0
# 193 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 194 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger5::
# 198 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 199 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger5_Movement_0
# 200 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 201 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger6::
# 205 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 206 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger6_Movement_0
# 207 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 208 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_TeleportGauntlet::
# 213 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 8
# 215 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, -3, 1
# 217 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8000, 34
# 218 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8001, 11
# 219 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	callnative TeleportCamera
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject OBJ_EVENT_ID_PLAYER
# 222 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 34, 11
# 227 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 230 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	createfollowernpc OBJ_EVENT_GFX_MELISSA, FNPC_ALL, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact, PARTNER_MEADOWS_RIVAL
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main::
# 237 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_FOLLOWERS_DISABLED
# 239 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_0
# 256 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 258 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_0
# 263 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 265 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_1
# 266 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 267 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playbgm MUS_HG_LYRA, TRUE
# 268 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_2
# 269 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 271 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_1
# 274 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 276 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_3
# 277 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 278 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 279 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_4
# 280 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 282 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_2
# 290 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 292 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_no_intro TRAINER_MINTY_MEADOWS_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_3
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_2
# 297 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_4
# 302 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 304 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	savebgm MUS_DUMMY
# 305 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadedefaultbgm
# 308 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 9
# 309 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 14, -3, 1
# 310 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 15, -3, 1
# 311 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 16, -3, 1
# 312 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 9, 18, 12
# 314 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_5
# 317 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 319 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_5
# 320 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 321 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_6
# 322 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 324 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_6
# 330 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 332 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 333 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_4
# 334 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 336 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_7
# 339 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 341 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_7
# 342 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 344 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_8
# 348 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 350 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_8
# 351 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 353 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_9
# 356 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 358 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_6
# 359 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 361 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	special HealPlayerParty
# 362 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_TeleportGauntlet
# 363 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 1
# 364 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_StartedQuest
# 365 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_2:
	return


ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2::
# 371 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 373 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_0
# 376 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 378 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 7, ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Movement_0
# 379 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Movement_1
# 380 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 381 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 382 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 383 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 7
# 384 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 386 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 387 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Movement_2
# 388 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 390 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_1
# 393 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 395 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 3
# 396 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_SawMareepPreFight
# 397 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena::
# 403 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 404 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	faceplayer
# 405 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 406 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_NO_CATCHING
# 407 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_NO_RUNNING
# 408 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SHADOW_MIGHTYENA, 25, ITEM_SITRUS_BERRY, NUM_NATURES, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_SNARL, MOVE_POISON_FANG, MOVE_SAND_ATTACK, MOVE_SWAGGER
# 409 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setwilddoubleflag
# 410 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 411 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 412 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dowildbattle
# 413 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 414 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 415 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_NO_RUNNING
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_2
# 422 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	destroyfollowernpc
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_5
# 429 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 4
# 430 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena
# 431 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8000, 61
# 432 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8001, 16
# 433 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	callnative TeleportCamera
# 434 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 8
# 435 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_8
# 436 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_8
# 437 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 61, 16
# 438 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 8, 60, 16
# 439 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 440 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 7
# 441 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, -3, 1
# 442 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 444 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_0
# 449 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 451 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_0
# 452 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 454 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_1
# 457 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 459 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 460 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_1
# 461 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 463 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_2
# 468 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_6
# 469 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 471 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_3
# 474 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 476 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_2
# 477 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 478 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_3
# 479 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 481 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_4
# 485 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 487 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_4
# 488 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 490 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_5
# 493 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 495 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 496 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8000, 11
# 497 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8001, 8
# 498 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	callnative TeleportCamera
# 499 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject OBJ_EVENT_ID_PLAYER
# 500 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 8
# 501 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 9
# 502 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 6
# 503 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_6
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 505 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_8
# 506 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 507 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_8
# 508 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 509 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 11, 8
# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 8, 10, 8
# 511 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 9, 11, 6
# 512 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 6, 10, 6
# 513 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_6
# 520 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 522 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_5
# 523 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 524 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 525 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 526 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_6
# 527 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 529 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_7
# 532 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 534 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_7
# 535 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 536 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 537 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_8
# 538 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 539 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 540 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_7
# 541 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 542 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_9
# 543 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 544 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_10
# 546 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_8
# 550 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 552 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_11
# 553 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 554 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 555 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_12
# 556 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 558 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_9
# 564 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_10
# 571 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_11
# 577 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_12
# 583 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 585 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_6
# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_13
# 587 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_14
# 588 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 590 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 8
# 591 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 6
# 592 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 9
# 593 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, -3, 1
# 594 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 9, -3, 1
# 595 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 6, -3, 1
# 596 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	special HealPlayerParty
# 597 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	completequest QUEST_MINTY_MEADOWS_MELISSA
# 598 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	startquest QUEST_MARYA_GYM_CHALLENGE
# 599 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
# 600 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_MINTY_MEADOWS_RIVAL_DEFEATED
# 601 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_5, 1
# 602 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_2:
# 418 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	end

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_5:
# 425 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	end


ISLANDGAME_MINTY_MEADOWS_2_Mareep::
# 606 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 607 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 608 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Mareep_Text_0
# 611 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_CantLeave::
# 615 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 616 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 617 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_3
# 634 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_4
# 635 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_4
ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1:
# 680 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_3:
# 618 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Movement_0
# 619 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 620 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 621 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Movement_1
# 623 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_0
# 626 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 631 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 1
# 632 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_TeleportGauntlet
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_4:
# 636 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	facefollowernpc
# 637 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_1
# 641 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_2, YES
# 642 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_3, NO
# 643 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultistack 20, 8, TRUE, 3, FALSE, NO, DYN_MULTICHOICE_CB_NONE
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_RESULT
# 644 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case YES, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_6
# 671 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case NO, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_7
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_6:
# 645 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 2
# 647 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_4
# 650 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 652 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 653 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	destroyfollowernpc
# 655 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, 34, 10
# 656 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8000, 30
# 657 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8001, 10
# 658 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	callnative TeleportCamera
# 659 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject OBJ_EVENT_ID_PLAYER
# 660 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 30, 10
# 661 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_7:
# 672 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_5
# 675 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Movement_1
# 676 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 677 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1


ISLANDGAME_MINTY_MEADOWS_2_CantLeave2::
# 684 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_MINTY_MEADOWS_2_CantLeave2_1
	return

ISLANDGAME_MINTY_MEADOWS_2_CantLeave2_1:
# 685 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave2_Text_0
# 688 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_5
# 689 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 690 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	return


ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle::
# 695 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 696 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	faceplayer
# 697 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_DRIFLOON, CRY_MODE_ENCOUNTER
# 698 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 699 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 700 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 701 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setwildbattle SPECIES_DRIFLOON, 13
# 702 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dowildbattle
# 703 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 704 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 706 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 707 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_2
# 707 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_2
ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1:
# 710 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_7
ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_6:
# 714 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_2:
# 708 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_DAILY_MINTY_MEADOWS_DRIFLOON
	goto ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1

ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_7:
# 711 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_6


ISLANDGAME_MINTY_MEADOWS_2_CantGoYet::
# 718 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_MINTY_MEADOWS_2_CantGoYet_1
	return

ISLANDGAME_MINTY_MEADOWS_2_CantGoYet_1:
# 719 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantGoYet_Text_0
# 720 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_5
# 721 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 722 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3::
# 729 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_11, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_1
# 730 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4::
# 734 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_12, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_1
# 735 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5::
# 739 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_13, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_1
# 740 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6::
# 744 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_14, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_1
# 745 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7::
# 749 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_15, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_1
# 750 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8::
# 754 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_16, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_1
# 755 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_2, MSGBOX_AUTOCLOSE
	return


# 161 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Movement_0:
# 161 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 161 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 161 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 161 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 161 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 161 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 161 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 161 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_player
	step_end

# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Movement_1:
# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_original_direction
	step_end

# 166 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Movement_2:
# 166 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 166 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
	step_end

# 173 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger1_Movement_0:
# 173 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 173 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 173 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 180 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger2_Movement_0:
# 180 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 180 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 192 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger4_Movement_0:
# 192 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 192 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 199 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger5_Movement_0:
# 199 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 199 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 199 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 206 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger6_Movement_0:
# 206 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 206 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 206 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 206 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 239 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_0:
# 240 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 241 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 241 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_4
# 242 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
# 243 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 243 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 244 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
# 245 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 245 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 246 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 247 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 248 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
# 249 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 249 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 250 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 251 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 252 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

# 265 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_1:
# 265 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_question_mark
# 265 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 265 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 265 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 265 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 265 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 265 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 265 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
	step_end

# 268 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_2:
# 268 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 268 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 268 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 268 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

# 276 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_3:
# 276 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_up
# 276 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 276 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 279 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_4:
# 279 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 279 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 279 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 279 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 279 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 279 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 279 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
	step_end

# 319 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_5:
# 319 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 319 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 319 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 319 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 319 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 319 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 319 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 319 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 319 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 319 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 319 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 321 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_6:
# 321 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
	step_end

# 341 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_7:
# 341 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 341 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 341 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 341 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_faster_up
# 341 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 341 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 341 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 341 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 341 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 350 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Movement_8:
# 350 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

# 378 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Movement_0:
# 378 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 378 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

# 379 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Movement_1:
# 379 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
	step_end

# 387 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Movement_2:
# 387 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 387 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 387 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 387 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 387 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 387 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 387 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 387 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_faster_up
	step_end

# 451 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_0:
# 451 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 451 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 451 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 451 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
	step_end

# 460 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_1:
# 460 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
# 460 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
# 460 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
# 460 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
	step_end

# 476 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_2:
# 476 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_slow_up
	step_end

# 478 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_3:
# 478 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 478 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_question_mark
	step_end

# 487 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_4:
# 487 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
	step_end

# 522 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_5:
# 522 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

# 526 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_6:
# 526 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 526 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 526 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 526 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 526 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 526 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 526 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 526 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
	step_end

# 534 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_7:
# 534 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 534 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 534 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 534 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 537 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_8:
# 537 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
# 537 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
# 537 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
	step_end

# 542 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_9:
# 542 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_player
	step_end

# 544 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_10:
# 544 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
	step_end

# 552 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_11:
# 552 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_question_mark
# 552 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 552 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 552 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 552 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 555 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_12:
# 555 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 555 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_faster_right
# 555 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 555 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 555 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 555 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
	step_end

# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_13:
# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

# 587 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Movement_14:
# 587 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 587 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 587 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 587 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 587 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 587 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
	step_end

# 618 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Movement_0:
# 618 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_left
	step_end

# 675 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Movement_1:
# 675 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
	step_end

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_0:
# 119 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I could've sworn it was somewhere in the\n"
	.string "forest to the east...$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_1:
# 121 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "What? A wild Mightyena was chasing my\n"
	.string "precious Mareep?\p"
	.string "You have to save him, please!$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_2:
# 122 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Thank you so much for saving my\n"
	.string "precious Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_0:
# 129 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Hmm... where could it be?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_1:
# 130 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "We need to save that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_2:
# 131 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Phew... I need to take a break after all\n"
	.string "that running...$"

ISLANDGAME_MINTY_MEADOWS_2_FlowerSign_Interact_Text_0:
# 144 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}MINTY MEADOWS\n"
	.string "Beware of scary Drifloon at night!$"

ISLANDGAME_MINTY_MEADOWS_2_TunnelSign_Interact_Text_0:
# 148 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}TRAVELER'S TUNNEL\n"
	.string "WARNING: THICK FOG INSIDE!$"

ISLANDGAME_MINTY_MEADOWS_2_PopsHouse_Interact_Text_0:
# 152 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}POPS' RESIDENCE\n"
	.string "Owner of Minty Meadows!$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Text_0:
# 163 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Ah, young trainer! Please give me a\n"
	.string "moment. I am trying to count my Mareep.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_0:
# 259 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Nnngh...{PAUSE 30} I'm only missing one\n"
	.string "more Pokémon!{PAUSE 30} Where in the world is it?\p"
	.string "{COLOR DARK_GRAY}Waah! I give up! I'm convinced it\n"
	.string "doesn't even exist!\p"
	.string "{COLOR DARK_GRAY}Eh?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_1:
# 272 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Hiya there!{PAUSE 30}... Err...{PAUSE 30} umm,{PAUSE 30} have we met\n"
	.string "before?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_2:
# 283 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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
# 292 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ack! Looks like I was the one doing the\nunderestimating!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_4:
# 298 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Drats, I wasn't expecting to\n"
	.string "lose to you, {PLAYER}...\p"
	.string "{COLOR DARK_GRAY}W-Wait, I didn't mean it like that! I was\n"
	.string "just surprised at how skilled you are!\p"
	.string "{COLOR DARK_GRAY}Sorry... I say things before I speak a\n"
	.string "lot, ehe...$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_5:
# 315 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Excuse me! Young trainers!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_6:
# 325 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}I'm Paul, I'm one of the\n"
	.string "owners of Fresa Farms.\p"
	.string "{COLOR DARK_GRAY}Have you two seen a Mareep with a blue\n"
	.string "collar wandering around by chance?\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}I haven't... Did you lose one?\p"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}I'm afraid so... When I was\n"
	.string "counting my Mareep after taking them\l"
	.string "out to graze, I noticed one was missing.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_7:
# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Oh my... that's terrible! We'll\n"
	.string "help you look, right {PLAYER}?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_8:
# 345 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Really? Oh, I can't thank you two\n"
	.string "enough!\p"
	.string "{COLOR DARK_GRAY}The last place I saw my precious Mareep\n"
	.string "was in the forest to the east.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_9:
# 354 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Sounds good! {PLAYER}! Let's\n"
	.string "head over there immediately!$"

ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_0:
# 374 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}We finally found it!$"

ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_1:
# 391 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Agh! Quick, {PLAYER}! We need\n"
	.string "to save that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_0:
# 445 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Phew... That was an intense\n"
	.string "fight. Thank goodness we came in time!\p"
	.string "{COLOR RED}(That Mightyena...{PAUSE 30} Something seemed off\n"
	.string "about it.)\p"
	.string "{COLOR RED}(It had some sort of dark aura...\n"
	.string "radiating from it?)$"

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_1:
# 455 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}It looks like Mareep isn't hurt at all.\n"
	.string "That's a relief...$"

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_2:
# 464 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Reeeep...\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Awh. It's okay. You're safe with\n"
	.string "us now!$"

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_3:
# 472 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Ehe...! We make a pretty solid team,\n"
	.string "don't we, {PLAYER}?$"

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_4:
# 482 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}...Eh? Something was off about the\n"
	.string "Pokémon? What do you mean?\p"
	.string "{COLOR DARK_GRAY}Red eyes? A wicked dark aura? Hmmmn... I\n"
	.string "didn't see any of that.$"

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_5:
# 491 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Well, either way, what's important is\n"
	.string "that Mareep is safe! Let's get him back\l"
	.string "to old man Paulie!$"

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_6:
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Oh, my precious baby is safe and\n"
	.string "sound! I am in your debt, trainers!\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Heheh. It was nothing, really!\n"
	.string "That big Mightyena didn't stand a\l"
	.string "chance!\p"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Please, take one of these as a\n"
	.string "token of my gratitude!$"

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_7:
# 530 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Paul: {COLOR DARK_GRAY}Feel free to visit our farm\n"
	.string "anytime!$"

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_8:
# 547 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Watching how in sync you and\n"
	.string "your Pokémon are, despite having just\l"
	.string "met them...\p"
	.string "{COLOR DARK_GRAY}{PLAYER}!{PAUSE 30} You should enter the\n"
	.string "Silverwing Festival Tournament!$"

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_9:
# 559 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_10:
# 565 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_11:
# 572 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_Text_12:
# 578 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}With that said, bye-bye for now,\n"
	.string "{PLAYER}!\p"
	.string "{COLOR DARK_GRAY}Oh! I almost forgot! Let's exchange\n"
	.string "phone numbers so we can keep in touch!\p"
	.string "{COLOR DARK_GRAY}Mhm...{PAUSE 30} Alright...{PAUSE 30} and there we go! All set!\p"
	.string "{COLOR DARK_GRAY}Let's meet up again soon!$"

ISLANDGAME_MINTY_MEADOWS_2_Mareep_Text_0:
# 609 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Reep! Reep! {COLOR BLUE}(BRO HELP ME PLZ)$"

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_0:
# 624 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}You're back! Let's go get that\n"
	.string "Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_1:
# 638 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Eh? We can't leave yet! We told\n"
	.string "old man Paulie we'd help find his Mareep!\p"
	.string "Do you really have to leave?$"

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_2:
# 641 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Yes$"

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_3:
# 642 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "No$"

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_4:
# 648 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Okay... Please come back as soon as you\n"
	.string "can!$"

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_5:
# 673 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Alright! Let's get back to business!$"

ISLANDGAME_MINTY_MEADOWS_2_CantLeave2_Text_0:
# 686 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Huh? We have to help Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_CantGoYet_Text_0:
# 719 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR RED}(I should really help the farm owner\n"
	.string "find his Mareep first...)$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_0:
# 729 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Howdy pardner! Howsabout we get a\n"
	.string "quick scrap in?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_1:
# 729 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Well I'll be.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_2:
# 730 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "A mighty fine party of Pokes ya got on\n"
	.string "ya.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_0:
# 734 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}My Pokemans are purty cute. Wanna take\n"
	.string "a gander?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_1:
# 734 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ain't she just the sweetest lil thang\n you've eva laid yer eyes on?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_2:
# 735 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I love my darlin' lil ball of cotton\n"
	.string "candy. Even if she don't fight too well.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_0:
# 739 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}I have a super special Bug Pokémon. You\n"
	.string "literally can't get it.\p"
	.string "How jealous are you?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_1:
# 739 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ack! My super special bug Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_2:
# 740 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Okay, maybe I should be more specific.\p"
	.string "You can't catch a Vivillon with the same\n"
	.string "pattern as mine here in Marya.\p"
	.string "That's because a Vivillon's pattern is\n"
	.string "dependent on where it lives!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_0:
# 744 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Hi!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_1:
# 744 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Heck!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_2:
# 745 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I'm not a very interesting person, so I\n"
	.string "don't really say much.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_0:
# 749 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}POKÉMON IS LOVE! POKÉMON IS LIFE!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_1:
# 749 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "It's all Kyogre now...$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_2:
# 750 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I was only nine years old when I met my\n"
	.string "Riolu. It's the coolest Pokémon ever.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_0:
# 754 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Shorts are awesome. They're so comfy to\n"
	.string "wear. Don't you agree?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_1:
# 754 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I think I'm going to need a new pair of\nshorts...$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_2:
# 755 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Shorts are easily an S tier pick for\n"
	.string "pants!$"
