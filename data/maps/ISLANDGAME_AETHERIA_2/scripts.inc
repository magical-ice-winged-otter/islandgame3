ISLANDGAME_AETHERIA_2_MapScripts::
# 5 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_AETHERIA_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_AETHERIA_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	gettime
# 8 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_AETHERIA_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 8 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_AETHERIA_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 13 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	setflag FLAG_TEMP_2
ISLANDGAME_AETHERIA_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 16 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	goto_if_unset FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 20 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	setflag FLAG_TEMP_5
	return

ISLANDGAME_AETHERIA_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	setflag FLAG_TEMP_3
# 10 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	setflag FLAG_TEMP_5
	goto ISLANDGAME_AETHERIA_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_AETHERIA_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 17 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	setflag FLAG_TEMP_4
	return


ISLANDGAME_AETHERIA_IceCreamLady::
# 27 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	lock
# 28 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	faceplayer
# 29 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	showmoneybox 18, 1
# 30 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_IceCreamLady_Text_0, MSGBOX_YESNO
# 33 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AETHERIA_IceCreamLady_2
ISLANDGAME_AETHERIA_IceCreamLady_1:
# 54 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	hidemoneybox
# 55 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	closemessage
# 56 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_IceCreamLady_2:
# 34 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	checkmoney 500
# 35 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_AETHERIA_IceCreamLady_4
# 49 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_IceCreamLady_Text_2
	goto ISLANDGAME_AETHERIA_IceCreamLady_1

ISLANDGAME_AETHERIA_IceCreamLady_4:
# 36 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	removemoney 500
# 37 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	updatemoneybox
# 38 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	playse SE_SHOP
# 39 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	waitse
# 40 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	playse SE_VEND
# 41 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	waitse
# 42 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	hidemoneybox
# 43 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_IceCreamLady_Text_1
# 46 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	giveitem ITEM_CASTELIACONE
	goto ISLANDGAME_AETHERIA_IceCreamLady_1


ISLANDGAME_AETHERIA_PoliceHQ::
# 66 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_PoliceHQ_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_ParkOfficer::
# 74 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	trainerbattle_single TRAINER_AETHERIA_PARK_OFFICER, ISLANDGAME_AETHERIA_ParkOfficer_Text_0, ISLANDGAME_AETHERIA_ParkOfficer_Text_1
# 81 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_ParkOfficer_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_PoliceDeptOffDutyOfficer::
# 89 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	trainerbattle_single TRAINER_AETHERIA_DEPT_OFFICER, ISLANDGAME_AETHERIA_PoliceDeptOffDutyOfficer_Text_0, ISLANDGAME_AETHERIA_PoliceDeptOffDutyOfficer_Text_1
# 96 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_PoliceDeptOffDutyOfficer_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DeptGentleman::
# 105 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	lock
# 106 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	faceplayer
# 107 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DeptGentleman_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_ParkFatMan::
# 114 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	lock
# 115 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_ParkFatMan_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_ParkPokemaniac::
# 121 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	lock
# 122 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_ParkPokemaniac_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_ParkCryingChild::
# 128 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	lock
# 129 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_ParkCryingChild_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_ParkMother::
# 135 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	lock
# 136 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_ParkMother_Text_0
# 139 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	closemessage
# 140 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_ParkHomelessMan::
# 144 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	lock
# 145 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	faceplayer
# 146 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_ParkHomelessMan_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_BattleObserverGirl::
# 157 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	lock
# 158 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	faceplayer
# 159 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BattleObserverGirl_Text_0
# 162 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	closemessage
# 163 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_BattleObserverKid::
# 167 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	lock
# 168 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	faceplayer
# 169 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BattleObserverKid_Text_0
# 172 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	closemessage
# 173 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_BattleObserverSilverwing::
# 177 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	lock
# 178 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	faceplayer
# 179 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BattleObserverSilverwing_Text_0
# 182 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	closemessage
# 183 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_BattleObserverBoy::
# 187 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	lock
# 188 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	faceplayer
# 189 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BattleObserverBoy_Text_0
# 192 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	closemessage
# 193 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Joey::
# 197 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	lock
# 198 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Joey_Text_0
# 201 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	closemessage
# 202 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_EspaRoba::
# 206 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	lock
# 207 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_EspaRoba_Text_0
# 210 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	closemessage
# 211 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_FraxureBattle::
# 215 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	lock
# 216 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	playmoncry SPECIES_FRAXURE, CRY_MODE_WEAK
# 217 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	waitmoncry
# 218 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_KirliaBattle::
# 222 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	lock
# 223 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 224 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	waitmoncry
# 225 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_WallyDad::
# 240 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	lock
# 241 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	faceplayer
# 242 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_WallyDad_2
# 249 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WallyDad_Text_1
ISLANDGAME_AETHERIA_WallyDad_1:
# 254 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	closemessage
# 255 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_WallyDad_2:
# 243 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WallyDad_Text_0
	goto ISLANDGAME_AETHERIA_WallyDad_1


ISLANDGAME_AETHERIA_Scott::
# 259 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	lock
# 260 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_Scott_2
# 268 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Scott_Text_1
ISLANDGAME_AETHERIA_Scott_1:
# 272 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	closemessage
# 273 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_Scott_2:
# 261 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	faceplayer
# 262 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Scott_Text_0
	goto ISLANDGAME_AETHERIA_Scott_1


ISLANDGAME_AETHERIA_May::
# 277 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	lock
# 278 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	faceplayer
# 279 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_May_2
# 285 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_May_Text_1
ISLANDGAME_AETHERIA_May_1:
# 289 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	closemessage
# 290 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_May_2:
# 280 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_May_Text_0
	goto ISLANDGAME_AETHERIA_May_1


ISLANDGAME_AETHERIA_Brendan::
# 294 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	lock
# 295 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	faceplayer
# 296 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_Brendan_2
# 302 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Brendan_Text_1
ISLANDGAME_AETHERIA_Brendan_1:
# 306 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	closemessage
# 307 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_Brendan_2:
# 297 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Brendan_Text_0
	goto ISLANDGAME_AETHERIA_Brendan_1


ISLANDGAME_AETHERIA_Wally::
# 311 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	lock
# 312 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	faceplayer
# 313 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_Wally_2
ISLANDGAME_AETHERIA_Wally_1:
# 319 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_1, MSGBOX_YESNO
# 323 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AETHERIA_Wally_5
# 394 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_2
# 397 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	goto Aetheria_CameoBattle_End
ISLANDGAME_AETHERIA_Wally_4:
# 400 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
Aetheria_CameoBattle_End:
# 401 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	closemessage
# 402 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_Wally_2:
# 314 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_0
# 317 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	goto Aetheria_CameoBattle_End
	goto ISLANDGAME_AETHERIA_Wally_1

ISLANDGAME_AETHERIA_Wally_5:
# 324 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	special SavePlayerParty
# 325 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 326 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	special ChooseHalfPartyForBattle
# 327 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	waitstate
# 328 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_AETHERIA_Wally_8
# 336 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 337 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	setvar VAR_0x8000, 63
# 338 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	setvar VAR_0x8001, 57
# 339 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	callnative TeleportCamera
# 340 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 66, 21
# 341 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 342 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	applymovement 8, Common_Movement_FaceLeft
# 343 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 344 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	delay 30
# 345 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 346 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	waitmovement 0
# 347 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	delay 30
# 348 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_3
# 351 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_4
# 356 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	multi_2_vs_2 TRAINER_AETHERIA_BRENDAN, ISLANDGAME_AETHERIA_Wally_Text_5, TRAINER_AETHERIA_MAY, ISLANDGAME_AETHERIA_Wally_Text_6, PARTNER_AETHERIA_WALLY
# 357 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	switch VAR_RESULT
# 358 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	case 1, ISLANDGAME_AETHERIA_Wally_12
# 384 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 385 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	special SetCB2WhiteOut
# 386 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	waitstate
	goto ISLANDGAME_AETHERIA_Wally_4

ISLANDGAME_AETHERIA_Wally_8:
# 329 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	special LoadPlayerParty
# 330 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_2
# 333 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	goto Aetheria_CameoBattle_End
	goto ISLANDGAME_AETHERIA_Wally_4

ISLANDGAME_AETHERIA_Wally_12:
# 359 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 360 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	setvar VAR_0x8000, 66
# 361 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	setvar VAR_0x8001, 58
# 362 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	callnative TeleportCamera
# 363 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 364 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 365 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	waitmovement 0
# 366 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	delay 30
# 367 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_7
# 370 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	closemessage
# 371 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	delay 30
# 372 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 373 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	waitmovement 0
# 374 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 375 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	waitmovement 0
# 376 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_8
# 380 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
# 381 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	setflag FLAG_DAILY_AETHERIA_CAMEO_BATTLE
# 382 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	goto Aetheria_CameoBattle_End
	goto ISLANDGAME_AETHERIA_Wally_4


ISLANDGAME_AETHERIA_IceCreamLady_Text_0:
# 31 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Helloooooo! Would you like some frosty\n"
	.string "Nice Cream? It's only ¥500 for a cone!$"

ISLANDGAME_AETHERIA_IceCreamLady_Text_1:
# 44 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Enjoy!$"

ISLANDGAME_AETHERIA_IceCreamLady_Text_2:
# 50 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Oh... you don't have enough money.$"

ISLANDGAME_AETHERIA_PoliceHQ_Text_0:
# 67 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "MARYAN POLICE HEADQUARTERS$"

ISLANDGAME_AETHERIA_ParkOfficer_Text_0:
# 76 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Aha! I've finally caught you!$"

ISLANDGAME_AETHERIA_ParkOfficer_Text_1:
# 79 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Oh...{PAUSE 30} You're not the one.$"

ISLANDGAME_AETHERIA_ParkOfficer_Text_2:
# 82 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Sorry about the mix-up. It gets real\n"
	.string "dark around here at night.\p"
	.string "I've been on the lookout for a man in a\n"
	.string "business suit for weeks...\p"
	.string "If you see him, please let me know.$"

ISLANDGAME_AETHERIA_PoliceDeptOffDutyOfficer_Text_0:
# 91 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "I may be off-duty, but that doesn't\n"
	.string "mean I can't pull you over for a battle!$"

ISLANDGAME_AETHERIA_PoliceDeptOffDutyOfficer_Text_1:
# 94 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Heh, stay safe out there!$"

ISLANDGAME_AETHERIA_PoliceDeptOffDutyOfficer_Text_2:
# 97 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Even if I'm off-duty, I'm still here to\n"
	.string "serve and protect the great people of\l"
	.string "Marya.$"

ISLANDGAME_AETHERIA_DeptGentleman_Text_0:
# 108 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Those darn biker hooligans have made it\n"
	.string "impossible to take my Pokémon out for a\l"
	.string "leisurely night stroll in Pleasant Ave.\p"
	.string "I've reported them to the police\n"
	.string "multiple times, but somehow they always\l"
	.string "seem to evade capture.$"

ISLANDGAME_AETHERIA_ParkFatMan_Text_0:
# 116 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Drats...{PAUSE 30} I was hoping for chicken, but I\n"
	.string "guess this will have to do...$"

ISLANDGAME_AETHERIA_ParkPokemaniac_Text_0:
# 123 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "I ain't got all day, kid! Do you want a\n"
	.string "crummy photo or not!?$"

ISLANDGAME_AETHERIA_ParkCryingChild_Text_0:
# 130 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Waaaaaah! He's too scawwy!$"

ISLANDGAME_AETHERIA_ParkMother_Text_0:
# 137 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "It's fine, dearie! He won't bite! He's not\n"
	.string "a real Pokémon!$"

ISLANDGAME_AETHERIA_ParkHomelessMan_Text_0:
# 147 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "A strange man gave me the choice of\n"
	.string "receiving a Big Nugget or Master Ball\l"
	.string "earlier this morning...\p"
	.string "I chose the Big Nugget, and he actually\n"
	.string "gave me it...\p"
	.string "...But when I tried selling it at the\n"
	.string "department store, they kicked me out\l"
	.string "for trying to sell them a fake nugget...\p"
	.string "Oooh... I was a fool for believing that it\n"
	.string "was real... All I could think about was\l"
	.string "getting a second chance at life...\p"
	.string "What a cruel, cruel world we are forced\n"
	.string "to be a part of...\p"
	.string "There is no god in this world... Not\n"
	.string "Lugia... Not Arceus... No one...$"

ISLANDGAME_AETHERIA_BattleObserverGirl_Text_0:
# 160 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Those kids look pretty tough...$"

ISLANDGAME_AETHERIA_BattleObserverKid_Text_0:
# 170 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Mommy lets me watch trainers battle\n"
	.string "here while she does shopping with my\l"
	.string "sister!$"

ISLANDGAME_AETHERIA_BattleObserverSilverwing_Text_0:
# 180 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "I once believed that Pokémon battles\n"
	.string "were barbaric, but I have come to\l"
	.string "understand that they are merely a form\l"
	.string "of bonding between Pokémon and their\l"
	.string "trainers.$"

ISLANDGAME_AETHERIA_BattleObserverBoy_Text_0:
# 190 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Joey, this is why I told you to study up\n"
	.string "before you get back into battling...$"

ISLANDGAME_AETHERIA_Joey_Text_0:
# 199 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Nyeh!? My attack... it had no effect!?$"

ISLANDGAME_AETHERIA_EspaRoba_Text_0:
# 208 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "You idiot! Kirlia is part fairy-type! How\n"
	.string "out of the loop are you!?$"

ISLANDGAME_AETHERIA_WallyDad_Text_0:
# 244 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Thanks for battling alongside Wally.\p"
	.string "I wish the best of luck on the rest of\n"
	.string "your journey!$"

ISLANDGAME_AETHERIA_WallyDad_Text_1:
# 250 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Ever since Wally's recovered from his\n"
	.string "illness, he's been really itching to go\l"
	.string "out and explore the world of Pokémon\l"
	.string "beyond the Hoenn region.\p"
	.string "So when the opportunity arose for us to\n"
	.string "travel all the way here, you bet we took\l"
	.string "it!$"

ISLANDGAME_AETHERIA_Scott_Text_0:
# 263 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Those battles were hot, hot, hot!\p"
	.string "Howsabout a trainer like you come with\n"
	.string "me back to the Hoenn region and\l"
	.string "compete in the Battle Frontier?\p"
	.string "$"

ISLANDGAME_AETHERIA_Scott_Text_1:
# 269 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Ohoho, it's been a hot minute since I've\n"
	.string "seen these champs battle!$"

ISLANDGAME_AETHERIA_May_Text_0:
# 281 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "You're one tough lava cookie, randy!\n"
	.string "Don't get too complacent though... I'll\l"
	.string "be back for a rematch soon!$"

ISLANDGAME_AETHERIA_May_Text_1:
# 286 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "After spending the entire day walking\n"
	.string "around the city, I'm glad to finally take\l"
	.string "a break and battle!$"

ISLANDGAME_AETHERIA_Brendan_Text_0:
# 298 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Heh... I guess I'm a little out of\n"
	.string "practice...$"

ISLANDGAME_AETHERIA_Brendan_Text_1:
# 303 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "I was looking most forward to visiting\n"
	.string "the contest hall here, but I was\l"
	.string "disappointed to find out that it's been\l"
	.string "repurposed into a performance hall for\l"
	.string "Pokémon Idols instead.$"

ISLANDGAME_AETHERIA_Wally_Text_0:
# 315 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "We're also going to be at the Silverwing\n"
	.string "Festival, so hope to catch you there!$"

ISLANDGAME_AETHERIA_Wally_Text_1:
# 320 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Hey there! We're looking for a trainer\n"
	.string "to join us in a multi battle! Would you\l"
	.string "like to be my teammate?$"

ISLANDGAME_AETHERIA_Wally_Text_2:
# 331 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Darn... I was hoping to get a quick\n"
	.string "pick-up battle in.$"

ISLANDGAME_AETHERIA_Wally_Text_3:
# 349 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Alright! Ready when you two are!$"

ISLANDGAME_AETHERIA_Wally_Text_4:
# 352 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "{COLOR GREEN}May: {COLOR DARK_GRAY}Just a fair warning, randy, we'll be\n"
	.string "coming at you with full force!\p"
	.string "{COLOR GREEN}Brendan: {COLOR DARK_GRAY}Boisterous as ever...$"

ISLANDGAME_AETHERIA_Wally_Text_5:
# 356 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Well, this shirt is ruined...$"

ISLANDGAME_AETHERIA_Wally_Text_6:
# 356 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Auuuugh! No way! We lost!?$"

ISLANDGAME_AETHERIA_Wally_Text_7:
# 368 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "Hehe... looks like I win this time!$"

ISLANDGAME_AETHERIA_Wally_Text_8:
# 377 "data/maps/ISLANDGAME_AETHERIA_2/scripts.pory"
	.string "I couldn't have done it without you,\n"
	.string "{PLAYER}! You and your Pokémon were\l"
	.string "amazing!\p"
	.string "Here, take one of these, as thanks for\n"
	.string "your part in our victory.$"
