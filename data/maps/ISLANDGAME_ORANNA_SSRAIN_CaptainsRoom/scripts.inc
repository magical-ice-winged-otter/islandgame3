ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom_MapScripts::
	.byte 0


ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom_CaptainRain::
# 4 "data/maps/ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom/scripts.pory"
	faceplayer
# 6 "data/maps/ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom_CaptainRain_Text_0
# 9 "data/maps/ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom/scripts.pory"
	closemessage
# 10 "data/maps/ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom_Book::
# 14 "data/maps/ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom_Book_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom_Shelf::
# 21 "data/maps/ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom/scripts.pory"
	lock
# 22 "data/maps/ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom_Shelf_Text_0
# 26 "data/maps/ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom_CaptainRain_Text_0:
# 7 "data/maps/ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom/scripts.pory"
	.string "Ahoy there! I'm the captain of this\n"
	.string "vessel. Hope you enjoy your stay at the\l"
	.string "beautiful Maryan Isles!$"

ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom_Book_Text_0:
# 15 "data/maps/ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom/scripts.pory"
	.string "{COLOR RED}(It's a light novel titled “The Rising of\n"
	.string "The Aegislash Hero”.)$"

ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom_Shelf_Text_0:
# 23 "data/maps/ISLANDGAME_ORANNA_SSRAIN_CaptainsRoom/scripts.pory"
	.string "{COLOR RED}(There's a large assortment of books on\n"
	.string "this shelf.)\p"
	.string "(The captain seems to be really into\n"
	.string "Pokécraft.)$"
