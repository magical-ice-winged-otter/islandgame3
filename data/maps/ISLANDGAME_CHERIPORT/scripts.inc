ISLANDGAME_CHERIPORT_MapScripts::
# 2 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setflag FLAG_LEFT_SS_RAIN
	return


ISLANDGAME_CHERIPORT_GiveTownMap::
# 10 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_GiveTownMap_Text_0, MSGBOX_NPC
# 15 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 16 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	closemessage
# 17 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setflag FLAG_RECEIVED_TOWN_MAP
	return


ISLANDGAME_CHERIPORT_Interact_SilverwingGreeter::
# 25 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOWN_MAP, ISLANDGAME_CHERIPORT_Interact_SilverwingGreeter_1
# 29 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	call ISLANDGAME_CHERIPORT_GiveTownMap
	return

ISLANDGAME_CHERIPORT_Interact_SilverwingGreeter_1:
# 26 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_SilverwingGreeter_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CHERIPORT_Interact_BeachGameBoyKid::
# 34 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_BeachGameBoyKid_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CHERIPORT_Interact_BeachWoman::
# 38 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_BeachWoman_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CHERIPORT_Interact_BeachTuberBoy::
# 42 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_BeachTuberBoy_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CHERIPORT_Interact_BeachTuberGirl::
# 46 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_BeachTuberGirl_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CHERIPORT_Interact_MrBriney::
# 50 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_MrBriney_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CHERIPORT_Interact_Peeko::
# 54 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 55 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement LOCALID_PEEKO, ISLANDGAME_CHERIPORT_Interact_Peeko_Movement_0
# 56 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmoncry
	return


ISLANDGAME_CHERIPORT_Interact_TownBoy::
# 60 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_TownBoy_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CHERIPORT_Interact_LeavingTownGirl::
# 68 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_LeavingTownGirl_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CHERIPORT_Interact_Fisherman::
# 75 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_Fisherman_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CHERIPORT_Interact_BeachSwimmer::
# 82 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_BeachSwimmer_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CHERIPORT_Interact_Sign_Welcome::
# 86 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_Sign_Welcome_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CHERIPORT_Interact_Sign_House::
# 93 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_Sign_House_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CHERIPORT_Interact_Sign_Beach::
# 100 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_Sign_Beach_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CHERIPORT_Interact_Sign_Laboratory::
# 107 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_Sign_Laboratory_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CHERIPORT_Trigger_EnteringTown::
# 113 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOWN_MAP, ISLANDGAME_CHERIPORT_Trigger_EnteringTown_1
	return

ISLANDGAME_CHERIPORT_Trigger_EnteringTown_1:
# 114 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	playse SE_PIN
# 115 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement LOCALID_SILVERWING_GREETER, ISLANDGAME_CHERIPORT_Trigger_EnteringTown_Movement_0
# 116 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmovement
# 117 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CHERIPORT_Trigger_EnteringTown_Movement_1
# 118 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	call ISLANDGAME_CHERIPORT_GiveTownMap
	return


ISLANDGAME_CHERIPORT_Trigger_LeavingInland::
# 123 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_unset FLAG_PROF_GAVE_EEVEE, ISLANDGAME_CHERIPORT_Trigger_LeavingInland_1
	return

ISLANDGAME_CHERIPORT_Trigger_LeavingInland_1:
# 124 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Trigger_LeavingInland_Text_0, MSGBOX_AUTOCLOSE
# 125 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CHERIPORT_Trigger_LeavingInland_Movement_0
# 126 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmovement
	return


ISLANDGAME_CHERIPORT_Trigger_LeavingOcean::
# 131 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Trigger_LeavingOcean_Text_0, MSGBOX_AUTOCLOSE
# 132 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CHERIPORT_Trigger_LeavingOcean_Movement_0
# 133 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmovement
	return


# 55 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
ISLANDGAME_CHERIPORT_Interact_Peeko_Movement_0:
# 55 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	emote_heart
	step_end

# 115 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
ISLANDGAME_CHERIPORT_Trigger_EnteringTown_Movement_0:
# 115 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	emote_exclamation_mark
# 115 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	delay_16
# 115 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	delay_16
	step_end

# 117 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
ISLANDGAME_CHERIPORT_Trigger_EnteringTown_Movement_1:
# 117 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	face_up
	step_end

# 125 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
ISLANDGAME_CHERIPORT_Trigger_LeavingInland_Movement_0:
# 125 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	walk_left
	step_end

# 132 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
ISLANDGAME_CHERIPORT_Trigger_LeavingOcean_Movement_0:
# 132 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	walk_right
	step_end

ISLANDGAME_CHERIPORT_GiveTownMap_Text_0:
# 11 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Welcome to the Maryan Isles, traveler.\p"
	.string "Please take this map. It will aid you in\n"
	.string "traversing the region.$"

ISLANDGAME_CHERIPORT_Interact_SilverwingGreeter_Text_0:
# 26 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "We, The Silverwing Order, pray you have\n"
	.string "a pleasant stay.$"

ISLANDGAME_CHERIPORT_Interact_BeachGameBoyKid_Text_0:
# 34 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Ugh... I can't see anything on my Game\n"
	.string "Boy because of the sun!$"

ISLANDGAME_CHERIPORT_Interact_BeachWoman_Text_0:
# 38 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "-sigh-{PAUSE 30} If only you were still here with\n"
	.string "us...$"

ISLANDGAME_CHERIPORT_Interact_BeachTuberBoy_Text_0:
# 42 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Nuh-uh! Nuh-uh!$"

ISLANDGAME_CHERIPORT_Interact_BeachTuberGirl_Text_0:
# 46 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Hey! I tagged you!$"

ISLANDGAME_CHERIPORT_Interact_MrBriney_Text_0:
# 50 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "This beach reminds you a lot of\n"
	.string "Slateport, doesn't it, Peeko?$"

ISLANDGAME_CHERIPORT_Interact_TownBoy_Text_0:
# 61 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Thanks to the advent of Rotom\n"
	.string "technology, our phones have\l"
	.string "effectively become pocket-sized\l"
	.string "supercomputers with processing power\l"
	.string "rivaling that of even Metagross!\p"
	.string "To have gone from the PokéNav to the\n"
	.string "Rotom Phone in such a short period of\l"
	.string "time...\p"
	.string "Heh... the power of science is quite\n"
	.string "staggering, isn't it?$"

ISLANDGAME_CHERIPORT_Interact_LeavingTownGirl_Text_0:
# 69 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Oranna is the smallest of the three\n"
	.string "principal islands in Marya.\p"
	.string "Nothing much really happens here, which\n"
	.string "makes it the perfect place to chill.$"

ISLANDGAME_CHERIPORT_Interact_Fisherman_Text_0:
# 76 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Come on...{PAUSE 30} Come on...{PAUSE 30} Argh! Not another\n"
	.string "Magikarp!\p"
	.string "All I want is a {COLOR LIGHT_BLUE}Squirtle{COLOR DARK_GRAY}. Is that too\n"
	.string "much to ask for!?$"

ISLANDGAME_CHERIPORT_Interact_BeachSwimmer_Text_0:
# 82 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Left! Right! Left! Right! Huh? I'm in the\n"
	.string "middle of my training! Shoo!$"

ISLANDGAME_CHERIPORT_Interact_Sign_Welcome_Text_0:
# 87 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "WELCOME TO CHERIPORT\n"
	.string "Take a rest on our soft and sandy\l"
	.string "beach!$"

ISLANDGAME_CHERIPORT_Interact_Sign_House_Text_0:
# 94 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "SEASIDE SERVICES\n"
	.string "Drinks on us!$"

ISLANDGAME_CHERIPORT_Interact_Sign_Beach_Text_0:
# 101 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "! WARNING !\n"
	.string "NO LIFEGUARD! SWIM AT YOUR OWN RISK!$"

ISLANDGAME_CHERIPORT_Interact_Sign_Laboratory_Text_0:
# 107 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "PROFESSOR PALM'S LABORATORY$"

ISLANDGAME_CHERIPORT_Trigger_LeavingInland_Text_0:
# 124 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR RED}(I should go see Professor Palm before\n"
	.string "I leave.)$"

ISLANDGAME_CHERIPORT_Trigger_LeavingOcean_Text_0:
# 131 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR RED}(There's nothing past here but the vast\n"
	.string "ocean.)$"
