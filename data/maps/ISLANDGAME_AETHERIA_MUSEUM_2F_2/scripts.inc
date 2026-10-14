ISLANDGAME_AETHERIA_MUSEUM_2F_2_MapScripts::
# 14 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_AETHERIA_MUSEUM_2F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 25 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_AETHERIA_MUSEUM_2F_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_AETHERIA_MUSEUM_2F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	setflag FLAG_TEMP_3
# 17 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	compare VAR_AETHERIA_STATE, 7
	goto_if_lt ISLANDGAME_AETHERIA_MUSEUM_2F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 21 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_AETHERIA_MUSEUM_2F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 18 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	setflag FLAG_TEMP_1
	return

ISLANDGAME_AETHERIA_MUSEUM_2F_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 26 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	map_script_2 VAR_AETHERIA_STATE, 7, ISLANDGAME_AETHERIA_MUSEUM_2F_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

ISLANDGAME_AETHERIA_MUSEUM_2F_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 27 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene::
# 36 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	lock
# 37 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Movement_0
# 38 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	waitmovement 0
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_2_CURATOR, ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Movement_1
# 40 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	waitmovement 0
# 41 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Text_0, MSGBOX_AUTOCLOSE
# 44 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_2_CURATOR, ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Movement_2
# 45 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	waitmovement 0
# 46 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	playse SE_POKENAV_CALL
# 47 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Text_1, MSGBOX_AUTOCLOSE
# 51 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_2_MELISSA, ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Movement_3
# 52 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	waitmovement 0
# 53 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Movement_4
# 54 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	waitmovement 0
# 55 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Text_2
# 60 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	closemessage
# 61 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	release
# 62 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	clearflag FLAG_TEMP_3
# 63 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	addobject AETHERIA_MUSEUM_2F_2_OFFICER
# 64 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	playse SE_EXIT
# 65 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	waitse
# 66 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_2_OFFICER, ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Movement_5
# 67 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	waitmovement 0
# 68 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_2_CURATOR, ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Movement_6
# 69 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	waitmovement 0
# 70 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_2_MELISSA, ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Movement_7
# 71 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	waitmovement 0
# 72 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Movement_7
# 73 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	waitmovement 0
# 74 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Text_3, MSGBOX_AUTOCLOSE
# 84 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_2_MELISSA, ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Movement_3
# 85 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	waitmovement 0
# 86 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Movement_4
# 87 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	waitmovement 0
# 88 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Text_4
# 92 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	closemessage
# 93 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	applymovement AETHERIA_MUSEUM_2F_2_CURATOR, ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Movement_8
# 94 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	waitmovement 0
# 95 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Text_5
# 99 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 100 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	warp MAP_ISLANDGAME_AETHERIA_MUSEUM_1F, 18, 4
# 101 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_RecoveredArtifacts::
# 107 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_RecoveredArtifacts_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_BlightedRock::
# 112 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	compare VAR_AETHERIA_STATE, 7
	goto_if_lt ISLANDGAME_AETHERIA_MUSEUM_2F_2_BlightedRock_1
	return

ISLANDGAME_AETHERIA_MUSEUM_2F_2_BlightedRock_1:
# 113 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_BlightedRock_Text_0, MSGBOX_SIGN
# 119 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	setvar VAR_AETHERIA_STATE, 6
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_Fossil::
# 124 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_Fossil_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_SilverFeather::
# 132 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_SilverFeather_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_Lugia::
# 140 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_Lugia_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_Curator::
# 154 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	lock
# 155 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	faceplayer
# 156 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_Curator_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_Edea::
# 165 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	lock
# 166 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_Edea_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_Pokefan::
# 173 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	lock
# 174 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	faceplayer
# 175 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_Pokefan_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_Melissa::
# 182 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	lock
# 183 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	faceplayer
# 184 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_Melissa_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_Scientist::
# 193 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	lock
# 194 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	faceplayer
# 195 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_Scientist_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_Woman::
# 202 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	lock
# 203 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	faceplayer
# 204 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_Woman_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_Beauty::
# 212 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	lock
# 213 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_Beauty_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_Socialite::
# 219 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	lock
# 220 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	faceplayer
# 221 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_Socialite_Text_0, MSGBOX_AUTOCLOSE
	return


# 37 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Movement_0:
# 37 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	walk_up
# 37 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	walk_up
# 37 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	walk_left
	step_end

# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Movement_1:
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	face_left
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	delay_16
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	delay_16
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	face_right
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	delay_16
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	delay_16
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	face_up
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	delay_16
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	delay_16
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	walk_left
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	delay_16
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	delay_16
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	face_down
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	delay_16
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	delay_16
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	face_up
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	delay_16
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	delay_16
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	walk_right
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	face_up
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	walk_in_place_faster_up
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	walk_in_place_faster_up
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	lock_facing_direction
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	walk_down
	step_end

# 44 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Movement_2:
# 44 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	unlock_facing_direction
# 44 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	walk_up
	step_end

# 51 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Movement_3:
# 51 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	walk_in_place_down
# 51 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	walk_in_place_down
	step_end

# 53 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Movement_4:
# 53 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	face_up
	step_end

# 66 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Movement_5:
# 66 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	walk_left
# 66 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	walk_left
# 66 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	walk_up
# 66 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	walk_up
# 66 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	walk_up
# 66 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	walk_left
	step_end

# 68 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Movement_6:
# 68 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	face_right
	step_end

# 70 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Movement_7:
# 70 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	face_left
	step_end

# 93 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Movement_8:
# 93 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	face_down
# 93 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	walk_in_place_down
# 93 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	walk_in_place_down
	step_end

ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Text_0:
# 42 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "{COLOR GREEN}Solomon: {COLOR DARK_GRAY}But who...?{PAUSE 30} How...?{PAUSE 30} Why...?$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Text_1:
# 48 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "S-Security! Lock everything down,\n"
	.string "immediately!\p"
	.string "Nobody may leave the museum without\n"
	.string "permission!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Text_2:
# 56 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}No way... the giant rock got\n"
	.string "stolen? Out of everything here?\p"
	.string "We were just talking about it too...\p"
	.string "Whoever stole the rock, do you think\n"
	.string "they might know more about it than\l"
	.string "meets the eye?$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Text_3:
# 75 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "{COLOR GREEN}Officer: {COLOR DARK_GRAY}We've conducted a full sweep\n"
	.string "of the ground floor and the surrounding\l"
	.string "area.\p"
	.string "No sign of the suspect or the artifact\n"
	.string "yet.\p"
	.string "We're currently questioning the staff\n"
	.string "and visitors for any potential leads.\p"
	.string "{COLOR GREEN}Solomon: {COLOR DARK_GRAY}The cameras! Do we have any\n"
	.string "footage of the thief on the cameras?\p"
	.string "{COLOR GREEN}Officer: {COLOR DARK_GRAY}I'm sorry sir, our cameras lost\n"
	.string "signal the second the power outage\l"
	.string "occurred.\p"
	.string "We're still trying to get them\n"
	.string "operational as we speak.\p"
	.string "{COLOR GREEN}Solomon: {COLOR DARK_GRAY}Inconceivable...\p"
	.string "Our most groundbreaking archaeological\n"
	.string "discovery yet... vanished in the blink of\l"
	.string "an eye...$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Text_4:
# 89 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Whoever came rushing\n"
	.string "downstairs earlier during the blackout,\l"
	.string "they've gotta be our culprit, right?\p"
	.string "Mmmmnh... if only we could see what they\n"
	.string "looked like!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_StolenCutscene_Text_5:
# 96 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "{COLOR GREEN}Solomon: {COLOR DARK_GRAY}My sincerest apologies\n"
	.string "everyone, but I am afraid I must end\l"
	.string "the exhibit prematurely.\p"
	.string "Please make your way downstairs while\n"
	.string "the staff and investigate this matter.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_RecoveredArtifacts_Text_0:
# 108 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "{COLOR GREEN}> Inside the display are the charred\n"
	.string "remnants of various artifacts.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_BlightedRock_Text_0:
# 114 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "Primordial Stone\p"
	.string "A fragment of volcanic rock unearthed\n"
	.string "from the beaches of Mount Kaballa.\p"
	.string "Geological dating suggests that the\n"
	.string "rock originated from the Great\l"
	.string "Volcano's eruption.\p"
	.string "{COLOR GREEN}> A strange aura seems to emanate from\n"
	.string "the stone...$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_Fossil_Text_0:
# 125 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "Fossilized Remains\p"
	.string "The fossilized remains of an Absol's\n"
	.string "broken horn. It is strangely misshapen.\p"
	.string "According to the village elder, a wild\n"
	.string "Absol had approached her before the\l"
	.string "storm, as if to warn her of the\l"
	.string "encroaching disaster.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_SilverFeather_Text_0:
# 133 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "Silver Feather\p"
	.string "A sparkling silver feather that was\n"
	.string "shed from Lugia during its battle with\l"
	.string "the wicked beast.\p"
	.string "It is said that the feather emits a\n"
	.string "faint blue glow when Lugia is nearby.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_Lugia_Text_0:
# 141 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "The Glorious Savior\p"
	.string "An ancient statue of Lugia that was\n"
	.string "uncovered during an archaeological\l"
	.string "excavation.\p"
	.string "The statue depicts Lugia with slightly\n"
	.string "different colors, possibly due to age.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_Curator_Text_0:
# 157 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "Hope you are enjoying the exhibit,\n"
	.string "young trainer!\p"
	.string "It warms my heart to see that the new\n"
	.string "generation still has interest in our\l"
	.string "historical ventures.\p"
	.string "Several of these artifacts we have\n"
	.string "kept preserved for many years.\p"
	.string "Our newest finding however is that rock\n"
	.string "over to the left. Please take a look!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_Edea_Text_0:
# 167 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "...That's it? It looks just like any\n"
	.string "other rock in the region.\p"
	.string "Well, if they insist. I'm not gonna argue\n"
	.string "with it.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_Pokefan_Text_0:
# 176 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "They say that the sound of Mount\n"
	.string "Kaballa's eruption could be heard as far\l"
	.string "as thousands of miles.\p"
	.string "That means someone all the way in the\n"
	.string "Hoenn region would've heard it!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_Melissa_Text_0:
# 185 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "Wow... that feather's really huge! It's\n"
	.string "so much bigger than mine!\p"
	.string "In Marya, Lugia's silver feather is a\n"
	.string "symbol of luck and protection.\p"
	.string "It's why I keep this feather charm with\n"
	.string "me at all times!\p"
	.string "Nothing'll beat the real deal though,\n"
	.string "huh? Imagine having to carry THAT\l"
	.string "everywhere you go.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_Scientist_Text_0:
# 196 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "I've never seen an Absol horn look so...\n"
	.string "menacing.\p"
	.string "Could this be the result of prolonged\n"
	.string "exposure to the corrupted rainfall?$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_Woman_Text_0:
# 205 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "What a harrowing night that must've\n"
	.string "been.\p"
	.string "If not for Lugia, the world as we know it\n"
	.string "today may not have remained.\p"
	.string "We are forever indebted to him.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_Beauty_Text_0:
# 214 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "This Lugia... is it the same one that\n"
	.string "dwelled in the Whirl Islands of Johto?$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_Socialite_Text_0:
# 222 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "Every year, the Silverwing Order makes a\n"
	.string "perilous journey across the Maryan sea\l"
	.string "to the Northern Islands, where our lord\l"
	.string "and savior resides.\p"
	.string "At the shrine, the order performs a\n"
	.string "sacred ritual, offering fervent prayers\l"
	.string "and bountiful tribute for Lugia in\l"
	.string "exchange for his continued protection.$"
