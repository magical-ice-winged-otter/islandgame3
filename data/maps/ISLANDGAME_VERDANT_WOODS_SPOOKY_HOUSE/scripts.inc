ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts::
# 2 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	goto_if_unset FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	compare VAR_SPOOKY_HOUSE_STATE, 3
	goto_if_gt ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	return

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	setvar VAR_SPOOKY_HOUSE_STATE, 0
	goto ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 3 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	compare VAR_SPOOKY_HOUSE_STATE, 4
	goto_if_lt ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 8 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	removeobject LOCALID_SPOOK_HOUSE_TWIN1
# 9 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	removeobject LOCALID_SPOOK_HOUSE_TWIN2
# 10 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	removeobject LOCALID_SPOOK_HOUSE_ITEM
	return


ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_GetOut::
# 16 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	lock
# 17 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_NORMAL
# 18 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	waitmoncry
# 19 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	setvar VAR_SPOOKY_HOUSE_STATE, 1
# 20 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_GetOut_Text_0, MSGBOX_AUTOCLOSE
# 21 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	release
	return


# 24 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
spookyApproach:
# 25 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_down
# 25 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_down
# 25 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_down
# 25 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_down
# 25 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_down
	step_end

# 28 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
spookySpin:
# 29 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_left
# 29 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 29 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_up
# 29 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 29 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_right
# 29 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 29 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_down
# 29 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 30 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_left
# 30 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 30 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_up
# 30 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 30 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_right
# 30 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 30 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_down
# 30 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 31 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_left
# 31 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 31 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_up
# 31 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 31 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_right
# 31 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 31 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_down
# 31 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 32 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_left
# 32 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 32 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_up
# 32 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 32 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_right
# 32 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 32 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_down
# 32 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 33 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_left
# 33 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 33 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_up
# 33 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 33 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_right
# 33 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 33 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_down
# 33 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 34 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_left
# 34 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 34 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_up
# 34 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 35 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_player
	step_end

# 38 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
spookyTP:
# 39 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_up
# 40 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	disable_anim
# 41 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	slide_up
# 42 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	slide_up
# 43 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	slide_up
# 44 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	slide_up
# 45 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	slide_up
# 46 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	slide_up
	step_end

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook1::
# 50 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	lock
# 51 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	playse SE_M_NIGHTMARE
# 52 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	waitse
# 53 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook1_Movement_0
# 54 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	waitmovement
# 55 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	addobject LOCALID_SPOOK_HOUSE_TWIN1
# 56 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	setobjectxy LOCALID_SPOOK_HOUSE_TWIN1, 4, 8
# 57 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	addobject LOCALID_SPOOK_HOUSE_TWIN2
# 58 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	setobjectxy LOCALID_SPOOK_HOUSE_TWIN2, 5, 8
# 59 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	applymovement LOCALID_SPOOK_HOUSE_TWIN1, spookyApproach
# 60 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	applymovement LOCALID_SPOOK_HOUSE_TWIN2, spookyApproach
# 61 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	waitmovement
# 63 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook1_Text_0
# 68 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 69 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	playse SE_M_NIGHTMARE
# 70 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	removeobject LOCALID_SPOOK_HOUSE_TWIN1
# 71 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	removeobject LOCALID_SPOOK_HOUSE_TWIN2
# 72 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	setobjecthidden LOCALID_SPOOK_HOUSE_TWIN1
# 73 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	setobjecthidden LOCALID_SPOOK_HOUSE_TWIN2
# 74 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	setvar VAR_SPOOKY_HOUSE_STATE, 3
# 75 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 76 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook3::
# 93 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	lock
# 94 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay 32
# 95 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook1_Movement_0
# 96 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	playse SE_M_NIGHTMARE
# 97 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	applymovement LOCALID_SPOOK_HOUSE_ITEM, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook3_Movement_0
# 98 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	waitmovement
# 99 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	removeobject LOCALID_SPOOK_HOUSE_ITEM
# 100 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	setobjecthidden LOCALID_SPOOK_HOUSE_ITEM
# 101 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook4::
# 124 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	setvar VAR_SPOOKY_HOUSE_STATE, 4
	return


# 53 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook1_Movement_0:
# 53 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	emote_question_mark
	step_end

# 97 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook3_Movement_0:
# 97 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	slide_up
# 97 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_16
# 97 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_16
# 97 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_16
# 97 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_right
# 97 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_right
# 97 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_right
# 97 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_right
# 97 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_right
# 97 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_right
# 97 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_right
# 97 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_right
	step_end

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_GetOut_Text_0:
# 20 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	.string "LeAVe mY HoUSE nOW NoW nOW NOw NOW\n"
	.string "grAWUghhH$"

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook1_Text_0:
# 64 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	.string "Leave this place...\p"
	.string "While you still can...$"
