ISLANDGAME_ORANNA_SSRAIN_UpperDeck_MapScripts::
# 10 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ORANNA_SSRAIN_UpperDeck_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_ORANNA_SSRAIN_UpperDeck_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	gettime
# 13 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_ORANNA_SSRAIN_UpperDeck_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 13 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_ORANNA_SSRAIN_UpperDeck_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 17 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_ORANNA_SSRAIN_UpperDeck_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	setflag FLAG_TEMP_3
	return


ISLANDGAME_ORANNA_SSRAIN_UpperDeck_WaterBoy::
# 25 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	lock
# 26 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	faceplayer
# 27 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	checkitem ITEM_FRESH_WATER
# 28 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	goto_if_set FLAG_ORANNA_SSRAIN_GAVE_WATER, ISLANDGAME_ORANNA_SSRAIN_UpperDeck_WaterBoy_2
# 34 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_ORANNA_SSRAIN_UpperDeck_WaterBoy_6
ISLANDGAME_ORANNA_SSRAIN_UpperDeck_WaterBoy_5:
# 40 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_UpperDeck_WaterBoy_Text_2
ISLANDGAME_ORANNA_SSRAIN_UpperDeck_WaterBoy_1:
# 44 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	applymovement 3, Common_Movement_FaceOriginalDirection
# 45 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	closemessage
# 46 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	release
	return

ISLANDGAME_ORANNA_SSRAIN_UpperDeck_WaterBoy_2:
# 29 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_UpperDeck_WaterBoy_Text_0
	goto ISLANDGAME_ORANNA_SSRAIN_UpperDeck_WaterBoy_1

ISLANDGAME_ORANNA_SSRAIN_UpperDeck_WaterBoy_6:
# 35 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_UpperDeck_WaterBoy_Text_1
# 38 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	giveitem ITEM_FRESH_WATER
	goto ISLANDGAME_ORANNA_SSRAIN_UpperDeck_WaterBoy_5


ISLANDGAME_ORANNA_SSRAIN_UpperDeck_NPC1::
# 55 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	lock
# 56 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	faceplayer
# 57 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_UpperDeck_NPC1_Text_0
# 60 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	closemessage
# 61 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_SSRAIN_UpperDeck_NPC2::
# 66 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	lock
# 67 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	faceplayer
# 68 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_UpperDeck_NPC2_Text_0
# 71 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	closemessage
# 72 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_SSRAIN_UpperDeck_NPC3::
# 77 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	lock
# 78 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	faceplayer
# 79 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_UpperDeck_NPC3_Text_0
# 82 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 83 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	closemessage
# 84 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_SSRAIN_UpperDeck_NPC4::
# 89 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	lock
# 90 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	faceplayer
# 91 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_UpperDeck_NPC4_Text_0
# 94 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	closemessage
# 95 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_SSRAIN_UpperDeck_WaterBoy_Text_0:
# 30 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	.string "Sorry for troubling you. I wanted to\n"
	.string "admire this view for a bit longer.$"

ISLANDGAME_ORANNA_SSRAIN_UpperDeck_WaterBoy_Text_1:
# 36 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	.string "Excuse me, could you give this to my\n"
	.string "uncle?$"

ISLANDGAME_ORANNA_SSRAIN_UpperDeck_WaterBoy_Text_2:
# 41 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	.string "He's in our room downstairs. Just tell\n"
	.string "him I sent you.$"

ISLANDGAME_ORANNA_SSRAIN_UpperDeck_NPC1_Text_0:
# 58 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	.string "Have you tried the food downstairs?\n"
	.string "It's amazing!$"

ISLANDGAME_ORANNA_SSRAIN_UpperDeck_NPC2_Text_0:
# 69 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	.string "Aaaah. This vacation was exactly what I\n"
	.string "needed. Maybe I'll lay here all day.$"

ISLANDGAME_ORANNA_SSRAIN_UpperDeck_NPC3_Text_0:
# 80 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	.string "I'M FLYING!!!!!$"

ISLANDGAME_ORANNA_SSRAIN_UpperDeck_NPC4_Text_0:
# 92 "data/maps/ISLANDGAME_ORANNA_SSRAIN_UpperDeck/scripts.pory"
	.string "This is quite the impressive vessel, I\n"
	.string "must say. It's just like our S.S. Tidal.$"
