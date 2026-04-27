ISLANDGAME_AETHERIA_DEPT_STORE_3F_MapScripts::
	.byte 0


ISLANDGAME_AETHERIA_DEPT_STORE_3F_Cook::
# 5 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	faceplayer
# 7 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_3F_Cook_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_3F_Woman::
# 14 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	lock
# 15 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	faceplayer
# 16 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_3F_Woman_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_3F_Athlete::
# 23 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	lock
# 24 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_3F_Athlete_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_3F_Whimsicott::
# 30 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	lock
# 31 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	applymovement LOCALID_WHIMSICOTT, ISLANDGAME_AETHERIA_DEPT_STORE_3F_Whimsicott_Movement_0
# 32 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	playmoncry SPECIES_WHIMSICOTT, CRY_MODE_NORMAL
# 33 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	waitmoncry
# 34 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_DEPT_STORE_3F_BerryGuy::
# 39 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	lock
# 40 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	faceplayer
# 41 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_3F_BerryGuy_Text_0
# 42 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	pokemart Aetheria_3F_BerryMart
# 43 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_3F_BerryGuy_Text_1
# 44 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	closemessage
# 45 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	release
	return


	.align 2
# 48 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
Aetheria_3F_BerryMart:
# 49 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 50 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 51 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 52 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 53 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 54 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 55 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 56 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 57 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 58 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 59 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 60 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 61 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
	.2byte ITEM_NONE

ISLANDGAME_AETHERIA_DEPT_STORE_3F_FoodAndProduce::
# 65 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	lock
# 66 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	faceplayer
# 67 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_3F_BerryGuy_Text_0
# 68 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	pokemart Aetheria_3F_FoodAndProduce
# 69 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_3F_BerryGuy_Text_1
# 70 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	closemessage
# 71 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	release
	return


	.align 2
# 74 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
Aetheria_3F_FoodAndProduce:
# 75 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 76 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_SODA_POP
# 77 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_LEMONADE
# 78 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 79 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_ISLANDGAME_RUKACOLA
# 80 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 81 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 82 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 83 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_OLD_GATEAU
# 84 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_LUMIOSE_GALETTE
# 85 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 86 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_TART_APPLE
# 87 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_NONE

# 31 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
ISLANDGAME_AETHERIA_DEPT_STORE_3F_Whimsicott_Movement_0:
# 31 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	emote_heart
	step_end

ISLANDGAME_AETHERIA_DEPT_STORE_3F_Cook_Text_0:
# 8 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.string "Don't underestimate the power of\n"
	.string "berries in combat!\p"
	.string "In fast-paced battles, the effect of a\n"
	.string "berry is invaluable!$"

ISLANDGAME_AETHERIA_DEPT_STORE_3F_Woman_Text_0:
# 17 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.string "Remember to keep your Pokémon in\n"
	.string "tip-top shape, especially in the heat\l"
	.string "of battle!\p"
	.string "Even just a bit of damage can determine\n"
	.string "whether your Pokémon faints or not!$"

ISLANDGAME_AETHERIA_DEPT_STORE_3F_Athlete_Text_0:
# 25 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.string "Can you believe Cynthia's gonna be here\n"
	.string "for the festival, Aibo?$"

ISLANDGAME_AETHERIA_DEPT_STORE_3F_BerryGuy_Text_0:
# 41 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.string "Welcome to StrixMart! How may I help\n"
	.string "you?$"

ISLANDGAME_AETHERIA_DEPT_STORE_3F_BerryGuy_Text_1:
# 43 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_3F/scripts.pory"
	.string "Have a great rest of your day!$"
