ISLANDGAME_CHERIPORT_MapScripts::
# 2 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setflag FLAG_LEFT_SS_RAIN
	return


ISLANDGAME_CHERIPORT_Interact_SilverwingGreeter::
# 10 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOWN_MAP, ISLANDGAME_CHERIPORT_Interact_SilverwingGreeter_1
# 14 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	call ISLANDGAME_CHERIPORT_GiveTownMap
	return

ISLANDGAME_CHERIPORT_Interact_SilverwingGreeter_1:
# 11 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_SilverwingGreeter_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CHERIPORT_Interact_BeachGameBoyKid::
# 19 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_BeachGameBoyKid_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CHERIPORT_Interact_BeachWoman::
# 23 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_BeachWoman_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CHERIPORT_Interact_BeachTuberBoy::
# 27 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_BeachTuberBoy_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CHERIPORT_Interact_BeachTuberGirl::
# 31 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_BeachTuberGirl_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CHERIPORT_Interact_MrBriney::
# 35 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_MrBriney_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CHERIPORT_Interact_Peeko::
# 39 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 40 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement LOCALID_PEEKO, ISLANDGAME_CHERIPORT_Interact_Peeko_Movement_0
# 41 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmoncry
	return


ISLANDGAME_CHERIPORT_Interact_TownBoy::
# 45 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_TownBoy_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CHERIPORT_Interact_LeavingTownGirl::
# 53 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_LeavingTownGirl_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CHERIPORT_Interact_Fisherman::
# 60 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_Fisherman_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CHERIPORT_Interact_BeachSwimmer::
# 67 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_BeachSwimmer_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CHERIPORT_Interact_Sign_Welcome::
# 71 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_Sign_Welcome_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CHERIPORT_Interact_Sign_House::
# 78 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_Sign_House_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CHERIPORT_Interact_Sign_Beach::
# 85 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_Sign_Beach_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CHERIPORT_Interact_Sign_Laboratory::
# 92 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_Sign_Laboratory_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CHERIPORT_Trigger_EnteringTown::
# 98 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOWN_MAP, ISLANDGAME_CHERIPORT_Trigger_EnteringTown_1
	return

ISLANDGAME_CHERIPORT_Trigger_EnteringTown_1:
# 99 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	playse SE_PIN
# 100 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement LOCALID_SILVERWING_GREETER, ISLANDGAME_CHERIPORT_Trigger_EnteringTown_Movement_0
# 101 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmovement
# 102 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CHERIPORT_Trigger_EnteringTown_Movement_1
# 103 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	call ISLANDGAME_CHERIPORT_GiveTownMap
	return


ISLANDGAME_CHERIPORT_Trigger_LeavingInland::
# 108 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_unset FLAG_PROF_GAVE_EEVEE, ISLANDGAME_CHERIPORT_Trigger_LeavingInland_1
	return

ISLANDGAME_CHERIPORT_Trigger_LeavingInland_1:
# 109 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Trigger_LeavingInland_Text_0, MSGBOX_AUTOCLOSE
# 110 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CHERIPORT_Trigger_LeavingInland_Movement_0
# 111 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmovement
	return


ISLANDGAME_CHERIPORT_Trigger_LeavingOcean::
# 116 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Trigger_LeavingOcean_Text_0, MSGBOX_AUTOCLOSE
# 117 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CHERIPORT_Trigger_LeavingOcean_Movement_0
# 118 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmovement
	return


ISLANDGAME_CHERIPORT_GiveTownMap::
# 124 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_GiveTownMap_Text_0, MSGBOX_NPC
# 129 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 130 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	closemessage
# 131 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setflag FLAG_RECEIVED_TOWN_MAP
	return


# 40 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
ISLANDGAME_CHERIPORT_Interact_Peeko_Movement_0:
# 40 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	emote_heart
	step_end

# 100 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
ISLANDGAME_CHERIPORT_Trigger_EnteringTown_Movement_0:
# 100 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	emote_exclamation_mark
# 100 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	delay_16
# 100 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	delay_16
	step_end

# 102 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
ISLANDGAME_CHERIPORT_Trigger_EnteringTown_Movement_1:
# 102 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	face_up
	step_end

# 110 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
ISLANDGAME_CHERIPORT_Trigger_LeavingInland_Movement_0:
# 110 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	walk_left
	step_end

# 117 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
ISLANDGAME_CHERIPORT_Trigger_LeavingOcean_Movement_0:
# 117 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	walk_right
	step_end

ISLANDGAME_CHERIPORT_Interact_SilverwingGreeter_Text_0:
# 11 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "We, The Silverwing Order, pray you have\n"
	.string "a pleasant stay.$"

ISLANDGAME_CHERIPORT_Interact_BeachGameBoyKid_Text_0:
# 19 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Ugh... I can't see anything on my Game\n"
	.string "Boy because of the sun!$"

ISLANDGAME_CHERIPORT_Interact_BeachWoman_Text_0:
# 23 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "-sigh-{PAUSE 30} If only you were still here with\n"
	.string "us...$"

ISLANDGAME_CHERIPORT_Interact_BeachTuberBoy_Text_0:
# 27 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Nuh-uh! Nuh-uh!$"

ISLANDGAME_CHERIPORT_Interact_BeachTuberGirl_Text_0:
# 31 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Hey! I tagged you!$"

ISLANDGAME_CHERIPORT_Interact_MrBriney_Text_0:
# 35 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "This beach reminds you a lot of\n"
	.string "Slateport, doesn't it, Peeko?$"

ISLANDGAME_CHERIPORT_Interact_TownBoy_Text_0:
# 46 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
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
# 54 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Oranna is the smallest of the three\n"
	.string "principal islands in Marya.\p"
	.string "Nothing much really happens here, which\n"
	.string "makes it the perfect place to chill.$"

ISLANDGAME_CHERIPORT_Interact_Fisherman_Text_0:
# 61 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Come on...{PAUSE 30} Come on...{PAUSE 30} Argh! Not another\n"
	.string "Magikarp!\p"
	.string "All I want is a {COLOR LIGHT_BLUE}Squirtle{COLOR DARK_GRAY}. Is that too\n"
	.string "much to ask for!?$"

ISLANDGAME_CHERIPORT_Interact_BeachSwimmer_Text_0:
# 67 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Left! Right! Left! Right! Huh? I'm in the\n"
	.string "middle of my training! Shoo!$"

ISLANDGAME_CHERIPORT_Interact_Sign_Welcome_Text_0:
# 72 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "WELCOME TO CHERIPORT\n"
	.string "Take a rest on our soft and sandy\l"
	.string "beach!$"

ISLANDGAME_CHERIPORT_Interact_Sign_House_Text_0:
# 79 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "SEASIDE SERVICES\n"
	.string "Drinks on us!$"

ISLANDGAME_CHERIPORT_Interact_Sign_Beach_Text_0:
# 86 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "! WARNING !\n"
	.string "NO LIFEGUARD! SWIM AT YOUR OWN RISK!$"

ISLANDGAME_CHERIPORT_Interact_Sign_Laboratory_Text_0:
# 92 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "PROFESSOR PALM'S LABORATORY$"

ISLANDGAME_CHERIPORT_Trigger_LeavingInland_Text_0:
# 109 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR RED}(I should go see Professor Palm before\n"
	.string "I leave.)$"

ISLANDGAME_CHERIPORT_Trigger_LeavingOcean_Text_0:
# 116 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR RED}(There's nothing past here but the vast\n"
	.string "ocean.)$"

ISLANDGAME_CHERIPORT_GiveTownMap_Text_0:
# 125 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Welcome to the Maryan Isles, traveler.\p"
	.string "Please take this map. It will aid you in\n"
	.string "traversing the region.$"
