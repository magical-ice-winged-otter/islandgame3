ISLANDGAME_ORANNA_SSRAIN_Room1_MapScripts::
	.byte 0


ISLANDGAME_ORANNA_SSRAIN_Room1_NPC::
# 4 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room1/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room1/scripts.pory"
	faceplayer
# 6 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room1/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Room1_NPC_Text_0
# 10 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room1/scripts.pory"
	waitmessage
# 11 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room1/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_SSRAIN_Room1_NPC_Text_0:
# 7 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room1/scripts.pory"
	.string "It's been almost twenty years since the\n"
	.string "last time I came here.\p"
	.string "A lot sure has changed since then.$"
