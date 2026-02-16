ISLANDGAME_FRESA_FARMS_HOUSE_MapScripts::
# 2 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_FRESA_FARMS_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_FRESA_FARMS_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettimeofday
# 0 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq ISLANDGAME_FRESA_FARMS_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_FRESA_FARMS_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	setobjecthidden LOCALID_TV_KID
# 5 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	setobjecthidden LOCALID_TABLE_WOMAN
# 6 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	setobjecthidden LOCALID_TORCHIC_MAN
# 7 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	setobjecthidden LOCALID_KITCHEN_WOMAN
	return


ISLANDGAME_FRESA_FARMS_HOUSE_Interact_TvKid::
# 13 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	lock
# 14 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	faceplayer
# 15 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_HOUSE_Interact_TvKid_Text_0, MSGBOX_AUTOCLOSE
# 16 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	applymovement LOCALID_TV_KID, ISLANDGAME_FRESA_FARMS_HOUSE_Interact_TvKid_Movement_0
# 17 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	waitmovement
# 18 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_HOUSE_Interact_TableWoman::
# 22 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_HOUSE_Interact_TableWoman_Text_0, MSGBOX_NPC
	return


ISLANDGAME_FRESA_FARMS_HOUSE_Interact_TorchicMan::
# 26 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_HOUSE_Interact_TorchicMan_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_FRESA_FARMS_HOUSE_Interact_KitchenWoman::
# 30 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_HOUSE_Interact_KitchenWoman_Text_0, MSGBOX_NPC
	return


# 16 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
ISLANDGAME_FRESA_FARMS_HOUSE_Interact_TvKid_Movement_0:
# 16 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	face_original_direction
	step_end

ISLANDGAME_FRESA_FARMS_HOUSE_Interact_TvKid_Text_0:
# 15 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	.string "I wish we got the good channels. I'm\n"
	.string "tired of no shows after dark.$"

ISLANDGAME_FRESA_FARMS_HOUSE_Interact_TableWoman_Text_0:
# 22 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	.string "Be sure to check our booth out at the\n"
	.string "Silverwing Festival when the time\l"
	.string "comes!$"

ISLANDGAME_FRESA_FARMS_HOUSE_Interact_TorchicMan_Text_0:
# 26 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	.string "{COLOR RED}(Looks like he's admiring his Torchic\n"
	.string "plush.)$"

ISLANDGAME_FRESA_FARMS_HOUSE_Interact_KitchenWoman_Text_0:
# 30 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	.string "Hi sweetie! If you're hear for our\n"
	.string "famous milk, come back during the day.$"
