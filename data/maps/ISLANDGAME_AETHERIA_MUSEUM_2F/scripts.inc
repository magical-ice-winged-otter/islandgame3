ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts::
# 12 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 24 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjecthidden LOCALID_MUSEUM_MELISSA_3
# 15 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	compare VAR_AETHERIA_STATE, 4
	goto_if_eq ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 19 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setflag FLAG_TEMP_3
	return

ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 16 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setflag B_FLAG_FOLLOWERS_DISABLED
	return

ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 25 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	map_script_2 VAR_AETHERIA_STATE, 4, ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 30 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	map_script_2 VAR_AETHERIA_STATE, 6, ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 26 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene
	return

ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 31 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_BlackoutCutscene::
# 38 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene::
# 43 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock
# 44 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_0
# 45 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 46 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_CURATOR, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_1
# 47 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 48 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_0, MSGBOX_AUTOCLOSE
# 53 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_CURATOR, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_2
# 54 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 57 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 58 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special Script_FadeOutMapMusic
# 59 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 60 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 61 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	doweather
# 63 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_1, MSGBOX_AUTOCLOSE
# 67 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 68 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_THUNDER
# 69 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 72 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene1
# 75 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2
# 78 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3
# 81 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene4
# 84 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5
# 86 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 87 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_2
# 91 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 92 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 9
# 93 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 7
# 94 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 95 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 96 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special Script_FadeOutMapMusic
# 97 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 98 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playbgm MUS_LILYCOVE_MUSEUM, TRUE
# 99 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	clearflag B_FLAG_FOLLOWERS_DISABLED
# 101 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 102 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_APPLAUSE
# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_AUDIENCE_MEMBER_1, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3
# 104 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_AUDIENCE_MEMBER_2, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3
# 105 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_AUDIENCE_MEMBER_3, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3
# 106 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_AUDIENCE_MEMBER_4, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3
# 107 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_AUDIENCE_MEMBER_5, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3
# 108 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_AUDIENCE_MEMBER_6, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3
# 109 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA_2, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3
# 110 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 111 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA_2, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_4
# 112 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 113 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_5
# 114 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 115 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_3, MSGBOX_YESNO
# 120 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_2
# 136 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_6
# 139 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 140 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_6
# 141 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 142 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 30
# 143 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_7
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_1:
# 151 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 153 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_CURATOR, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_7
# 154 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 155 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA_2, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_8
# 156 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_8
# 157 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 30
# 158 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_8, MSGBOX_AUTOCLOSE
# 165 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_CURATOR, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_9
# 166 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 167 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_EXIT
# 168 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 169 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_CURATOR
# 170 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_AUDIENCE_MEMBER_1
# 171 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_AUDIENCE_MEMBER_2
# 172 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_AUDIENCE_MEMBER_3
# 173 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_AUDIENCE_MEMBER_4
# 174 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_AUDIENCE_MEMBER_5
# 175 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_AUDIENCE_MEMBER_6
# 176 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 177 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 30
# 178 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_BIKE_HOP
# 179 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA_2, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_10
# 180 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 181 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_5
# 182 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_9, MSGBOX_AUTOCLOSE
# 185 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA_2, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_11
# 186 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 187 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_MELISSA_2
# 188 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_EXIT
# 189 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 190 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_AETHERIA_STATE, 5
# 191 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setflag FLAG_TEMP_3
# 192 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_2:
# 121 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_4
# 124 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 125 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_6
# 126 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 127 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 30
# 128 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_5
	goto ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_1


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene1::
# 200 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 7
# 201 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 20
# 202 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 203 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 204 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 240
# 205 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_EARTHQUAKE
# 206 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Long
# 207 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 208 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 209 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 210 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_EXPLOSION
# 211 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 212 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 213 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_ENCOUNTER
# 214 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 215 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 216 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 217 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene1_Text_0, MSGBOX_AUTOCLOSE
# 221 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2::
# 226 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 23
# 227 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 20
# 228 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 229 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 231 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_RANCHER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_0
# 232 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_0
# 233 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ABSOL, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_1
# 234 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 235 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_RANCHER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_2
# 236 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_8
# 237 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 40
# 238 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ABSOL_MEGA, CRY_MODE_ENCOUNTER
# 239 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 240 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ABSOL, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_3
# 241 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 242 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_DACHSBUN, CRY_MODE_NORMAL
# 243 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 244 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_PIN
# 245 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_RANCHER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4
# 246 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ABSOL, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_5
# 247 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 248 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_CUT
# 249 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_RANCHER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_6
# 250 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 251 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_PIN
# 252 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_7
# 253 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 254 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 255 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_DACHSBUN, CRY_MODE_NORMAL
# 256 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 257 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_8
# 258 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 259 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_JUMP_KICK
# 260 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ABSOL, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_9
# 261 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_10
# 262 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 263 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 265 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Text_0
# 269 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 270 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3::
# 275 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 7
# 276 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 32
# 277 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 278 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setflag FLAG_TEMP_1
# 279 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_LUGIA
# 280 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 282 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 120
# 283 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
# 284 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 285 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 286 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 287 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 288 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 289 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
# 290 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 291 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 293 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 294 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ARTICUNO, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_0
# 295 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 20
# 296 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 297 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ZAPDOS, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_1
# 298 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 20
# 299 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 300 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MOLTRES, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_1
# 301 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 303 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Text_0
# 306 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 308 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 309 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 310 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_ICY_WIND
# 311 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 312 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_ICE_BREAK
# 313 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 314 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 315 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 316 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_THUNDERBOLT
# 317 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 318 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 319 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 320 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLAMETHROWER
# 321 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 322 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 323 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 324 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 325 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_ENCOUNTER
# 326 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 327 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_HYPER_BEAM
# 328 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 329 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_HYPER_BEAM2
# 330 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 331 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 332 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 333 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 334 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 335 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_WEAK
# 336 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 337 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_WEAK
# 338 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 339 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_WEAK
# 340 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 341 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_NIGHTMARE
# 342 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 343 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 344 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_PIN
# 345 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ELDER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4
# 347 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ARTICUNO, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_2
# 348 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 20
# 349 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ZAPDOS, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_3
# 350 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 20
# 351 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MOLTRES, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_3
# 352 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 354 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ARTICUNO
# 355 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ZAPDOS
# 356 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_MOLTRES
# 357 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ARTICUNO, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 358 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ZAPDOS, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 359 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_MOLTRES, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 360 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ARTICUNO
# 361 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ZAPDOS
# 362 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_MOLTRES
# 363 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
# 365 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MAN_CUTSCENE, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_4
# 366 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_EXPERT, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_4
# 367 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ELDER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_5
# 368 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 369 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 371 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 373 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Text_1
# 379 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 380 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene4::
# 385 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 23
# 386 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 32
# 387 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 388 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 389 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special Script_FadeOutMapMusic
# 390 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 392 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 120
# 393 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 394 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 395 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 396 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setfieldeffectargument 0, 1
# 397 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 398 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 399 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 120
# 401 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene4_Text_0
# 405 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 406 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5::
# 411 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 7
# 412 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 32
# 413 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 414 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 416 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 120
# 418 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setfieldeffectargument 0, 1
# 419 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 420 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 421 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 422 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ARTICUNO, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_0
# 423 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ZAPDOS, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_0
# 424 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MOLTRES, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_0
# 425 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 426 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	clearflag FLAG_TEMP_1
# 427 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_LUGIA
# 428 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
# 429 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 432 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 434 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_PIN
# 435 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ELDER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4
# 436 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MAN_CUTSCENE, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4
# 437 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_EXPERT, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4
# 438 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 440 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playbgm MUS_BW_VS_WINNING, TRUE
# 441 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 442 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 443 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 444 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 445 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 447 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ARTICUNO
# 448 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ZAPDOS
# 449 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_MOLTRES
# 450 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ARTICUNO, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 451 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ZAPDOS, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 452 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_MOLTRES, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 453 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectxyperm AETHERIA_MUSEUM_2F_ARTICUNO, 7, 33
# 454 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectxyperm AETHERIA_MUSEUM_2F_ZAPDOS, 9, 32
# 455 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectxyperm AETHERIA_MUSEUM_2F_MOLTRES, 5, 32
# 456 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ARTICUNO
# 457 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ZAPDOS
# 458 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_MOLTRES
# 459 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
# 461 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 463 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 120
# 465 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_0
# 469 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 471 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 472 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 473 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 474 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 475 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_LUGIA, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_1
# 476 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 30
# 477 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 478 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ARTICUNO, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_2
# 479 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ZAPDOS, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_2
# 480 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MOLTRES, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_2
# 481 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 482 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_ICY_WIND
# 483 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 484 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 485 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 486 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLAME_WHEEL2
# 487 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 488 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_STRING_SHOT
# 489 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 490 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 491 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 492 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 493 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 494 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_WEAK
# 495 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 496 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_EXPLOSION
# 497 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Long
# 498 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 499 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_FAINT
# 500 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 501 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 502 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_WINGSOFCHAOS
# 503 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 504 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setweather WEATHER_NONE
# 505 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	doweather
# 506 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special WaitWeather
# 507 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 508 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special Script_FadeOutMapMusic
# 509 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 510 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playbgm MUS_SOOTOPOLIS, TRUE
# 513 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_LUGIA, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_3
# 514 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 515 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ARTICUNO, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_2
# 516 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ZAPDOS, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_4
# 517 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MOLTRES, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_4
# 518 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 520 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ARTICUNO
# 521 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ZAPDOS
# 522 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_MOLTRES
# 523 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_LUGIA
# 524 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ELDER
# 525 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_EXPERT
# 526 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_MAN_CUTSCENE
# 527 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ARTICUNO, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 528 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ZAPDOS, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 529 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_MOLTRES, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 530 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_LUGIA, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 531 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ELDER, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 532 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_EXPERT, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 533 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_MAN_CUTSCENE, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 534 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectxyperm AETHERIA_MUSEUM_2F_ARTICUNO, 7, 30
# 535 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectxyperm AETHERIA_MUSEUM_2F_ZAPDOS, 9, 31
# 536 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectxyperm AETHERIA_MUSEUM_2F_MOLTRES, 5, 31
# 537 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ARTICUNO
# 538 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ZAPDOS
# 539 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_MOLTRES
# 540 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_LUGIA
# 541 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ELDER
# 542 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_EXPERT
# 543 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_MAN_CUTSCENE
# 544 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
# 545 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_APPLAUSE
# 546 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 548 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_1, MSGBOX_AUTOCLOSE
# 553 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 554 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_NORMAL
# 555 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 556 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setfieldeffectargument 0, 1
# 557 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 558 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 559 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 560 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_LUGIA
# 561 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 562 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
# 564 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_2, MSGBOX_AUTOCLOSE
	return


# 44 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_0:
# 44 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 44 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 44 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 44 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 44 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 44 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 44 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 44 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 44 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 44 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 44 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 44 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_up
	step_end

# 46 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_1:
# 46 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 46 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 46 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
# 46 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
	step_end

# 53 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_2:
# 53 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 53 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 53 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 53 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_down
	step_end

# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3:
# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	emote_heart
# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_up
# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_up
# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_up
# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_up
# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_up
	step_end

# 111 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_4:
# 111 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_left
# 111 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_left
	step_end

# 113 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_5:
# 113 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_right
	step_end

# 125 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_6:
# 125 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_right
	step_end

# 153 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_7:
# 153 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 153 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
	step_end

# 155 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_8:
# 155 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_up
	step_end

# 165 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_9:
# 165 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 165 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 165 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 165 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 165 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 165 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 165 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 165 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 165 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 165 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 165 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
	step_end

# 179 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_10:
# 179 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	jump_in_place_left
	step_end

# 185 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_11:
# 185 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 185 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 185 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 185 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 185 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 185 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 185 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 185 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 185 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 185 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 185 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 185 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 185 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
	step_end

# 231 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_0:
# 231 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 231 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 231 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 231 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 231 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 231 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
	step_end

# 233 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_1:
# 233 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 233 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 233 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 233 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 233 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 233 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
	step_end

# 235 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_2:
# 235 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_up
# 235 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	emote_question_mark
	step_end

# 240 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_3:
# 240 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_down
# 240 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_down
# 240 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
# 240 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
# 240 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
# 240 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
# 240 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
	step_end

# 245 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4:
# 245 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	emote_exclamation_mark
	step_end

# 246 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_5:
# 246 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	jump_2_down
# 246 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_faster_down
	step_end

# 249 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_6:
# 249 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 249 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_down
	step_end

# 252 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_7:
# 252 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_right
# 252 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 252 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_left
# 252 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	emote_exclamation_mark
# 252 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_right
# 252 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_right
	step_end

# 257 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_8:
# 257 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
	step_end

# 260 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_9:
# 260 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_left
# 260 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	jump_in_place_right
# 260 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_left
	step_end

# 261 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_10:
# 261 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_faster_left
# 261 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_faster_left
	step_end

# 294 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_0:
# 294 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 294 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 294 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 294 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 294 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
	step_end

# 297 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_1:
# 297 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 297 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 297 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 297 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
	step_end

# 347 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_2:
# 347 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 347 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 347 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 347 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 347 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 349 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_3:
# 349 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 349 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 349 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 349 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 365 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_4:
# 365 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 365 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 367 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_5:
# 367 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_up
# 367 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_up
# 367 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
# 367 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
# 367 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 367 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 422 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_0:
# 422 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 422 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
	step_end

# 475 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_1:
# 475 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 475 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 475 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 475 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 475 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 475 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
	step_end

# 478 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_2:
# 478 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 478 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 478 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 478 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 478 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 478 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 478 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
	step_end

# 513 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_3:
# 513 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 513 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 513 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 513 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 513 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 513 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 516 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_4:
# 516 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 516 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 516 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 516 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 516 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 516 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 516 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_0:
# 49 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Salutations, everyone! Thank you for\n"
	.string "coming to see our latest and most\l"
	.string "ambitious addition yet!\p"
	.string "My name is Solomon. I am the curator of\n"
	.string "this museum, and today I present to\l"
	.string "you, a glimpse into Marya's past...\p"
	.string "Please enjoy... The Darkest Night!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_1:
# 64 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "“Long ago,{PAUSE 30} a great calamity befell upon\n"
	.string "our isles.”$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_2:
# 88 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "In honor of the heavenly dragon's\n"
	.string "heroism, we granted it the name of\l"
	.string "Lugia.\p"
	.string "The Savior of Marya.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_3:
# 116 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Woooooah. Those were some\n"
	.string "breathtaking visuals!\p"
	.string "The sound design too, it really felt like\n"
	.string "we were experiencing the events of The\l"
	.string "Darkest Night in-person!\p"
	.string "What did you think of it, {PLAYER}?\n"
	.string "Did you enjoy it?$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_4:
# 122 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Eeeeh? Reaaally? I thought it was a\n"
	.string "really faithful adaptation!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_5:
# 129 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
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
# 137 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Yaaaay! I'm glad you did too! I was a lil\n"
	.string "worried that you would find this stuff\l"
	.string "kinda boring...$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_7:
# 144 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
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
# 159 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Thank you, thank you! You are all too\n"
	.string "kind.\p"
	.string "I am happy to hear that all of you\n"
	.string "enjoyed our humble presentation!\p"
	.string "Now that you've all been given some\n"
	.string "background information...\p"
	.string "Come forth, and witness, the recovered\n"
	.string "remnants of that fateful day!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_9:
# 183 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}The recovered remnants!? What\n"
	.string "are we standing around here for?$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene1_Text_0:
# 218 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "The Great Volcano erupted in a fit of\n"
	.string "unbridled rage beneath a torrential\l"
	.string "night.\p"
	.string "From the billowing smoke emerged an\n"
	.string "abominable beast with wings of blight.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Text_0:
# 266 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "The suffocating smog tainted the skies\n"
	.string "and the pouring rain.\p"
	.string "Corrupting Pokémon into heartless\n"
	.string "creatures of savagery and disdain.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Text_0:
# 304 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "The Winged Mirages flew from their\n"
	.string "roosts to face the wicked beast...$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Text_1:
# 374 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
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
# 402 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Then suddenly, from the deepest,\n"
	.string "darkest depths of the sea...\p"
	.string "...arose an ethereal dragon with wings\n"
	.string "of glimmering silver majesty.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_0:
# 466 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "With a deafening roar and a powerful\n"
	.string "wingbeat...\p"
	.string "...the dragon summoned a tempest that\n"
	.string "caused the virulent corruption to\l"
	.string "retreat!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_1:
# 549 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Together, the dragon and the Winged\n"
	.string "Mirages felled the wicked beast.\p"
	.string "Sending it back from whence it came,\n"
	.string "sealed away, never again to be released.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_2:
# 565 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "As daybreak arrived, the dragon\n"
	.string "returned to the briny deep.\p"
	.string "...but should catastrophe strike once\n"
	.string "more, it would return...\p"
	.string "A promise it vowed to keep.$"
