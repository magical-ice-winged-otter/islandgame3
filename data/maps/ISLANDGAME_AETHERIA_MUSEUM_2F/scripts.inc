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
	fadescreen FADE_TO_BLACK
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
# 47 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene1
# 50 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2
# 53 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3
# 55 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 56 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 9
# 57 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 7
# 58 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 59 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 61 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene1::
# 66 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 7
# 67 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 20
# 68 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 69 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 70 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 71 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_THUNDER
# 72 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 73 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 240
# 74 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_EARTHQUAKE
# 75 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Long
# 76 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 77 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 78 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 79 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_EXPLOSION
# 80 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 81 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 82 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_ENCOUNTER
# 83 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 84 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 85 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 86 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene1_Text_0, MSGBOX_AUTOCLOSE
# 90 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2::
# 95 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 23
# 96 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 20
# 97 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 98 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 100 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_RANCHER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_0
# 101 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_0
# 102 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ABSOL, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_1
# 104 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 105 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_RANCHER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_2
# 106 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_3
# 107 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 40
# 108 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ABSOL_MEGA, CRY_MODE_ENCOUNTER
# 109 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 110 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_PIN
# 111 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_RANCHER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4
# 112 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ABSOL, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_5
# 113 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 114 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_CUT
# 115 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_RANCHER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_6
# 116 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 117 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_PIN
# 118 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_7
# 119 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 120 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_8
# 121 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 122 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_JUMP_KICK
# 123 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_DACHSBUN, CRY_MODE_WEAK
# 124 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ABSOL, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_9
# 125 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_DACHSBUN, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_10
# 126 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 128 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Text_0
# 132 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 133 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3::
# 138 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8000, 7
# 139 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setvar VAR_0x8001, 32
# 140 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	callnative TeleportCamera
# 141 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 143 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 120
# 144 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
# 145 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 146 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 147 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 148 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 149 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 150 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
# 151 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 152 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 154 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 155 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ARTICUNO, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_0
# 156 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 20
# 157 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 158 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ZAPDOS, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_1
# 159 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 20
# 160 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLY
# 161 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MOLTRES, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_1
# 162 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 164 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Text_0
# 167 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	closemessage
# 169 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 170 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 171 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_ICY_WIND
# 172 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 173 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_THUNDERBOLT
# 174 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 175 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_FLAMETHROWER
# 176 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 177 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 178 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 179 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 180 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_ENCOUNTER
# 181 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 182 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_HYPER_BEAM
# 183 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 184 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_HYPER_BEAM2
# 185 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 186 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 187 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitstate
# 188 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 189 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 190 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_WEAK
# 191 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 192 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_WEAK
# 193 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 194 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_WEAK
# 195 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmoncry
# 196 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_M_PERISH_SONG
# 197 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitse
# 198 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 60
# 199 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	playse SE_PIN
# 200 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ELDER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4
# 201 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ARTICUNO, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_2
# 202 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ARTICUNO, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 203 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 20
# 204 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ZAPDOS, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_3
# 205 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_ZAPDOS, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 206 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 20
# 207 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MOLTRES, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_3
# 208 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	setobjectmovementtype AETHERIA_MUSEUM_2F_MOLTRES, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 209 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 210 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay 30
# 211 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_ELDER, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_4
# 212 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 213 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_MAN_CUTSCENE, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_5
# 214 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_COWGIRL, ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_5
# 215 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	waitmovement 0
# 218 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Text_1
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

# 100 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_0:
# 100 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 100 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 100 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 100 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 100 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
# 100 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_right
	step_end

# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_1:
# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_down
# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_down
# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_down
# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_faster_down
	step_end

# 105 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_2:
# 105 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_up
# 105 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	emote_question_mark
	step_end

# 106 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_3:
# 106 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_up
	step_end

# 111 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_4:
# 111 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	emote_exclamation_mark
	step_end

# 112 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_5:
# 112 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	jump_2_down
# 112 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_faster_down
	step_end

# 115 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_6:
# 115 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 115 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_down
	step_end

# 118 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_7:
# 118 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_right
# 118 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 118 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_left
# 118 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	emote_exclamation_mark
# 118 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_right
# 118 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_right
	step_end

# 120 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_8:
# 120 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_right
	step_end

# 124 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_9:
# 124 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_left
# 124 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	jump_in_place_right
# 124 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	face_left
	step_end

# 125 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Movement_10:
# 125 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_faster_left
# 125 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_faster_left
	step_end

# 155 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_0:
# 155 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 155 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 155 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 155 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 155 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
	step_end

# 158 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_1:
# 158 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 158 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 158 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
# 158 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_fast_up
	step_end

# 201 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_2:
# 201 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 201 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 201 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 201 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 201 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 204 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_3:
# 204 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 204 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 204 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
# 204 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 211 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_4:
# 211 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_up
# 211 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_in_place_fast_up
# 211 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
# 211 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	delay_16
# 211 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 211 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
	step_end

# 213 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Movement_5:
# 213 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	lock_facing_direction
# 213 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	walk_down
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
# 87 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "The Great Volcano erupted in a fit of\n"
	.string "unbridled rage under a torrential night.\p"
	.string "From the billowing smoke rose an\n"
	.string "abominable beast with wings of blight.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene2_Text_0:
# 129 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "The suffocating smog tainted the skies\n"
	.string "and the pouring rain.\p"
	.string "Corrupting Pokémon into heartless\n"
	.string "creatures of savagery and disdain.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Text_0:
# 165 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "The Isle Guardians rose from their\n"
	.string "roosts to face the wicked beast...$"

ISLANDGAME_AETHERIA_MUSEUM_2F_MovieScene3_Text_1:
# 219 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F/scripts.pory"
	.string "But even they stood no chance to the\n"
	.string "beast's unfathomable power.\p"
	.string "And our ancestors could only watch, {PAUSE 30}as\n"
	.string "their protectors betrayed them during\l"
	.string "their darkest hour.$"
