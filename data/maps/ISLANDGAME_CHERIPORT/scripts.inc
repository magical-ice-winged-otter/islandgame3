ISLANDGAME_CHERIPORT_MapScripts::
# 2 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setflag FLAG_LEFT_SS_RAIN
# 5 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	compare VAR_AETHERIA_STATE, 0
	goto_if_eq ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setflag FLAG_TEMP_1F
	return


ISLANDGAME_CHERIPORT_GiveTownMap::
# 14 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_GiveTownMap_Text_0, MSGBOX_NPC
# 19 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 20 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	closemessage
# 21 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setflag FLAG_RECEIVED_TOWN_MAP
	return


ISLANDGAME_CHERIPORT_BoatAttendant::
# 26 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 27 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	faceplayer
# 28 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_BoatAttendant_Text_0, MSGBOX_YESNO
# 31 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CHERIPORT_BoatAttendant_2
ISLANDGAME_CHERIPORT_BoatAttendant_1:
# 34 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_BoatAttendant_Text_1
# 37 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	dynmultipush ISLANDGAME_CHERIPORT_BoatAttendant_Text_2, 0
# 38 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	dynmultipush ISLANDGAME_CHERIPORT_BoatAttendant_Text_3, 1
# 40 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	dynmultistack 0, 0, TRUE, 2, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 41 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	switch VAR_RESULT
# 42 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	case 1, ISLANDGAME_CHERIPORT_BoatAttendant_6
# 60 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto ISLANDGAME_CHERIPORT_BoatAttendant_End
ISLANDGAME_CHERIPORT_BoatAttendant_4:
# 63 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
ISLANDGAME_CHERIPORT_BoatAttendant_End:
# 64 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	closemessage
# 65 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return

ISLANDGAME_CHERIPORT_BoatAttendant_2:
# 32 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto ISLANDGAME_CHERIPORT_BoatAttendant_End
	goto ISLANDGAME_CHERIPORT_BoatAttendant_1

ISLANDGAME_CHERIPORT_BoatAttendant_6:
# 43 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_BoatAttendant_Text_4, MSGBOX_YESNO
# 46 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CHERIPORT_BoatAttendant_9
ISLANDGAME_CHERIPORT_BoatAttendant_8:
# 49 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_BoatAttendant_Text_5
# 52 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	closemessage
# 53 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	fadescreen FADE_TO_BLACK
# 54 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	playse SE_RG_SS_ANNE_HORN
# 55 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitse
# 56 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	playse SE_M_SURF
# 57 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitse
# 58 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	warp MAP_ISLANDGAME_AETHERIA_WHARF, 4, 10
	goto ISLANDGAME_CHERIPORT_BoatAttendant_4

ISLANDGAME_CHERIPORT_BoatAttendant_9:
# 47 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto ISLANDGAME_CHERIPORT_BoatAttendant_End
	goto ISLANDGAME_CHERIPORT_BoatAttendant_8


ISLANDGAME_CHERIPORT_Interact_SilverwingGreeter::
# 73 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOWN_MAP, ISLANDGAME_CHERIPORT_Interact_SilverwingGreeter_1
# 77 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	call ISLANDGAME_CHERIPORT_GiveTownMap
	return

ISLANDGAME_CHERIPORT_Interact_SilverwingGreeter_1:
# 74 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_SilverwingGreeter_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CHERIPORT_Interact_BeachGameBoyKid::
# 82 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_BeachGameBoyKid_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CHERIPORT_Interact_BeachWoman::
# 86 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_BeachWoman_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CHERIPORT_Interact_BeachTuberBoy::
# 90 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_BeachTuberBoy_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CHERIPORT_Interact_BeachTuberGirl::
# 94 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_BeachTuberGirl_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CHERIPORT_Interact_MrBriney::
# 98 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_MrBriney_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CHERIPORT_Interact_Peeko::
# 102 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 103 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement LOCALID_PEEKO, ISLANDGAME_CHERIPORT_Interact_Peeko_Movement_0
# 104 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmoncry
	return


ISLANDGAME_CHERIPORT_Interact_TownBoy::
# 108 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_TownBoy_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CHERIPORT_Interact_LeavingTownGirl::
# 116 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_LeavingTownGirl_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CHERIPORT_Interact_Fisherman::
# 123 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_Fisherman_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CHERIPORT_Interact_BeachSwimmer::
# 130 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_BeachSwimmer_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CHERIPORT_Interact_Sign_Welcome::
# 134 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_Sign_Welcome_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CHERIPORT_Interact_Sign_House::
# 141 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_Sign_House_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CHERIPORT_Interact_Sign_Beach::
# 148 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_Sign_Beach_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CHERIPORT_Interact_Sign_Laboratory::
# 155 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Interact_Sign_Laboratory_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CHERIPORT_Trigger_EnteringTown::
# 163 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOWN_MAP, ISLANDGAME_CHERIPORT_Trigger_EnteringTown_1
	return

ISLANDGAME_CHERIPORT_Trigger_EnteringTown_1:
# 164 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	playse SE_PIN
# 165 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement LOCALID_SILVERWING_GREETER, ISLANDGAME_CHERIPORT_Trigger_EnteringTown_Movement_0
# 166 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmovement
# 167 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CHERIPORT_Trigger_EnteringTown_Movement_1
# 168 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	call ISLANDGAME_CHERIPORT_GiveTownMap
	return


ISLANDGAME_CHERIPORT_Trigger_LeavingInland::
# 173 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_unset FLAG_PROF_GAVE_EEVEE, ISLANDGAME_CHERIPORT_Trigger_LeavingInland_1
	return

ISLANDGAME_CHERIPORT_Trigger_LeavingInland_1:
# 174 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Trigger_LeavingInland_Text_0, MSGBOX_AUTOCLOSE
# 175 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CHERIPORT_Trigger_LeavingInland_Movement_0
# 176 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmovement
	return


ISLANDGAME_CHERIPORT_Trigger_LeavingOcean::
# 181 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_Trigger_LeavingOcean_Text_0, MSGBOX_AUTOCLOSE
# 182 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CHERIPORT_Trigger_LeavingOcean_Movement_0
# 183 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmovement
	return


# 103 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
ISLANDGAME_CHERIPORT_Interact_Peeko_Movement_0:
# 103 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	emote_heart
	step_end

# 165 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
ISLANDGAME_CHERIPORT_Trigger_EnteringTown_Movement_0:
# 165 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	emote_exclamation_mark
# 165 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	delay_16
# 165 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	delay_16
	step_end

# 167 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
ISLANDGAME_CHERIPORT_Trigger_EnteringTown_Movement_1:
# 167 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	face_up
	step_end

# 175 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
ISLANDGAME_CHERIPORT_Trigger_LeavingInland_Movement_0:
# 175 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	walk_left
	step_end

# 182 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
ISLANDGAME_CHERIPORT_Trigger_LeavingOcean_Movement_0:
# 182 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	walk_right
	step_end

ISLANDGAME_CHERIPORT_GiveTownMap_Text_0:
# 15 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Welcome to the Maryan Isles, traveler.\p"
	.string "Please take this map. It will aid you in\n"
	.string "traversing the region.$"

ISLANDGAME_CHERIPORT_BoatAttendant_Text_0:
# 29 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Hello traveler. Are you here to ride the\n"
	.string "ferry?$"

ISLANDGAME_CHERIPORT_BoatAttendant_Text_1:
# 35 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Which island will you be traveling to?$"

ISLANDGAME_CHERIPORT_BoatAttendant_Text_2:
# 37 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Nevermind$"

ISLANDGAME_CHERIPORT_BoatAttendant_Text_3:
# 38 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Lumine (Aetheria)$"

ISLANDGAME_CHERIPORT_BoatAttendant_Text_4:
# 44 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR GREEN}Travel to Aetheria?$"

ISLANDGAME_CHERIPORT_BoatAttendant_Text_5:
# 50 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Very well. Please board the ferry. We\n"
	.string "will be departing soon.$"

ISLANDGAME_CHERIPORT_Interact_SilverwingGreeter_Text_0:
# 74 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "We, The Silverwing Order, pray you have\n"
	.string "a pleasant stay.$"

ISLANDGAME_CHERIPORT_Interact_BeachGameBoyKid_Text_0:
# 82 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Ugh... I can't see anything on my Game\n"
	.string "Boy because of the sun!$"

ISLANDGAME_CHERIPORT_Interact_BeachWoman_Text_0:
# 86 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "-sigh-{PAUSE 30} If only you were still here with\n"
	.string "us...$"

ISLANDGAME_CHERIPORT_Interact_BeachTuberBoy_Text_0:
# 90 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Nuh-uh! Nuh-uh!$"

ISLANDGAME_CHERIPORT_Interact_BeachTuberGirl_Text_0:
# 94 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Hey! I tagged you!$"

ISLANDGAME_CHERIPORT_Interact_MrBriney_Text_0:
# 98 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "This beach reminds you a lot of\n"
	.string "Slateport, doesn't it, Peeko?$"

ISLANDGAME_CHERIPORT_Interact_TownBoy_Text_0:
# 109 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
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
# 117 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Oranna is the smallest of the three\n"
	.string "principal islands in Marya.\p"
	.string "Nothing much really happens here, which\n"
	.string "makes it the perfect place to chill.$"

ISLANDGAME_CHERIPORT_Interact_Fisherman_Text_0:
# 124 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Come on...{PAUSE 30} Come on...{PAUSE 30} Argh! Not another\n"
	.string "Magikarp!\p"
	.string "All I want is a {COLOR LIGHT_BLUE}Squirtle{COLOR DARK_GRAY}. Is that too\n"
	.string "much to ask for!?$"

ISLANDGAME_CHERIPORT_Interact_BeachSwimmer_Text_0:
# 130 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Left! Right! Left! Right! Huh? I'm in the\n"
	.string "middle of my training! Shoo!$"

ISLANDGAME_CHERIPORT_Interact_Sign_Welcome_Text_0:
# 135 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "WELCOME TO CHERIPORT\n"
	.string "Take a rest on our soft and sandy\l"
	.string "beach!$"

ISLANDGAME_CHERIPORT_Interact_Sign_House_Text_0:
# 142 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "SEASIDE SERVICES\n"
	.string "Drinks on us!$"

ISLANDGAME_CHERIPORT_Interact_Sign_Beach_Text_0:
# 149 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "! WARNING !\n"
	.string "NO LIFEGUARD! SWIM AT YOUR OWN RISK!$"

ISLANDGAME_CHERIPORT_Interact_Sign_Laboratory_Text_0:
# 155 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "PROFESSOR PALM'S LABORATORY$"

ISLANDGAME_CHERIPORT_Trigger_LeavingInland_Text_0:
# 174 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR RED}(I should go see Professor Palm before\n"
	.string "I leave.)$"

ISLANDGAME_CHERIPORT_Trigger_LeavingOcean_Text_0:
# 181 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR RED}(There's nothing past here but the vast\n"
	.string "ocean.)$"
