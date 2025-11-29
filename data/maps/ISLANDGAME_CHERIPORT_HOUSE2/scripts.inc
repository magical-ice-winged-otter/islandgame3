ISLANDGAME_CHERIPORT_HOUSE2_MapScripts::
	.byte 0


ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC1::
# 5 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	faceplayer
# 7 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_HOUSE2_NPC1_TALK
# 8 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC2::
# 20 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	lock
# 21 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	faceplayer
# 22 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_HOUSE2_NPC2_TALK
# 23 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3::
# 33 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	lock
# 34 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	faceplayer
# 36 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	goto_if_unset FLAG_DAILY_CHERIPORT_RECEIVED_DRINK, ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_2
# 78 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_Text_2
ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_1:
# 81 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
PriestessDrinkGiver_End:
# 82 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	closemessage
# 83 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	release
	return

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_2:
# 38 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_HOUSE2_NPC3_TALK, MSGBOX_YESNO
# 40 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_6
ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_5:
# 45 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_9
ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_8:
# 49 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	setflag FLAG_DAILY_CHERIPORT_RECEIVED_DRINK
# 54 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	random 100
# 55 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	compare VAR_RESULT, 30
	goto_if_lt ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_11
# 59 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	compare VAR_RESULT, 30 + 25
	goto_if_lt ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_12
# 63 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	compare VAR_RESULT, 30 + 25 + 20
	goto_if_lt ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_13
# 67 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	compare VAR_RESULT, 30 + 25 + 20 + 15
	goto_if_lt ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_14
# 73 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	giveitem ITEM_BERRY_JUICE
	goto ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_1

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_6:
# 41 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_Text_0
# 42 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	goto PriestessDrinkGiver_End
	goto ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_5

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_9:
# 46 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_Text_1
# 47 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	goto PriestessDrinkGiver_End
	goto ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_8

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_11:
# 57 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	giveitem ITEM_FRESH_WATER
	goto ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_1

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_12:
# 61 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	giveitem ITEM_LEMONADE
	goto ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_1

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_13:
# 65 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	giveitem ITEM_SODA_POP
	goto ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_1

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_14:
# 69 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	giveitem ITEM_MOOMOO_MILK
	goto ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_1


ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_Text_0:
# 41 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	.string "We'll always be here if you need a drink.$"

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_Text_1:
# 46 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	.string "Oh dear, you don't have enough room for\n"
	.string "a drink.$"

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_Text_2:
# 78 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	.string "Sorry, our policy is one beverage per\n"
	.string "day. Come back tomorrow.$"

ISLANDGAME_CHERIPORT_HOUSE2_NPC1_TALK::
# 11 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	.string "{COLOR DARK_GRAY}This building was once a derelict chapel\n"
	.string "on the brink of collapse.\p"
	.string "{COLOR DARK_GRAY}We have since then renovated it and\n"
	.string "given it a new purpose.\p"
	.string "{COLOR DARK_GRAY}To provide beach amenities and\n"
	.string "complimentary drinks to those in need.$"

ISLANDGAME_CHERIPORT_HOUSE2_NPC2_TALK::
# 26 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	.string "I wish I was a Wooper. Then, I wouldn't\n"
	.string "have to wear this inner tube!$"

ISLANDGAME_CHERIPORT_HOUSE2_NPC3_TALK::
# 86 "data/maps/ISLANDGAME_CHERIPORT_HOUSE2/scripts.pory"
	.string "{COLOR DARK_GRAY}You look thirsty. Would you like a\n"
	.string "refreshing beverage?$"
