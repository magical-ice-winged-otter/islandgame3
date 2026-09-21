IslandGame_LoadIn_Message::
# 2 "data/scripts/islandgame_debug.pory"
	lockall
# 3 "data/scripts/islandgame_debug.pory"
	additem ITEM_ISLANDGAME_RAFT
# 4 "data/scripts/islandgame_debug.pory"
	additem ITEM_ISLANDGAME_WHISTLE
# 5 "data/scripts/islandgame_debug.pory"
	additem ITEM_ISLANDGAME_LANTERN
# 6 "data/scripts/islandgame_debug.pory"
	additem ITEM_ISLANDGAME_MACHETE
# 7 "data/scripts/islandgame_debug.pory"
	additem ITEM_ISLANDGAME_PICKAXE
# 8 "data/scripts/islandgame_debug.pory"
	additem ITEM_ISLANDGAME_POWERGLOVE
# 10 "data/scripts/islandgame_debug.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE, ITEM_PREMIER_BALL, NUM_NATURES, 1, 0, 0, 0, 0, 0, 0, 32, 32, 32, 32, 32, 32, MOVE_FAKE_OUT, MOVE_TAIL_WHIP, MOVE_SAND_ATTACK, MOVE_HELPING_HAND, FALSE
# 11 "data/scripts/islandgame_debug.pory"
	msgbox IslandGame_LoadIn_Message_Text_0
# 12 "data/scripts/islandgame_debug.pory"
	waitmessage
# 13 "data/scripts/islandgame_debug.pory"
	waitbuttonpress
# 14 "data/scripts/islandgame_debug.pory"
	releaseall
	return


TeleportMenu::
# 18 "data/scripts/islandgame_debug.pory"
	lockall
# 19 "data/scripts/islandgame_debug.pory"
	multichoicedefault 0, 0, MULTI_YESNO, 0, 1
# 20 "data/scripts/islandgame_debug.pory"
	switch VAR_RESULT
# 21 "data/scripts/islandgame_debug.pory"
	case 0, TeleportMenu_3
# 23 "data/scripts/islandgame_debug.pory"
	case 1, TeleportMenu_4
TeleportMenu_1:
# 26 "data/scripts/islandgame_debug.pory"
	releaseall
	end

TeleportMenu_3:
# 22 "data/scripts/islandgame_debug.pory"
	goto TP_Yes
	goto TeleportMenu_1

TeleportMenu_4:
# 24 "data/scripts/islandgame_debug.pory"
	goto TP_No
	goto TeleportMenu_1


TP_Yes::
# 32 "data/scripts/islandgame_debug.pory"
	releaseall
	end


TP_No::
# 37 "data/scripts/islandgame_debug.pory"
	releaseall
	end


Debug_EventScript_LocationTeleportMenu::
# 46 "data/scripts/islandgame_debug.pory"
	dynmultipush Debug_EventScript_LocationTeleportMenu_Text_0, MAP_ISLANDGAME_SS_RAIN_ROOM2
# 47 "data/scripts/islandgame_debug.pory"
	dynmultipush Debug_EventScript_LocationTeleportMenu_Text_1, MAP_ISLANDGAME_CHERIPORT
# 48 "data/scripts/islandgame_debug.pory"
	dynmultipush Debug_EventScript_LocationTeleportMenu_Text_2, MAP_ISLANDGAME_MINTY_MEADOWS
# 49 "data/scripts/islandgame_debug.pory"
	dynmultipush Debug_EventScript_LocationTeleportMenu_Text_3, MAP_ISLANDGAME_TRAVELERS_TUNNEL
# 50 "data/scripts/islandgame_debug.pory"
	dynmultipush Debug_EventScript_LocationTeleportMenu_Text_4, MAP_ISLANDGAME_CAMP_PERSI
# 51 "data/scripts/islandgame_debug.pory"
	dynmultipush Debug_EventScript_LocationTeleportMenu_Text_5, MAP_ISLANDGAME_VERDANT_PATH
# 52 "data/scripts/islandgame_debug.pory"
	dynmultipush Debug_EventScript_LocationTeleportMenu_Text_6, MAP_ISLANDGAME_VERDANT_WOODS
# 53 "data/scripts/islandgame_debug.pory"
	dynmultipush Debug_EventScript_LocationTeleportMenu_Text_7, MAP_ISLANDGAME_FRESA_FARMS
# 54 "data/scripts/islandgame_debug.pory"
	dynmultipush Debug_EventScript_LocationTeleportMenu_Text_8, MAP_ISLANDGAME_TIDALCOVE
# 55 "data/scripts/islandgame_debug.pory"
	dynmultipush Debug_EventScript_LocationTeleportMenu_Text_9, MAP_ISLANDGAME_NORTHERN_ORANNA_PATH
# 56 "data/scripts/islandgame_debug.pory"
	dynmultipush Debug_EventScript_LocationTeleportMenu_Text_10, MAP_ISLANDGAME_CENTRAL_ORANNA_PATH_1
# 57 "data/scripts/islandgame_debug.pory"
	dynmultipush Debug_EventScript_LocationTeleportMenu_Text_11, MAP_ISLANDGAME_ROSEVALE
# 60 "data/scripts/islandgame_debug.pory"
	dynmultipush Debug_EventScript_LocationTeleportMenu_Text_12, MAP_ISLANDGAME_APPLEVINE
# 61 "data/scripts/islandgame_debug.pory"
	dynmultipush Debug_EventScript_LocationTeleportMenu_Text_13, MAP_ISLANDGAME_ROCKY_PATH
# 62 "data/scripts/islandgame_debug.pory"
	dynmultipush Debug_EventScript_LocationTeleportMenu_Text_14, MAP_ISLANDGAME_BELLEHAVEN
# 63 "data/scripts/islandgame_debug.pory"
	dynmultipush Debug_EventScript_LocationTeleportMenu_Text_15, MAP_ISLANDGAME_AETHERIA
# 64 "data/scripts/islandgame_debug.pory"
	dynmultipush Debug_EventScript_LocationTeleportMenu_Text_16, MAP_ISLANDGAME_SIERRA_DESERT
# 65 "data/scripts/islandgame_debug.pory"
	dynmultistack 0, 0, TRUE, 8, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 67 "data/scripts/islandgame_debug.pory"
	switch VAR_RESULT
# 68 "data/scripts/islandgame_debug.pory"
	case MAP_ISLANDGAME_SS_RAIN_ROOM2, Debug_EventScript_LocationTeleportMenu_3
# 69 "data/scripts/islandgame_debug.pory"
	case MAP_ISLANDGAME_CHERIPORT, Debug_EventScript_LocationTeleportMenu_4
# 70 "data/scripts/islandgame_debug.pory"
	case MAP_ISLANDGAME_MINTY_MEADOWS, Debug_EventScript_LocationTeleportMenu_5
# 71 "data/scripts/islandgame_debug.pory"
	case MAP_ISLANDGAME_TRAVELERS_TUNNEL, Debug_EventScript_LocationTeleportMenu_6
# 72 "data/scripts/islandgame_debug.pory"
	case MAP_ISLANDGAME_CAMP_PERSI, Debug_EventScript_LocationTeleportMenu_7
# 73 "data/scripts/islandgame_debug.pory"
	case MAP_ISLANDGAME_VERDANT_PATH, Debug_EventScript_LocationTeleportMenu_8
# 74 "data/scripts/islandgame_debug.pory"
	case MAP_ISLANDGAME_VERDANT_WOODS, Debug_EventScript_LocationTeleportMenu_9
# 75 "data/scripts/islandgame_debug.pory"
	case MAP_ISLANDGAME_FRESA_FARMS, Debug_EventScript_LocationTeleportMenu_10
# 76 "data/scripts/islandgame_debug.pory"
	case MAP_ISLANDGAME_TIDALCOVE, Debug_EventScript_LocationTeleportMenu_11
# 77 "data/scripts/islandgame_debug.pory"
	case MAP_ISLANDGAME_NORTHERN_ORANNA_PATH, Debug_EventScript_LocationTeleportMenu_12
# 78 "data/scripts/islandgame_debug.pory"
	case MAP_ISLANDGAME_CENTRAL_ORANNA_PATH_1, Debug_EventScript_LocationTeleportMenu_13
# 79 "data/scripts/islandgame_debug.pory"
	case MAP_ISLANDGAME_ROSEVALE, Debug_EventScript_LocationTeleportMenu_14
# 80 "data/scripts/islandgame_debug.pory"
	case MAP_ISLANDGAME_APPLEVINE, Debug_EventScript_LocationTeleportMenu_15
# 81 "data/scripts/islandgame_debug.pory"
	case MAP_ISLANDGAME_ROCKY_PATH, Debug_EventScript_LocationTeleportMenu_16
# 82 "data/scripts/islandgame_debug.pory"
	case MAP_ISLANDGAME_BELLEHAVEN, Debug_EventScript_LocationTeleportMenu_17
# 83 "data/scripts/islandgame_debug.pory"
	case MAP_ISLANDGAME_AETHERIA, Debug_EventScript_LocationTeleportMenu_18
# 84 "data/scripts/islandgame_debug.pory"
	case MAP_ISLANDGAME_SIERRA_DESERT, Debug_EventScript_LocationTeleportMenu_19
Debug_EventScript_LocationTeleportMenu_1:
# 86 "data/scripts/islandgame_debug.pory"
	release
	return

Debug_EventScript_LocationTeleportMenu_3:
# 68 "data/scripts/islandgame_debug.pory"
	warp MAP_ISLANDGAME_SS_RAIN_ROOM2, 6, 7
	goto Debug_EventScript_LocationTeleportMenu_1

Debug_EventScript_LocationTeleportMenu_4:
# 69 "data/scripts/islandgame_debug.pory"
	warp MAP_ISLANDGAME_CHERIPORT, 10, 26
	goto Debug_EventScript_LocationTeleportMenu_1

Debug_EventScript_LocationTeleportMenu_5:
# 70 "data/scripts/islandgame_debug.pory"
	warp MAP_ISLANDGAME_MINTY_MEADOWS, 1, 26
	goto Debug_EventScript_LocationTeleportMenu_1

Debug_EventScript_LocationTeleportMenu_6:
# 71 "data/scripts/islandgame_debug.pory"
	warp MAP_ISLANDGAME_TRAVELERS_TUNNEL, 10, 16
	goto Debug_EventScript_LocationTeleportMenu_1

Debug_EventScript_LocationTeleportMenu_7:
# 72 "data/scripts/islandgame_debug.pory"
	warp MAP_ISLANDGAME_CAMP_PERSI, 1, 24
	goto Debug_EventScript_LocationTeleportMenu_1

Debug_EventScript_LocationTeleportMenu_8:
# 73 "data/scripts/islandgame_debug.pory"
	warp MAP_ISLANDGAME_VERDANT_PATH, 10, 10
	goto Debug_EventScript_LocationTeleportMenu_1

Debug_EventScript_LocationTeleportMenu_9:
# 74 "data/scripts/islandgame_debug.pory"
	warp MAP_ISLANDGAME_VERDANT_WOODS, 35, 17
	goto Debug_EventScript_LocationTeleportMenu_1

Debug_EventScript_LocationTeleportMenu_10:
# 75 "data/scripts/islandgame_debug.pory"
	warp MAP_ISLANDGAME_FRESA_FARMS, 10, 10
	goto Debug_EventScript_LocationTeleportMenu_1

Debug_EventScript_LocationTeleportMenu_11:
# 76 "data/scripts/islandgame_debug.pory"
	warp MAP_ISLANDGAME_TIDALCOVE, 18, 21
	goto Debug_EventScript_LocationTeleportMenu_1

Debug_EventScript_LocationTeleportMenu_12:
# 77 "data/scripts/islandgame_debug.pory"
	warp MAP_ISLANDGAME_NORTHERN_ORANNA_PATH, 33, 19
	goto Debug_EventScript_LocationTeleportMenu_1

Debug_EventScript_LocationTeleportMenu_13:
# 78 "data/scripts/islandgame_debug.pory"
	warp MAP_ISLANDGAME_CENTRAL_ORANNA_PATH_1, 18, 1
	goto Debug_EventScript_LocationTeleportMenu_1

Debug_EventScript_LocationTeleportMenu_14:
# 79 "data/scripts/islandgame_debug.pory"
	warp MAP_ISLANDGAME_ROSEVALE, 19, 13
	goto Debug_EventScript_LocationTeleportMenu_1

Debug_EventScript_LocationTeleportMenu_15:
# 80 "data/scripts/islandgame_debug.pory"
	warp MAP_ISLANDGAME_APPLEVINE, 39, 17
	goto Debug_EventScript_LocationTeleportMenu_1

Debug_EventScript_LocationTeleportMenu_16:
# 81 "data/scripts/islandgame_debug.pory"
	warp MAP_ISLANDGAME_ROCKY_PATH, 63, 40
	goto Debug_EventScript_LocationTeleportMenu_1

Debug_EventScript_LocationTeleportMenu_17:
# 82 "data/scripts/islandgame_debug.pory"
	warp MAP_ISLANDGAME_BELLEHAVEN, 21, 28
	goto Debug_EventScript_LocationTeleportMenu_1

Debug_EventScript_LocationTeleportMenu_18:
# 83 "data/scripts/islandgame_debug.pory"
	warp MAP_ISLANDGAME_AETHERIA, 60, 26
	goto Debug_EventScript_LocationTeleportMenu_1

Debug_EventScript_LocationTeleportMenu_19:
# 84 "data/scripts/islandgame_debug.pory"
	warp MAP_ISLANDGAME_SIERRA_DESERT, 9, 7
	goto Debug_EventScript_LocationTeleportMenu_1


Debug_EventScript_JonasFightTrigger::
# 91 "data/scripts/islandgame_debug.pory"
	fadescreen FADE_FROM_BLACK
	return


Debug_EventScript_JonasFight::
# 95 "data/scripts/islandgame_debug.pory"
	fadescreen FADE_TO_BLACK
# 96 "data/scripts/islandgame_debug.pory"
	warpcontinuescript MAP_ISLANDGAME_CAMP_PERSI, 59, 11, Debug_EventScript_JonasFightTrigger
# 97 "data/scripts/islandgame_debug.pory"
	release
	return


Debug_EventScript_Script_3::
# 101 "data/scripts/islandgame_debug.pory"
	warp MAP_ISLANDGAME_MINTY_MEADOWS_2, 27, 11
# 102 "data/scripts/islandgame_debug.pory"
	release
	return


Debug_EventScript_Script_4::
# 106 "data/scripts/islandgame_debug.pory"
	release
	return


Debug_EventScript_Script_5::
# 110 "data/scripts/islandgame_debug.pory"
	release
	return


Debug_EventScript_Script_6::
# 114 "data/scripts/islandgame_debug.pory"
	release
	return


Debug_EventScript_Script_7::
# 118 "data/scripts/islandgame_debug.pory"
	release
	return


Debug_EventScript_Script_8::
# 122 "data/scripts/islandgame_debug.pory"
	release
	return


IslandGame_LoadIn_Message_Text_0:
# 11 "data/scripts/islandgame_debug.pory"
	.string "{COLOR BLUE}Added badges$"

Debug_EventScript_LocationTeleportMenu_Text_0:
# 46 "data/scripts/islandgame_debug.pory"
	.string "S.S. Rain$"

Debug_EventScript_LocationTeleportMenu_Text_1:
# 47 "data/scripts/islandgame_debug.pory"
	.string "Cheriport$"

Debug_EventScript_LocationTeleportMenu_Text_2:
# 48 "data/scripts/islandgame_debug.pory"
	.string "Minty Meadows$"

Debug_EventScript_LocationTeleportMenu_Text_3:
# 49 "data/scripts/islandgame_debug.pory"
	.string "Traveler's Tunnel$"

Debug_EventScript_LocationTeleportMenu_Text_4:
# 50 "data/scripts/islandgame_debug.pory"
	.string "Camp Persi$"

Debug_EventScript_LocationTeleportMenu_Text_5:
# 51 "data/scripts/islandgame_debug.pory"
	.string "Verdant Path$"

Debug_EventScript_LocationTeleportMenu_Text_6:
# 52 "data/scripts/islandgame_debug.pory"
	.string "Verdant Wood$"

Debug_EventScript_LocationTeleportMenu_Text_7:
# 53 "data/scripts/islandgame_debug.pory"
	.string "Fresa Farms$"

Debug_EventScript_LocationTeleportMenu_Text_8:
# 54 "data/scripts/islandgame_debug.pory"
	.string "Northern Oranna$"

Debug_EventScript_LocationTeleportMenu_Text_9:
# 55 "data/scripts/islandgame_debug.pory"
	.string "Central Oranna$"

Debug_EventScript_LocationTeleportMenu_Text_10:
# 56 "data/scripts/islandgame_debug.pory"
	.string "Tidalcove$"

Debug_EventScript_LocationTeleportMenu_Text_11:
# 57 "data/scripts/islandgame_debug.pory"
	.string "Rosevale$"

Debug_EventScript_LocationTeleportMenu_Text_12:
# 60 "data/scripts/islandgame_debug.pory"
	.string "Applevine$"

Debug_EventScript_LocationTeleportMenu_Text_13:
# 61 "data/scripts/islandgame_debug.pory"
	.string "Rocky Path$"

Debug_EventScript_LocationTeleportMenu_Text_14:
# 62 "data/scripts/islandgame_debug.pory"
	.string "Bellehaven$"

Debug_EventScript_LocationTeleportMenu_Text_15:
# 63 "data/scripts/islandgame_debug.pory"
	.string "Aetheria$"

Debug_EventScript_LocationTeleportMenu_Text_16:
# 64 "data/scripts/islandgame_debug.pory"
	.string "Sierra Desert$"
