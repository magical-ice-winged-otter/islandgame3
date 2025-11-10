ISLANDGAME_ORANNA_CHERIPORT_LAB_2F_MapScripts::
	.byte 0


ISLANDGAME_ORANNA_CHERIPORT_LAB_2F_Bag::
# 6 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB_2F/scripts.pory"
	lock
# 7 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB_2F/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_2F_Bag_Text_0
# 10 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB_2F/scripts.pory"
	closemessage
# 11 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB_2F/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_LAB_2F_PC::
# 16 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB_2F/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_2F_PC_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ORANNA_CHERIPORT_LAB_2F_Bag_Text_0:
# 8 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB_2F/scripts.pory"
	.string "{COLOR RED}(I probably shouldn't be snooping\n"
	.string "around in this.)$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_2F_PC_Text_0:
# 17 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB_2F/scripts.pory"
	.string "{COLOR RED}(It's Professor Palm's computer. It's\n"
	.string "password-protected, obviously.)$"
