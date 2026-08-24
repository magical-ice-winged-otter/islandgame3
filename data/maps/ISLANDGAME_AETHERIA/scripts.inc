ISLANDGAME_AETHERIA_MapScripts::
# 20 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 22 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	gettime
# 23 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 23 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 28 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setflag FLAG_TEMP_2
ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 31 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_unset FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 35 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setflag FLAG_TEMP_5
ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 38 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	switch VAR_AETHERIA_STATE
# 39 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	case 2, ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
	return

ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 24 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setflag FLAG_TEMP_3
# 25 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setflag FLAG_TEMP_5
	goto ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 32 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setflag FLAG_TEMP_4
	goto ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 40 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setobjecthidden LOCALID_MELISSA
	return


ISLANDGAME_AETHERIA_Melissa::
# 111 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	switch VAR_AETHERIA_STATE
# 112 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	case 0, ISLANDGAME_AETHERIA_Melissa_3
# 154 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	case 1, ISLANDGAME_AETHERIA_Melissa_4
ISLANDGAME_AETHERIA_Melissa_1:
# 168 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
Aetheria_MelissaEnd:
# 169 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 170 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_Melissa_3:
# 113 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setvar VAR_AETHERIA_STATE, 1
# 114 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 115 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 116 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playbgm MUS_HG_LYRA, TRUE
# 117 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Text_0
# 120 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	checkplayergender
# 121 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ISLANDGAME_AETHERIA_Melissa_6
# 126 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Text_2
ISLANDGAME_AETHERIA_Melissa_5:
# 130 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Text_3
# 136 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Text_4, MSGBOX_YESNO
# 142 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_Melissa_12
# 152 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	call ISLANDGAME_AETHERIA_Melissa_Battle
	goto ISLANDGAME_AETHERIA_Melissa_1

ISLANDGAME_AETHERIA_Melissa_4:
# 155 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 156 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 157 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Text_6, MSGBOX_YESNO
# 160 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AETHERIA_Melissa_9
# 164 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto Aetheria_MelissaEnd
	goto ISLANDGAME_AETHERIA_Melissa_1

ISLANDGAME_AETHERIA_Melissa_6:
# 122 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Text_1
	goto ISLANDGAME_AETHERIA_Melissa_5

ISLANDGAME_AETHERIA_Melissa_9:
# 161 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	call ISLANDGAME_AETHERIA_Melissa_Battle
	goto ISLANDGAME_AETHERIA_Melissa_1

ISLANDGAME_AETHERIA_Melissa_12:
# 143 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Text_5
# 147 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	savebgm MUS_DUMMY
# 148 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadedefaultbgm
# 149 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto Aetheria_MelissaEnd
	goto ISLANDGAME_AETHERIA_Melissa_1


ISLANDGAME_AETHERIA_Melissa_Battle::
# 174 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Battle_Text_0
# 177 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	trainerbattle_no_intro TRAINER_AETHERIA_MELISSA, ISLANDGAME_AETHERIA_Melissa_Battle_Text_1
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ISLANDGAME_AETHERIA_Melissa_Battle_1
	return

ISLANDGAME_AETHERIA_Melissa_Battle_1:
# 184 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setvar VAR_AETHERIA_STATE, 2
# 185 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playbgm MUS_HG_LYRA, TRUE
# 186 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Battle_Text_2
# 190 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	giveitem ITEM_ISLANDGAME_MUSEUM_TICKET
# 191 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Battle_Text_3, MSGBOX_AUTOCLOSE
# 194 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playse SE_BIKE_HOP
# 195 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement LOCALID_MELISSA, ISLANDGAME_AETHERIA_Melissa_Battle_Movement_0
# 196 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmovement 0
# 197 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_Melissa_Battle_Movement_1
# 198 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement LOCALID_MELISSA, ISLANDGAME_AETHERIA_Melissa_Battle_Movement_2
# 199 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmovement 0
# 200 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	savebgm MUS_DUMMY
# 201 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadedefaultbgm
# 202 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	removeobject LOCALID_MELISSA
# 203 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setobjecthidden LOCALID_MELISSA
# 204 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, QUEST_AETHERIA_MELISSA, 0
	return


ISLANDGAME_AETHERIA_WelcomeSign::
# 255 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WelcomeSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_FanClubSign::
# 262 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FanClubSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_CondoSign::
# 268 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CondoSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_ArtMuseum::
# 274 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_ArtMuseum_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_CardShop::
# 281 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CardShop_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_DeptStore::
# 287 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DeptStore_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_EmptyTrash::
# 294 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_EmptyTrash_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_TheRecruiter::
	return


ISLANDGAME_AETHERIA_IceCreamLady::
# 322 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 323 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 324 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	showmoneybox 18, 1
# 325 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_IceCreamLady_Text_0, MSGBOX_YESNO
# 328 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AETHERIA_IceCreamLady_2
ISLANDGAME_AETHERIA_IceCreamLady_1:
# 349 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	hidemoneybox
# 350 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 351 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_IceCreamLady_2:
# 329 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	checkmoney 500
# 330 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_AETHERIA_IceCreamLady_4
# 344 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_IceCreamLady_Text_2
	goto ISLANDGAME_AETHERIA_IceCreamLady_1

ISLANDGAME_AETHERIA_IceCreamLady_4:
# 331 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	removemoney 500
# 332 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	updatemoneybox
# 333 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playse SE_SHOP
# 334 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitse
# 335 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playse SE_VEND
# 336 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitse
# 337 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	hidemoneybox
# 338 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_IceCreamLady_Text_1
# 341 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	giveitem ITEM_CASTELIACONE
	goto ISLANDGAME_AETHERIA_IceCreamLady_1


ISLANDGAME_AETHERIA_Trainer1::
	return


ISLANDGAME_AETHERIA_NPC1::
# 381 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 382 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 383 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_TEMP_3, ISLANDGAME_AETHERIA_NPC1_2
# 389 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC1_Text_1
ISLANDGAME_AETHERIA_NPC1_1:
# 395 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 396 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_NPC1_2:
# 384 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC1_Text_0
	goto ISLANDGAME_AETHERIA_NPC1_1


ISLANDGAME_AETHERIA_NPC2::
# 401 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 402 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 403 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC2_Text_0
# 406 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 407 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC3::
# 412 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 413 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC3_Text_0
# 417 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 418 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC4::
# 423 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 424 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_TEMP_2, ISLANDGAME_AETHERIA_NPC4_2
# 430 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 431 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC4_Text_1
ISLANDGAME_AETHERIA_NPC4_1:
# 435 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 436 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_NPC4_2:
# 425 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC4_Text_0
	goto ISLANDGAME_AETHERIA_NPC4_1


ISLANDGAME_AETHERIA_NPC5::
# 441 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 442 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC5_Text_0
# 445 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 446 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC6::
# 451 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 452 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC6_Text_0
# 455 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 456 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC7::
# 461 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 462 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 463 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC7_Text_0
# 471 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 472 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC8::
# 477 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 478 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 479 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC8_Text_0
# 486 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 487 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC9::
# 492 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 493 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC9_Text_0
# 496 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 497 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC10::
# 502 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 503 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC10_Text_0
# 507 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 508 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC11::
# 513 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 514 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC11_Text_0
# 517 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 518 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC12::
# 523 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 524 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 525 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC12_Text_0
# 531 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 532 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC13::
# 537 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 538 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC13_Text_0
# 542 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 543 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC14::
# 548 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 549 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC14_Text_0
# 552 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 553 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC15::
# 558 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 559 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 560 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC15_Text_0
# 563 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 564 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC16::
# 569 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 570 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 571 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC16_Text_0
# 574 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 575 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC17::
# 580 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 581 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 582 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC17_Text_0
# 585 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 586 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC18::
# 591 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 592 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 593 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC18_Text_0
# 596 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 597 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC19::
# 602 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 603 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC19_Text_0
# 606 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 607 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC20::
# 612 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 613 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC20_Text_0
# 616 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 617 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC21::
# 622 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 623 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC21_Text_0
# 626 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 627 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC22::
# 632 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 633 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 634 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC22_Text_0
# 637 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 638 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC23::
# 643 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 644 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 645 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC23_Text_0
# 648 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 649 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC24::
# 654 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 655 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 656 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC24_Text_0
# 659 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 660 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC25::
# 665 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 666 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 667 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC25_Text_0
# 670 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 671 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC26::
# 676 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 677 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC26_Text_0
# 680 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 681 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC27::
# 686 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 687 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC27_Text_0
# 690 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 691 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC28::
# 696 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 697 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 698 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC28_Text_0
# 703 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	showmonpic SPECIES_ZAPDOS, 10, 3
# 704 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC28_Text_1
# 705 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	hidemonpic
# 706 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 707 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC28_Text_2
# 708 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 709 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	releaseall
	return


ISLANDGAME_AETHERIA_NPC29::
# 714 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 715 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 716 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC29_Text_0
# 720 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 721 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC30::
# 726 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 727 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 728 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC30_Text_0
# 731 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 732 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC31::
# 737 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 738 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 739 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	checkplayergender
# 740 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ISLANDGAME_AETHERIA_NPC31_2
# 747 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC31_Text_1
ISLANDGAME_AETHERIA_NPC31_1:
# 751 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 752 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_NPC31_2:
# 741 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC31_Text_0
	goto ISLANDGAME_AETHERIA_NPC31_1


ISLANDGAME_AETHERIA_Camellia::
# 756 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 757 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Camellia_Text_0
# 760 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 761 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_StrayPurrloin::
# 765 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 766 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 767 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playmoncry SPECIES_PURRLOIN, CRY_MODE_NORMAL
# 768 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmoncry
# 769 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Meloetta::
# 773 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 774 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 775 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playmoncry SPECIES_MELOETTA, CRY_MODE_NORMAL
# 776 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Meloetta_Text_0
# 779 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmoncry
# 780 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Birb::
# 784 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 785 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 786 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 787 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Birb_Text_0
# 790 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Observer1::
# 803 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 804 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 805 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Observer1_Text_0
# 808 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 809 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Observer2::
# 813 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 814 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 815 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Observer2_Text_0
# 818 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 819 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Observer3::
# 823 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 824 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 825 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Observer3_Text_0
# 828 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 829 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Observer4::
# 833 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 834 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 835 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Observer4_Text_0
# 838 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 839 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Battler1::
# 843 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 844 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Battler1_Text_0
# 847 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 848 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Battler2::
# 852 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 853 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Battler2_Text_0
# 856 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 857 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_FraxureBattle::
# 861 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 862 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playmoncry SPECIES_FRAXURE, CRY_MODE_NORMAL
# 863 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmoncry
# 864 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_KirliaBattle::
# 868 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 869 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 870 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmoncry
# 871 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_WallyDad::
# 884 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 885 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 886 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_WallyDad_2
# 892 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WallyDad_Text_1
ISLANDGAME_AETHERIA_WallyDad_1:
# 897 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 898 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_WallyDad_2:
# 887 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WallyDad_Text_0
	goto ISLANDGAME_AETHERIA_WallyDad_1


ISLANDGAME_AETHERIA_Scott::
# 902 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 903 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_Scott_2
# 910 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Scott_Text_1
ISLANDGAME_AETHERIA_Scott_1:
# 914 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 915 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_Scott_2:
# 904 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 905 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Scott_Text_0
	goto ISLANDGAME_AETHERIA_Scott_1


ISLANDGAME_AETHERIA_May::
# 919 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 920 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 921 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_May_2
# 927 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_May_Text_1
ISLANDGAME_AETHERIA_May_1:
# 931 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 932 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_May_2:
# 922 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_May_Text_0
	goto ISLANDGAME_AETHERIA_May_1


ISLANDGAME_AETHERIA_Brendan::
# 936 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 937 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 938 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_Brendan_2
# 944 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Brendan_Text_1
ISLANDGAME_AETHERIA_Brendan_1:
# 948 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 949 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_Brendan_2:
# 939 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Brendan_Text_0
	goto ISLANDGAME_AETHERIA_Brendan_1


ISLANDGAME_AETHERIA_Wally::
# 955 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 956 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 957 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_Wally_2
ISLANDGAME_AETHERIA_Wally_1:
# 963 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_1, MSGBOX_YESNO
# 967 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AETHERIA_Wally_5
# 1043 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_2
# 1046 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto Aetheria_CameoBattle_End
ISLANDGAME_AETHERIA_Wally_4:
# 1049 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
Aetheria_CameoBattle_End:
# 1050 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 1051 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_Wally_2:
# 958 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_0
# 961 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto Aetheria_CameoBattle_End
	goto ISLANDGAME_AETHERIA_Wally_1

ISLANDGAME_AETHERIA_Wally_5:
# 968 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	special SavePlayerParty
# 969 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 970 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	special ChooseHalfPartyForBattle
# 971 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitstate
# 972 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_AETHERIA_Wally_8
# 980 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 981 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setvar VAR_0x8000, 63
# 982 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setvar VAR_0x8001, 57
# 983 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	callnative TeleportCamera
# 984 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 66, 58
# 985 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 986 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement 8, Common_Movement_FaceLeft
# 987 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 988 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	delay 30
# 989 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 990 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmovement 0
# 991 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	delay 30
# 992 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_3
# 995 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_4
# 1005 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	multi_2_vs_2 TRAINER_AETHERIA_BRENDAN, ISLANDGAME_AETHERIA_Wally_Text_5, TRAINER_AETHERIA_MAY, ISLANDGAME_AETHERIA_Wally_Text_6, PARTNER_AETHERIA_WALLY
# 1006 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	switch VAR_RESULT
# 1007 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	case 1, ISLANDGAME_AETHERIA_Wally_12
# 1033 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1034 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	special SetCB2WhiteOut
# 1035 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitstate
	goto ISLANDGAME_AETHERIA_Wally_4

ISLANDGAME_AETHERIA_Wally_8:
# 973 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	special LoadPlayerParty
# 974 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_2
# 977 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto Aetheria_CameoBattle_End
	goto ISLANDGAME_AETHERIA_Wally_4

ISLANDGAME_AETHERIA_Wally_12:
# 1008 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1009 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setvar VAR_0x8000, 66
# 1010 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setvar VAR_0x8001, 58
# 1011 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	callnative TeleportCamera
# 1012 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1013 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 1014 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmovement 0
# 1015 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	delay 30
# 1016 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_7
# 1019 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 1020 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	delay 30
# 1021 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 1022 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmovement 0
# 1023 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1024 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmovement 0
# 1025 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_8
# 1029 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
# 1030 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setflag FLAG_DAILY_AETHERIA_CAMEO_BATTLE
# 1031 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto Aetheria_CameoBattle_End
	goto ISLANDGAME_AETHERIA_Wally_4


# 195 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
ISLANDGAME_AETHERIA_Melissa_Battle_Movement_0:
# 195 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	jump_right
# 195 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_down
# 195 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_down
# 195 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_down
# 195 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_down
	step_end

# 197 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
ISLANDGAME_AETHERIA_Melissa_Battle_Movement_1:
# 197 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	face_down
	step_end

# 198 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
ISLANDGAME_AETHERIA_Melissa_Battle_Movement_2:
# 198 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_down
# 198 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_down
# 198 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_down
# 198 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_left
# 198 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_left
# 198 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_left
# 198 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_left
# 198 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_down
# 198 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_down
# 198 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_down
	step_end

ISLANDGAME_AETHERIA_Melissa_Text_0:
# 118 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}{PLAYER}! What took ya so\n"
	.string "long? I've been waiting for hours!$"

ISLANDGAME_AETHERIA_Melissa_Text_1:
# 123 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Humph. Don't you know it's rude to stand\n"
	.string "a cute girl up?$"

ISLANDGAME_AETHERIA_Melissa_Text_2:
# 127 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Humph. Maybe I should reconsider giving\n"
	.string "the surprise I had planned for you...$"

ISLANDGAME_AETHERIA_Melissa_Text_3:
# 131 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "...{PAUSE 30}Hehe, just messing with ya! I heard\n"
	.string "about the commotion at Lumine Cave.\p"
	.string "I was a little bit worried, so I'm glad\n"
	.string "you're still together in one piece!\p"
	.string "Now that you're here...{PAUSE 30} Ta-da! Take a\n"
	.string "looksie at these!\p"
	.string "{COLOR GREEN}> Melissa flashes a pair of tickets.$"

ISLANDGAME_AETHERIA_Melissa_Text_4:
# 137 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "A new exhibit at the Aetheria Museum\n"
	.string "just recently opened up today!\p"
	.string "I figured since you're studying abroad\n"
	.string "here, we could check it out together!\p"
	.string "Buuut, here's the catch... These tickets\n"
	.string "weren't cheap to get a hold of...\p"
	.string "So in exchange, you'll have to entertain\n"
	.string "me with a battle! How's that sound?$"

ISLANDGAME_AETHERIA_Melissa_Text_5:
# 144 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Eeeeh? {PAUSE 30}You're not up for it right now?\p"
	.string "Well...{PAUSE 30} Let me know when you are! I'll be\n"
	.string "here.$"

ISLANDGAME_AETHERIA_Melissa_Text_6:
# 158 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Hehe. Ready to earn your ticket,\n"
	.string "{PLAYER}?$"

ISLANDGAME_AETHERIA_Melissa_Battle_Text_0:
# 175 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Get ready... me and Gibby have been\n"
	.string "itching for a rematch!$"

ISLANDGAME_AETHERIA_Melissa_Battle_Text_1:
# 179 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I heard that a single trainer managed\n"
	.string "to quell the outbreak at Lumine Cave.\p"
	.string "Ehe... That was you, wasn't it?$"

ISLANDGAME_AETHERIA_Melissa_Battle_Text_2:
# 187 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Oof, Looks like I bit off a\n"
	.string "little more than I could chew...\p"
	.string "Well, a deal's a deal! Dan-da-da-dan!\n"
	.string "Here's your prize!$"

ISLANDGAME_AETHERIA_Melissa_Battle_Text_3:
# 192 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Meet me inside whenever you're ready!\n"
	.string "Don't keep me waiting any longer, hehe.$"

ISLANDGAME_AETHERIA_WelcomeSign_Text_0:
# 256 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "AETHERIA\n"
	.string "Where stars are born!$"

ISLANDGAME_AETHERIA_FanClubSign_Text_0:
# 263 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "STARLIGHT FAN CLUB\n"
	.string "We stan the Queens of Marya!$"

ISLANDGAME_AETHERIA_CondoSign_Text_0:
# 269 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "SANTA MARIA CONDOMINIUMS$"

ISLANDGAME_AETHERIA_ArtMuseum_Text_0:
# 275 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "AETHERIA MUSEUM OF FINE ARTS\p"
	.string "“The Darkest Night” now showing!$"

ISLANDGAME_AETHERIA_CardShop_Text_0:
# 282 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "The Top Deck - Gaming Café\n"
	.string "Come play in our PTCG tournaments!$"

ISLANDGAME_AETHERIA_DeptStore_Text_0:
# 288 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "StrixCorp MegaMart\n"
	.string "“You want it? We got it!”$"

ISLANDGAME_AETHERIA_EmptyTrash_Text_0:
# 295 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "{COLOR RED}(There's nothing but garbage in here.)$"

ISLANDGAME_AETHERIA_IceCreamLady_Text_0:
# 326 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Helloooooo! Would you like some frosty\n"
	.string "Nice Cream? It's only ¥500 for a cone!$"

ISLANDGAME_AETHERIA_IceCreamLady_Text_1:
# 339 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Enjoy!$"

ISLANDGAME_AETHERIA_IceCreamLady_Text_2:
# 345 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Oh... you don't have enough money.$"

ISLANDGAME_AETHERIA_NPC1_Text_0:
# 385 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Uurrrp...?$"

ISLANDGAME_AETHERIA_NPC1_Text_1:
# 390 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ugggg... I'm tired of waking up at the\n"
	.string "crack of dawn just to sail this darn\l"
	.string "detective out into the great blue sea\l"
	.string "for the entire day...\p"
	.string "All in search of some secret island\n"
	.string "where a devious cabal is plotting world\l"
	.string "domination?\p"
	.string "I ain't even sure why we even\n"
	.string "entertainin' him. We found 'em washed\l"
	.string "ashore the beaches, and he's been\l"
	.string "nonstop yappin' bout this ever since.\p"
	.string "$"

ISLANDGAME_AETHERIA_NPC2_Text_0:
# 404 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Aetheria is always bustling with\n"
	.string "activity.\p"
	.string "Whether it's in the morning, at noon, or\n"
	.string "at night, there's always something to\l"
	.string "do!$"

ISLANDGAME_AETHERIA_NPC3_Text_0:
# 414 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Come on... {PAUSE 30}come on...{PAUSE 30}\p"
	.string "Drats... I was hoping for chicken, but I\n"
	.string "guess this will have to do...$"

ISLANDGAME_AETHERIA_NPC4_Text_0:
# 426 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I ain't got all day, kid! Do you want a\n"
	.string "crummy photo or not!?$"

ISLANDGAME_AETHERIA_NPC4_Text_1:
# 432 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Buzz off, kid. I'm off the clock. If you\n"
	.string "want a photo, come back tomorrow.$"

ISLANDGAME_AETHERIA_NPC5_Text_0:
# 443 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Waaaaaah! He's too scawwy!$"

ISLANDGAME_AETHERIA_NPC6_Text_0:
# 453 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "It's fine, dearie! He won't bite! He's not\n"
	.string "a real Pokémon!$"

ISLANDGAME_AETHERIA_NPC7_Text_0:
# 464 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
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

ISLANDGAME_AETHERIA_NPC8_Text_0:
# 480 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Since you foreigners clearly don't know\n"
	.string "how to read, I'll spell it out for you:\p"
	.string "LITTERING IS A F-E-L-O-N-Y IN MARYA!\n"
	.string "DO YOU UNDERSTAND THAT!?\p"
	.string "Ever since we opened the city to\n"
	.string "tourists, it's been absolutely riddled\l"
	.string "with garbage everywhere!\p"
	.string "And I've got the sneaking suspicion I\n"
	.string "know exactly who's causing all of it...$"

ISLANDGAME_AETHERIA_NPC9_Text_0:
# 494 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ah...! Such a rambunctious squabble of\n"
	.string "Wingulls...$"

ISLANDGAME_AETHERIA_NPC10_Text_0:
# 504 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Noooo! You can't just keep spamming the\n"
	.string "same move over and over again!\p"
	.string "You're supposed to be making\n"
	.string "calculated decisions based on what\l"
	.string "Pokémon I could potentially switch into\l"
	.string "and how I might punish you if I\l"
	.string "correctly predict your prediction!$"

ISLANDGAME_AETHERIA_NPC11_Text_0:
# 515 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "haha xtreme speed go weeeeee$"

ISLANDGAME_AETHERIA_NPC12_Text_0:
# 526 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ever imagined what it would be like to\n"
	.string "send out one of the Isle Guardians out\l"
	.string "into battle?\p"
	.string "Or how about even the great Guardian of\n"
	.string "the Sea?\p"
	.string "Well now you can, with our newest\n"
	.string "Pokémon TCG special expansion, Maryan\l"
	.string "Masters!\p"
	.string "This special mega set contains ALL of\n"
	.string "the Pokémon that can be found here in\l"
	.string "the isles, including regional variants,\l"
	.string "the legendary Isle Guardians, and you\l"
	.string "guessed it... our lord and savior, Lugia!\p"
	.string "What are you waiting for? Go inside and\n"
	.string "buy some product before we run out!$"

ISLANDGAME_AETHERIA_NPC13_Text_0:
# 539 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Cammie! Cammie! Are the rumors true?\n"
	.string "Are you dating a movie star from Unova?\p"
	.string "C'mon, spill the tea for us! What's his\n"
	.string "name? You can't hide it from us any\l"
	.string "longer! We have the photos!$"

ISLANDGAME_AETHERIA_NPC14_Text_0:
# 550 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "hi camie$"

ISLANDGAME_AETHERIA_NPC15_Text_0:
# 561 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "She can't be in a relationship... right?\p"
	.string "I mean, Camellia would never betray her\n"
	.string "fans like that... right?\p"
	.string "I've been supporting her ever since her\n"
	.string "first performance...$"

ISLANDGAME_AETHERIA_NPC16_Text_0:
# 572 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Camellia is so pretty...$"

ISLANDGAME_AETHERIA_NPC17_Text_0:
# 583 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I hope those rumors aren't true. It\n"
	.string "would ruin my one true pairing.$"

ISLANDGAME_AETHERIA_NPC18_Text_0:
# 594 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Camellia is my favorite of the\n"
	.string "STARLIGHT members. Her singing voice is\l"
	.string "phenomenal!$"

ISLANDGAME_AETHERIA_NPC19_Text_0:
# 604 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "{COLOR RED}(Looks like he's sound asleep.)$"

ISLANDGAME_AETHERIA_NPC20_Text_0:
# 614 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ehe... How do I look?$"

ISLANDGAME_AETHERIA_NPC21_Text_0:
# 624 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "ooooo kawaii desu yo$"

ISLANDGAME_AETHERIA_NPC22_Text_0:
# 635 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I missed out on the limited edition\n"
	.string "STARLIGHT idol collection, so I'm\l"
	.string "pretending the figurines in the window\l"
	.string "are mine.$"

ISLANDGAME_AETHERIA_NPC23_Text_0:
# 646 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "THIS IS MY BICYCLE!\p"
	.string "THERE ARE MANY LIKE IT, BUT THIS ONE IS\n"
	.string "MINE!\p"
	.string "WITHOUT ME, MY BICYCLE IS USELESS!\p"
	.string "WITHOUT MY BICYCLE, I AM USELESS!$"

ISLANDGAME_AETHERIA_NPC24_Text_0:
# 657 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "If you see anyone suspicious, like a big\n"
	.string "bald guy riding a motorcycle, please\l"
	.string "report it to us immediately!$"

ISLANDGAME_AETHERIA_NPC25_Text_0:
# 668 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Lumine is too hot... I wanna go back to\n"
	.string "Oranna.$"

ISLANDGAME_AETHERIA_NPC26_Text_0:
# 678 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I can't wait for the next rotation, man.\n"
	.string "Legit got sacked by this one loser\l"
	.string "abusing Budew to lock me out of all my\l"
	.string "item cards, then using Whimsicott to\l"
	.string "OHKO my Charizard! Like okay man, that\l"
	.string "seems really balanced.$"

ISLANDGAME_AETHERIA_NPC27_Text_0:
# 688 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Uh-huh... Yeah... Mhm... Oh yeah... I hear\n"
	.string "you...$"

ISLANDGAME_AETHERIA_NPC28_Text_0:
# 699 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Not many trainers have the opportunity\n"
	.string "of seeing Zapdos, the mighty guardian\l"
	.string "of Lumine...\p"
	.string "I was fortunate enough to catch a\n"
	.string "glimpse of it in the days of my youth\l"
	.string "however...$"

ISLANDGAME_AETHERIA_NPC28_Text_1:
# 704 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Here is a sketch I drew of it from\n"
	.string "memory.$"

ISLANDGAME_AETHERIA_NPC28_Text_2:
# 707 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "It is quite impressive, no?$"

ISLANDGAME_AETHERIA_NPC29_Text_0:
# 717 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "While I respect Detective Rio's\n"
	.string "tenacity, I think he's just wasting his\l"
	.string "time with these search missions.\p"
	.string "We've been scouring the sea for weeks.\n"
	.string "If there was some supposed secret\l"
	.string "island, don't you think we would have\l"
	.string "found it by now?$"

ISLANDGAME_AETHERIA_NPC30_Text_0:
# 729 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Haiyooo! Come have some hotcakes with\n"
	.string "us at Café Lumi! {COLOR GREEN}(='u'=)$"

ISLANDGAME_AETHERIA_NPC31_Text_0:
# 742 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ah... I'm flattered that I caught your\n"
	.string "eye, but I'm afraid you are much too\l"
	.string "young for me...\p"
	.string "Perhaps you would find better luck in\n"
	.string "say... that café by the coast...?$"

ISLANDGAME_AETHERIA_NPC31_Text_1:
# 748 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Hmm? May I help you, small child?$"

ISLANDGAME_AETHERIA_Camellia_Text_0:
# 758 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "-sigh- For the last time, that was my\n"
	.string "brother...$"

ISLANDGAME_AETHERIA_Meloetta_Text_0:
# 777 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "{COLOR BLUE}(These paparazzi guys are relentless.\n"
	.string "Being an idol is tough work.)$"

ISLANDGAME_AETHERIA_Birb_Text_0:
# 788 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "MIEN$"

ISLANDGAME_AETHERIA_Observer1_Text_0:
# 806 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Those kids look pretty tough...$"

ISLANDGAME_AETHERIA_Observer2_Text_0:
# 816 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Mommy lets me watch trainers battle\n"
	.string "here while she does shopping with my\l"
	.string "sister!$"

ISLANDGAME_AETHERIA_Observer3_Text_0:
# 826 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I once believed that Pokémon battles\n"
	.string "were barbaric, but I have come to\l"
	.string "understand that they are merely a form\l"
	.string "of bonding between Pokémon and their\l"
	.string "trainers.$"

ISLANDGAME_AETHERIA_Observer4_Text_0:
# 836 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Joey, this is why I told you to study up\n"
	.string "before you get back into battling...$"

ISLANDGAME_AETHERIA_Battler1_Text_0:
# 845 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Nyeh!? My attack... it had no effect!?$"

ISLANDGAME_AETHERIA_Battler2_Text_0:
# 854 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "You dummy! Kirlia is part fairy-type!\n"
	.string "How out of the loop are you!?$"

ISLANDGAME_AETHERIA_WallyDad_Text_0:
# 888 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Thanks for battling alongside Wally.\p"
	.string "I wish the best of luck on the rest of\n"
	.string "your journey!$"

ISLANDGAME_AETHERIA_WallyDad_Text_1:
# 893 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ever since Wally's recovered from his\n"
	.string "illness, he's been really itching to go\l"
	.string "out and explore the world of Pokémon\l"
	.string "beyond the Hoenn region.\p"
	.string "So when the opportunity arose for us to\n"
	.string "travel all the way here, you bet we took\l"
	.string "it!$"

ISLANDGAME_AETHERIA_Scott_Text_0:
# 906 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Those battles were hot, hot, hot!\p"
	.string "Howsabout a trainer like you come with\n"
	.string "me back to the Hoenn region and\l"
	.string "compete in the Battle Frontier?\p"
	.string "$"

ISLANDGAME_AETHERIA_Scott_Text_1:
# 911 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ohoho, it's been a hot minute since I've\n"
	.string "seen these champs battle!$"

ISLANDGAME_AETHERIA_May_Text_0:
# 923 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "You're one tough lava cookie, randy!\n"
	.string "Don't get too complacent though... I'll\l"
	.string "be back for a rematch soon!$"

ISLANDGAME_AETHERIA_May_Text_1:
# 928 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "After spending the entire day walking\n"
	.string "around the city, I'm glad to finally take\l"
	.string "a break and battle!$"

ISLANDGAME_AETHERIA_Brendan_Text_0:
# 940 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Heh... I guess I'm a little out of\n"
	.string "practice...$"

ISLANDGAME_AETHERIA_Brendan_Text_1:
# 945 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I was looking most forward to visiting\n"
	.string "the contest hall here, but I was\l"
	.string "disappointed to find out that it's been\l"
	.string "repurposed into a performance hall for\l"
	.string "Pokémon Idols instead.$"

ISLANDGAME_AETHERIA_Wally_Text_0:
# 959 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "We're also going to be at the Silverwing\n"
	.string "Festival, so hope to catch you there!$"

ISLANDGAME_AETHERIA_Wally_Text_1:
# 964 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Hey there! We're looking for a trainer\n"
	.string "to join us in a multi battle! Would you\l"
	.string "like to be my teammate?$"

ISLANDGAME_AETHERIA_Wally_Text_2:
# 975 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Darn... I was hoping to get a quick\n"
	.string "pick-up battle in.$"

ISLANDGAME_AETHERIA_Wally_Text_3:
# 993 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Alright! Ready when you two are!$"

ISLANDGAME_AETHERIA_Wally_Text_4:
# 996 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "{COLOR GREEN}May: {COLOR DARK_GRAY}Just a fair warning, randy, we'll be\n"
	.string "coming at you with full force!\p"
	.string "{COLOR GREEN}Brendan: {COLOR DARK_GRAY}Boisterous as ever...$"

ISLANDGAME_AETHERIA_Wally_Text_5:
# 1005 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Well, this shirt is ruined...$"

ISLANDGAME_AETHERIA_Wally_Text_6:
# 1005 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Auuuugh! No way! We lost!?$"

ISLANDGAME_AETHERIA_Wally_Text_7:
# 1017 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Hehe... looks like I win this time!$"

ISLANDGAME_AETHERIA_Wally_Text_8:
# 1026 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I couldn't have done it without you,\n"
	.string "{PLAYER}! You and your Pokémon were\l"
	.string "amazing!\p"
	.string "Here, take one of these, as thanks for\n"
	.string "your part in our victory.$"
