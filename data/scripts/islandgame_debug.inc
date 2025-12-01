IslandGame_LoadIn_Message::
# 2 "data/scripts/islandgame_debug.pory"
	lockall
# 3 "data/scripts/islandgame_debug.pory"
	msgbox IslandGame_LoadIn_Msg
# 5 "data/scripts/islandgame_debug.pory"
	additem ITEM_ISLANDGAME_RAFT
# 6 "data/scripts/islandgame_debug.pory"
	additem ITEM_ISLANDGAME_WHISTLE
# 7 "data/scripts/islandgame_debug.pory"
	additem ITEM_ISLANDGAME_LANTERN
# 8 "data/scripts/islandgame_debug.pory"
	additem ITEM_ISLANDGAME_MACHETE
# 9 "data/scripts/islandgame_debug.pory"
	additem ITEM_ISLANDGAME_PICKAXE
# 10 "data/scripts/islandgame_debug.pory"
	additem ITEM_ISLANDGAME_POWERGLOVE
# 12 "data/scripts/islandgame_debug.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE, ITEM_PREMIER_BALL, NUM_NATURES, 1, 0, 0, 0, 0, 0, 0, 32, 32, 32, 32, 32, 32, MOVE_FAKE_OUT, MOVE_TAIL_WHIP, MOVE_SAND_ATTACK, MOVE_HELPING_HAND, FALSE
# 13 "data/scripts/islandgame_debug.pory"
	waitbuttonpress
# 14 "data/scripts/islandgame_debug.pory"
	releaseall
	end


TeleportMenu::
# 24 "data/scripts/islandgame_debug.pory"
	lockall
# 25 "data/scripts/islandgame_debug.pory"
	multichoicedefault 0, 0, MULTI_YESNO, 0, 1
# 26 "data/scripts/islandgame_debug.pory"
	switch VAR_RESULT
# 27 "data/scripts/islandgame_debug.pory"
	case 0, TeleportMenu_3
# 29 "data/scripts/islandgame_debug.pory"
	case 1, TeleportMenu_4
TeleportMenu_1:
# 32 "data/scripts/islandgame_debug.pory"
	releaseall
	end

TeleportMenu_3:
# 28 "data/scripts/islandgame_debug.pory"
	goto TP_Yes
	goto TeleportMenu_1

TeleportMenu_4:
# 30 "data/scripts/islandgame_debug.pory"
	goto TP_No
	goto TeleportMenu_1


TP_Yes::
# 38 "data/scripts/islandgame_debug.pory"
	releaseall
	end


TP_No::
# 43 "data/scripts/islandgame_debug.pory"
	releaseall
	end


IslandGame_LoadIn_Msg::
# 18 "data/scripts/islandgame_debug.pory"
	.string "{COLOR BLUE}Added badges$"
