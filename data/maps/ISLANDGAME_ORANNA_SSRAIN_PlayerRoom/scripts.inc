ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_MapScripts::
# 2 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 12 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RUNNING_SHOES, ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	goto_if_unset FLAG_ORANNA_ROSEVALE_AMULET_COIN, ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	setvar VAR_TEMP_1, 7
	goto ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 9 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	setflag FLAG_TEMP_1
	return

ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 7, ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_GameIntro
	.2byte 0


ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_GameIntro::
# 18 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	lockall
# 19 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	playse SE_DING_DONG
# 20 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	waitse
# 21 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	setvar VAR_TEMP_1, 3
# 22 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_GameIntro_Text_0
# 29 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	closemessage
# 30 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	releaseall
	return


ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_PikaDoll::
# 35 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	lock
# 36 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_PikaDoll_Text_0
# 40 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	closemessage
# 41 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_AzuDoll::
# 45 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	lock
# 46 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_AzuDoll_Text_0
# 50 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	closemessage
# 51 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_NeedShoes::
# 55 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RUNNING_SHOES, ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_NeedShoes_2
ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_NeedShoes_1:
# 63 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	releaseall
	return

ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_NeedShoes_2:
# 56 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	lockall
# 57 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_NeedShoes_Text_0
# 60 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	closemessage
# 61 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	goto ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_NeedShoes_1


ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_RunningShoes::
# 67 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	lockall
# 68 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 69 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_RunningShoes_Text_0
# 73 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	removeobject VAR_LAST_TALKED
# 74 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 75 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	releaseall
	return


ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_GameIntro_Text_0:
# 23 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	.string "Ladies and gentlemen, this is your\n"
	.string "devilishly handsome captain speaking!\p"
	.string "I'm delighted to announce that we've\n"
	.string "finally reached our destination!\p"
	.string "On behalf of the entire crew, I'd like to\n"
	.string "thank you for choosing to sail with us.\p"
	.string "Now, go out there and explore all that\n"
	.string "the Maryan Isles has to offer!\p"
	.string "We'll be patiently waiting here for your\n"
	.string "return! Until next time, buh-bye!$"

ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_PikaDoll_Text_0:
# 37 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	.string "{COLOR RED}(It's the Pikachu Doll I got when I was\n"
	.string "only six years old.)\p"
	.string "(I can't believe it's already been ten\n"
	.string "years...)$"

ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_AzuDoll_Text_0:
# 47 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	.string "{COLOR RED}(It's the Azurill Doll I got from\n"
	.string "Arthur's Sister during the night I\l"
	.string "stayed over at their inn.)\p"
	.string "(It's not shiny like hers, though.)$"

ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_NeedShoes_Text_0:
# 58 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	.string "{COLOR RED}(I should probably get my shoes before\n"
	.string "I leave.)$"

ISLANDGAME_ORANNA_SSRAIN_PlayerRoom_RunningShoes_Text_0:
# 70 "data/maps/ISLANDGAME_ORANNA_SSRAIN_PlayerRoom/scripts.pory"
	.string "{COLOR GREEN}You changed into your Running Shoes!\n"
	.string "Press “B” to run!\p"
	.string "You can also press the “R” button to\n"
	.string "toggle auto-running!$"
