ISLANDGAME_CHERIPORT_PKMNMART_MapScripts::
	.byte 0


ISLANDGAME_CHERIPORT_PKMNMART_EventScript_Employee::
# 4 "data/maps/ISLANDGAME_CHERIPORT_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_PKMNMART_EventScript_Employee_Text_0
# 5 "data/maps/ISLANDGAME_CHERIPORT_PKMNMART/scripts.pory"
	closemessage
# 6 "data/maps/ISLANDGAME_CHERIPORT_PKMNMART/scripts.pory"
	pokemart Cheriport_MartItems
# 7 "data/maps/ISLANDGAME_CHERIPORT_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_PKMNMART_EventScript_Employee_Text_1
# 8 "data/maps/ISLANDGAME_CHERIPORT_PKMNMART/scripts.pory"
	closemessage
	return


ISLANDGAME_CHERIPORT_PKMNMART_EventScript_NPC1::
# 12 "data/maps/ISLANDGAME_CHERIPORT_PKMNMART/scripts.pory"
	lock
# 13 "data/maps/ISLANDGAME_CHERIPORT_PKMNMART/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_PKMNMART_NPC1_TALK
# 14 "data/maps/ISLANDGAME_CHERIPORT_PKMNMART/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_PKMNMART_EventScript_NPC2::
# 26 "data/maps/ISLANDGAME_CHERIPORT_PKMNMART/scripts.pory"
	lock
# 27 "data/maps/ISLANDGAME_CHERIPORT_PKMNMART/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_PKMNMART_NPC2_TALK
# 28 "data/maps/ISLANDGAME_CHERIPORT_PKMNMART/scripts.pory"
	release
	return


	.align 2
# 37 "data/maps/ISLANDGAME_CHERIPORT_PKMNMART/scripts.pory"
Cheriport_MartItems:
# 38 "data/maps/ISLANDGAME_CHERIPORT_PKMNMART/scripts.pory"
	.2byte ITEM_POKE_BALL
# 39 "data/maps/ISLANDGAME_CHERIPORT_PKMNMART/scripts.pory"
	.2byte ITEM_POTION
# 40 "data/maps/ISLANDGAME_CHERIPORT_PKMNMART/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

ISLANDGAME_CHERIPORT_PKMNMART_EventScript_Employee_Text_0:
# 4 "data/maps/ISLANDGAME_CHERIPORT_PKMNMART/scripts.pory"
	.string "Welcome to CheriMart! How may I help\n"
	.string "you?$"

ISLANDGAME_CHERIPORT_PKMNMART_EventScript_Employee_Text_1:
# 7 "data/maps/ISLANDGAME_CHERIPORT_PKMNMART/scripts.pory"
	.string "Thank you for shopping with us!$"

ISLAND_GAME_CHERIPORT_PKMNMART_NPC1_TALK::
# 17 "data/maps/ISLANDGAME_CHERIPORT_PKMNMART/scripts.pory"
	.string "I can't believe they don't sell booze to\n"
	.string "foreigners.\p"
	.string "If I'd known of this sooner, I wouldn't\n"
	.string "have spent a grand just to come here!\p"
	.string "These Silverwing guys gotta loosen up.\n"
	.string "How's anyone supposed to get a workout\l"
	.string "in without any pregame material?$"

ISLAND_GAME_CHERIPORT_PKMNMART_NPC2_TALK::
# 31 "data/maps/ISLANDGAME_CHERIPORT_PKMNMART/scripts.pory"
	.string "Oh dear, everything here is much more\n"
	.string "expensive compared to Hoenn...$"
