ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts::
# 12 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	map_script_2 VAR_AETHERIA_STATE, 4, ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

ISLANDGAME_AETHERIA_MUSEUM_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 14 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene
# 15 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_AETHERIA_STATE, 5
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene::
# 23 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock
# 24 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_0
# 25 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 26 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_CURATOR, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_1
# 27 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 28 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_0, MSGBOX_AUTOCLOSE
# 33 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_CURATOR, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_2
# 34 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 37 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 38 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special Script_FadeOutMapMusic
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 40 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 41 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	doweather
# 42 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_1, MSGBOX_AUTOCLOSE
# 46 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 47 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_THUNDER
# 48 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 57 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3
# 60 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene4
# 63 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5
# 65 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 66 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 9
# 67 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 7
# 68 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 69 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 71 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene1::
# 76 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 7
# 77 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 20
# 78 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 79 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 80 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 240
# 81 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_EARTHQUAKE
# 82 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Long
# 83 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 84 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 85 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 86 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_EXPLOSION
# 87 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 88 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 89 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_ENCOUNTER
# 90 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 91 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 92 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 93 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene1_Text_0, MSGBOX_AUTOCLOSE
# 97 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2::
# 102 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 23
# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 20
# 104 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 105 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 107 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_RANCHER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_0
# 108 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_0
# 109 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ABSOL, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_1
# 110 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 111 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_RANCHER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_2
# 112 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_3
# 113 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 40
# 114 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ABSOL_MEGA, CRY_MODE_ENCOUNTER
# 115 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 116 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ABSOL, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4
# 117 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 118 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_DACHSBUN, CRY_MODE_NORMAL
# 119 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 120 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_PIN
# 121 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_RANCHER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_5
# 122 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ABSOL, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_6
# 123 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 124 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_CUT
# 125 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_RANCHER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_7
# 126 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 127 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_PIN
# 128 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_8
# 129 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 130 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 131 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_DACHSBUN, CRY_MODE_NORMAL
# 132 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 133 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_9
# 134 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 135 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_JUMP_KICK
# 136 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ABSOL, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_10
# 137 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_11
# 138 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 139 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 141 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Text_0
# 145 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 146 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3::
# 151 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 7
# 152 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 32
# 153 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 154 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setflag FLAG_TEMP_1
# 155 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_LUGIA
# 156 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 158 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 120
# 159 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
# 160 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 161 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 162 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 163 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 164 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 165 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
# 166 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 167 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 169 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 170 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ARTICUNO, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_0
# 171 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 20
# 172 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 173 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ZAPDOS, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_1
# 174 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 20
# 175 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 176 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MOLTRES, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_1
# 177 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 179 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Text_0
# 182 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 184 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 185 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 186 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_ICY_WIND
# 187 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 188 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_ICE_BREAK
# 189 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 190 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 191 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 192 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_THUNDERBOLT
# 193 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 194 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 195 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 196 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLAMETHROWER
# 197 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 198 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 199 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 200 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 201 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_ENCOUNTER
# 202 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 203 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_HYPER_BEAM
# 204 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 205 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_HYPER_BEAM2
# 206 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 207 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 208 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 209 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 210 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 211 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_WEAK
# 212 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 213 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_WEAK
# 214 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 215 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_WEAK
# 216 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 217 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_NIGHTMARE
# 218 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 219 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 220 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_PIN
# 221 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ELDER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_5
# 223 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ARTICUNO, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_2
# 224 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 20
# 225 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ZAPDOS, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_3
# 226 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 20
# 227 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MOLTRES, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_3
# 228 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 230 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ARTICUNO
# 231 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ZAPDOS
# 232 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_MOLTRES
# 236 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ARTICUNO, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 237 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ZAPDOS, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 238 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_MOLTRES, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 239 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ARTICUNO
# 240 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ZAPDOS
# 241 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_MOLTRES
# 242 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
# 244 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MAN_CUTSCENE, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_4
# 245 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_EXPERT, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_4
# 246 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ELDER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_5
# 247 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 248 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 250 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 252 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Text_1
# 258 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 259 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene4::
# 264 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 23
# 265 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 32
# 266 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 267 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 268 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special Script_FadeOutMapMusic
# 269 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 271 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 120
# 272 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 273 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 274 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 275 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setfieldeffectargument 0, 1
# 276 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 277 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 278 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 120
# 280 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene4_Text_0
# 284 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 285 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5::
# 290 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 7
# 291 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 32
# 292 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 293 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 295 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 120
# 297 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setfieldeffectargument 0, 1
# 298 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 299 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 300 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 301 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ARTICUNO, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_0
# 302 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ZAPDOS, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_0
# 303 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MOLTRES, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_0
# 304 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 305 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	clearflag FLAG_TEMP_1
# 306 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_LUGIA
# 307 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
# 308 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 311 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 313 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_PIN
# 314 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ELDER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_5
# 315 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MAN_CUTSCENE, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_5
# 316 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_EXPERT, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_5
# 317 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 319 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playbgm MUS_BW_VS_WINNING, TRUE
# 320 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 321 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 322 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 323 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 324 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 326 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ARTICUNO
# 327 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_ZAPDOS
# 328 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	removeobject AETHERIA_MUSEUM_2F_MOLTRES
# 329 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectxyperm AETHERIA_MUSEUM_2F_ARTICUNO, 7, 33
# 330 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectxyperm AETHERIA_MUSEUM_2F_ZAPDOS, 5, 32
# 331 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectxyperm AETHERIA_MUSEUM_2F_MOLTRES, 9, 32
# 332 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ARTICUNO, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 333 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ZAPDOS, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 334 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_MOLTRES, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 335 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ARTICUNO
# 336 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_ZAPDOS
# 337 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_MOLTRES
# 339 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 341 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 120
# 343 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_0
# 347 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 349 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 350 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 351 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 352 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 353 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_LUGIA, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_1
# 354 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 30
# 355 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 356 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ARTICUNO, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_2
# 357 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ZAPDOS, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_2
# 358 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MOLTRES, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_2
# 359 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 360 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_ICY_WIND
# 361 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 362 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 363 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 364 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLAME_WHEEL2
# 365 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 366 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_STRING_SHOT
# 367 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 368 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 369 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 370 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 371 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 372 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_WEAK
# 373 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 374 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_SELF_DESTRUCT
# 375 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Long
# 376 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 377 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 378 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 379 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setweather WEATHER_NONE
# 380 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	doweather
# 381 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special WaitWeather
# 382 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 384 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_1
# 387 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
	return


# 24 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_0:
# 24 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 24 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 24 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 24 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 24 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 24 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 24 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 24 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 24 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 24 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 24 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 24 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_up
	step_end

# 26 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_1:
# 26 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 26 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 26 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
# 26 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
	step_end

# 33 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Movement_2:
# 33 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 33 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 33 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 33 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_down
	step_end

# 107 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_0:
# 107 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 107 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 107 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 107 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 107 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 107 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
	step_end

# 109 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_1:
# 109 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 109 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 109 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 109 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 109 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 109 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
	step_end

# 111 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_2:
# 111 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_up
# 111 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	emote_question_mark
	step_end

# 112 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_3:
# 112 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_up
	step_end

# 116 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4:
# 116 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_down
# 116 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_down
# 116 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
# 116 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
# 116 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
# 116 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
# 116 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
	step_end

# 121 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_5:
# 121 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	emote_exclamation_mark
	step_end

# 122 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_6:
# 122 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	jump_2_down
# 122 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_faster_down
	step_end

# 125 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_7:
# 125 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 125 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_down
	step_end

# 128 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_8:
# 128 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_right
# 128 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 128 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_left
# 128 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	emote_exclamation_mark
# 128 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_right
# 128 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_right
	step_end

# 133 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_9:
# 133 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
	step_end

# 136 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_10:
# 136 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_left
# 136 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	jump_in_place_right
# 136 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_left
	step_end

# 137 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_11:
# 137 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_faster_left
# 137 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_faster_left
	step_end

# 170 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_0:
# 170 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 170 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 170 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 170 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 170 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
	step_end

# 173 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_1:
# 173 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 173 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 173 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 173 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
	step_end

# 223 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_2:
# 223 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 223 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 223 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 223 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 223 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 225 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_3:
# 225 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 225 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 225 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 225 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 244 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_4:
# 244 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 244 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 246 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_5:
# 246 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_up
# 246 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_up
# 246 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
# 246 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
# 246 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 246 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 301 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_0:
# 301 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 301 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
	step_end

# 353 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_1:
# 353 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 353 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 353 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 353 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 353 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 353 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
	step_end

# 356 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Movement_2:
# 356 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 356 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 356 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 356 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 356 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 356 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
# 356 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_up
	step_end

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_0:
# 29 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Salutations, everyone! Thank you for\n"
	.string "coming to see our latest and most\l"
	.string "ambitious addition yet!\p"
	.string "My name is Solomon. I am the curator of\n"
	.string "this museum, and today I present to\l"
	.string "you, a glimpse into Marya's past...\p"
	.string "Please enjoy... The Darkest Night!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieCutscene_Text_1:
# 43 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "“Long ago,{PAUSE 30} a great calamity befell upon\n"
	.string "our isles.”$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene1_Text_0:
# 94 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "The Great Volcano erupted in a fit of\n"
	.string "unbridled rage under a torrential night.\p"
	.string "From the billowing smoke emerged an\n"
	.string "abominable beast with wings of blight.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Text_0:
# 142 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "The suffocating smog tainted the skies\n"
	.string "and the pouring rain.\p"
	.string "Corrupting Pokémon into heartless\n"
	.string "creatures of savagery and disdain.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Text_0:
# 180 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "The Isle Guardians flew from their\n"
	.string "roosts to face the wicked beast...$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Text_1:
# 253 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "But even they stood no chance to the\n"
	.string "beast's unfathomable power.\p"
	.string "And our ancestors could only watch, {PAUSE 30}as\n"
	.string "their protectors betrayed them during\l"
	.string "their darkest hour.\p"
	.string "“Someone... anyone... please heed our\n"
	.string "plea!”\p"
	.string "“Exorcise this foul creature, I pray to\n"
	.string "thee!”$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene4_Text_0:
# 281 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "Then suddenly, from the deepest,\n"
	.string "darkest depths of the sea...\p"
	.string "...arose an ethereal dragon with wings\n"
	.string "of glimmering silver majesty.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_0:
# 344 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "With a deafening roar and a powerful\n"
	.string "wingbeat...\p"
	.string "...the dragon summoned a tempest that\n"
	.string "caused the virulent corruption to\l"
	.string "retreat!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene5_Text_1:
# 385 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "$"
