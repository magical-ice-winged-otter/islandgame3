ISLANDGAME_AETHERIA_WHARF_MapScripts::
	.byte 0


ISLANDGAME_AETHERIA_WHARF_BoatAttendant::
# 7 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	lock
# 8 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	faceplayer
# 9 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WHARF_BoatAttendant_Text_0, MSGBOX_YESNO
# 12 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_WHARF_BoatAttendant_2
ISLANDGAME_AETHERIA_WHARF_BoatAttendant_1:
# 15 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WHARF_BoatAttendant_Text_1
# 18 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_WHARF_BoatAttendant_Text_2, 0
# 19 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_WHARF_BoatAttendant_Text_3, 1
# 21 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	dynmultistack 0, 0, TRUE, 2, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 22 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	switch VAR_RESULT
# 23 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	case 1, ISLANDGAME_AETHERIA_WHARF_BoatAttendant_6
# 41 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	goto ISLANDGAME_AETHERIA_WHARF_BoatAttendant_End
ISLANDGAME_AETHERIA_WHARF_BoatAttendant_4:
# 44 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
ISLANDGAME_AETHERIA_WHARF_BoatAttendant_End:
# 45 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	closemessage
# 46 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_WHARF_BoatAttendant_2:
# 13 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	goto ISLANDGAME_AETHERIA_WHARF_BoatAttendant_End
	goto ISLANDGAME_AETHERIA_WHARF_BoatAttendant_1

ISLANDGAME_AETHERIA_WHARF_BoatAttendant_6:
# 24 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WHARF_BoatAttendant_Text_4, MSGBOX_YESNO
# 27 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_WHARF_BoatAttendant_9
ISLANDGAME_AETHERIA_WHARF_BoatAttendant_8:
# 30 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WHARF_BoatAttendant_Text_5
# 33 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	closemessage
# 34 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	fadescreen FADE_TO_BLACK
# 35 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	playse SE_RG_SS_ANNE_HORN
# 36 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	waitse
# 37 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	playse SE_M_SURF
# 38 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	waitse
# 39 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	warp MAP_ISLANDGAME_CHERIPORT, 6, 25
	goto ISLANDGAME_AETHERIA_WHARF_BoatAttendant_4

ISLANDGAME_AETHERIA_WHARF_BoatAttendant_9:
# 28 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	goto ISLANDGAME_AETHERIA_WHARF_BoatAttendant_End
	goto ISLANDGAME_AETHERIA_WHARF_BoatAttendant_8


ISLANDGAME_AETHERIA_WHARF_BoatAttendant_Text_0:
# 10 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	.string "Hello traveler. Are you here to ride the\n"
	.string "ferry?$"

ISLANDGAME_AETHERIA_WHARF_BoatAttendant_Text_1:
# 16 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	.string "Which island will you be traveling to?$"

ISLANDGAME_AETHERIA_WHARF_BoatAttendant_Text_2:
# 18 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	.string "Nevermind$"

ISLANDGAME_AETHERIA_WHARF_BoatAttendant_Text_3:
# 19 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	.string "Oranna (Cheriport)$"

ISLANDGAME_AETHERIA_WHARF_BoatAttendant_Text_4:
# 25 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	.string "{COLOR GREEN}Travel to Cheriport?$"

ISLANDGAME_AETHERIA_WHARF_BoatAttendant_Text_5:
# 31 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	.string "Very well. Please board the ferry. We\n"
	.string "will be departing soon.$"
