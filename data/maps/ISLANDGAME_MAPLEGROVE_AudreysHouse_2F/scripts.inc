ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_MapScripts::
	.byte 0


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_WailmerDoll::
# 6 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_WailmerDoll_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_WooperDoll::
# 10 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	lock
# 11 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_WooperDoll_Text_0, MSGBOX_YESNO
# 13 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_WooperDoll_2
ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_WooperDoll_1:
# 18 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	release
	return

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_WooperDoll_2:
# 14 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
# 15 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_WooperDoll_Text_1
	goto ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_WooperDoll_1


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_Drawer::
# 22 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_Drawer_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_Computer::
# 29 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_Computer_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_Book::
# 36 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_Book_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_Gamecube::
# 40 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_Gamecube_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Trigger_Bed::
# 46 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	lock
# 47 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Trigger_Bed_Text_0
# 48 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Trigger_Bed_Movement_0
# 49 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	waitmovement
# 50 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	release
	return


# 48 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Trigger_Bed_Movement_0:
# 48 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	walk_left
	step_end

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_WailmerDoll_Text_0:
# 6 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "{COLOR RED}(It's jumbo-sized Wailmer plush. It's\n"
	.string "very squishy.)\p"
	.string "(Squish squish)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_WooperDoll_Text_0:
# 11 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "{COLOR RED}(It's a Wooper doll. There's a button on\n"
	.string "it. Should I press it?)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_WooperDoll_Text_1:
# 15 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "Woopa!$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_Drawer_Text_0:
# 23 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "{COLOR RED}(It's a drawer full of Melissa's\n"
	.string "clothes.)\p"
	.string "(I should probably stop looking through\n"
	.string "it.)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_Computer_Text_0:
# 30 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "{COLOR RED}(It looks like Melissa left her computer\n"
	.string "on.)\p"
	.string "(Seems like she was watching “PokéLive\n"
	.string "Summer Splash Highlights”.)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_Book_Text_0:
# 36 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "{COLOR RED}(It's the latest issue of “Attack on\n"
	.string "Galar”.)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Interact_Gamecube_Text_0:
# 40 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "{COLOR RED}(It's Melissa's GameCube.)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_Trigger_Bed_Text_0:
# 47 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "{COLOR RED}(...This seems wrong.)$"
