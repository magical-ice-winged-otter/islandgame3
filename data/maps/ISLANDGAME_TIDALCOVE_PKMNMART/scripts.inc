ISLANDGAME_TIDALCOVE_PKMNMART_MapScripts::
	.byte 0


ISLANDGAME_TIDALCOVE_PKMNMART_Interact_NPC1::
# 4 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	faceplayer
# 6 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_NPC1_Text_0
# 7 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	closemessage
# 8 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Vitamins::
# 12 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	lock
# 13 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Vitamins_Text_0, MSGBOX_SIGN
# 14 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Drinks::
# 18 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	lock
# 19 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Drinks_Text_0, MSGBOX_SIGN
# 20 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_PKMNMART_Interact_General::
# 24 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	lock
# 25 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_General_Text_0, MSGBOX_SIGN
# 26 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Employee::
# 30 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	lock
# 31 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	faceplayer
# 32 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Employee_Text_0
# 33 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	pokemart Tidalcove_MartItems
# 34 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Employee_Text_1
# 35 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	closemessage
# 36 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	release
	return


	.align 2
# 39 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
Tidalcove_MartItems:
# 40 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_POKE_BALL
# 41 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 42 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 43 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 44 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_SODA_POP
# 45 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 46 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 47 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_AWAKENING
# 48 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 49 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 50 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_REPEL
# 51 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_HP_UP
# 52 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_PROTEIN
# 53 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_IRON
# 54 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_CALCIUM
# 55 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_ZINC
# 56 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_CARBOS
# 57 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_NPC1_Text_0:
# 6 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.string "Yeesh. $800 for a glass of pop just\n"
	.string "'cause it's got Ruka on it? There's no\l"
	.string "way anyone would pay that much just\l"
	.string "for a bottle.$"

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Vitamins_Text_0:
# 13 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.string "{COLOR RED}(There's rows upon rows of exorbitantly\n"
	.string "priced vitamins. They feature Ruka.)$"

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Drinks_Text_0:
# 19 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.string "{COLOR RED}(All of the drinks here feature Ruka.)$"

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_General_Text_0:
# 25 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.string "{COLOR RED}(All of these goods feature Ruka.)$"

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Employee_Text_0:
# 32 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.string "Welcome to Rukalicious, the official\n"
	.string "shop for all your Ruka-related goods!$"

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Employee_Text_1:
# 34 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.string "Have a Rukalicious rest of your day!$"
