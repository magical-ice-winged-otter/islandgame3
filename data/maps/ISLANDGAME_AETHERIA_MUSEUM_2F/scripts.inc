ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts::
# 13 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 25 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjecthidden LOCALID_MUSEUM_MELISSA_3
# 16 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	compare VAR_AETHERIA_STATE, 4
	goto_if_eq ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 20 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setflag FLAG_TEMP_3
	return

ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 17 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setflag B_FLAG_FOLLOWERS_DISABLED
	return

ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 26 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	map_script_2 VAR_AETHERIA_STATE, 4, ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 31 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	map_script_2 VAR_AETHERIA_STATE, 6, ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 27 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene
	return

ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 32 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene::
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock
# 40 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_EXIT
# 41 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectvisible LOCALID_MUSEUM_MELISSA_3
# 42 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 43 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Movement_0
# 44 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 45 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA_3, ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Movement_1
# 46 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 47 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_BIKE_HOP
# 48 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA_3, ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Movement_2
# 49 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 50 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_BIKE_HOP
# 51 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA_3, ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Movement_2
# 52 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 53 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 30
# 54 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Text_0, MSGBOX_AUTOCLOSE
# 59 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 30
# 60 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Movement_3
# 61 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 62 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Text_1, MSGBOX_AUTOCLOSE
# 67 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 30
# 68 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Movement_3
# 69 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 70 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA_3, ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Movement_4
# 71 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Text_2, MSGBOX_AUTOCLOSE
# 81 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_RG_BALL_CLICK
# 82 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special Script_FadeOutMapMusic
# 83 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 84 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 85 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Text_3, MSGBOX_AUTOCLOSE
# 88 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_LIEPARD, CRY_MODE_NORMAL
# 89 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 90 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_ICE_BREAK
# 91 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 92 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 93 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_FLEE
# 94 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 95 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 96 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_JUMP_KICK
# 97 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 98 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Text_4, MSGBOX_AUTOCLOSE
# 101 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA_3, ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Movement_5
# 102 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 104 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Text_5, MSGBOX_AUTOCLOSE
# 107 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_PIN
# 108 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Movement_6
# 109 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 110 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Text_6
# 117 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 118 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Movement_7
# 119 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 120 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA_3, ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Movement_8
# 121 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 122 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_EXIT
# 123 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 124 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_MELISSA_3
# 125 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjecthidden LOCALID_MUSEUM_MELISSA_3
# 126 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_AETHERIA_STATE, 7
# 127 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_CantLeaveYet::
# 131 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock
# 132 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_CantLeaveYet_Text_0, MSGBOX_AUTOCLOSE
# 135 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_CantLeaveYet_Movement_0
# 136 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene::
# 158 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock
# 159 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_0
# 160 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 161 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_CURATOR, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_1
# 162 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 163 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_0, MSGBOX_AUTOCLOSE
# 168 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_CURATOR, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_2
# 169 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 172 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 173 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special Script_FadeOutMapMusic
# 174 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 175 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 176 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	doweather
# 178 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_1, MSGBOX_AUTOCLOSE
# 182 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 183 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_THUNDER
# 184 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 187 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene1
# 190 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2
# 193 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3
# 196 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene4
# 199 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5
# 201 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 202 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_2
# 206 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 207 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 9
# 208 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 7
# 209 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 210 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 211 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special Script_FadeOutMapMusic
# 212 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 213 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playbgm MUS_LILYCOVE_MUSEUM, TRUE
# 214 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	clearflag B_FLAG_FOLLOWERS_DISABLED
# 216 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 217 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_APPLAUSE
# 218 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_AUDIENCE_MEMBER_1, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3
# 219 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_AUDIENCE_MEMBER_2, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3
# 220 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_AUDIENCE_MEMBER_3, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3
# 221 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_AUDIENCE_MEMBER_4, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3
# 222 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_AUDIENCE_MEMBER_5, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3
# 223 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_AUDIENCE_MEMBER_6, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3
# 224 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA_2, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3
# 225 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 226 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA_2, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_4
# 227 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 228 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_5
# 229 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 230 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_3, MSGBOX_YESNO
# 235 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_2
# 251 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_6
# 254 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 255 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_6
# 256 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 257 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 30
# 258 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_7
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_1:
# 266 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 268 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_CURATOR, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_7
# 269 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 270 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA_2, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_8
# 271 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_8
# 272 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 30
# 273 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_8, MSGBOX_AUTOCLOSE
# 280 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_CURATOR, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_9
# 281 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 282 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_EXIT
# 283 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 284 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_CURATOR
# 285 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_AUDIENCE_MEMBER_1
# 286 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_AUDIENCE_MEMBER_2
# 287 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_AUDIENCE_MEMBER_3
# 288 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_AUDIENCE_MEMBER_4
# 289 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_AUDIENCE_MEMBER_5
# 290 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_AUDIENCE_MEMBER_6
# 291 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 292 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 30
# 293 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_BIKE_HOP
# 294 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA_2, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_10
# 295 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 296 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_5
# 297 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_9, MSGBOX_AUTOCLOSE
# 300 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA_2, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_11
# 301 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 302 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_MELISSA_2
# 303 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_EXIT
# 304 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 305 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_AETHERIA_STATE, 5
# 306 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setflag FLAG_TEMP_3
# 307 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_2:
# 236 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_4
# 239 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 240 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_6
# 241 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 242 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 30
# 243 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_5
	goto ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_1


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene1::
# 315 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 7
# 316 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 20
# 317 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 318 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 319 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 240
# 320 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_EARTHQUAKE
# 321 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Long
# 322 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 323 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 324 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 325 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_EXPLOSION
# 326 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 327 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 328 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_ENCOUNTER
# 329 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 330 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 331 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 332 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene1_Text_0, MSGBOX_AUTOCLOSE
# 336 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2::
# 341 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 23
# 342 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 20
# 343 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 344 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 346 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_RANCHER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_0
# 347 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_0
# 348 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ABSOL, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_1
# 349 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 350 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_RANCHER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_2
# 351 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_8
# 352 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 40
# 353 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ABSOL_MEGA, CRY_MODE_ENCOUNTER
# 354 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 355 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ABSOL, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_3
# 356 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 357 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_DACHSBUN, CRY_MODE_NORMAL
# 358 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 359 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_PIN
# 360 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_RANCHER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4
# 361 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ABSOL, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_5
# 362 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 363 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_CUT
# 364 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_RANCHER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_6
# 365 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 366 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_PIN
# 367 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_7
# 368 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 369 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 370 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_DACHSBUN, CRY_MODE_NORMAL
# 371 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 372 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_8
# 373 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 374 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_JUMP_KICK
# 375 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ABSOL, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_9
# 376 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_10
# 377 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 378 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 380 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Text_0
# 384 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 385 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3::
# 390 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 7
# 391 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 32
# 392 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 393 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setflag FLAG_TEMP_1
# 394 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_LUGIA
# 395 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 397 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 120
# 398 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
# 399 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 400 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 401 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 402 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 403 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 404 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
# 405 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 406 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 408 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 409 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ARTICUNO, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_0
# 410 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 20
# 411 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 412 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ZAPDOS, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_1
# 413 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 20
# 414 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 415 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MOLTRES, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_1
# 416 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 418 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Text_0
# 421 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 423 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 424 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 425 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_ICY_WIND
# 426 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 427 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_ICE_BREAK
# 428 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 429 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 430 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 431 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_THUNDERBOLT
# 432 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 433 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 434 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 435 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLAMETHROWER
# 436 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 437 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 438 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 439 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 440 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_ENCOUNTER
# 441 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 442 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_HYPER_BEAM
# 443 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 444 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_HYPER_BEAM2
# 445 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 446 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 447 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 448 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 449 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 450 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_WEAK
# 451 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 452 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_WEAK
# 453 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 454 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_WEAK
# 455 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 456 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_NIGHTMARE
# 457 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 458 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 459 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_PIN
# 460 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ELDER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4
# 462 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ARTICUNO, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_2
# 463 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 20
# 464 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ZAPDOS, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_3
# 465 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 20
# 466 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MOLTRES, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_3
# 467 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 469 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ARTICUNO
# 470 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ZAPDOS
# 471 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_MOLTRES
# 472 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ARTICUNO, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 473 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ZAPDOS, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 474 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_MOLTRES, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 475 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ARTICUNO
# 476 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ZAPDOS
# 477 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_MOLTRES
# 478 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
# 480 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MAN_CUTSCENE, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_4
# 481 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_EXPERT, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_4
# 482 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ELDER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_5
# 483 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 484 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 486 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 488 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Text_1
# 494 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 495 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene4::
# 500 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 23
# 501 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 32
# 502 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 503 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 504 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special Script_FadeOutMapMusic
# 505 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 507 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 120
# 508 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 509 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 510 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 511 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setfieldeffectargument 0, 1
# 512 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 513 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 514 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 120
# 516 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene4_Text_0
# 520 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 521 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5::
# 526 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 7
# 527 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 32
# 528 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 529 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 531 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 120
# 533 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setfieldeffectargument 0, 1
# 534 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 535 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 536 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 537 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ARTICUNO, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_0
# 538 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ZAPDOS, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_0
# 539 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MOLTRES, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_0
# 540 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 541 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	clearflag FLAG_TEMP_1
# 542 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_LUGIA
# 543 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
# 544 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 547 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 549 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_PIN
# 550 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ELDER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4
# 551 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MAN_CUTSCENE, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4
# 552 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_EXPERT, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4
# 553 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 555 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playbgm MUS_BW_VS_WINNING, TRUE
# 556 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 557 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 558 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 559 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 560 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 562 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ARTICUNO
# 563 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ZAPDOS
# 564 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_MOLTRES
# 565 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ARTICUNO, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 566 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ZAPDOS, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 567 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_MOLTRES, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 568 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectxyperm AETHERIA_MUSEUM_2F_ARTICUNO, 7, 33
# 569 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectxyperm AETHERIA_MUSEUM_2F_ZAPDOS, 9, 32
# 570 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectxyperm AETHERIA_MUSEUM_2F_MOLTRES, 5, 32
# 571 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ARTICUNO
# 572 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ZAPDOS
# 573 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_MOLTRES
# 574 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
# 576 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 578 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 120
# 580 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_0
# 584 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 586 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 587 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 588 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 589 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 590 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_LUGIA, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_1
# 591 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 30
# 592 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 593 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ARTICUNO, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_2
# 594 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ZAPDOS, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_2
# 595 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MOLTRES, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_2
# 596 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 597 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_ICY_WIND
# 598 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 599 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 600 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 601 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLAME_WHEEL2
# 602 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 603 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_STRING_SHOT
# 604 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 605 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 606 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 607 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 608 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 609 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_WEAK
# 610 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 611 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_EXPLOSION
# 612 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Long
# 613 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 614 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_FAINT
# 615 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 616 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 617 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_WINGSOFCHAOS
# 618 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 619 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setweather WEATHER_NONE
# 620 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	doweather
# 621 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special WaitWeather
# 622 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 623 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special Script_FadeOutMapMusic
# 624 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 625 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playbgm MUS_SOOTOPOLIS, TRUE
# 628 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_LUGIA, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_3
# 629 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 630 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ARTICUNO, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_4
# 631 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ZAPDOS, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_5
# 632 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MOLTRES, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_5
# 633 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 635 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ARTICUNO
# 636 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ZAPDOS
# 637 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_MOLTRES
# 638 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_LUGIA
# 639 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ELDER
# 640 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_EXPERT
# 641 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_MAN_CUTSCENE
# 642 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ARTICUNO, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 643 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ZAPDOS, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 644 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_MOLTRES, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 645 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_LUGIA, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 646 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ELDER, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 647 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_EXPERT, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 648 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_MAN_CUTSCENE, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 649 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectxyperm AETHERIA_MUSEUM_2F_ARTICUNO, 7, 30
# 650 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectxyperm AETHERIA_MUSEUM_2F_ZAPDOS, 9, 31
# 651 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectxyperm AETHERIA_MUSEUM_2F_MOLTRES, 5, 31
# 652 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ARTICUNO
# 653 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ZAPDOS
# 654 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_MOLTRES
# 655 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_LUGIA
# 656 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ELDER
# 657 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_EXPERT
# 658 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_MAN_CUTSCENE
# 659 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
# 660 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_APPLAUSE
# 661 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 663 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_1, MSGBOX_AUTOCLOSE
# 668 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 669 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_NORMAL
# 670 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 671 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setfieldeffectargument 0, 1
# 672 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 673 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 674 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 675 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_LUGIA
# 676 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 677 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
# 679 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_2, MSGBOX_AUTOCLOSE
	return


# 43 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Movement_0:
# 43 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 43 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_left
	step_end

# 45 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Movement_1:
# 45 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 45 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_right
	step_end

# 48 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Movement_2:
# 48 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	jump_in_place_right
	step_end

# 60 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Movement_3:
# 60 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_left
# 60 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
# 60 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
	step_end

# 70 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Movement_4:
# 70 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	emote_question_mark
# 70 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
# 70 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
	step_end

# 101 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Movement_5:
# 101 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 101 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_left
	step_end

# 108 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Movement_6:
# 108 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	emote_exclamation_mark
# 108 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
# 108 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
# 108 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_left
# 108 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
# 108 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
	step_end

# 118 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Movement_7:
# 118 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 118 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
	step_end

# 120 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Movement_8:
# 120 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	unlock_facing_direction
# 120 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 120 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
	step_end

# 135 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_CantLeaveYet_Movement_0:
# 135 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 159 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_0:
# 159 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 159 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 159 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 159 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 159 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 159 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 159 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 159 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 159 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 159 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 159 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 159 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_up
	step_end

# 161 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_1:
# 161 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 161 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 161 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
# 161 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
	step_end

# 168 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_2:
# 168 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 168 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 168 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 168 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_down
	step_end

# 218 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3:
# 218 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	emote_heart
# 218 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_up
# 218 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_up
# 218 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_up
# 218 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_up
# 218 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_up
	step_end

# 226 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_4:
# 226 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_left
# 226 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_left
	step_end

# 228 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_5:
# 228 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_right
	step_end

# 240 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_6:
# 240 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_right
	step_end

# 268 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_7:
# 268 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 268 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
	step_end

# 270 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_8:
# 270 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_up
	step_end

# 280 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_9:
# 280 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 280 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 280 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 280 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 280 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 280 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 280 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 280 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 280 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 280 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 280 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
	step_end

# 294 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_10:
# 294 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	jump_in_place_left
	step_end

# 300 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_11:
# 300 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 300 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 300 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 300 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 300 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 300 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 300 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 300 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 300 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 300 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 300 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 300 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 300 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
	step_end

# 346 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_0:
# 346 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 346 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 346 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 346 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 346 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 346 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
	step_end

# 348 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_1:
# 348 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 348 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 348 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 348 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 348 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 348 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
	step_end

# 350 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_2:
# 350 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_up
# 350 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	emote_question_mark
	step_end

# 355 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_3:
# 355 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_down
# 355 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_down
# 355 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
# 355 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
# 355 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
# 355 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
# 355 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
	step_end

# 360 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4:
# 360 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	emote_exclamation_mark
	step_end

# 361 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_5:
# 361 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	jump_2_down
# 361 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_faster_down
	step_end

# 364 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_6:
# 364 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 364 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_down
	step_end

# 367 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_7:
# 367 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_right
# 367 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 367 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_left
# 367 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	emote_exclamation_mark
# 367 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_right
# 367 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_right
	step_end

# 372 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_8:
# 372 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
	step_end

# 375 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_9:
# 375 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_left
# 375 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	jump_in_place_right
# 375 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_left
	step_end

# 376 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_10:
# 376 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_faster_left
# 376 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_faster_left
	step_end

# 409 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_0:
# 409 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 409 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 409 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 409 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 409 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
	step_end

# 412 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_1:
# 412 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 412 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 412 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 412 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
	step_end

# 462 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_2:
# 462 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 462 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 462 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 462 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 462 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 464 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_3:
# 464 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 464 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 464 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 464 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 480 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_4:
# 480 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 480 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 482 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_5:
# 482 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_up
# 482 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_up
# 482 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
# 482 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
# 482 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 482 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 537 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_0:
# 537 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 537 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
	step_end

# 590 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_1:
# 590 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 590 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 590 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 590 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 590 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 590 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
	step_end

# 593 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_2:
# 593 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 593 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 593 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 593 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 593 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 593 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 593 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
	step_end

# 628 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_3:
# 628 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 628 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 628 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 628 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 628 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 628 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 630 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_4:
# 630 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 630 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 630 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 631 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_5:
# 631 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 631 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 631 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 631 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 631 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 631 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 631 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Text_0:
# 55 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}What a fascinating exhibit! I\n"
	.string "never thought I'd see an authentic\l"
	.string "silver feather!\p"
	.string "That statue of Lugia was also cool too!\n"
	.string "Really makes you wonder what his true\l"
	.string "form is...\p"
	.string "What caught your eye at the exhibit,\n"
	.string "{PLAYER}?$"

ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Text_1:
# 63 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Oh...? The giant rock? That was their\n"
	.string "newest discovery, right?\p"
	.string "It kinda just looked like a plain old\n"
	.string "boulder you'd find anywhere in Marya.\p"
	.string "But I'm no rock-o-holic like Mr. Solomon.\n"
	.string "What intrigued you about it?$"

ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Text_2:
# 72 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Eh? A strange feeling? Like the one you\n"
	.string "felt with that Mightyena?\p"
	.string "Mmmm, I wasn't really getting like any\n"
	.string "bad vibes from it.\p"
	.string "Buuuut I also didn't see anything off\n"
	.string "with the Mightyena either...\p"
	.string "O-Oh, please don't misunderstand! Not\n"
	.string "that I don't trust you or anything!\p"
	.string "Maybe I'm just too much of a dummy to\n"
	.string "see what you're seeing, ehe.\p"
	.string "But if that rock gave you the same\n"
	.string "heebie-jeebies as the Mightyena...\p"
	.string "Hmmmmn...$"

ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Text_3:
# 86 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Eep! Who turned off the lights?$"

ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Text_4:
# 99 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Aaagh!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Text_5:
# 105 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Owwwie...$"

ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene_Text_6:
# 111 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "I'm alright, thankies.\p"
	.string "Whoever came rushing downstairs was in\n"
	.string "a real big hurry, that's for sure...\p"
	.string "You heard that crash as well, right?\n"
	.string "That couldn't have been good.\p"
	.string "{COLOR GREEN}Solomon: {COLOR DARK_GRAY}I-It's gone! It's been stolen!\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Gone? Stolen? {PLAYER},\n"
	.string "let's head upstairs and investigate!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_CantLeaveYet_Text_0:
# 133 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "{COLOR RED}(I should check out the commotion\n"
	.string "upstairs first.)$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_0:
# 164 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Salutations, everyone! Thank you for\n"
	.string "coming to see our latest and most\l"
	.string "ambitious addition yet!\p"
	.string "My name is Solomon. I am the curator of\n"
	.string "this museum, and today I present to\l"
	.string "you, a glimpse into Marya's past...\p"
	.string "Please enjoy... The Darkest Night!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_1:
# 179 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "“Long ago,{PAUSE 30} a great calamity befell upon\n"
	.string "our isles.”$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_2:
# 203 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "In honor of the heavenly dragon's\n"
	.string "heroism, we granted it the name of\l"
	.string "Lugia.\p"
	.string "The Savior of Marya.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_3:
# 231 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Woooooah. Those were some\n"
	.string "breathtaking visuals!\p"
	.string "The sound design too, it really felt like\n"
	.string "we were experiencing the events of The\l"
	.string "Darkest Night in-person!\p"
	.string "What did you think of it, {PLAYER}?\n"
	.string "Did you enjoy it?$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_4:
# 237 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Eeeeh? Reaaally? I thought it was a\n"
	.string "really faithful adaptation!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_5:
# 244 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "I seeee. You wanted to see what the\n"
	.string "wicked beast looked like?\p"
	.string "It's funny you mention that! To this\n"
	.string "day, we still don't really know much\l"
	.string "about its appearance.\p"
	.string "Our ancestors described the wicked\n"
	.string "beast as something so terrifying, that\l"
	.string "anyone who saw it would go insane!\p"
	.string "I'd hate to have been around to see it...\n"
	.string "We owe Lugia big time for what he did!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_6:
# 252 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Yaaaay! I'm glad you did too! I was a lil\n"
	.string "worried that you would find this stuff\l"
	.string "kinda boring...$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_7:
# 259 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Oooh, you're curious of where Lugia is\n"
	.string "today?\p"
	.string "Weeeell, we're not really sure where he\n"
	.string "went after The Darkest Night.\p"
	.string "But every year, the Silverwing Order\n"
	.string "makes a pilgrimage to the Northern\l"
	.string "Islands, where they saw Lugia fly in and\l"
	.string "out from!\p"
	.string "So he's gotta be around there\n"
	.string "somewhere, right?\p"
	.string "Maybe someday, we'll head there and see\n"
	.string "for ourselves! Heehee.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_8:
# 274 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Thank you, thank you! You are all too\n"
	.string "kind.\p"
	.string "I am happy to hear that all of you\n"
	.string "enjoyed our humble presentation!\p"
	.string "Now that you've all been given some\n"
	.string "background information...\p"
	.string "Come forth, and witness, the recovered\n"
	.string "remnants of that fateful day!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_9:
# 298 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}The recovered remnants!? What\n"
	.string "are we standing around here for?$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene1_Text_0:
# 333 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "The Great Volcano erupted in a fit of\n"
	.string "unbridled rage beneath a torrential\l"
	.string "night.\p"
	.string "From the billowing smoke emerged an\n"
	.string "abominable beast with wings of blight.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Text_0:
# 381 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "The suffocating smog tainted the skies\n"
	.string "and the pouring rain.\p"
	.string "Corrupting Pokémon into heartless\n"
	.string "creatures of savagery and disdain.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Text_0:
# 419 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "The Winged Mirages flew from their\n"
	.string "roosts to face the wicked beast...$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Text_1:
# 489 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "But even they stood no chance against\n"
	.string "the beast's unfathomable power.\p"
	.string "And our ancestors could only watch, {PAUSE 30}as\n"
	.string "their protectors betrayed them during\l"
	.string "their darkest hour.\p"
	.string "“Someone... anyone... please heed our\n"
	.string "plea!”\p"
	.string "“Exorcise this foul creature and bring\n"
	.string "salvation to these isles, I pray to\l"
	.string "thee!”$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene4_Text_0:
# 517 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Then suddenly, from the deepest,\n"
	.string "darkest depths of the sea...\p"
	.string "...arose an ethereal dragon with wings\n"
	.string "of glimmering silver majesty.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_0:
# 581 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "With a deafening roar and a powerful\n"
	.string "wingbeat...\p"
	.string "...the dragon summoned a tempest that\n"
	.string "caused the virulent corruption to\l"
	.string "retreat!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_1:
# 664 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Together, the dragon and the Winged\n"
	.string "Mirages felled the wicked beast.\p"
	.string "Sending it back from whence it came,\n"
	.string "sealed away, never again to be released.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_2:
# 680 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "As daybreak arrived, the dragon\n"
	.string "returned to the briny deep.\p"
	.string "...but should catastrophe strike once\n"
	.string "more, it would return...\p"
	.string "A promise it vowed to keep.$"
