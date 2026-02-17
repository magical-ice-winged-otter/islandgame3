ISLANDGAME_CAMP_PERSI_LODGE_2_MapScripts::
	.byte 0


ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_Counselor::
# 6 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_Counselor_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl::
# 10 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	goto_if_set FLAG_DAILY_PERSI_GIRL_SCOUT, ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_1
# 14 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_Text_1, MSGBOX_NPC
# 16 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	random 7
# 0 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	case 1, ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_6
# 18 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	case 2, ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_7
# 19 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	case 3, ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_8
# 20 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	case 4, ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_9
# 21 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	case 5, ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_10
# 22 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	case 6, ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_11
# 23 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	giveitem ITEM_MOON_BALL
ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_4:
# 26 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	setflag FLAG_DAILY_PERSI_GIRL_SCOUT
# 27 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	closemessage
	return

ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_1:
# 11 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_Text_0, MSGBOX_NPC
	return

ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_6:
# 17 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	giveitem ITEM_HEAVY_BALL
	goto ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_4

ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_7:
# 18 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	giveitem ITEM_LURE_BALL
	goto ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_4

ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_8:
# 19 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	giveitem ITEM_FRIEND_BALL
	goto ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_4

ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_9:
# 20 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	giveitem ITEM_LOVE_BALL
	goto ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_4

ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_10:
# 21 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	giveitem ITEM_LEVEL_BALL
	goto ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_4

ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_11:
# 22 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	giveitem ITEM_FAST_BALL
	goto ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_4


ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_GamerGirl::
# 32 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_GamerGirl_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_ChikoritaDoll::
# 39 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_ChikoritaDoll_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_Counselor_Text_0:
# 6 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	.string "I hope Scoutmaster Lumpus is doing\n"
	.string "alright. Those boys can be so rowdy.$"

ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_Text_0:
# 11 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	.string "If you want another one, come back\n"
	.string "tomorrow! :D$"

ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_PokeballGirl_Text_1:
# 14 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	.string "I made an extra one of these during\n"
	.string "arts and crafts! You can have it!$"

ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_GamerGirl_Text_0:
# 33 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	.string "The boys are so lucky to have a game\n"
	.string "console. I wanted to get one for our\l"
	.string "cabin too, but I got outvoted by\l"
	.string "everyone else.\p"
	.string "So now we just have a stupid kitchen in\n"
	.string "here.$"

ISLANDGAME_CAMP_PERSI_LODGE_2_Interact_ChikoritaDoll_Text_0:
# 39 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	.string "{COLOR RED}(It's a doll of a Chikorita. It looks\n"
	.string "neglected.)$"
