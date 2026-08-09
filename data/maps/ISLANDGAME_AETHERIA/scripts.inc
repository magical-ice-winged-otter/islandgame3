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


ISLANDGAME_AETHERIA_CardShop::
# 274 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CardShop_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_DeptStore::
# 280 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DeptStore_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_EmptyTrash::
# 287 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_EmptyTrash_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_TheRecruiter::
	return


ISLANDGAME_AETHERIA_IceCreamLady::
# 315 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 316 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 317 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	showmoneybox 18, 1
# 318 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_IceCreamLady_Text_0, MSGBOX_YESNO
# 321 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AETHERIA_IceCreamLady_2
ISLANDGAME_AETHERIA_IceCreamLady_1:
# 342 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	hidemoneybox
# 343 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 344 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_IceCreamLady_2:
# 322 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	checkmoney 500
# 323 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_AETHERIA_IceCreamLady_4
# 337 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_IceCreamLady_Text_2
	goto ISLANDGAME_AETHERIA_IceCreamLady_1

ISLANDGAME_AETHERIA_IceCreamLady_4:
# 324 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	removemoney 500
# 325 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	updatemoneybox
# 326 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playse SE_SHOP
# 327 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitse
# 328 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playse SE_VEND
# 329 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitse
# 330 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	hidemoneybox
# 331 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_IceCreamLady_Text_1
# 334 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	giveitem ITEM_CASTELIACONE
	goto ISLANDGAME_AETHERIA_IceCreamLady_1


ISLANDGAME_AETHERIA_Trainer1::
	return


ISLANDGAME_AETHERIA_NPC1::
# 374 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 375 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 376 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_TEMP_3, ISLANDGAME_AETHERIA_NPC1_2
# 382 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC1_Text_1
ISLANDGAME_AETHERIA_NPC1_1:
# 388 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 389 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_NPC1_2:
# 377 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC1_Text_0
	goto ISLANDGAME_AETHERIA_NPC1_1


ISLANDGAME_AETHERIA_NPC2::
# 394 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 395 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 396 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC2_Text_0
# 399 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 400 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC3::
# 405 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 406 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC3_Text_0
# 410 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 411 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC4::
# 416 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 417 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_TEMP_2, ISLANDGAME_AETHERIA_NPC4_2
# 423 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 424 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC4_Text_1
ISLANDGAME_AETHERIA_NPC4_1:
# 428 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 429 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_NPC4_2:
# 418 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC4_Text_0
	goto ISLANDGAME_AETHERIA_NPC4_1


ISLANDGAME_AETHERIA_NPC5::
# 434 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 435 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC5_Text_0
# 438 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 439 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC6::
# 444 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 445 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC6_Text_0
# 448 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 449 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC7::
# 454 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 455 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 456 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC7_Text_0
# 464 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 465 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC8::
# 470 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 471 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 472 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC8_Text_0
# 479 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 480 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC9::
# 485 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 486 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC9_Text_0
# 489 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 490 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC10::
# 495 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 496 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC10_Text_0
# 500 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 501 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC11::
# 506 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 507 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC11_Text_0
# 510 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 511 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC12::
# 516 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 517 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 518 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC12_Text_0
# 524 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 525 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC13::
# 530 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 531 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC13_Text_0
# 535 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 536 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC14::
# 541 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 542 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC14_Text_0
# 545 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 546 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC15::
# 551 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 552 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 553 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC15_Text_0
# 556 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 557 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC16::
# 562 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 563 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 564 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC16_Text_0
# 567 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 568 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC17::
# 573 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 574 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 575 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC17_Text_0
# 578 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 579 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC18::
# 584 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 585 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 586 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC18_Text_0
# 589 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 590 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC19::
# 595 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 596 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC19_Text_0
# 599 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 600 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC20::
# 605 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 606 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC20_Text_0
# 609 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 610 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC21::
# 615 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 616 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC21_Text_0
# 619 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 620 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC22::
# 625 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 626 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 627 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC22_Text_0
# 630 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 631 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC23::
# 636 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 637 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 638 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC23_Text_0
# 641 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 642 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC24::
# 647 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 648 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 649 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC24_Text_0
# 652 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 653 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC25::
# 658 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 659 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 660 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC25_Text_0
# 663 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 664 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC26::
# 669 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 670 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC26_Text_0
# 673 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 674 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC27::
# 679 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 680 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC27_Text_0
# 683 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 684 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC28::
# 689 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 690 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 691 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC28_Text_0
# 696 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	showmonpic SPECIES_ZAPDOS, 10, 3
# 697 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC28_Text_1
# 698 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	hidemonpic
# 699 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 700 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC28_Text_2
# 701 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 702 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	releaseall
	return


ISLANDGAME_AETHERIA_NPC29::
# 707 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 708 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 709 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC29_Text_0
# 713 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 714 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC30::
# 719 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 720 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 721 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC30_Text_0
# 724 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 725 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC31::
# 730 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 731 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 732 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	checkplayergender
# 733 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ISLANDGAME_AETHERIA_NPC31_2
# 740 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC31_Text_1
ISLANDGAME_AETHERIA_NPC31_1:
# 744 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 745 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_NPC31_2:
# 734 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC31_Text_0
	goto ISLANDGAME_AETHERIA_NPC31_1


ISLANDGAME_AETHERIA_Camellia::
# 749 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 750 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Camellia_Text_0
# 753 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 754 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_StrayPurrloin::
# 758 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 759 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 760 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playmoncry SPECIES_PURRLOIN, CRY_MODE_NORMAL
# 761 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmoncry
# 762 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Meloetta::
# 766 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 767 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 768 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playmoncry SPECIES_MELOETTA, CRY_MODE_NORMAL
# 769 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Meloetta_Text_0
# 772 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmoncry
# 773 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Birb::
# 777 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 778 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 779 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 780 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Birb_Text_0
# 783 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Observer1::
# 796 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 797 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 798 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Observer1_Text_0
# 801 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 802 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Observer2::
# 806 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 807 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 808 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Observer2_Text_0
# 811 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 812 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Observer3::
# 816 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 817 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 818 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Observer3_Text_0
# 821 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 822 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Observer4::
# 826 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 827 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 828 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Observer4_Text_0
# 831 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 832 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Battler1::
# 836 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 837 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Battler1_Text_0
# 840 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 841 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Battler2::
# 845 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 846 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Battler2_Text_0
# 849 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 850 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_FraxureBattle::
# 854 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 855 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playmoncry SPECIES_FRAXURE, CRY_MODE_NORMAL
# 856 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmoncry
# 857 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_KirliaBattle::
# 861 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 862 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 863 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmoncry
# 864 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_WallyDad::
# 877 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 878 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 879 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_WallyDad_2
# 885 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WallyDad_Text_1
ISLANDGAME_AETHERIA_WallyDad_1:
# 890 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 891 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_WallyDad_2:
# 880 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WallyDad_Text_0
	goto ISLANDGAME_AETHERIA_WallyDad_1


ISLANDGAME_AETHERIA_Scott::
# 895 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 896 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_Scott_2
# 903 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Scott_Text_1
ISLANDGAME_AETHERIA_Scott_1:
# 907 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 908 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_Scott_2:
# 897 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 898 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Scott_Text_0
	goto ISLANDGAME_AETHERIA_Scott_1


ISLANDGAME_AETHERIA_May::
# 912 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 913 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 914 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_May_2
# 920 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_May_Text_1
ISLANDGAME_AETHERIA_May_1:
# 924 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 925 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_May_2:
# 915 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_May_Text_0
	goto ISLANDGAME_AETHERIA_May_1


ISLANDGAME_AETHERIA_Brendan::
# 929 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 930 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 931 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_Brendan_2
# 937 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Brendan_Text_1
ISLANDGAME_AETHERIA_Brendan_1:
# 941 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 942 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_Brendan_2:
# 932 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Brendan_Text_0
	goto ISLANDGAME_AETHERIA_Brendan_1


ISLANDGAME_AETHERIA_Wally::
# 948 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 949 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 950 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_Wally_2
ISLANDGAME_AETHERIA_Wally_1:
# 956 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_1, MSGBOX_YESNO
# 960 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AETHERIA_Wally_5
# 1036 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_2
# 1039 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto Aetheria_CameoBattle_End
ISLANDGAME_AETHERIA_Wally_4:
# 1042 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
Aetheria_CameoBattle_End:
# 1043 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 1044 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_Wally_2:
# 951 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_0
# 954 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto Aetheria_CameoBattle_End
	goto ISLANDGAME_AETHERIA_Wally_1

ISLANDGAME_AETHERIA_Wally_5:
# 961 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	special SavePlayerParty
# 962 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 963 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	special ChooseHalfPartyForBattle
# 964 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitstate
# 965 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_AETHERIA_Wally_8
# 973 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 974 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setvar VAR_0x8000, 63
# 975 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setvar VAR_0x8001, 57
# 976 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	callnative TeleportCamera
# 977 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 66, 58
# 978 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 979 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement 8, Common_Movement_FaceLeft
# 980 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 981 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	delay 30
# 982 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 983 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmovement 0
# 984 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	delay 30
# 985 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_3
# 988 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_4
# 998 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	multi_2_vs_2 TRAINER_AETHERIA_BRENDAN, ISLANDGAME_AETHERIA_Wally_Text_5, TRAINER_AETHERIA_MAY, ISLANDGAME_AETHERIA_Wally_Text_6, PARTNER_AETHERIA_WALLY
# 999 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	switch VAR_RESULT
# 1000 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	case 1, ISLANDGAME_AETHERIA_Wally_12
# 1026 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1027 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	special SetCB2WhiteOut
# 1028 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitstate
	goto ISLANDGAME_AETHERIA_Wally_4

ISLANDGAME_AETHERIA_Wally_8:
# 966 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	special LoadPlayerParty
# 967 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_2
# 970 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto Aetheria_CameoBattle_End
	goto ISLANDGAME_AETHERIA_Wally_4

ISLANDGAME_AETHERIA_Wally_12:
# 1001 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1002 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setvar VAR_0x8000, 66
# 1003 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setvar VAR_0x8001, 58
# 1004 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	callnative TeleportCamera
# 1005 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1006 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 1007 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmovement 0
# 1008 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	delay 30
# 1009 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_7
# 1012 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 1013 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	delay 30
# 1014 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 1015 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmovement 0
# 1016 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1017 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmovement 0
# 1018 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_8
# 1022 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
# 1023 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setflag FLAG_DAILY_AETHERIA_CAMEO_BATTLE
# 1024 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
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

ISLANDGAME_AETHERIA_CardShop_Text_0:
# 275 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "The Top Deck - Gaming Café\n"
	.string "Come play in our PTCG tournaments!$"

ISLANDGAME_AETHERIA_DeptStore_Text_0:
# 281 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "StrixCorp MegaMart\n"
	.string "“You want it? We got it!”$"

ISLANDGAME_AETHERIA_EmptyTrash_Text_0:
# 288 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "{COLOR RED}(There's nothing but garbage in here.)$"

ISLANDGAME_AETHERIA_IceCreamLady_Text_0:
# 319 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Helloooooo! Would you like some frosty\n"
	.string "Nice Cream? It's only ¥500 for a cone!$"

ISLANDGAME_AETHERIA_IceCreamLady_Text_1:
# 332 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Enjoy!$"

ISLANDGAME_AETHERIA_IceCreamLady_Text_2:
# 338 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Oh... you don't have enough money.$"

ISLANDGAME_AETHERIA_NPC1_Text_0:
# 378 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Uurrrp...?$"

ISLANDGAME_AETHERIA_NPC1_Text_1:
# 383 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
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
# 397 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Aetheria is always bustling with\n"
	.string "activity.\p"
	.string "Whether it's in the morning, at noon, or\n"
	.string "at night, there's always something to\l"
	.string "do!$"

ISLANDGAME_AETHERIA_NPC3_Text_0:
# 407 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Come on... {PAUSE 30}come on...{PAUSE 30}\p"
	.string "Drats... I was hoping for chicken, but I\n"
	.string "guess this will have to do...$"

ISLANDGAME_AETHERIA_NPC4_Text_0:
# 419 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I ain't got all day, kid! Do you want a\n"
	.string "crummy photo or not!?$"

ISLANDGAME_AETHERIA_NPC4_Text_1:
# 425 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Buzz off, kid. I'm off the clock. If you\n"
	.string "want a photo, come back tomorrow.$"

ISLANDGAME_AETHERIA_NPC5_Text_0:
# 436 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Waaaaaah! He's too scawwy!$"

ISLANDGAME_AETHERIA_NPC6_Text_0:
# 446 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "It's fine, dearie! He won't bite! He's not\n"
	.string "a real Pokémon!$"

ISLANDGAME_AETHERIA_NPC7_Text_0:
# 457 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
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
# 473 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
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
# 487 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ah...! Such a rambunctious squabble of\n"
	.string "Wingulls...$"

ISLANDGAME_AETHERIA_NPC10_Text_0:
# 497 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Noooo! You can't just keep spamming the\n"
	.string "same move over and over again!\p"
	.string "You're supposed to be making\n"
	.string "calculated decisions based on what\l"
	.string "Pokémon I could potentially switch into\l"
	.string "and how I might punish you if I\l"
	.string "correctly predict your prediction!$"

ISLANDGAME_AETHERIA_NPC11_Text_0:
# 508 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "haha xtreme speed go weeeeee$"

ISLANDGAME_AETHERIA_NPC12_Text_0:
# 519 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
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
# 532 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Cammie! Cammie! Are the rumors true?\n"
	.string "Are you dating a movie star from Unova?\p"
	.string "C'mon, spill the tea for us! What's his\n"
	.string "name? You can't hide it from us any\l"
	.string "longer! We have the photos!$"

ISLANDGAME_AETHERIA_NPC14_Text_0:
# 543 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "hi camie$"

ISLANDGAME_AETHERIA_NPC15_Text_0:
# 554 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "She can't be in a relationship... right?\p"
	.string "I mean, Camellia would never betray her\n"
	.string "fans like that... right?\p"
	.string "I've been supporting her ever since her\n"
	.string "first performance...$"

ISLANDGAME_AETHERIA_NPC16_Text_0:
# 565 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Camellia is so pretty...$"

ISLANDGAME_AETHERIA_NPC17_Text_0:
# 576 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I hope those rumors aren't true. It\n"
	.string "would ruin my one true pairing.$"

ISLANDGAME_AETHERIA_NPC18_Text_0:
# 587 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Camellia is my favorite of the\n"
	.string "STARLIGHT members. Her singing voice is\l"
	.string "phenomenal!$"

ISLANDGAME_AETHERIA_NPC19_Text_0:
# 597 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "{COLOR RED}(Looks like he's sound asleep.)$"

ISLANDGAME_AETHERIA_NPC20_Text_0:
# 607 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ehe... How do I look?$"

ISLANDGAME_AETHERIA_NPC21_Text_0:
# 617 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "ooooo kawaii desu yo$"

ISLANDGAME_AETHERIA_NPC22_Text_0:
# 628 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I missed out on the limited edition\n"
	.string "STARLIGHT idol collection, so I'm\l"
	.string "pretending the figurines in the window\l"
	.string "are mine.$"

ISLANDGAME_AETHERIA_NPC23_Text_0:
# 639 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "THIS IS MY BICYCLE!\p"
	.string "THERE ARE MANY LIKE IT, BUT THIS ONE IS\n"
	.string "MINE!\p"
	.string "WITHOUT ME, MY BICYCLE IS USELESS!\p"
	.string "WITHOUT MY BICYCLE, I AM USELESS!$"

ISLANDGAME_AETHERIA_NPC24_Text_0:
# 650 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "If you see anyone suspicious, like a big\n"
	.string "bald guy riding a motorcycle, please\l"
	.string "report it to us immediately!$"

ISLANDGAME_AETHERIA_NPC25_Text_0:
# 661 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Lumine is too hot... I wanna go back to\n"
	.string "Oranna.$"

ISLANDGAME_AETHERIA_NPC26_Text_0:
# 671 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I can't wait for the next rotation, man.\n"
	.string "Legit got sacked by this one loser\l"
	.string "abusing Budew to lock me out of all my\l"
	.string "item cards, then using Whimsicott to\l"
	.string "OHKO my Charizard! Like okay man, that\l"
	.string "seems really balanced.$"

ISLANDGAME_AETHERIA_NPC27_Text_0:
# 681 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Uh-huh... Yeah... Mhm... Oh yeah... I hear\n"
	.string "you...$"

ISLANDGAME_AETHERIA_NPC28_Text_0:
# 692 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Not many trainers have the opportunity\n"
	.string "of seeing Zapdos, the mighty guardian\l"
	.string "of Lumine...\p"
	.string "I was fortunate enough to catch a\n"
	.string "glimpse of it in the days of my youth\l"
	.string "however...$"

ISLANDGAME_AETHERIA_NPC28_Text_1:
# 697 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Here is a sketch I drew of it from\n"
	.string "memory.$"

ISLANDGAME_AETHERIA_NPC28_Text_2:
# 700 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "It is quite impressive, no?$"

ISLANDGAME_AETHERIA_NPC29_Text_0:
# 710 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "While I respect Detective Rio's\n"
	.string "tenacity, I think he's just wasting his\l"
	.string "time with these search missions.\p"
	.string "We've been scouring the sea for weeks.\n"
	.string "If there was some supposed secret\l"
	.string "island, don't you think we would have\l"
	.string "found it by now?$"

ISLANDGAME_AETHERIA_NPC30_Text_0:
# 722 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Haiyooo! Come have some hotcakes with\n"
	.string "us at Café Lumi! {COLOR GREEN}(='u'=)$"

ISLANDGAME_AETHERIA_NPC31_Text_0:
# 735 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ah... I'm flattered that I caught your\n"
	.string "eye, but I'm afraid you are much too\l"
	.string "young for me...\p"
	.string "Perhaps you would find better luck in\n"
	.string "say... that café by the coast...?$"

ISLANDGAME_AETHERIA_NPC31_Text_1:
# 741 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Hmm? May I help you, small child?$"

ISLANDGAME_AETHERIA_Camellia_Text_0:
# 751 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "-sigh- For the last time, that was my\n"
	.string "brother...$"

ISLANDGAME_AETHERIA_Meloetta_Text_0:
# 770 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "{COLOR BLUE}(These paparazzi guys are relentless.\n"
	.string "Being an idol is tough work.)$"

ISLANDGAME_AETHERIA_Birb_Text_0:
# 781 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "MIEN$"

ISLANDGAME_AETHERIA_Observer1_Text_0:
# 799 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Those kids look pretty tough...$"

ISLANDGAME_AETHERIA_Observer2_Text_0:
# 809 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Mommy lets me watch trainers battle\n"
	.string "here while she does shopping with my\l"
	.string "sister!$"

ISLANDGAME_AETHERIA_Observer3_Text_0:
# 819 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I once believed that Pokémon battles\n"
	.string "were barbaric, but I have come to\l"
	.string "understand that they are merely a form\l"
	.string "of bonding between Pokémon and their\l"
	.string "trainers.$"

ISLANDGAME_AETHERIA_Observer4_Text_0:
# 829 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Joey, this is why I told you to study up\n"
	.string "before you get back into battling...$"

ISLANDGAME_AETHERIA_Battler1_Text_0:
# 838 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Nyeh!? My attack... it had no effect!?$"

ISLANDGAME_AETHERIA_Battler2_Text_0:
# 847 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "You dummy! Kirlia is part fairy-type!\n"
	.string "How out of the loop are you!?$"

ISLANDGAME_AETHERIA_WallyDad_Text_0:
# 881 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Thanks for battling alongside Wally.\p"
	.string "I wish the best of luck on the rest of\n"
	.string "your journey!$"

ISLANDGAME_AETHERIA_WallyDad_Text_1:
# 886 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ever since Wally's recovered from his\n"
	.string "illness, he's been really itching to go\l"
	.string "out and explore the world of Pokémon\l"
	.string "beyond the Hoenn region.\p"
	.string "So when the opportunity arose for us to\n"
	.string "travel all the way here, you bet we took\l"
	.string "it!$"

ISLANDGAME_AETHERIA_Scott_Text_0:
# 899 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Those battles were hot, hot, hot!\p"
	.string "Howsabout a trainer like you come with\n"
	.string "me back to the Hoenn region and\l"
	.string "compete in the Battle Frontier?\p"
	.string "$"

ISLANDGAME_AETHERIA_Scott_Text_1:
# 904 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ohoho, it's been a hot minute since I've\n"
	.string "seen these champs battle!$"

ISLANDGAME_AETHERIA_May_Text_0:
# 916 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "You're one tough lava cookie, randy!\n"
	.string "Don't get too complacent though... I'll\l"
	.string "be back for a rematch soon!$"

ISLANDGAME_AETHERIA_May_Text_1:
# 921 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "After spending the entire day walking\n"
	.string "around the city, I'm glad to finally take\l"
	.string "a break and battle!$"

ISLANDGAME_AETHERIA_Brendan_Text_0:
# 933 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Heh... I guess I'm a little out of\n"
	.string "practice...$"

ISLANDGAME_AETHERIA_Brendan_Text_1:
# 938 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I was looking most forward to visiting\n"
	.string "the contest hall here, but I was\l"
	.string "disappointed to find out that it's been\l"
	.string "repurposed into a performance hall for\l"
	.string "Pokémon Idols instead.$"

ISLANDGAME_AETHERIA_Wally_Text_0:
# 952 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "We're also going to be at the Silverwing\n"
	.string "Festival, so hope to catch you there!$"

ISLANDGAME_AETHERIA_Wally_Text_1:
# 957 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Hey there! We're looking for a trainer\n"
	.string "to join us in a multi battle! Would you\l"
	.string "like to be my teammate?$"

ISLANDGAME_AETHERIA_Wally_Text_2:
# 968 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Darn... I was hoping to get a quick\n"
	.string "pick-up battle in.$"

ISLANDGAME_AETHERIA_Wally_Text_3:
# 986 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Alright! Ready when you two are!$"

ISLANDGAME_AETHERIA_Wally_Text_4:
# 989 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "{COLOR GREEN}May: {COLOR DARK_GRAY}Just a fair warning, randy, we'll be\n"
	.string "coming at you with full force!\p"
	.string "{COLOR GREEN}Brendan: {COLOR DARK_GRAY}Boisterous as ever...$"

ISLANDGAME_AETHERIA_Wally_Text_5:
# 998 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Well, this shirt is ruined...$"

ISLANDGAME_AETHERIA_Wally_Text_6:
# 998 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Auuuugh! No way! We lost!?$"

ISLANDGAME_AETHERIA_Wally_Text_7:
# 1010 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Hehe... looks like I win this time!$"

ISLANDGAME_AETHERIA_Wally_Text_8:
# 1019 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I couldn't have done it without you,\n"
	.string "{PLAYER}! You and your Pokémon were\l"
	.string "amazing!\p"
	.string "Here, take one of these, as thanks for\n"
	.string "your part in our victory.$"
