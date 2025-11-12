ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_MapScripts::
	.byte 0


ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_NPC1::
# 5 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	faceplayer
# 7 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_NPC1_Text_0
# 12 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	closemessage
# 13 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_NPC2::
# 18 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	lock
# 19 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	faceplayer
# 20 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_NPC2_Text_0
# 23 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	closemessage
# 24 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver::
# 30 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	lock
# 31 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	faceplayer
# 32 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	goto_if_unset FLAG_DAILY_ORANNA_CHERIPORT_DRINK, ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_2
# 70 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_Text_2
ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_1:
# 73 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
Cheriport_DrinkGiver_End:
# 74 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	closemessage
# 75 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	release
	return

ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_2:
# 34 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_Text_0, MSGBOX_YESNO
# 38 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_6
ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_5:
# 43 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	setflag FLAG_DAILY_ORANNA_CHERIPORT_DRINK
# 46 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	random 100
# 47 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	compare VAR_RESULT, 30
	goto_if_lt ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_8
# 51 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	compare VAR_RESULT, 30 + 25
	goto_if_lt ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_9
# 55 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	compare VAR_RESULT, 30 + 25 + 20
	goto_if_lt ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_10
# 59 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	compare VAR_RESULT, 30 + 25 + 20 + 15
	goto_if_lt ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_11
# 65 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	giveitem ITEM_BERRY_JUICE
	goto ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_1

ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_6:
# 39 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_Text_1
# 40 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	goto Cheriport_DrinkGiver_End
	goto ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_5

ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_8:
# 49 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	giveitem ITEM_FRESH_WATER
	goto ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_1

ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_9:
# 53 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	giveitem ITEM_LEMONADE
	goto ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_1

ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_10:
# 57 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	giveitem ITEM_SODA_POP
	goto ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_1

ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_11:
# 61 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	giveitem ITEM_MOOMOO_MILK
	goto ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_1


ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_NPC1_Text_0:
# 8 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	.string "This building was once a derelict chapel\n"
	.string "on the brink of collapse.\p"
	.string "We have since then renovated it and\n"
	.string "given it a new purpose.\p"
	.string "To provide beach amenities and\n"
	.string "complimentary drinks to those in need.$"

ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_NPC2_Text_0:
# 21 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	.string "I wish I was a Wooper. Then, I wouldn't\n"
	.string "have to wear this inner tube!$"

ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_Text_0:
# 35 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	.string "You look thirsty. Would you like a\n"
	.string "refreshing beverage?$"

ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_Text_1:
# 39 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	.string "We'll always be here if you need a drink.$"

ISLANDGAME_ORANNA_CHERIPORT_HOUSE2_DrinkGiver_Text_2:
# 70 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_HOUSE2/scripts.pory"
	.string "Sorry, our policy is one beverage per\n"
	.string "day. Come back tomorrow.$"
