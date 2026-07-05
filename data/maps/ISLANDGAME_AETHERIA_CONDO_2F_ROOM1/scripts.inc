ISLANDGAME_AETHERIA_CONDO_2F_ROOM1_MapScripts::
	.byte 0


ISLANDGAME_AETHERIA_CONDO_2F_ROOM1_Woman::
# 5 "data/maps/ISLANDGAME_AETHERIA_CONDO_2F_ROOM1/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_AETHERIA_CONDO_2F_ROOM1/scripts.pory"
	faceplayer
# 7 "data/maps/ISLANDGAME_AETHERIA_CONDO_2F_ROOM1/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CONDO_2F_ROOM1_Woman_Text_0
	return


ISLANDGAME_AETHERIA_CONDO_2F_ROOM1_Hatterene::
# 15 "data/maps/ISLANDGAME_AETHERIA_CONDO_2F_ROOM1/scripts.pory"
	lock
# 16 "data/maps/ISLANDGAME_AETHERIA_CONDO_2F_ROOM1/scripts.pory"
	faceplayer
# 17 "data/maps/ISLANDGAME_AETHERIA_CONDO_2F_ROOM1/scripts.pory"
	playmoncry SPECIES_HATTERENE, CRY_MODE_NORMAL
# 18 "data/maps/ISLANDGAME_AETHERIA_CONDO_2F_ROOM1/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CONDO_2F_ROOM1_Hatterene_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_CONDO_2F_ROOM1_Woman_Text_0:
# 8 "data/maps/ISLANDGAME_AETHERIA_CONDO_2F_ROOM1/scripts.pory"
	.string "Throughout your journey as a trainer,\n"
	.string "you'll meet many kinds of people.\p"
	.string "Some will be delightful, while others will\n"
	.string "be abrasive.\p"
	.string "Regardless, it's important to keep an\n"
	.string "open mind. You never know what might be\l"
	.string "going on in someone's life.$"

ISLANDGAME_AETHERIA_CONDO_2F_ROOM1_Hatterene_Text_0:
# 19 "data/maps/ISLANDGAME_AETHERIA_CONDO_2F_ROOM1/scripts.pory"
	.string "{COLOR BLUE}(Humans are fascinating.)\p"
	.string "(Even when they are in pain, they\n"
	.string "choose to smile instead.)$"
