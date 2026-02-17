ISLANDGAME_CAMP_PERSI_LODGE_2_MapScripts::
	.byte 0


ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC1::
# 4 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC1_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2::
# 8 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	lock
# 9 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	faceplayer
# 10 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	goto_if_set FLAG_DAILY_PERSI_GIRL_SCOUT, ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_2
# 17 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_Text_1
# 20 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	random 7
# 21 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	switch VAR_RESULT
# 22 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	case 1, ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_6
# 23 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	case 2, ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_7
# 24 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	case 3, ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_8
# 25 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	case 4, ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_9
# 26 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	case 5, ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_10
# 27 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	case 6, ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_11
# 28 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	giveitem ITEM_MOON_BALL
ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_4:
# 30 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	setflag FLAG_DAILY_PERSI_GIRL_SCOUT
# 31 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_2:
# 11 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_Text_0
# 14 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	closemessage
	return

ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_6:
# 22 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	giveitem ITEM_HEAVY_BALL
	goto ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_4

ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_7:
# 23 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	giveitem ITEM_LURE_BALL
	goto ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_4

ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_8:
# 24 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	giveitem ITEM_FRIEND_BALL
	goto ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_4

ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_9:
# 25 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	giveitem ITEM_LOVE_BALL
	goto ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_4

ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_10:
# 26 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	giveitem ITEM_LEVEL_BALL
	goto ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_4

ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_11:
# 27 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	giveitem ITEM_FAST_BALL
	goto ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_4


ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC3::
# 36 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	lock
# 37 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	faceplayer
# 38 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_NPC3Talk
# 39 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_Doll::
# 50 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	lock
# 51 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	faceplayer
# 52 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_DollInteract
# 53 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC1_Text_0:
# 4 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	.string "I hope Scoutmaster Lumpus is doing\n"
	.string "alright. Those boys can be so rowdy.$"

ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_Text_0:
# 12 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	.string "If you want another one, come back\n"
	.string "tomorrow! :D$"

ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_Text_1:
# 18 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	.string "I made an extra one of these during\n"
	.string "arts and crafts! You can have it!$"

ISLANDGAME_CAMP_PERSI_LODGE_2_NPC3Talk::
# 42 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	.string "The boys are so lucky to have a game\n"
	.string "console. I wanted to get one for our\l"
	.string "cabin too, but I got outvoted by\l"
	.string "everyone else.\p"
	.string "So now we just have a stupid kitchen in\n"
	.string "here.$"

ISLANDGAME_CAMP_PERSI_LODGE_2_DollInteract::
# 56 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	.string "{COLOR RED}(It's a doll of a Chikorita. It looks\n"
	.string "neglected.)$"
