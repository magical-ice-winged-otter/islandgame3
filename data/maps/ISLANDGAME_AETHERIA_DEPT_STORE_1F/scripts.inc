ISLANDGAME_AETHERIA_DEPT_STORE_1F_MapScripts::
	.byte 0


ISLANDGAME_AETHERIA_DEPT_STORE_Directory::
# 7 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_Directory_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_DEPT_STORE_1F_Receptionist::
# 19 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	lock
# 20 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_1F_Receptionist_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_1F_Consoomer::
# 28 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	lock
# 29 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	faceplayer
# 30 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_1F_Consoomer_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_1F_LittleBoy::
# 38 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	lock
# 39 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	faceplayer
# 40 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_1F_LittleBoy_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_1F_SchoolGirl::
# 47 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	lock
# 48 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_1F_SchoolGirl_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_1F_Bulbasaur::
# 54 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	lock
# 55 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	applymovement LOCALID_BULBASAUR, ISLANDGAME_AETHERIA_DEPT_STORE_1F_Bulbasaur_Movement_0
# 56 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	playmoncry SPECIES_BULBASAUR, CRY_MODE_NORMAL
# 57 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	waitmoncry
# 58 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_DEPT_STORE_1F_Employee::
# 62 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	lock
# 63 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	faceplayer
# 64 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_1F_Employee_Text_0, MSGBOX_AUTOCLOSE
	return


# 55 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
ISLANDGAME_AETHERIA_DEPT_STORE_1F_Bulbasaur_Movement_0:
# 55 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	emote_heart
	step_end

ISLANDGAME_AETHERIA_DEPT_STORE_Directory_Text_0:
# 8 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	.string "1F - Reception\n"
	.string "2F - General / Pharmacy\p"
	.string "3F - Food & Produce\n"
	.string "4F - The Trainer Zone\p"
	.string "5F - Gifts & Souvenirs\n"
	.string "Rooftop - Plaza$"

ISLANDGAME_AETHERIA_DEPT_STORE_1F_Receptionist_Text_0:
# 21 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	.string "Hello shopper! Welcome to the flagship\n"
	.string "store of StrixMart!\p"
	.string "This building serves not only as a\n"
	.string "department store, but also as Strix\l"
	.string "Corporation's company headquarters!\p"
	.string "Please refer to the directory between\n"
	.string "the elevator and stairs for information\l"
	.string "concerning each floor.$"

ISLANDGAME_AETHERIA_DEPT_STORE_1F_Consoomer_Text_0:
# 31 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	.string "When I arrived here, I promised myself\n"
	.string "that I'd be on a strict budget.\p"
	.string "Things, uh, didn't quite go as planned,\n"
	.string "as you can see...\p"
	.string "I hope my wife is okay with some\n"
	.string "plushies instead of dinner.$"

ISLANDGAME_AETHERIA_DEPT_STORE_1F_LittleBoy_Text_0:
# 41 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	.string "I'm in a game of hide-and-seek with\n"
	.string "papa!\p"
	.string "I hope he finds me soon. I'm getting\n"
	.string "hungry...$"

ISLANDGAME_AETHERIA_DEPT_STORE_1F_SchoolGirl_Text_0:
# 49 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	.string "Hehe. Do you like your new wreath? It's\n"
	.string "the same one Primrose wears!$"

ISLANDGAME_AETHERIA_DEPT_STORE_1F_Employee_Text_0:
# 65 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_1F/scripts.pory"
	.string "Our founder, Mr. Corvus, established the\n"
	.string "very first StrixMart here alongside his\l"
	.string "partner, Mr. Poe.\p"
	.string "However, Mr. Poe ultimately parted ways\n"
	.string "to begin his own company, PoeTech.\p"
	.string "Today, Corvus and Mr. Poe are the two\n"
	.string "richest men in all of Marya.$"
