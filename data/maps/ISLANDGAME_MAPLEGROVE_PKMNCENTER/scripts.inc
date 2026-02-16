ISLANDGAME_MAPLEGROVE_PKMNCENTER_MapScripts::
# 2 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MAPLEGROVE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_MAPLEGROVE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

ISLANDGAME_MAPLEGROVE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	setrespawn HEAL_LOCATION_ISLANDGAME_MAPLEGROVE
	return

ISLANDGAME_MAPLEGROVE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_RESUME:
# 6 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	goto CableClub_OnResume
	return


ISLANDGAME_MAPLEGROVE_PKMNCENTER_Interact_Chikorita::
# 11 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 12 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_PKMNCENTER_Interact_Chikorita_Text_0, MSGBOX_NPC
	return


ISLANDGAME_MAPLEGROVE_PKMNCENTER_Interact_Minccino::
# 16 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	lock
# 17 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	faceplayer
# 18 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	playmoncry SPECIES_MINCCINO, CRY_MODE_NORMAL
# 19 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	waitmoncry
# 20 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_PKMNCENTER_Interact_Kid::
# 24 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_PKMNCENTER_Interact_Kid_Text_0, MSGBOX_NPC
# 30 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	applymovement VAR_LAST_TALKED, ISLANDGAME_MAPLEGROVE_PKMNCENTER_Interact_Kid_Movement_0
	return


ISLANDGAME_MAPLEGROVE_PKMNCENTER_Interact_Pokeball::
# 34 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_PKMNCENTER_Interact_Pokeball_Text_0, MSGBOX_AUTOCLOSE
	return


# 30 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
ISLANDGAME_MAPLEGROVE_PKMNCENTER_Interact_Kid_Movement_0:
# 30 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	face_original_direction
	step_end

ISLANDGAME_MAPLEGROVE_PKMNCENTER_Interact_Chikorita_Text_0:
# 12 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	.string "Chika Chika! {COLOR BLUE}(Boom Boom!)$"

ISLANDGAME_MAPLEGROVE_PKMNCENTER_Interact_Kid_Text_0:
# 25 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	.string "Waaah! Those Mightyena are a bunch of\n"
	.string "mean bullies!\p"
	.string "They beat my precious Pokémon up!\p"
	.string "Our butts would've been toast if it\n"
	.string "wasn't for Mr. Pokémon Ranger!$"

ISLANDGAME_MAPLEGROVE_PKMNCENTER_Interact_Pokeball_Text_0:
# 34 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	.string "A Pokémon seems to be resting inside\n"
	.string "the Pokéball. It seems hurt.$"
