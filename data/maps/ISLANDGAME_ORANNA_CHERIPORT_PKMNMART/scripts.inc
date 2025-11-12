ISLANDGAME_ORANNA_CHERIPORT_PKMNMART_MapScripts::
	.byte 0


	.align 2
# 3 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
Cheriport_MartItems:
# 4 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	.2byte ITEM_POKE_BALL
# 5 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	.2byte ITEM_POTION
# 6 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

ISLANDGAME_ORANNA_CHERIPORT_PKMNMART_MartEmployee::
# 10 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	lock
# 11 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_PKMNMART_MartEmployee_Text_0
# 14 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	closemessage
# 15 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	pokemart Cheriport_MartItems
# 16 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_PKMNMART_MartEmployee_Text_1
# 19 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	closemessage
# 20 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_PKMNMART_NPC1::
# 25 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	lock
# 26 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	faceplayer
# 27 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_PKMNMART_NPC1_Text_0
# 32 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	closemessage
# 33 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_PKMNMART_NPC2::
# 38 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	lock
# 39 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_PKMNMART_NPC2_Text_0
# 42 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	closemessage
# 43 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_PKMNMART_MartEmployee_Text_0:
# 12 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	.string "Welcome to CheriMart! How may I help\n"
	.string "you?$"

ISLANDGAME_ORANNA_CHERIPORT_PKMNMART_MartEmployee_Text_1:
# 17 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	.string "Thank you for shopping with us!$"

ISLANDGAME_ORANNA_CHERIPORT_PKMNMART_NPC1_Text_0:
# 28 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	.string "I can't believe they don't sell booze to\n"
	.string "foreigners.\p"
	.string "If I'd known of this sooner, I wouldn't\n"
	.string "have spent a grand just to come here!\p"
	.string "These Silverwing guys gotta loosen up.\n"
	.string "How's anyone supposed to get a workout\l"
	.string "in without any pregame material?$"

ISLANDGAME_ORANNA_CHERIPORT_PKMNMART_NPC2_Text_0:
# 40 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNMART/scripts.pory"
	.string "Oh dear, everything here is much more\n"
	.string "expensive compared to Hoenn...$"
