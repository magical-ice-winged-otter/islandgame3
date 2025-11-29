SS_RAIN_CAFETERIA_MapScripts::
	.byte 0


ISLANDGAME_ORANNA_SSRAIN_Cafeteria_Alcremie::
# 7 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	lock
# 8 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Cafeteria_Alcremie_Text_0
# 11 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	closemessage
# 12 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	release
	return


SS_RAIN_CAFETERIA_NPC1_TALK::
# 16 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	lock
# 17 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	faceplayer
# 18 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_NPC1_TEXT
# 19 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	waitmessage
# 20 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	release
	return


SS_RAIN_CAFETERIA_NPC2_TALK::
# 28 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	lock
# 29 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	faceplayer
# 30 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	gettime
# 31 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt SS_RAIN_CAFETERIA_NPC2_TALK_2
# 31 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge SS_RAIN_CAFETERIA_NPC2_TALK_2
# 74 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_NPC2_TALK_Text_4
SS_RAIN_CAFETERIA_NPC2_TALK_1:
# 79 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
LobsterRoll_End:
# 80 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	closemessage
# 81 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	release
	return

SS_RAIN_CAFETERIA_NPC2_TALK_2:
# 32 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	goto_if_unset FLAG_DAILY_SS_RAIN_LOBSTER_ROLL, SS_RAIN_CAFETERIA_NPC2_TALK_7
# 67 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_NPC2_TALK_Text_3
	goto SS_RAIN_CAFETERIA_NPC2_TALK_1

SS_RAIN_CAFETERIA_NPC2_TALK_7:
# 33 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_NPC2_TALK_Text_0
# 36 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	showmoneybox 0, 0
# 37 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_NPC2_TALK_Text_1, MSGBOX_YESNO
# 40 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SS_RAIN_CAFETERIA_NPC2_TALK_10
# 61 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	hidemoneybox
# 62 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	goto LobsterRoll_End
	goto SS_RAIN_CAFETERIA_NPC2_TALK_1

SS_RAIN_CAFETERIA_NPC2_TALK_10:
# 41 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	checkmoney 3000
# 42 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SS_RAIN_CAFETERIA_NPC2_TALK_13
# 50 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	removemoney 3000
# 51 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	updatemoneybox
# 52 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	playse SE_SHOP
# 53 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	waitse
# 54 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	hidemoneybox
# 55 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	giveitem ITEM_ISLANDGAME_LOBSTER_ROLL
# 56 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	setflag FLAG_DAILY_SS_RAIN_LOBSTER_ROLL
# 57 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	goto LobsterRoll_End
	goto SS_RAIN_CAFETERIA_NPC2_TALK_1

SS_RAIN_CAFETERIA_NPC2_TALK_13:
# 43 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_NPC2_TALK_Text_2
# 46 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	hidemoneybox
# 47 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	goto LobsterRoll_End
	goto SS_RAIN_CAFETERIA_NPC2_TALK_1


SS_RAIN_CAFETERIA_NPC3_TALK::
# 85 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	lock
# 86 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	faceplayer
# 87 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_NPC3_TEXT
# 88 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	waitmessage
# 89 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	release
	return


SS_RAIN_CAFETERIA_IceCreamGirl::
# 102 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	lock
# 103 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	faceplayer
# 104 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	goto_if_unset FLAG_SSRAIN_ICECREAM_RECEIVED, SS_RAIN_CAFETERIA_IceCreamGirl_2
SS_RAIN_CAFETERIA_IceCreamGirl_1:
# 118 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_IceCreamGirl_Text_3
# 120 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
IceCreamGirl_End:
# 121 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	release
	return

SS_RAIN_CAFETERIA_IceCreamGirl_2:
# 105 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_IceCreamGirl_Text_0, MSGBOX_YESNO
# 106 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SS_RAIN_CAFETERIA_IceCreamGirl_5
SS_RAIN_CAFETERIA_IceCreamGirl_4:
# 110 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	checkitemspace ITEM_CASTELIACONE
# 111 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SS_RAIN_CAFETERIA_IceCreamGirl_8
SS_RAIN_CAFETERIA_IceCreamGirl_7:
# 115 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	giveitem ITEM_CASTELIACONE
# 116 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	setflag FLAG_SSRAIN_ICECREAM_RECEIVED
	goto SS_RAIN_CAFETERIA_IceCreamGirl_1

SS_RAIN_CAFETERIA_IceCreamGirl_5:
# 107 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_IceCreamGirl_Text_1
# 108 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	goto IceCreamGirl_End
	goto SS_RAIN_CAFETERIA_IceCreamGirl_4

SS_RAIN_CAFETERIA_IceCreamGirl_8:
# 112 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_IceCreamGirl_Text_2
# 113 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	goto IceCreamGirl_End
	goto SS_RAIN_CAFETERIA_IceCreamGirl_7


ISLANDGAME_ORANNA_SSRAIN_Cafeteria_Alcremie_Text_0:
# 9 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "{COLOR RED}(Despite its appearance, it's just a\n"
	.string "cake that looks like an Alcremie.)$"

SS_RAIN_CAFETERIA_NPC2_TALK_Text_0:
# 34 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "Our famous lobster roll is made with\n"
	.string "only the freshest lobster.$"

SS_RAIN_CAFETERIA_NPC2_TALK_Text_1:
# 38 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "Would you like to try one? It is ¥3000\n"
	.string "for a roll.$"

SS_RAIN_CAFETERIA_NPC2_TALK_Text_2:
# 44 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "Sorry, you do not have enough money.$"

SS_RAIN_CAFETERIA_NPC2_TALK_Text_3:
# 68 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "Sorry, due to the high popularity of our\n"
	.string "lobster roll, only one may be purchased\l"
	.string "per customer every night.\p"
	.string "If you would like another one, please\n"
	.string "come back tomorrow.$"

SS_RAIN_CAFETERIA_NPC2_TALK_Text_4:
# 75 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "If you would like to try our famous\n"
	.string "lobster roll, you will have to come back\l"
	.string "later tonight.$"

SS_RAIN_CAFETERIA_IceCreamGirl_Text_0:
# 105 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "I don't like how this ice cream tastes...\n"
	.string "Do you want it?$"

SS_RAIN_CAFETERIA_IceCreamGirl_Text_1:
# 107 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "But I don't want it!$"

SS_RAIN_CAFETERIA_IceCreamGirl_Text_2:
# 112 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "Eeh? You're holding too many items.$"

SS_RAIN_CAFETERIA_IceCreamGirl_Text_3:
# 118 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "I wanted orange sher-bet, but they\n"
	.string "don't have it here...$"

SS_RAIN_CAFETERIA_NPC1_TEXT::
# 23 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "I can't believe meals aren't paid for\n"
	.string "with the ticket!\p"
	.string "These prices are highway robbery!$"

SS_RAIN_CAFETERIA_NPC3_TEXT::
# 92 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "Contrary to popular belief, our famous\n"
	.string "lobster roll is not made from Pokémon.\p"
	.string "We actually just use regular ol' lobster.\p"
	.string "Yeah, you heard that right. Normal\n"
	.string "animals exist in the Pokémon world.\p"
	.string "Now you can stop accusing me of\n"
	.string "committing Pokémon cruelty!$"
