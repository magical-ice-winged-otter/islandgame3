ISLANDGAME_ORANNA_SSRAIN_Room2_MapScripts::
# 2 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ORANNA_SSRAIN_Room2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_ORANNA_SSRAIN_Room2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	goto_if_unset FLAG_ORANNA_SSRAIN_LEFT_SHIP, ISLANDGAME_ORANNA_SSRAIN_Room2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_ORANNA_SSRAIN_Room2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	setflag FLAG_TEMP_1
	return


ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman::
# 10 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	lock
# 11 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	goto_if_unset FLAG_ORANNA_SSRAIN_LEFT_SHIP, ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_4
ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_3:
# 30 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	faceplayer
# 31 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_Text_2
ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_1:
# 36 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	closemessage
# 37 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	release
	return

ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_2:
# 12 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	checkitem ITEM_FRESH_WATER
# 13 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_7
# 24 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_Text_1
	goto ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_1

ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_4:
# 11 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	goto_if_unset FLAG_ORANNA_SSRAIN_GAVE_WATER, ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_2
	goto ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_3

ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_7:
# 14 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	faceplayer
# 15 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_Text_0
# 19 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 20 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	setflag FLAG_ORANNA_SSRAIN_GAVE_WATER
# 21 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	removeitem ITEM_FRESH_WATER
	goto ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_1


ISLANDGAME_ORANNA_SSRAIN_Room2_Boy::
# 41 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	lock
# 42 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	faceplayer
# 43 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Room2_Boy_Text_0
# 47 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	closemessage
# 48 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_Text_0:
# 16 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	.string "...Oh? My nephew sent you here to bring\n"
	.string "me water?\p"
	.string "That's proper kind of you to help. Here,\n"
	.string "take one of these for your troubles.$"

ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_Text_1:
# 25 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	.string "Oooh, I do hope Bartholmew comes\n"
	.string "downstairs soon... I'm quite parched.$"

ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_Text_2:
# 32 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	.string "Traveling to the Maryan Isles by boat\n"
	.string "was quite the ten-day trek...\p"
	.string "After seeing nothing but the vast sea\n"
	.string "for so long, I'm ecstatic to finally see\l"
	.string "some land!$"

ISLANDGAME_ORANNA_SSRAIN_Room2_Boy_Text_0:
# 44 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Room2/scripts.pory"
	.string "The water here is pristine. Much clearer\n"
	.string "than back home.\p"
	.string "It's as if Suicune had come by and\n"
	.string "purified the entire sea.$"
