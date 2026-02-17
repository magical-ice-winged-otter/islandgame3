ISLANDGAME_CAMP_PERSI_PKMNCENTER_MapScripts::
# 2 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_CAMP_PERSI_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_RESUME
# 6 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CAMP_PERSI_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CAMP_PERSI_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	goto CableClub_OnResume
	return

ISLANDGAME_CAMP_PERSI_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	setrespawn HEAL_LOCATION_ISLANDGAME_CAMP_PERSI
	return


ISLANDGAME_PERSI_PKMNCENTER_Interact_GamerKid::
# 12 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_PERSI_PKMNCENTER_Interact_GamerKid_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_PERSI_PKMNCENTER_Interact_GamerWatcher::
# 16 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_PERSI_PKMNCENTER_Interact_GamerWatcher_Text_0, MSGBOX_NPC
# 17 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	applymovement VAR_LAST_TALKED, ISLANDGAME_PERSI_PKMNCENTER_Interact_GamerWatcher_Movement_0
	return


ISLANDGAME_PERSI_PKMNCENTER_Interact_OldPerson::
# 21 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_PERSI_PKMNCENTER_Interact_OldPerson_Text_0, MSGBOX_NPC
	return


# 17 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
ISLANDGAME_PERSI_PKMNCENTER_Interact_GamerWatcher_Movement_0:
# 17 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	face_original_direction
	step_end

ISLANDGAME_PERSI_PKMNCENTER_Interact_GamerKid_Text_0:
# 12 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	.string "Man, the connection here sucks!$"

ISLANDGAME_PERSI_PKMNCENTER_Interact_GamerWatcher_Text_0:
# 16 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	.string "My parents didn't let me bring my Game\n"
	.string "Boy, so I watch other people play.$"

ISLANDGAME_PERSI_PKMNCENTER_Interact_OldPerson_Text_0:
# 21 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	.string "This is the only place with internet\n"
	.string "access in the whole camp.\p"
	.string "The kids can get loud in here at times...$"
