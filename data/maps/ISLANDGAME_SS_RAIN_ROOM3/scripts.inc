ISLANDGAME_SS_RAIN_ROOM3_MapScripts::
# 4 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_SS_RAIN_ROOM3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_SS_RAIN_ROOM3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	goto_if_unset FLAG_LEFT_SS_RAIN, ISLANDGAME_SS_RAIN_ROOM3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_SS_RAIN_ROOM3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	setflag FLAG_TEMP_1
	return


ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman::
# 12 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	lock
# 13 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	faceplayer
# 14 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	goto_if_unset FLAG_LEFT_SS_RAIN, ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_4
ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_3:
# 32 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_Text_2
ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_1:
# 37 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	closemessage
# 38 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	release
	return

ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_2:
# 15 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	checkitem ITEM_FRESH_WATER
# 16 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_7
# 26 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_Text_1
	goto ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_1

ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_4:
# 14 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	goto_if_unset FLAG_ROOM3_GAVE_WATER, ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_2
	goto ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_3

ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_7:
# 17 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_Text_0
# 21 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 22 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	setflag FLAG_ROOM3_GAVE_WATER
# 23 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	removeitem ITEM_FRESH_WATER
	goto ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_1


ISLANDGAME_ORANNA_SSRAIN_Room2_Boy::
# 42 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	lock
# 43 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	faceplayer
# 44 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Room2_Boy_Text_0
# 48 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	closemessage
# 49 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_Text_0:
# 18 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	.string "...Oh? My nephew sent you here to bring\n"
	.string "me water?\p"
	.string "That's proper kind of you to help. Here,\n"
	.string "take one of these for your troubles.$"

ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_Text_1:
# 27 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	.string "Oooh, I do hope Bartholmew comes\n"
	.string "downstairs soon... I'm quite parched.$"

ISLANDGAME_ORANNA_SSRAIN_Room2_Gentleman_Text_2:
# 33 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	.string "Traveling to the Maryan Isles by boat\n"
	.string "was quite the ten-day trek...\p"
	.string "After seeing nothing but the vast sea\n"
	.string "for so long, I'm ecstatic to finally see\l"
	.string "some land!$"

ISLANDGAME_ORANNA_SSRAIN_Room2_Boy_Text_0:
# 45 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	.string "The water here is pristine. Much clearer\n"
	.string "than back home.\p"
	.string "It's as if Suicune had come by and\n"
	.string "purified the entire sea.$"
