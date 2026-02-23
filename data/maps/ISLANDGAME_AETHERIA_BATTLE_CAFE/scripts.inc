ISLANDGAME_AETHERIA_BATTLE_CAFE_MapScripts::
	.byte 0


ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista::
# 5 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	faceplayer
# 7 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_0, MSGBOX_YESNO
# 11 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_2
# 22 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_2
ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_1:
# 27 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
AetheriaBattleCafeBarista_End:
# 28 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 29 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_2:
# 12 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_1
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_1


ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_0:
# 8 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Haiyo! Welcome to Café Lumi! Have you\n"
	.string "come to try our famous hotcakes?$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_1:
# 13 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Wonderful! What kind of hotcakes would\n"
	.string "you like?$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_2:
# 23 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Awwh. If you change your mind, we'll be\n"
	.string "here to serve you! {COLOR GREEN}(='w'=)$"
