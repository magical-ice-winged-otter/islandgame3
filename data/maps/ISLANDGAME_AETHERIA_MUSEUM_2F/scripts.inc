ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts::
# 12 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 22 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	compare VAR_AETHERIA_STATE, 4
	goto_if_eq ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 17 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setflag FLAG_TEMP_3
	return

ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setflag B_FLAG_FOLLOWERS_DISABLED
	return

ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 23 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	map_script_2 VAR_AETHERIA_STATE, 4, ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 24 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene::
# 32 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock
# 33 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_0
# 34 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 35 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_CURATOR, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_1
# 36 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 37 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_0, MSGBOX_AUTOCLOSE
# 42 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_CURATOR, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_2
# 43 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 46 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 47 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special Script_FadeOutMapMusic
# 48 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 49 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 50 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	doweather
# 52 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_1, MSGBOX_AUTOCLOSE
# 56 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 57 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_THUNDER
# 58 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 61 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene1
# 64 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2
# 67 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3
# 70 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene4
# 73 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5
# 75 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 76 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_2
# 80 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 81 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 9
# 82 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 7
# 83 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 84 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 85 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special Script_FadeOutMapMusic
# 86 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 87 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playbgm MUS_LILYCOVE_MUSEUM, TRUE
# 88 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	clearflag B_FLAG_FOLLOWERS_DISABLED
# 90 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 91 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_APPLAUSE
# 92 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_AUDIENCE_MEMBER_1, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3
# 93 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_AUDIENCE_MEMBER_2, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3
# 94 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_AUDIENCE_MEMBER_3, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3
# 95 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_AUDIENCE_MEMBER_4, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3
# 96 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_AUDIENCE_MEMBER_5, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3
# 97 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_AUDIENCE_MEMBER_6, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3
# 98 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA_2, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3
# 99 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 100 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA_2, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_4
# 101 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 102 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_5
# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 104 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_3, MSGBOX_YESNO
# 109 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_2
# 125 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_6
# 128 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 129 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_6
# 130 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 131 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 30
# 132 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_7
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_1:
# 140 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 142 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_CURATOR, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_7
# 143 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 144 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA_2, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_8
# 145 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_8
# 146 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 30
# 147 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_8, MSGBOX_AUTOCLOSE
# 154 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_CURATOR, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_9
# 155 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 156 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_EXIT
# 157 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 158 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_CURATOR
# 159 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_AUDIENCE_MEMBER_1
# 160 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_AUDIENCE_MEMBER_2
# 161 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_AUDIENCE_MEMBER_3
# 162 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_AUDIENCE_MEMBER_4
# 163 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_AUDIENCE_MEMBER_5
# 164 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_AUDIENCE_MEMBER_6
# 165 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 166 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 30
# 167 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_BIKE_HOP
# 168 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA_2, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_10
# 169 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 170 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_5
# 171 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_9, MSGBOX_AUTOCLOSE
# 174 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA_2, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_11
# 175 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 176 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_MELISSA_2
# 177 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_EXIT
# 178 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 179 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_AETHERIA_STATE, 5
# 180 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setflag FLAG_TEMP_3
# 181 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_2:
# 110 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_4
# 113 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 114 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_6
# 115 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 116 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 30
# 117 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_5
	goto ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_1


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene1::
# 189 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 7
# 190 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 20
# 191 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 192 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 193 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 240
# 194 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_EARTHQUAKE
# 195 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Long
# 196 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 197 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 198 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 199 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_EXPLOSION
# 200 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 201 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 202 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_ENCOUNTER
# 203 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 204 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 205 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 206 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene1_Text_0, MSGBOX_AUTOCLOSE
# 210 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2::
# 215 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 23
# 216 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 20
# 217 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 218 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 220 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_RANCHER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_0
# 221 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_0
# 222 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ABSOL, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_1
# 223 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 224 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_RANCHER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_2
# 225 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_8
# 226 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 40
# 227 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ABSOL_MEGA, CRY_MODE_ENCOUNTER
# 228 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 229 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ABSOL, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_3
# 230 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 231 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_DACHSBUN, CRY_MODE_NORMAL
# 232 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 233 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_PIN
# 234 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_RANCHER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4
# 235 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ABSOL, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_5
# 236 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 237 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_CUT
# 238 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_RANCHER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_6
# 239 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 240 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_PIN
# 241 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_7
# 242 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 243 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 244 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_DACHSBUN, CRY_MODE_NORMAL
# 245 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 246 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_8
# 247 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 248 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_JUMP_KICK
# 249 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ABSOL, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_9
# 250 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_10
# 251 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 252 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 254 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Text_0
# 258 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 259 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3::
# 264 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 7
# 265 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 32
# 266 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 267 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setflag FLAG_TEMP_1
# 268 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_LUGIA
# 269 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 271 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 120
# 272 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
# 273 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 274 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 275 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 276 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 277 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 278 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
# 279 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 280 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 282 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 283 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ARTICUNO, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_0
# 284 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 20
# 285 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 286 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ZAPDOS, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_1
# 287 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 20
# 288 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 289 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MOLTRES, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_1
# 290 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 292 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Text_0
# 295 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 297 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 298 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 299 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_ICY_WIND
# 300 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 301 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_ICE_BREAK
# 302 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 303 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 304 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 305 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_THUNDERBOLT
# 306 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 307 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 308 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 309 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLAMETHROWER
# 310 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 311 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 312 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 313 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 314 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_ENCOUNTER
# 315 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 316 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_HYPER_BEAM
# 317 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 318 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_HYPER_BEAM2
# 319 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 320 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 321 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 322 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 323 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 324 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_WEAK
# 325 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 326 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_WEAK
# 327 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 328 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_WEAK
# 329 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 330 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_NIGHTMARE
# 331 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 332 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 333 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_PIN
# 334 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ELDER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4
# 336 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ARTICUNO, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_2
# 337 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 20
# 338 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ZAPDOS, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_3
# 339 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 20
# 340 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MOLTRES, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_3
# 341 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 343 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ARTICUNO
# 344 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ZAPDOS
# 345 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_MOLTRES
# 346 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ARTICUNO, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 347 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ZAPDOS, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 348 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_MOLTRES, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 349 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ARTICUNO
# 350 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ZAPDOS
# 351 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_MOLTRES
# 352 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
# 354 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MAN_CUTSCENE, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_4
# 355 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_EXPERT, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_4
# 356 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ELDER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_5
# 357 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 358 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 360 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 362 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Text_1
# 368 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 369 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene4::
# 374 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 23
# 375 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 32
# 376 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 377 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 378 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special Script_FadeOutMapMusic
# 379 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 381 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 120
# 382 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 383 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 384 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 385 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setfieldeffectargument 0, 1
# 386 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 387 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 388 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 120
# 390 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene4_Text_0
# 394 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 395 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5::
# 400 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 7
# 401 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 32
# 402 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 403 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 405 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 120
# 407 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setfieldeffectargument 0, 1
# 408 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 409 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 410 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 411 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ARTICUNO, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_0
# 412 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ZAPDOS, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_0
# 413 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MOLTRES, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_0
# 414 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 415 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	clearflag FLAG_TEMP_1
# 416 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_LUGIA
# 417 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
# 418 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 421 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 423 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_PIN
# 424 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ELDER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4
# 425 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MAN_CUTSCENE, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4
# 426 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_EXPERT, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4
# 427 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 429 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playbgm MUS_BW_VS_WINNING, TRUE
# 430 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 431 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 432 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 433 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 434 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 436 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ARTICUNO
# 437 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ZAPDOS
# 438 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_MOLTRES
# 439 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ARTICUNO, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 440 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ZAPDOS, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 441 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_MOLTRES, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 442 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ARTICUNO
# 443 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ZAPDOS
# 444 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_MOLTRES
# 445 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
# 447 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 449 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 120
# 451 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_0
# 455 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 457 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 458 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 459 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 460 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 461 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_LUGIA, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_1
# 462 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 30
# 463 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 464 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ARTICUNO, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_2
# 465 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ZAPDOS, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_2
# 466 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MOLTRES, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_2
# 467 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 468 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_ICY_WIND
# 469 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 470 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 471 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 472 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLAME_WHEEL2
# 473 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 474 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_STRING_SHOT
# 475 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 476 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 477 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 478 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 479 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 480 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_WEAK
# 481 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 482 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_EXPLOSION
# 483 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Long
# 484 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 485 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_FAINT
# 486 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 487 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 488 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_WINGSOFCHAOS
# 489 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 490 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setweather WEATHER_NONE
# 491 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	doweather
# 492 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special WaitWeather
# 493 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 494 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special Script_FadeOutMapMusic
# 495 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 496 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playbgm MUS_SOOTOPOLIS, TRUE
# 499 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_LUGIA, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_3
# 500 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 501 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ARTICUNO, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_2
# 502 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ZAPDOS, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_4
# 503 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MOLTRES, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_4
# 504 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 506 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ARTICUNO
# 507 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ZAPDOS
# 508 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_MOLTRES
# 509 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_LUGIA
# 510 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ELDER
# 511 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_EXPERT
# 512 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_MAN_CUTSCENE
# 513 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ARTICUNO, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 514 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ZAPDOS, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 515 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_MOLTRES, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 516 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_LUGIA, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 517 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ELDER, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 518 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_EXPERT, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 519 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_MAN_CUTSCENE, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 520 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectxyperm AETHERIA_MUSEUM_2F_ARTICUNO, 7, 30
# 521 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectxyperm AETHERIA_MUSEUM_2F_ZAPDOS, 9, 31
# 522 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectxyperm AETHERIA_MUSEUM_2F_MOLTRES, 5, 31
# 523 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ARTICUNO
# 524 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ZAPDOS
# 525 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_MOLTRES
# 526 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_LUGIA
# 527 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ELDER
# 528 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_EXPERT
# 529 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_MAN_CUTSCENE
# 530 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
# 531 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_APPLAUSE
# 532 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 534 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_1, MSGBOX_AUTOCLOSE
# 539 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 540 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_NORMAL
# 541 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 542 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setfieldeffectargument 0, 1
# 543 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 544 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 545 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 546 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_LUGIA
# 547 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 548 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
# 550 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_2, MSGBOX_AUTOCLOSE
	return


# 33 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_0:
# 33 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 33 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 33 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 33 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 33 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 33 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 33 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 33 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 33 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 33 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 33 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 33 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_up
	step_end

# 35 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_1:
# 35 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 35 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 35 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
# 35 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
	step_end

# 42 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_2:
# 42 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 42 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 42 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 42 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_down
	step_end

# 92 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_3:
# 92 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	emote_heart
# 92 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_up
# 92 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_up
# 92 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_up
# 92 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_up
# 92 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_up
	step_end

# 100 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_4:
# 100 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_left
# 100 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_left
	step_end

# 102 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_5:
# 102 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_right
	step_end

# 114 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_6:
# 114 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_right
	step_end

# 142 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_7:
# 142 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 142 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
	step_end

# 144 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_8:
# 144 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_up
	step_end

# 154 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_9:
# 154 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 154 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 154 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 154 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 154 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 154 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 154 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 154 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 154 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 154 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 154 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
	step_end

# 168 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_10:
# 168 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	jump_in_place_left
	step_end

# 174 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_11:
# 174 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 174 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 174 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 174 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 174 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 174 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 174 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
# 174 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 174 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 174 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 174 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 174 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 174 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
	step_end

# 220 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_0:
# 220 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 220 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 220 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 220 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 220 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 220 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
	step_end

# 222 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_1:
# 222 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 222 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 222 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 222 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 222 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 222 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
	step_end

# 224 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_2:
# 224 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_up
# 224 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	emote_question_mark
	step_end

# 229 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_3:
# 229 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_down
# 229 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_down
# 229 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
# 229 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
# 229 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
# 229 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
# 229 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
	step_end

# 234 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4:
# 234 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	emote_exclamation_mark
	step_end

# 235 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_5:
# 235 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	jump_2_down
# 235 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_faster_down
	step_end

# 238 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_6:
# 238 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 238 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_down
	step_end

# 241 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_7:
# 241 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_right
# 241 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 241 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_left
# 241 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	emote_exclamation_mark
# 241 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_right
# 241 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_right
	step_end

# 246 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_8:
# 246 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
	step_end

# 249 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_9:
# 249 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_left
# 249 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	jump_in_place_right
# 249 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_left
	step_end

# 250 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_10:
# 250 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_faster_left
# 250 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_faster_left
	step_end

# 283 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_0:
# 283 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 283 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 283 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 283 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 283 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
	step_end

# 286 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_1:
# 286 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 286 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 286 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 286 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
	step_end

# 336 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_2:
# 336 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 336 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 336 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 336 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 336 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 338 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_3:
# 338 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 338 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 338 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 338 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 354 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_4:
# 354 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 354 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 356 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_5:
# 356 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_up
# 356 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_up
# 356 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
# 356 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
# 356 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 356 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 411 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_0:
# 411 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 411 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
	step_end

# 461 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_1:
# 461 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 461 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 461 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 461 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 461 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 461 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
	step_end

# 464 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_2:
# 464 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 464 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 464 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 464 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 464 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 464 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 464 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
	step_end

# 499 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_3:
# 499 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 499 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 499 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 499 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 499 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 499 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 502 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_4:
# 502 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 502 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 502 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 502 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 502 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 502 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 502 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_0:
# 38 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Salutations, everyone! Thank you for\n"
	.string "coming to see our latest and most\l"
	.string "ambitious addition yet!\p"
	.string "My name is Solomon. I am the curator of\n"
	.string "this museum, and today I present to\l"
	.string "you, a glimpse into Marya's past...\p"
	.string "Please enjoy... The Darkest Night!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_1:
# 53 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "“Long ago,{PAUSE 30} a great calamity befell upon\n"
	.string "our isles.”$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_2:
# 77 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "In honor of the heavenly dragon's\n"
	.string "heroism, we granted it the name of\l"
	.string "Lugia.\p"
	.string "The Savior of Marya.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_3:
# 105 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Woooooah. Those were some\n"
	.string "breathtaking visuals!\p"
	.string "The sound design too, it really felt like\n"
	.string "we were experiencing the events of The\l"
	.string "Darkest Night in-person!\p"
	.string "What did you think of it, {PLAYER}?\n"
	.string "Did you enjoy it?$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_4:
# 111 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Eeeeh? Reaaally? I thought it was a\n"
	.string "really faithful adaptation!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_5:
# 118 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
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
# 126 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Yaaaay! I'm glad you did too! I was a lil\n"
	.string "worried that you would find this stuff\l"
	.string "kinda boring...$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_7:
# 133 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
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
# 148 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Thank you, thank you! You are all too\n"
	.string "kind.\p"
	.string "I am happy to hear that all of you\n"
	.string "enjoyed our humble presentation!\p"
	.string "Now that you've all been given some\n"
	.string "background information...\p"
	.string "Come forth, and witness, the recovered\n"
	.string "remnants of that fateful day!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_9:
# 172 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}The recovered remnants!? What\n"
	.string "are we standing around here for?$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene1_Text_0:
# 207 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "The Great Volcano erupted in a fit of\n"
	.string "unbridled rage beneath a torrential\l"
	.string "night.\p"
	.string "From the billowing smoke emerged an\n"
	.string "abominable beast with wings of blight.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Text_0:
# 255 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "The suffocating smog tainted the skies\n"
	.string "and the pouring rain.\p"
	.string "Corrupting Pokémon into heartless\n"
	.string "creatures of savagery and disdain.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Text_0:
# 293 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "The Winged Mirages flew from their\n"
	.string "roosts to face the wicked beast...$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Text_1:
# 363 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
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
# 391 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Then suddenly, from the deepest,\n"
	.string "darkest depths of the sea...\p"
	.string "...arose an ethereal dragon with wings\n"
	.string "of glimmering silver majesty.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_0:
# 452 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "With a deafening roar and a powerful\n"
	.string "wingbeat...\p"
	.string "...the dragon summoned a tempest that\n"
	.string "caused the virulent corruption to\l"
	.string "retreat!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_1:
# 535 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Together, the dragon and the Winged\n"
	.string "Mirages felled the wicked beast.\p"
	.string "Sending it back from whence it came,\n"
	.string "sealed away, never again to be released.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_2:
# 551 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "As daybreak arrived, the dragon\n"
	.string "returned to the briny deep.\p"
	.string "...but should catastrophe strike once\n"
	.string "more, it would return...\p"
	.string "A promise it vowed to keep.$"
