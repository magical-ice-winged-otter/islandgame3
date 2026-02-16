ISLANDGAME_MAPLEGROVE_PKMNMART_MapScripts::
	.byte 0


ISLANDGAME_MAPLEGROVE_PKMNMART_Interact_SickGirl::
# 4 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_PKMNMART_Interact_SickGirl_Text_0, MSGBOX_NPC
	return


ISLANDGAME_MAPLEGROVE_PKMNMART_Interact_Audino::
# 8 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_PKMNMART_Interact_Audino_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MAPLEGROVE_PKMNMART_Interact_Employee::
# 12 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_PKMNMART_Interact_Employee_Text_0, MSGBOX_AUTOCLOSE
# 13 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	pokemart Maplegrove_MartItems
# 14 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_PKMNMART_Interact_Employee_Text_1, MSGBOX_AUTOCLOSE
	return


	.align 2
# 17 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
Maplegrove_MartItems:
# 18 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	.2byte ITEM_POKE_BALL
# 19 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	.2byte ITEM_POTION
# 20 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 22 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	.2byte ITEM_AWAKENING
# 23 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

ISLANDGAME_MAPLEGROVE_PKMNMART_Interact_SickGirl_Text_0:
# 4 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	.string "Achoooo!{PAUSE 60} -sniff-{PAUSE 60} Oops, sorry.{PAUSE 30} I didn't\n"
	.string "mean to sneeze all over you.$"

ISLANDGAME_MAPLEGROVE_PKMNMART_Interact_Audino_Text_0:
# 8 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	.string "{COLOR RED}(It seems like this Audino is actually\n"
	.string "an employee at the shop.)$"

ISLANDGAME_MAPLEGROVE_PKMNMART_Interact_Employee_Text_0:
# 12 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	.string "Welcome! How may I help you?$"

ISLANDGAME_MAPLEGROVE_PKMNMART_Interact_Employee_Text_1:
# 14 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	.string "Thank you for shopping with us!$"
