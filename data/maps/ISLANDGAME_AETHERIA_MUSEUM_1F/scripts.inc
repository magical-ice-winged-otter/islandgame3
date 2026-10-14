ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts::
# 14 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 34 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	switch VAR_AETHERIA_STATE
# 16 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	case 2, ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 19 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	case 4, ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 20 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	case 5, ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 21 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	case 6, ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 25 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	case 7, ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 26 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	case 8, ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 17 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 18 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 22 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 23 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 24 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 27 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 28 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	setflag FLAG_TEMP_1
	return

ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 35 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	map_script_2 VAR_AETHERIA_STATE, 7, ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 36 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 37 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	waitmovement 0
# 38 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	call ISLANDGAME_AETHERIA_MUSEUM_2F_2_HuntingThiefCutscene
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_HuntingThiefCutscene::
# 50 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 51 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	applymovement LOCALID_MUSEUM_MELISSA, ISLANDGAME_AETHERIA_MUSEUM_2F_2_HuntingThiefCutscene_Movement_0
# 52 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	waitmovement 0
# 53 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_2F_2_HuntingThiefCutscene_Movement_1
# 54 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	waitmovement 0
# 55 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_HuntingThiefCutscene_Text_0, MSGBOX_AUTOCLOSE
# 59 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	setvar VAR_AETHERIA_STATE, 8
# 60 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_TicketCheckerRight::
# 65 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 66 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	faceplayer
# 67 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_TicketCheckerRight_Text_0, MSGBOX_AUTOCLOSE
# 70 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	applymovement LOCALID_TICKET_CHECKER_RIGHT, ISLANDGAME_AETHERIA_MUSEUM_1F_TicketCheckerRight_Movement_0
# 71 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryRight::
# 75 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 76 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	playse SE_PIN
# 77 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	applymovement LOCALID_TICKET_CHECKER_RIGHT, ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryRight_Movement_0
# 78 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	waitmovement 0
# 79 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 80 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryRight_Text_0, MSGBOX_AUTOCLOSE
# 83 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryRight_Movement_1
# 84 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	waitmovement 0
# 85 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_TicketCheckerLeft::
# 89 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 90 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	faceplayer
# 91 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_TicketCheckerRight_Text_0, MSGBOX_AUTOCLOSE
# 94 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	applymovement LOCALID_TICKET_CHECKER_LEFT, ISLANDGAME_AETHERIA_MUSEUM_1F_TicketCheckerRight_Movement_0
# 95 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryLeft::
# 99 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 100 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	playse SE_PIN
# 101 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	applymovement LOCALID_TICKET_CHECKER_LEFT, ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryRight_Movement_0
# 102 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	waitmovement 0
# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 104 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryRight_Text_0, MSGBOX_AUTOCLOSE
# 107 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryLeft_Movement_0
# 108 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	waitmovement 0
# 109 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_Melissa::
# 113 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 114 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	faceplayer
# 115 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	compare VAR_AETHERIA_STATE, 8
	goto_if_eq ISLANDGAME_AETHERIA_MUSEUM_1F_Melissa_1
# 122 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_Melissa_Text_1, MSGBOX_AUTOCLOSE
	return

ISLANDGAME_AETHERIA_MUSEUM_1F_Melissa_1:
# 116 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_Melissa_Text_0
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_Curator::
# 132 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 133 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	faceplayer
# 134 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_Curator_Text_0, MSGBOX_YESNO
# 138 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_MUSEUM_1F_Curator_2
ISLANDGAME_AETHERIA_MUSEUM_1F_Curator_1:
# 142 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_Curator_Text_1, MSGBOX_AUTOCLOSE
# 146 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	applymovement LOCALID_CURATOR, ISLANDGAME_AETHERIA_MUSEUM_1F_Curator_Movement_0
# 147 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	waitmovement 0
# 148 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	playse SE_EXIT
# 149 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	waitse
# 150 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	removeobject LOCALID_CURATOR
# 151 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	setobjecthidden LOCALID_CURATOR
# 152 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	setvar VAR_AETHERIA_STATE, 4
# 153 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
AetheriaMuseum_CuratorEnd:
# 154 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	closemessage
# 155 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_MUSEUM_1F_Curator_2:
# 139 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	goto AetheriaMuseum_CuratorEnd
	goto ISLANDGAME_AETHERIA_MUSEUM_1F_Curator_1


ISLANDGAME_AETHERIA_MUSEUM_1F_Officer::
# 159 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 160 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	faceplayer
# 161 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_Officer_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_Receptionist::
# 174 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 175 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	faceplayer
# 176 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_Receptionist_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_Karen::
# 184 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 185 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_Karen_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_KarenKid::
# 192 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 193 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_KarenKid_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_Receptionist2::
# 199 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 200 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_Receptionist2_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_Artist::
# 207 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 208 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_Artist_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_NinjaBoy::
# 215 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 216 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_NinjaBoy_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_Psychic::
# 222 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 223 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	faceplayer
# 224 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_Psychic_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_FatMan::
# 232 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 233 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	faceplayer
# 234 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_FatMan_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_Woman::
# 240 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 241 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_Woman_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_SchoolKid::
# 247 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 248 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	faceplayer
# 249 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_SchoolKid_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_SilverwingGuy::
# 256 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 257 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	faceplayer
# 258 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_SilverwingGuy_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_IsleGuardiansPainting::
# 267 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_IsleGuardiansPainting_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_PokemonPainting::
# 276 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_PokemonPainting_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_BerriesPainting::
# 283 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_BerriesPainting_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_LandscapePainting::
# 290 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_LandscapePainting_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_PokeballPainting::
# 297 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_PokeballPainting_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_VasePainting::
# 304 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_VasePainting_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_GrassPainting::
# 310 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_GrassPainting_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_StoneTablet::
# 318 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_StoneTablet_Text_0, MSGBOX_SIGN
	return


# 36 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 36 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	face_up
	step_end

# 51 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_2_HuntingThiefCutscene_Movement_0:
# 51 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	walk_in_place_fast_up
# 51 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	walk_in_place_fast_up
# 51 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	delay_16
# 51 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	delay_16
# 51 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	face_right
	step_end

# 53 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_2F_2_HuntingThiefCutscene_Movement_1:
# 53 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	face_left
	step_end

# 70 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_1F_TicketCheckerRight_Movement_0:
# 70 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	face_down
	step_end

# 77 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryRight_Movement_0:
# 77 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	face_down
# 77 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	emote_exclamation_mark
# 77 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	delay_16
# 77 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	delay_16
	step_end

# 83 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryRight_Movement_1:
# 83 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	walk_left
	step_end

# 107 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryLeft_Movement_0:
# 107 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	walk_right
	step_end

# 146 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_1F_Curator_Movement_0:
# 146 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	walk_up
	step_end

ISLANDGAME_AETHERIA_MUSEUM_2F_2_HuntingThiefCutscene_Text_0:
# 56 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}{PLAYER}, we should help\n"
	.string "them look for the thief! They couldn't\l"
	.string "have gone far with a giant rock like\l"
	.string "that!\p"
	.string "Hmmmmnghh...{PAUSE 30} think, Melissa, think!{PAUSE 30} Who\n"
	.string "was missing from the room after the\l"
	.string "lights went out?$"

ISLANDGAME_AETHERIA_MUSEUM_1F_TicketCheckerRight_Text_0:
# 68 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "Only those with a museum ticket may\n"
	.string "continue into the exhibit hall.$"

ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryRight_Text_0:
# 81 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "Excuse me, but only those with a ticket\n"
	.string "may enter the exhibit hall.$"

ISLANDGAME_AETHERIA_MUSEUM_1F_Melissa_Text_0:
# 117 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "When the lights went out... I thought I\n"
	.string "had heard the cry of a Pokémon...\p"
	.string "But of what Pokémon...?{PAUSE 30} Argh! This is\n"
	.string "what I get for procrastinating!$"

ISLANDGAME_AETHERIA_MUSEUM_1F_Melissa_Text_1:
# 123 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "Are you enjoying the museum so far? The\n"
	.string "artwork here is always soooo gorg!\p"
	.string "My big bro used to take me here all the\n"
	.string "time when I was still a lil sweet pea!\p"
	.string "They've always periodically added more\n"
	.string "pieces, but this is new exhibit their\l"
	.string "first new major addition!\p"
	.string "Eeee! I can't wait!$"

ISLANDGAME_AETHERIA_MUSEUM_1F_Curator_Text_0:
# 135 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "Welcome, young trainer! I take it you've\n"
	.string "come to view our newest exhibit?$"

ISLANDGAME_AETHERIA_MUSEUM_1F_Curator_Text_1:
# 143 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "Splendid! Follow me upstairs, and\n"
	.string "experience,{PAUSE 30} The Darkest Night...$"

ISLANDGAME_AETHERIA_MUSEUM_1F_Officer_Text_0:
# 162 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "The Darkest Night exhibit will be closed\n"
	.string "until further notice.$"

ISLANDGAME_AETHERIA_MUSEUM_1F_Receptionist_Text_0:
# 177 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "Welcome to Aetheria's Museum of Fine\n"
	.string "Arts.\p"
	.string "Unfortunately due to high demand, we\n"
	.string "are currently sold out of tickets.\p"
	.string "We apologize for the inconvenience.$"

ISLANDGAME_AETHERIA_MUSEUM_1F_Karen_Text_0:
# 186 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "Are you even listening? I said I want a\n"
	.string "REFUND on my TICKET!\p"
	.string "I'm done speaking with you! Where is\n"
	.string "your manager!?$"

ISLANDGAME_AETHERIA_MUSEUM_1F_KarenKid_Text_0:
# 194 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "Moooooooom! I want my Rotom Pad!$"

ISLANDGAME_AETHERIA_MUSEUM_1F_Receptionist2_Text_0:
# 201 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "Again, as per my previous statement, all\n"
	.string "ticket sales are final.\p"
	.string "If you have any disagreements with our\n"
	.string "policy, you are free to express your\l"
	.string "concerns through our website.$"

ISLANDGAME_AETHERIA_MUSEUM_1F_Artist_Text_0:
# 209 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "Hmmm, yes... This is quite the masterful\n"
	.string "composition.\p"
	.string "It truly depicts the Isle Guardians in\n"
	.string "all their limitless splendor.$"

ISLANDGAME_AETHERIA_MUSEUM_1F_NinjaBoy_Text_0:
# 217 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "Heheh. If I stay still on this wall,\n"
	.string "people will think I'm part of the\l"
	.string "exhibit!$"

ISLANDGAME_AETHERIA_MUSEUM_1F_Psychic_Text_0:
# 225 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "The vast majority of human history is\n"
	.string "unknown.\p"
	.string "Whether it was destroyed, lost,\n"
	.string "rewritten, or just the simple fact that\l"
	.string "humans have existed long before the\l"
	.string "creation of recordkeeping.\p"
	.string "It is quite disturbing, is it not? We\n"
	.string "truly know nothing of the world.$"

ISLANDGAME_AETHERIA_MUSEUM_1F_FatMan_Text_0:
# 235 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "So mysterious... What secrets do you\n"
	.string "think are hiding in that island, if it\l"
	.string "even exists?$"

ISLANDGAME_AETHERIA_MUSEUM_1F_Woman_Text_0:
# 242 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "Ooooh, what a beautiful looking vase!\n"
	.string "I've never seen anything like it!$"

ISLANDGAME_AETHERIA_MUSEUM_1F_SchoolKid_Text_0:
# 250 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "I'm in the process of writing a novel,\n"
	.string "but I've been having trouble converting\l"
	.string "my thoughts into words.\p"
	.string "I'm hoping that this cultural excursion\n"
	.string "will remedy my writing block.$"

ISLANDGAME_AETHERIA_MUSEUM_1F_SilverwingGuy_Text_0:
# 259 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "This ancient tablet is the oldest\n"
	.string "recollection we have of The Darkest\l"
	.string "Night.\p"
	.string "We have ensured its preservation for\n"
	.string "thousands of years, and shall continue.\p"
	.string "So that the advent of our lord and\n"
	.string "savior shall never be forgotten.$"

ISLANDGAME_AETHERIA_MUSEUM_1F_IsleGuardiansPainting_Text_0:
# 268 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "“Winged Mirages”\n"
	.string "By Kozmocrat\p"
	.string "“For thousands of years, the isles of\n"
	.string "Marya have been under the winged\l"
	.string "protection of these legendary avians.”\p"
	.string "“Articuno, Zapdos, and Moltres.”\p"
	.string "“As long as they remain perched atop\n"
	.string "their mountainous roost, order will be\l"
	.string "preserved.”$"

ISLANDGAME_AETHERIA_MUSEUM_1F_PokemonPainting_Text_0:
# 277 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "“A Girl and Her Pokémon”\n"
	.string "By Kyraipikuma\p"
	.string "“In loving memory of Sir Buttermilk\n"
	.string "Pancake Flapjack III”$"

ISLANDGAME_AETHERIA_MUSEUM_1F_BerriesPainting_Text_0:
# 284 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "“Still Life”\n"
	.string "By InsertNameAqui\p"
	.string "{COLOR RED}(It's a painting of an assortment of\n"
	.string "scrumptious-looking berries.)$"

ISLANDGAME_AETHERIA_MUSEUM_1F_LandscapePainting_Text_0:
# 291 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "“Faraway Island”\n"
	.string "By Keleu\p"
	.string "“A mythical island in the far reaches of\n"
	.string "the Maryan Sea.”$"

ISLANDGAME_AETHERIA_MUSEUM_1F_PokeballPainting_Text_0:
# 298 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "“Ancient Poké Ball”\p"
	.string "“A Poké Ball hand-crafted by the\n"
	.string "ancient Arborians using an Apricorn.”$"

ISLANDGAME_AETHERIA_MUSEUM_1F_VasePainting_Text_0:
# 305 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "{COLOR RED}(It's just a painting of a vase. That's\n"
	.string "it. There's nothing special about it.)$"

ISLANDGAME_AETHERIA_MUSEUM_1F_GrassPainting_Text_0:
# 311 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "“Sylvan Sanctuary”\p"
	.string "“We dedicate this painting to the voice\n"
	.string "of the forest.”\p"
	.string "“May another bountiful harvest befall\n"
	.string "our lush jungle.”$"

ISLANDGAME_AETHERIA_MUSEUM_1F_StoneTablet_Text_0:
# 319 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "“Ancient Tablet”\p"
	.string "“Within the maws of the Great Volcano\n"
	.string "slumbered the wicked Wings of Chaos.”\p"
	.string "“A primordial force of unstoppable evil,\n"
	.string "it once threatened to engulf the world\l"
	.string "in eternal darkness.”\p"
	.string "“But from the depths emerged our\n"
	.string "glorious savior to grant us salvation.”\p"
	.string "“And so the fiend was sealed whence it\n"
	.string "came. The world saved from cataclysmic\l"
	.string "destruction.”$"
