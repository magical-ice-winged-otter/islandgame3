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
# 26 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_7
ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_1:
# 31 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
AetheriaBattleCafeBarista_End:
# 32 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 33 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_2:
# 12 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_1
# 15 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_2, 0
# 16 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_3, 1
# 17 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_4, 2
# 18 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_5, 3
# 19 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_6, 4
# 20 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultistack 0, 0, TRUE, 5, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_1


ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_0:
# 8 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Haiyo! Welcome to Café Lumi! Have you\n"
	.string "come to try our famous hotcakes?$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_1:
# 13 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Wonderful! What kind of hotcakes would\n"
	.string "you like? {COLOR GREEN}(='u'=)$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_2:
# 15 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Classic :)$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_3:
# 16 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Apple-Cinnamon :P$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_4:
# 17 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Funfetti! :D$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_5:
# 18 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Super Secret Special??? :O$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_6:
# 19 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Nevermind :($"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_7:
# 27 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Awwh. If you change your mind, we'll be\n"
	.string "here to serve you! {COLOR GREEN}(='w'=)$"
