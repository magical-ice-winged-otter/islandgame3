ISLANDGAME_MAPLEGROVE_MapScripts::
# 2 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MAPLEGROVE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MAPLEGROVE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettimeofday
# 0 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq ISLANDGAME_MAPLEGROVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_MAPLEGROVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	setobjecthidden LOCALID_MAZE_BUNEARY
# 5 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	setobjecthidden LOCALID_MAZE_GIRL
	return


ISLANDGAME_MAPLEGROVE_Interact_MazeBuneary::
# 13 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	lock
# 14 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	faceplayer
# 15 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_NORMAL
# 16 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_Interact_MazeBuneary_Text_0
# 19 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_Interact_MazeMudkip::
# 23 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	lock
# 24 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	faceplayer
# 25 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	playmoncry SPECIES_MUDKIP, CRY_MODE_NORMAL
# 26 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	waitmoncry
# 27 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_Interact_MazeGirl::
# 31 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_Interact_MazeGirl_Text_0, MSGBOX_NPC
	return


ISLANDGAME_MAPLEGROVE_Interact_LawnCottonee::
# 38 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	playmoncry SPECIES_COTTONEE, CRY_MODE_WEAK
# 40 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_Interact_LawnCottonee_Text_0, MSGBOX_NPC
	return


ISLANDGAME_MAPLEGROVE_Interact_LawnFletchling::
# 50 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	playmoncry SPECIES_FLETCHLING, CRY_MODE_NORMAL
# 52 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_Interact_LawnFletchling_Text_0, MSGBOX_NPC
	return


ISLANDGAME_MAPLEGROVE_Interact_LawnMan::
# 62 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	compare VAR_MINTY_MEADOWS_STATE, MINTY_MEADOWS_SAVED_MAREEP
	goto_if_ne ISLANDGAME_MAPLEGROVE_Interact_LawnMan_1
# 70 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_Interact_LawnMan_Text_1, MSGBOX_NPC
	return

ISLANDGAME_MAPLEGROVE_Interact_LawnMan_1:
# 63 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_Interact_LawnMan_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MAPLEGROVE_Interact_PondSurskit::
# 75 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	playmoncry SPECIES_SURSKIT, CRY_MODE_NORMAL
# 76 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_Interact_PondSurskit_Text_0, MSGBOX_NPC
	return


ISLANDGAME_MAPLEGROVE_Interact_PondLady::
# 80 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_Interact_PondLady_Text_0, MSGBOX_NPC
	return


ISLANDGAME_MAPLEGROVE_Interact_Sign::
# 87 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_Interact_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MAPLEGROVE_Interact_MazeBuneary_Text_0:
# 17 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	.string "{COLOR BLUE}Konpekooooo!$"

ISLANDGAME_MAPLEGROVE_Interact_MazeGirl_Text_0:
# 32 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	.string "Be kind to Pokémon, and they'll be kind\n"
	.string "to you.\p"
	.string "That's what my big sister told me. Now\n"
	.string "I'm friends with all the Pokémon here!$"

ISLANDGAME_MAPLEGROVE_Interact_LawnCottonee_Text_0:
# 41 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	.string "Nee...\p"
	.string "{COLOR RED}(It seems like Cottonee is trying to\n"
	.string "tell me something.)\p"
	.string "(She says her name is CJ and that she\n"
	.string "hates the Fletchling over there.)\p"
	.string "(She says it's because she stole her\n"
	.string "boyfriend from her.)\p"
	.string "(...How does that even work?)$"

ISLANDGAME_MAPLEGROVE_Interact_LawnFletchling_Text_0:
# 53 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	.string "Chirp chirp...\p"
	.string "{COLOR RED}(It seems like Fletchling is trying to\n"
	.string "tell me something.)\p"
	.string "(She says her name is Margaret and that\n"
	.string "she hates the Cottonee over there.)\p"
	.string "(She says it's because she stole her\n"
	.string "boyfriend from her.)\p"
	.string "(...How does that even work?)$"

ISLANDGAME_MAPLEGROVE_Interact_LawnMan_Text_0:
# 64 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	.string "Hrm... Only two of you little ones here\n"
	.string "today?\p"
	.string "That pack of savage Mightyena must be\n"
	.string "frightening the little critters...\p"
	.string "I do hope something gets done about\n"
	.string "them. Those feral beasts have been\l"
	.string "terrorizing this place for long enough!$"

ISLANDGAME_MAPLEGROVE_Interact_LawnMan_Text_1:
# 70 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	.string "These two Pokémon don't get along at\n"
	.string "all. I don't know why.$"

ISLANDGAME_MAPLEGROVE_Interact_PondSurskit_Text_0:
# 76 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	.string "A$"

ISLANDGAME_MAPLEGROVE_Interact_PondLady_Text_0:
# 81 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	.string "Maplegrove has been one with nature\n"
	.string "since its construction many years ago.\p"
	.string "Our bond with the Pokémon here is\n"
	.string "unbreakable.$"

ISLANDGAME_MAPLEGROVE_Interact_Sign_Text_0:
# 88 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	.string "MAPLEGROVE\n"
	.string "The Sylvan Sanctuary$"
