ISLANDGAME_AETHERIA_CONDO_3F_ROOM1_MapScripts::
	.byte 0


ISLANDGAME_AETHERIA_CONDO_3F_ROOM1_Woman::
# 5 "data/maps/ISLANDGAME_AETHERIA_CONDO_3F_ROOM1/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_AETHERIA_CONDO_3F_ROOM1/scripts.pory"
	faceplayer
# 7 "data/maps/ISLANDGAME_AETHERIA_CONDO_3F_ROOM1/scripts.pory"
	goto_if_set FLAG_AETHERIA_ROOM_SERVICE, ISLANDGAME_AETHERIA_CONDO_3F_ROOM1_Woman_1
# 14 "data/maps/ISLANDGAME_AETHERIA_CONDO_3F_ROOM1/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CONDO_3F_ROOM1_Woman_Text_1, MSGBOX_YESNO
# 18 "data/maps/ISLANDGAME_AETHERIA_CONDO_3F_ROOM1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AETHERIA_CONDO_3F_ROOM1_Woman_4
	return

ISLANDGAME_AETHERIA_CONDO_3F_ROOM1_Woman_1:
# 8 "data/maps/ISLANDGAME_AETHERIA_CONDO_3F_ROOM1/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CONDO_3F_ROOM1_Woman_Text_0, MSGBOX_AUTOCLOSE
	return

ISLANDGAME_AETHERIA_CONDO_3F_ROOM1_Woman_4:
# 19 "data/maps/ISLANDGAME_AETHERIA_CONDO_3F_ROOM1/scripts.pory"
	giveitem ITEM_ROOM_SERVICE
# 20 "data/maps/ISLANDGAME_AETHERIA_CONDO_3F_ROOM1/scripts.pory"
	setflag FLAG_AETHERIA_ROOM_SERVICE
	return


ISLANDGAME_AETHERIA_CONDO_3F_ROOM1_Woman_Text_0:
# 9 "data/maps/ISLANDGAME_AETHERIA_CONDO_3F_ROOM1/scripts.pory"
	.string "I try not to order room service too\n"
	.string "often, but it's okay to treat yourself\l"
	.string "every once in a while.\p"
	.string "¥2500 for a hamburger is highway\n"
	.string "robbery though.$"

ISLANDGAME_AETHERIA_CONDO_3F_ROOM1_Woman_Text_1:
# 15 "data/maps/ISLANDGAME_AETHERIA_CONDO_3F_ROOM1/scripts.pory"
	.string "Oh bother, we ordered some room\n"
	.string "service, but it seems like they mixed up\l"
	.string "our order.\p"
	.string "I'd hate for such gourmet food to go to\n"
	.string "waste. Would you like it instead?$"
