ISLANDGAME_ORANNA_SSRAIN_Cafeteria_MapScripts::
# 5 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ORANNA_SSRAIN_Cafeteria_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_ORANNA_SSRAIN_Cafeteria_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	gettime
# 8 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_ORANNA_SSRAIN_Cafeteria_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 8 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_ORANNA_SSRAIN_Cafeteria_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 12 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_ORANNA_SSRAIN_Cafeteria_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	setflag FLAG_TEMP_3
	return


ISLANDGAME_ORANNA_SSRAIN_Cafeteria_NPC1::
# 19 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	lock
# 20 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	faceplayer
# 21 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Cafeteria_NPC1_Text_0
# 25 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	closemessage
# 26 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_SSRAIN_Cafeteria_NPC2::
# 31 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	lock
# 32 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	faceplayer
# 33 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Cafeteria_NPC2_Text_0
# 39 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	closemessage
# 40 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_SSRAIN_Cafeteria_Alcremie::
# 45 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	lock
# 46 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Cafeteria_Alcremie_Text_0
# 49 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	closemessage
# 50 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_SSRAIN_Cafeteria_IceCreamGirl::
# 55 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	lock
# 56 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	faceplayer
# 57 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	goto_if_unset FLAG_ORANNA_SSRAIN_ICECREAM, ISLANDGAME_ORANNA_SSRAIN_Cafeteria_IceCreamGirl_2
ISLANDGAME_ORANNA_SSRAIN_Cafeteria_IceCreamGirl_1:
# 66 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Cafeteria_IceCreamGirl_Text_2
# 68 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
IceCreamGirl_End:
# 69 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	closemessage
# 70 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	release
	return

ISLANDGAME_ORANNA_SSRAIN_Cafeteria_IceCreamGirl_2:
# 58 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Cafeteria_IceCreamGirl_Text_0, MSGBOX_YESNO
# 59 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_ORANNA_SSRAIN_Cafeteria_IceCreamGirl_5
ISLANDGAME_ORANNA_SSRAIN_Cafeteria_IceCreamGirl_4:
# 63 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	giveitem ITEM_CASTELIACONE
# 64 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	setflag FLAG_ORANNA_SSRAIN_ICECREAM
	goto ISLANDGAME_ORANNA_SSRAIN_Cafeteria_IceCreamGirl_1

ISLANDGAME_ORANNA_SSRAIN_Cafeteria_IceCreamGirl_5:
# 60 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Cafeteria_IceCreamGirl_Text_1
# 61 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	goto IceCreamGirl_End
	goto ISLANDGAME_ORANNA_SSRAIN_Cafeteria_IceCreamGirl_4


ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy::
# 75 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	lock
# 76 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	faceplayer
# 77 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	goto_if_set FLAG_TEMP_3, ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_2
# 120 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_Text_4
ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_1:
# 125 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
LobsterRoll_End:
# 126 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	closemessage
# 127 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	release
	return

ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_2:
# 78 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	goto_if_unset FLAG_DAILY_ORANNA_SSRAIN_LOBSTER_ROLL, ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_5
# 113 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_Text_3
	goto ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_1

ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_5:
# 79 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_Text_0
# 82 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	showmoneybox 0, 0
# 83 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_Text_1, MSGBOX_YESNO
# 86 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_8
# 107 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	hidemoneybox
# 108 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	goto LobsterRoll_End
	goto ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_1

ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_8:
# 87 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	checkmoney 3000
# 88 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_11
# 96 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	removemoney 3000
# 97 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	updatemoneybox
# 98 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	playse SE_SHOP
# 99 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	waitse
# 100 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	hidemoneybox
# 101 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	giveitem ITEM_ISLANDGAME_LOBSTER_ROLL
# 102 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	setflag FLAG_DAILY_ORANNA_SSRAIN_LOBSTER_ROLL
# 103 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	goto LobsterRoll_End
	goto ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_1

ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_11:
# 89 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_Text_2
# 92 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	hidemoneybox
# 93 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	goto LobsterRoll_End
	goto ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_1


ISLANDGAME_ORANNA_SSRAIN_Cafeteria_NPC1_Text_0:
# 22 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	.string "I can't believe meals aren't paid for\n"
	.string "with the ticket.\p"
	.string "These prices are highway robbery!$"

ISLANDGAME_ORANNA_SSRAIN_Cafeteria_NPC2_Text_0:
# 34 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	.string "Contrary to popular belief, our famous\n"
	.string "lobster roll is not made from Pokémon.\p"
	.string "We actually just use regular ol' lobster.\p"
	.string "Yeah, you heard that right. Normal\n"
	.string "animals exist in the Pokémon world.\p"
	.string "Now you can stop accusing me of\n"
	.string "committing Pokémon cruelty!$"

ISLANDGAME_ORANNA_SSRAIN_Cafeteria_Alcremie_Text_0:
# 47 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	.string "{COLOR RED}(Despite its appearance, it's just a\n"
	.string "cake that looks like an Alcremie.)$"

ISLANDGAME_ORANNA_SSRAIN_Cafeteria_IceCreamGirl_Text_0:
# 58 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	.string "I don't like how this ice cream tastes...\n"
	.string "Do you want it?$"

ISLANDGAME_ORANNA_SSRAIN_Cafeteria_IceCreamGirl_Text_1:
# 60 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	.string "But I don't want it!$"

ISLANDGAME_ORANNA_SSRAIN_Cafeteria_IceCreamGirl_Text_2:
# 66 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	.string "I wanted orange sher-bet, but they\n"
	.string "don't have it here...$"

ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_Text_0:
# 80 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	.string "Our famous lobster roll is made with\n"
	.string "only the freshest lobster.$"

ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_Text_1:
# 84 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	.string "Would you like to try one? It is ¥3000\n"
	.string "for a roll.$"

ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_Text_2:
# 90 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	.string "Sorry, you do not have enough money.$"

ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_Text_3:
# 114 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	.string "Sorry, due to the high popularity of our\n"
	.string "lobster roll, only one may be purchased\l"
	.string "per customer every night.\p"
	.string "If you would like another one, please\n"
	.string "come back tomorrow.$"

ISLANDGAME_ORANNA_SSRAIN_Cafeteria_LobsterRollGuy_Text_4:
# 121 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Cafeteria/scripts.pory"
	.string "If you would like to try our famous\n"
	.string "lobster roll, you will have to come back\l"
	.string "later tonight.$"
