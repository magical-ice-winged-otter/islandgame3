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


ISLANDGAME_AETHERIA_WHARF_Worker::
# 52 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	lock
# 53 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	faceplayer
# 54 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WHARF_Worker_Text_0, MSGBOX_AUTOCLOSE
# 60 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_WHARF_Woman::
# 64 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	lock
# 65 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	faceplayer
# 66 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WHARF_Woman_Text_0, MSGBOX_AUTOCLOSE
# 70 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_WHARF_Scientist::
# 74 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	lock
# 75 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WHARF_Scientist_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_WHARF_OldMan::
# 84 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	lock
# 85 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WHARF_OldMan_Text_0, MSGBOX_AUTOCLOSE
# 89 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_WHARF_Fisherman::
# 93 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	lock
# 94 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	faceplayer
# 95 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	goto_if_unset FLAG_ITEM_AETHERIA_KINGS_ROCK, ISLANDGAME_AETHERIA_WHARF_Fisherman_2
# 104 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WHARF_Fisherman_Text_1, MSGBOX_AUTOCLOSE
ISLANDGAME_AETHERIA_WHARF_Fisherman_1:
# 108 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_WHARF_Fisherman_2:
# 96 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WHARF_Fisherman_Text_0, MSGBOX_AUTOCLOSE
# 100 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 101 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	setflag FLAG_ITEM_AETHERIA_KINGS_ROCK
	goto ISLANDGAME_AETHERIA_WHARF_Fisherman_1


ISLANDGAME_AETHERIA_WHARF_Vigoroth::
# 112 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	lock
# 113 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	faceplayer
# 114 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 115 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WHARF_Vigoroth_Text_0, MSGBOX_AUTOCLOSE
# 119 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_WHARF_Worker2::
# 123 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	lock
# 124 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	faceplayer
# 125 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WHARF_Worker2_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_WHARF_Sailor::
# 132 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	lock
# 133 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	faceplayer
# 134 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WHARF_Sailor_Text_0, MSGBOX_AUTOCLOSE
# 137 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_WHARF_SilverwingMember::
# 141 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	lock
# 142 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	faceplayer
# 143 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WHARF_SilverwingMember_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_WHARF_Starmie::
# 150 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	lock
# 151 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	faceplayer
# 152 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	playmoncry SPECIES_STARMIE, CRY_MODE_NORMAL
# 153 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	waitmoncry
# 154 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	release
	return


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

ISLANDGAME_AETHERIA_WHARF_Worker_Text_0:
# 55 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	.string "We've been takin' a lotta heat after the\n"
	.string "sinking of our largest cargo ship, the\l"
	.string "S.S. Marin.\p"
	.string "But the story just don't sit right with\n"
	.string "me...\p"
	.string "According to them, the ship began\n"
	.string "sinking after it struck a coral reef.\p"
	.string "We've been testin' the durability of\n"
	.string "that hull for years! There ain't a reef\l"
	.string "in Marya that could'a sunk it!$"

ISLANDGAME_AETHERIA_WHARF_Woman_Text_0:
# 67 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	.string "The ferry services were temporarily\n"
	.string "closed for a few weeks due to the\l"
	.string "disaster that happened with the S.S.\l"
	.string "Marin.\p"
	.string "They've resumed operations, but I'm a\n"
	.string "little more hesitant to board now...$"

ISLANDGAME_AETHERIA_WHARF_Scientist_Text_0:
# 76 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	.string "Hrmm.. It just doesn't add up.\p"
	.string "The crew has been sailing through this\n"
	.string "path for years. Surely they would've\l"
	.string "accounted for the reef?\p"
	.string "Even if they did collide with the reef,\n"
	.string "the ship is equipped with more than\l"
	.string "enough lifeboats for the crew.\p"
	.string "So how did they all go missing...? This is\n"
	.string "all quite troublesome...$"

ISLANDGAME_AETHERIA_WHARF_OldMan_Text_0:
# 86 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	.string "Despite the criticism we've been facing,\n"
	.string "development of our new submarine must\l"
	.string "continue.\p"
	.string "Just a few more weeks... and we'll finally\n"
	.string "be able to explore the hidden depths of\l"
	.string "the Maryan Sea!$"

ISLANDGAME_AETHERIA_WHARF_Fisherman_Text_0:
# 97 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	.string "While hunting for an {COLOR LIGHT_BLUE}Oshawott{COLOR DARK_GRAY}, I ended\n"
	.string "up reeling in this item instead.\p"
	.string "I'm not sure what it does, but I'm sure\n"
	.string "you'll find some use for it.$"

ISLANDGAME_AETHERIA_WHARF_Fisherman_Text_1:
# 105 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	.string "It's one weird lookin' rock, that's for\n"
	.string "sure. Maybe it can be used to evolve a\l"
	.string "Pokémon, like an evolutionary stone?$"

ISLANDGAME_AETHERIA_WHARF_Vigoroth_Text_0:
# 116 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	.string "{COLOR BLUE}(Me want ride submarine when finish.)\p"
	.string "(Me wonder if underwater have bananas.)$"

ISLANDGAME_AETHERIA_WHARF_Worker2_Text_0:
# 126 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	.string "-huff puff-\p"
	.string "I shoulda stayed in trainer school... I'm\n"
	.string "not cut out for this type of stuff like\l"
	.string "you, Vigoroth...$"

ISLANDGAME_AETHERIA_WHARF_Sailor_Text_0:
# 135 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	.string "$"

ISLANDGAME_AETHERIA_WHARF_SilverwingMember_Text_0:
# 144 "data/maps/ISLANDGAME_AETHERIA_WHARF/scripts.pory"
	.string "The seas have been rather treacherous\n"
	.string "lately.\p"
	.string "Perhaps these tumultuous waves are a\n"
	.string "message from our Lord?$"
