ISLANDGAME_AETHERIA_DEPT_STORE_4F_MapScripts::
	.byte 0


ISLANDGAME_AETHERIA_DEPT_STORE_4F_Youngster::
# 5 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	faceplayer
# 7 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_4F_Youngster_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_4F_Gentleman::
# 14 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	lock
# 15 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	faceplayer
# 16 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_4F_Gentleman_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_4F_Stoutland::
# 24 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	lock
# 25 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	faceplayer
# 26 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	playmoncry SPECIES_STOUTLAND, CRY_MODE_NORMAL
# 27 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_4F_Stoutland_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_4F_Woman::
# 33 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	lock
# 34 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	faceplayer
# 35 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_4F_Woman_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_4F_TMGuy::
# 43 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	lock
# 44 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	faceplayer
# 45 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_4F_TMGuy_Text_0
# 46 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	pokemart Aetheria_4F_TMMart
# 47 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_4F_TMGuy_Text_1
# 48 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	closemessage
# 49 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	release
	return


	.align 2
# 52 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
Aetheria_4F_TMMart:
# 53 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	.2byte ITEM_TM_SHOCK_WAVE
# 54 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	.2byte ITEM_TM_AERIAL_ACE
# 55 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	.2byte ITEM_TM_DIG
# 56 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	.2byte ITEM_TM_FACADE
# 57 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	.2byte ITEM_TM_STEEL_WING
	.2byte ITEM_NONE

ISLANDGAME_AETHERIA_DEPT_STORE_4F_TMGirl::
# 65 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	lock
# 66 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	faceplayer
# 67 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_4F_TMGuy_Text_0
# 68 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	pokemart Aetheria_4F_TMMart2
# 69 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_4F_TMGuy_Text_1
# 70 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	closemessage
# 71 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	release
	return


	.align 2
# 74 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
Aetheria_4F_TMMart2:
# 75 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	.2byte ITEM_TM_BULK_UP
# 76 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 77 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	.2byte ITEM_TM_LIGHT_SCREEN
# 78 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 79 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	.2byte ITEM_TM_REST
	.2byte ITEM_NONE

ISLANDGAME_AETHERIA_DEPT_STORE_4F_Youngster_Text_0:
# 8 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	.string "Total bummer that Pokémon can only\n"
	.string "know four moves at a time.\p"
	.string "They've gotta get with the times, brah.\n"
	.string "{PAUSE 30}Imagine how cool it'd be if Pokémon\l"
	.string "could have fives moves at a time!$"

ISLANDGAME_AETHERIA_DEPT_STORE_4F_Gentleman_Text_0:
# 17 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	.string "The evolution of Pokémon is quite\n"
	.string "remarkable.\p"
	.string "In my youth, I had memorized every\n"
	.string "single known move by heart. There were\l"
	.string "only about a hundred of them.\p"
	.string "Today, there are almost a thousand\n"
	.string "known moves in the Pokémon world, and\l"
	.string "that number grows every passing year.$"

ISLANDGAME_AETHERIA_DEPT_STORE_4F_Stoutland_Text_0:
# 28 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	.string "Borf!$"

ISLANDGAME_AETHERIA_DEPT_STORE_4F_Woman_Text_0:
# 36 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	.string "The Trainer Zone frequently restocks\n"
	.string "their Technical Machines, especially\l"
	.string "during festival season.\p"
	.string "If you don't see any TMs that you want\n"
	.string "now, check back in the future!$"

ISLANDGAME_AETHERIA_DEPT_STORE_4F_TMGuy_Text_0:
# 45 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	.string "Welcome to the Trainer Zone! How may I\n"
	.string "help you?$"

ISLANDGAME_AETHERIA_DEPT_STORE_4F_TMGuy_Text_1:
# 47 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_4F/scripts.pory"
	.string "Have a great rest of your day!$"
