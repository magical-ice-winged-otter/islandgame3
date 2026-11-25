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
# 27 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setflag FLAG_TEMP_2
ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 30 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	switch VAR_AETHERIA_STATE
# 31 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	case 2, ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 24 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setflag FLAG_TEMP_3
	goto ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 32 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setobjecthidden LOCALID_MELISSA
	return


ISLANDGAME_AETHERIA_Melissa::
# 103 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	switch VAR_AETHERIA_STATE
# 104 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	case 0, ISLANDGAME_AETHERIA_Melissa_3
# 159 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	case 1, ISLANDGAME_AETHERIA_Melissa_4
ISLANDGAME_AETHERIA_Melissa_1:
# 173 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
Aetheria_MelissaEnd:
# 174 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 175 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_Melissa_3:
# 105 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setvar VAR_AETHERIA_STATE, 1
# 106 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 107 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 108 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playbgm MUS_HG_LYRA, TRUE
# 109 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Text_0
# 112 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	checkplayergender
# 113 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ISLANDGAME_AETHERIA_Melissa_6
# 119 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Text_2
ISLANDGAME_AETHERIA_Melissa_5:
# 123 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Text_3
# 129 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Text_4
# 133 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	checkplayergender
# 134 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ISLANDGAME_AETHERIA_Melissa_13
# 142 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Text_6, MSGBOX_YESNO
ISLANDGAME_AETHERIA_Melissa_12:
# 147 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_Melissa_16
# 157 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	call ISLANDGAME_AETHERIA_Melissa_Battle
	goto ISLANDGAME_AETHERIA_Melissa_1

ISLANDGAME_AETHERIA_Melissa_4:
# 160 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 161 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 162 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Text_8, MSGBOX_YESNO
# 165 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AETHERIA_Melissa_9
# 169 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto Aetheria_MelissaEnd
	goto ISLANDGAME_AETHERIA_Melissa_1

ISLANDGAME_AETHERIA_Melissa_6:
# 114 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Text_1
	goto ISLANDGAME_AETHERIA_Melissa_5

ISLANDGAME_AETHERIA_Melissa_9:
# 166 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	call ISLANDGAME_AETHERIA_Melissa_Battle
	goto ISLANDGAME_AETHERIA_Melissa_1

ISLANDGAME_AETHERIA_Melissa_13:
# 135 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Text_5, MSGBOX_YESNO
	goto ISLANDGAME_AETHERIA_Melissa_12

ISLANDGAME_AETHERIA_Melissa_16:
# 148 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Text_7
# 152 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	savebgm MUS_DUMMY
# 153 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadedefaultbgm
# 154 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto Aetheria_MelissaEnd
	goto ISLANDGAME_AETHERIA_Melissa_1


ISLANDGAME_AETHERIA_Melissa_Battle::
# 179 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Battle_Text_0
# 182 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	trainerbattle_no_intro TRAINER_AETHERIA_MELISSA, ISLANDGAME_AETHERIA_Melissa_Battle_Text_1
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ISLANDGAME_AETHERIA_Melissa_Battle_1
	return

ISLANDGAME_AETHERIA_Melissa_Battle_1:
# 189 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setvar VAR_AETHERIA_STATE, 2
# 190 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playbgm MUS_HG_LYRA, TRUE
# 191 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Battle_Text_2
# 195 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	giveitem ITEM_ISLANDGAME_MUSEUM_TICKET
# 196 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Melissa_Battle_Text_3, MSGBOX_AUTOCLOSE
# 199 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playse SE_BIKE_HOP
# 200 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement LOCALID_MELISSA, ISLANDGAME_AETHERIA_Melissa_Battle_Movement_0
# 201 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmovement 0
# 202 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_Melissa_Battle_Movement_1
# 203 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement LOCALID_MELISSA, ISLANDGAME_AETHERIA_Melissa_Battle_Movement_2
# 204 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmovement 0
# 205 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	savebgm MUS_DUMMY
# 206 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadedefaultbgm
# 207 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	removeobject LOCALID_MELISSA
# 208 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setobjecthidden LOCALID_MELISSA
# 209 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, QUEST_AETHERIA_MELISSA, 0
	return


ISLANDGAME_AETHERIA_WelcomeSign::
# 260 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WelcomeSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_FanClubSign::
# 267 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FanClubSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_CondoSign::
# 273 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CondoSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_ArtMuseum::
# 279 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_ArtMuseum_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_CardShop::
# 286 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CardShop_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_DeptStore::
# 292 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DeptStore_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_EmptyTrash::
# 299 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_EmptyTrash_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_TheRecruiter::
	return


ISLANDGAME_AETHERIA_NPC1::
# 336 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 337 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 338 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_TEMP_3, ISLANDGAME_AETHERIA_NPC1_2
# 344 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC1_Text_1
ISLANDGAME_AETHERIA_NPC1_1:
# 350 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 351 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_NPC1_2:
# 339 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC1_Text_0
	goto ISLANDGAME_AETHERIA_NPC1_1


ISLANDGAME_AETHERIA_NPC2::
# 356 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 357 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 358 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC2_Text_0
# 361 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 362 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC4::
# 368 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 369 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 370 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC4_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_NPC8::
# 377 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 378 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 379 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC8_Text_0
# 386 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 387 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC9::
# 392 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 393 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC9_Text_0
# 396 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 397 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC10::
# 402 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 403 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC10_Text_0
# 407 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 408 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC11::
# 413 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 414 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC11_Text_0
# 417 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 418 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC12::
# 423 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 424 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 425 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC12_Text_0
# 431 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 432 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC13::
# 437 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 438 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC13_Text_0
# 442 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 443 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC14::
# 448 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 449 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC14_Text_0
# 452 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 453 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC15::
# 458 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 459 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 460 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC15_Text_0
# 463 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 464 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC16::
# 469 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 470 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 471 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC16_Text_0
# 474 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 475 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC17::
# 480 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 481 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 482 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC17_Text_0
# 485 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 486 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC18::
# 491 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 492 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 493 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC18_Text_0
# 496 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 497 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC19::
# 502 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 503 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC19_Text_0
# 506 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 507 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC20::
# 512 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 513 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC20_Text_0
# 516 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 517 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC21::
# 522 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 523 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC21_Text_0
# 526 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 527 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC22::
# 532 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 533 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 534 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC22_Text_0
# 537 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 538 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC23::
# 543 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 544 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 545 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC23_Text_0
# 548 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 549 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC24::
# 554 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 555 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 556 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC24_Text_0
# 559 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 560 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC25::
# 565 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 566 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 567 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC25_Text_0
# 570 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 571 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC26::
# 576 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 577 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC26_Text_0
# 580 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 581 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC27::
# 586 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 587 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC27_Text_0
# 590 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 591 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC28::
# 596 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 597 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 598 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC28_Text_0
# 603 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	showmonpic SPECIES_ZAPDOS, 10, 3
# 604 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC28_Text_1
# 605 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	hidemonpic
# 606 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 607 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC28_Text_2
# 608 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 609 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	releaseall
	return


ISLANDGAME_AETHERIA_NPC29::
# 614 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 615 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 616 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC29_Text_0
# 620 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 621 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC30::
# 626 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 627 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 628 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC30_Text_0
# 631 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 632 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC31::
# 637 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 638 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 639 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	checkplayergender
# 640 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ISLANDGAME_AETHERIA_NPC31_2
# 647 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC31_Text_1
ISLANDGAME_AETHERIA_NPC31_1:
# 651 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 652 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_NPC31_2:
# 641 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC31_Text_0
	goto ISLANDGAME_AETHERIA_NPC31_1


ISLANDGAME_AETHERIA_Camellia::
# 656 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 657 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Camellia_Text_0
# 660 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 661 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_StrayPurrloin::
# 665 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 666 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 667 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playmoncry SPECIES_PURRLOIN, CRY_MODE_NORMAL
# 668 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmoncry
# 669 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Meloetta::
# 673 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 674 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 675 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playmoncry SPECIES_MELOETTA, CRY_MODE_NORMAL
# 676 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Meloetta_Text_0
# 679 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmoncry
# 680 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Birb::
# 684 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 685 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 686 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 687 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Birb_Text_0
# 690 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


# 200 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
ISLANDGAME_AETHERIA_Melissa_Battle_Movement_0:
# 200 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	jump_right
# 200 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_down
# 200 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_down
# 200 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_down
# 200 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_down
	step_end

# 202 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
ISLANDGAME_AETHERIA_Melissa_Battle_Movement_1:
# 202 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	face_down
	step_end

# 203 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
ISLANDGAME_AETHERIA_Melissa_Battle_Movement_2:
# 203 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_down
# 203 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_down
# 203 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_down
# 203 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_left
# 203 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_left
# 203 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_left
# 203 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_left
# 203 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_down
# 203 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_down
# 203 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	walk_down
	step_end

ISLANDGAME_AETHERIA_Melissa_Text_0:
# 110 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}{PLAYER}! What took ya so\n"
	.string "long? I've been waiting for hours!$"

ISLANDGAME_AETHERIA_Melissa_Text_1:
# 115 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Humph. Don't you know it's rude to stand\n"
	.string "a cute girl up?$"

ISLANDGAME_AETHERIA_Melissa_Text_2:
# 120 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Humph. Maybe I should reconsider giving\n"
	.string "the surprise I had planned for you...$"

ISLANDGAME_AETHERIA_Melissa_Text_3:
# 124 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "...{PAUSE 30}Hehe, just messing with ya! I heard\n"
	.string "about the commotion at Lumine Cave.\p"
	.string "I was a little bit worried, so I'm glad\n"
	.string "you're still together in one piece!\p"
	.string "Now that you're here...{PAUSE 30} Ta-da! Take a\n"
	.string "looksie at these!\p"
	.string "{COLOR GREEN}> Melissa flashes a pair of tickets.$"

ISLANDGAME_AETHERIA_Melissa_Text_4:
# 130 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "A new exhibit at the Aetheria Museum\n"
	.string "just recently opened up today!\p"
	.string "I figured since you're studying abroad\n"
	.string "here, we could check it out together!$"

ISLANDGAME_AETHERIA_Melissa_Text_5:
# 136 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "E-Eeeeh? D-Don't be silly, it's nothing\n"
	.string "like a d-date! A-Ahem! Anyways...\p"
	.string "These tickets weren't cheap to get\n"
	.string "ahold of, and since you made me wait for\l"
	.string "soooo loooong...\p"
	.string "You'll have to beat me in a battle to get\n"
	.string "yours! How's that sound?$"

ISLANDGAME_AETHERIA_Melissa_Text_6:
# 143 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Buuut, here's the catch... These tickets\n"
	.string "weren't cheap to get a hold of...\p"
	.string "So in exchange, you'll have to entertain\n"
	.string "me with a battle! How's that sound?$"

ISLANDGAME_AETHERIA_Melissa_Text_7:
# 149 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Eeeeh? {PAUSE 30}You're not up for it right now?\p"
	.string "Well...{PAUSE 30} Let me know when you are! I'll be\n"
	.string "here.$"

ISLANDGAME_AETHERIA_Melissa_Text_8:
# 163 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Hehe. Ready to earn your ticket,\n"
	.string "{PLAYER}?$"

ISLANDGAME_AETHERIA_Melissa_Battle_Text_0:
# 180 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Get ready... me and Gibby have been\n"
	.string "itching for a rematch!$"

ISLANDGAME_AETHERIA_Melissa_Battle_Text_1:
# 184 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I heard that a single trainer managed\n"
	.string "to quell the outbreak at Lumine Cave.\p"
	.string "Ehe... That was you, wasn't it?$"

ISLANDGAME_AETHERIA_Melissa_Battle_Text_2:
# 192 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Oof, Looks like I bit off a\n"
	.string "little more than I could chew...\p"
	.string "Well, a deal's a deal! Dan-da-da-dan!\n"
	.string "Here's your prize!$"

ISLANDGAME_AETHERIA_Melissa_Battle_Text_3:
# 197 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Meet me inside whenever you're ready!\n"
	.string "Don't keep me waiting any longer, hehe.$"

ISLANDGAME_AETHERIA_WelcomeSign_Text_0:
# 261 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "AETHERIA\n"
	.string "Where stars are born!$"

ISLANDGAME_AETHERIA_FanClubSign_Text_0:
# 268 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "STARLIGHT FAN CLUB\n"
	.string "We stan the Queens of Marya!$"

ISLANDGAME_AETHERIA_CondoSign_Text_0:
# 274 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "SANTA MARIA CONDOMINIUMS$"

ISLANDGAME_AETHERIA_ArtMuseum_Text_0:
# 280 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "AETHERIA MUSEUM OF FINE ARTS\p"
	.string "“The Darkest Night” now showing!$"

ISLANDGAME_AETHERIA_CardShop_Text_0:
# 287 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "The Top Deck - Gaming Café\n"
	.string "Come play in our PTCG tournaments!$"

ISLANDGAME_AETHERIA_DeptStore_Text_0:
# 293 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "StrixCorp MegaMart\n"
	.string "“You want it? We got it!”$"

ISLANDGAME_AETHERIA_EmptyTrash_Text_0:
# 300 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "{COLOR RED}(There's nothing but garbage in here.)$"

ISLANDGAME_AETHERIA_NPC1_Text_0:
# 340 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Uurrrp...?$"

ISLANDGAME_AETHERIA_NPC1_Text_1:
# 345 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
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
# 359 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Aetheria is always bustling with\n"
	.string "activity.\p"
	.string "Whether it's in the morning, at noon, or\n"
	.string "at night, there's always something to\l"
	.string "do!$"

ISLANDGAME_AETHERIA_NPC4_Text_0:
# 371 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Buzz off, kid. I'm off the clock. If you\n"
	.string "want a photo, come back tomorrow.$"

ISLANDGAME_AETHERIA_NPC8_Text_0:
# 380 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
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
# 394 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ah...! Such a rambunctious squabble of\n"
	.string "Wingulls...$"

ISLANDGAME_AETHERIA_NPC10_Text_0:
# 404 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Noooo! You can't just keep spamming the\n"
	.string "same move over and over again!\p"
	.string "You're supposed to be making\n"
	.string "calculated decisions based on what\l"
	.string "Pokémon I could potentially switch into\l"
	.string "and how I might punish you if I\l"
	.string "correctly predict your prediction!$"

ISLANDGAME_AETHERIA_NPC11_Text_0:
# 415 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "haha xtreme speed go weeeeee$"

ISLANDGAME_AETHERIA_NPC12_Text_0:
# 426 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
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
# 439 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Cammie! Cammie! Are the rumors true?\n"
	.string "Are you dating a movie star from Unova?\p"
	.string "C'mon, spill the tea for us! What's his\n"
	.string "name? You can't hide it from us any\l"
	.string "longer! We have the photos!$"

ISLANDGAME_AETHERIA_NPC14_Text_0:
# 450 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "hi camie$"

ISLANDGAME_AETHERIA_NPC15_Text_0:
# 461 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "She can't be in a relationship... right?\p"
	.string "I mean, Camellia would never betray her\n"
	.string "fans like that... right?\p"
	.string "I've been supporting her ever since her\n"
	.string "first performance...$"

ISLANDGAME_AETHERIA_NPC16_Text_0:
# 472 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Camellia is so pretty...$"

ISLANDGAME_AETHERIA_NPC17_Text_0:
# 483 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I hope those rumors aren't true. It\n"
	.string "would ruin my one true pairing.$"

ISLANDGAME_AETHERIA_NPC18_Text_0:
# 494 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Camellia is my favorite of the\n"
	.string "STARLIGHT members. Her singing voice is\l"
	.string "phenomenal!$"

ISLANDGAME_AETHERIA_NPC19_Text_0:
# 504 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "{COLOR RED}(Looks like he's sound asleep.)$"

ISLANDGAME_AETHERIA_NPC20_Text_0:
# 514 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ehe... How do I look?$"

ISLANDGAME_AETHERIA_NPC21_Text_0:
# 524 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "ooooo kawaii desu yo$"

ISLANDGAME_AETHERIA_NPC22_Text_0:
# 535 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I missed out on the limited edition\n"
	.string "STARLIGHT idol collection, so I'm\l"
	.string "pretending the figurines in the window\l"
	.string "are mine.$"

ISLANDGAME_AETHERIA_NPC23_Text_0:
# 546 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "THIS IS MY BICYCLE!\p"
	.string "THERE ARE MANY LIKE IT, BUT THIS ONE IS\n"
	.string "MINE!\p"
	.string "WITHOUT ME, MY BICYCLE IS USELESS!\p"
	.string "WITHOUT MY BICYCLE, I AM USELESS!$"

ISLANDGAME_AETHERIA_NPC24_Text_0:
# 557 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "If you see anyone suspicious, like a big\n"
	.string "bald guy riding a motorcycle, please\l"
	.string "report it to us immediately!$"

ISLANDGAME_AETHERIA_NPC25_Text_0:
# 568 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Lumine is too hot... I wanna go back to\n"
	.string "Oranna.$"

ISLANDGAME_AETHERIA_NPC26_Text_0:
# 578 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I can't wait for the next rotation, man.\n"
	.string "Legit got sacked by this one loser\l"
	.string "abusing Budew to lock me out of all my\l"
	.string "item cards, then using Whimsicott to\l"
	.string "OHKO my Charizard! Like okay man, that\l"
	.string "seems really balanced.$"

ISLANDGAME_AETHERIA_NPC27_Text_0:
# 588 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Uh-huh... Yeah... Mhm... Oh yeah... I hear\n"
	.string "you...$"

ISLANDGAME_AETHERIA_NPC28_Text_0:
# 599 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Not many trainers have the opportunity\n"
	.string "of seeing Zapdos, the mighty guardian\l"
	.string "of Lumine...\p"
	.string "I was fortunate enough to catch a\n"
	.string "glimpse of it in the days of my youth\l"
	.string "however...$"

ISLANDGAME_AETHERIA_NPC28_Text_1:
# 604 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Here is a sketch I drew of it from\n"
	.string "memory.$"

ISLANDGAME_AETHERIA_NPC28_Text_2:
# 607 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "It is quite impressive, no?$"

ISLANDGAME_AETHERIA_NPC29_Text_0:
# 617 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "While I respect Detective Rio's\n"
	.string "tenacity, I think he's just wasting his\l"
	.string "time with these search missions.\p"
	.string "We've been scouring the sea for weeks.\n"
	.string "If there was some supposed secret\l"
	.string "island, don't you think we would have\l"
	.string "found it by now?$"

ISLANDGAME_AETHERIA_NPC30_Text_0:
# 629 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Haiyooo! Come have some hotcakes with\n"
	.string "us at Café Lumi! {COLOR GREEN}(='u'=)$"

ISLANDGAME_AETHERIA_NPC31_Text_0:
# 642 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ah... I'm flattered that I caught your\n"
	.string "eye, but I'm afraid you are much too\l"
	.string "young for me...\p"
	.string "Perhaps you would find better luck in\n"
	.string "say... that café by the coast...?$"

ISLANDGAME_AETHERIA_NPC31_Text_1:
# 648 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Hmm? May I help you, small child?$"

ISLANDGAME_AETHERIA_Camellia_Text_0:
# 658 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "-sigh- For the last time, that was my\n"
	.string "brother...$"

ISLANDGAME_AETHERIA_Meloetta_Text_0:
# 677 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "{COLOR BLUE}(These paparazzi guys are relentless.\n"
	.string "Being an idol is tough work.)$"

ISLANDGAME_AETHERIA_Birb_Text_0:
# 688 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "MIEN$"
