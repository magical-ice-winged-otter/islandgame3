ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts::
# 2 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_LOAD
# 11 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_set FLAG_DAILY_LUMINE_CAVE_SALT_4, ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_2
ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_set FLAG_LUMINE_CAVE_AGGRON_DEFEATED, ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setmetatile 11, 19, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_1

ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 7 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_TEMP_1F
# 8 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_set FLAG_LUMINE_CAVE_ALBA_DEFEATED, ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 1, 10, 11
# 14 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 15 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 2, 9, 11
# 16 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_SALT::
# 22 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 23 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_unset FLAG_DAILY_LUMINE_CAVE_SALT_4, ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_2
# 30 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_Text_0
# 33 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_1:
# 35 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_2:
# 24 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	giveitem ITEM_SHOAL_SALT
# 25 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setmetatile 11, 19, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 26 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	special DrawWholeMapView
# 27 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_DAILY_LUMINE_CAVE_SALT_4
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_1


ISLANDGAME_LUMINE_CAVE_B1F_2_Cringe::
# 39 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 40 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 41 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Cringe_Text_0
# 44 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 45 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC1::
# 49 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 50 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 51 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC1_Text_0
# 54 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 55 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC2::
# 59 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 60 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 61 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_EXCADRILL, CRY_MODE_NORMAL
# 62 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmoncry
# 63 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 64 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract::
# 71 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 72 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 73 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	checktrainerflag TRAINER_LUMINE_CAVE_ALBA
	goto_if 0, ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_2
# 78 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_PORYGON2, CRY_MODE_WEAK
# 79 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmoncry
ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_1:
# 81 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 82 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_2:
# 74 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
# 75 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmoncry
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_1


ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract::
# 86 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 87 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_unset FLAG_LUMINE_CAVE_SPOKE_TO_ALBA, ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_2
# 171 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	checktrainerflag TRAINER_LUMINE_CAVE_ALBA
	goto_if 0, ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_3
# 216 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 217 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_10
ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1:
# 221 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 222 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_2:
# 88 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SUSPICIOUS, TRUE
# 89 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_0
# 95 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 96 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 97 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 98 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 99 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 100 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 101 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 102 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_1
# 108 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 110 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	savebgm MUS_DUMMY
# 111 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadedefaultbgm
# 113 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_QuestionMark
# 114 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 115 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterRight
# 116 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 117 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_Delay48
# 118 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 119 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 120 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 121 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_2
# 125 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 127 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 128 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 129 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 130 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 131 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 132 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 133 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_3
# 138 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 140 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceRight
# 141 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 142 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_Delay48
# 143 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 144 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 145 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 146 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_4
# 149 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 151 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 152 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 153 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 154 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 155 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 156 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 157 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 158 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 159 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 160 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 161 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_5
# 168 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_LUMINE_CAVE_SPOKE_TO_ALBA
# 169 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadedefaultbgm
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_3:
# 172 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 173 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_6, MSGBOX_YESNO
# 176 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_7
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_7:
# 177 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_7
# 180 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	trainerbattle_no_intro TRAINER_LUMINE_CAVE_ALBA, ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_8
# 182 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SUSPICIOUS, TRUE
# 184 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_9
# 189 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 191 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 192 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 193 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 194 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 195 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 196 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 197 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 198 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 199 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 200 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 201 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 202 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 203 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 204 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 205 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 1, 10, 11
# 206 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 207 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 2, 9, 11
# 208 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 209 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_LUMINE_CAVE_ALBA_DEFEATED
# 211 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	savebgm MUS_DUMMY
# 212 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadedefaultbgm
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1


ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl::
# 226 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 227 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 228 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_set FLAG_LUMINE_CAVE_SPOKE_TO_ALBA, ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_2
# 234 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_1
ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_1:
# 238 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 239 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 240 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 241 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_2:
# 229 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_0
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_1


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC1::
# 245 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 246 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC1_Text_0
# 249 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 250 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_Aron::
# 254 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 255 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 256 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_ARON, CRY_MODE_NORMAL
# 257 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Aron_Text_0
# 260 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 261 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_Swampert::
# 265 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 266 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_WEAK
# 267 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Swampert_Text_0
# 270 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 271 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC2::
# 275 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 276 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 277 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC2_Text_0
# 281 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 282 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC3::
# 286 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 287 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 288 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC3_Text_0
# 291 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 292 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC4::
# 296 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 297 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC4_Text_0
# 302 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 303 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC5::
# 307 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 308 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 309 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC5_Text_0
# 312 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 313 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6::
# 317 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 318 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_unset FLAG_DAILY_LUMINE_CAVE_SALT_4, ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_2
# 324 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 325 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_1
ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_1:
# 329 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 330 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_2:
# 319 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_0
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_1


ISLANDGAME_LUMINE_CAVE_B1F_2_Litten::
# 334 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 335 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_WEAK
# 336 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Litten_Text_0
# 339 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 340 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


# 343 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LaironApproach:
# 344 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
# 344 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
# 344 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
# 344 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
	step_end

# 347 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LaironStepBack:
# 348 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock_facing_direction
# 349 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
	step_end

ISLANDGAME_LUMINE_CAVE_B1F_2_LaironAssemble::
# 353 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 354 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_LAIRON, CRY_MODE_NORMAL
# 355 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmoncry
# 356 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_LAIRON, CRY_MODE_NORMAL
# 357 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmoncry
# 358 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 359 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 360 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playse SE_PIN
# 361 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 362 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 363 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	delay 30
# 364 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_FOLLOWERS_DISABLED
# 365 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	hidefollower
# 366 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	addobject 20
# 367 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	addobject 21
# 368 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxy 20, 25, 13
# 369 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxy 21, 27, 13
# 370 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 20, LaironApproach
# 371 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 21, LaironApproach
# 372 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 373 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 374 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_NO_CATCHING
# 375 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_NO_RUNNING
# 377 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LAIRON, 40, ITEM_NONE, ITEM_STEEL_GEM, NATURE_RELAXED, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 0, 31, 31, 31, 31, 31, 0, MOVE_METAL_BURST, MOVE_ROCK_SLIDE, MOVE_ENDEAVOR, MOVE_REVERSAL
# 378 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_RIGHT, SPECIES_LAIRON, 40, ITEM_NONE, ITEM_ROCK_GEM, NATURE_RELAXED, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 0, 31, 31, 31, 31, 31, 0, MOVE_METAL_BURST, MOVE_ROCK_SLIDE, MOVE_ENDEAVOR, MOVE_REVERSAL
# 379 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setwilddoubleflag
# 380 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_LAIRON, CRY_MODE_ENCOUNTER
# 381 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmoncry
# 382 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	dowildbattle
# 383 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 384 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 385 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 386 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 387 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	switch VAR_RESULT
# 388 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_B1F_2_LaironAssemble_2
# 389 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_B1F_2_LaironAssemble_2
# 392 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_LaironAssemble_2:
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron::
# 397 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 398 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 399 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setvar VAR_0x8000, 26
# 400 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setvar VAR_0x8001, 7
# 401 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	callnative TeleportCamera
# 402 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 26, 7
# 403 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 404 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_LAIRON, CRY_MODE_WEAK
# 405 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmoncry
# 406 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 407 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 408 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 20, LaironStepBack
# 409 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	delay 60
# 410 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 21, LaironStepBack
# 411 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	delay 60
# 412 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceDown
# 413 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 414 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	delay 60
# 415 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playse SE_PIN
# 416 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 417 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 418 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 419 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 420 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	delay 30
# 421 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceDown
# 422 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 423 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	delay 30
# 424 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_AGGRON, CRY_MODE_ENCOUNTER
# 425 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmoncry
# 426 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 8, Common_Movement_WalkDown
# 427 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 428 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 429 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_NO_CATCHING
# 430 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_NO_RUNNING
# 431 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SHADOW_AGGRON, 45, ITEM_LUM_BERRY, NATURE_RELAXED, 2, MON_GENDERLESS, 252, 252, 252, 252, 252, 0, 31, 31, 31, 31, 31, 0, MOVE_IRON_TAIL, MOVE_BULLDOZE, MOVE_ROCK_SLIDE, MOVE_REST
# 432 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setwilddoubleflag
# 433 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	dowildbattle
# 434 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 435 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 436 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 437 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 439 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	switch VAR_RESULT
# 440 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_3
# 441 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_3
# 444 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight
ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_1:
# 446 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_3:
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_1


# 449 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
AlbaWalkToPlayer:
# 450 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
# 450 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
# 450 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
# 450 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
	step_end

# 453 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LittenGirlZoom:
# 454 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 454 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 454 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 454 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 454 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 454 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 454 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 454 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 454 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 455 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	jump_in_place_up
# 455 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	jump_in_place_up
	step_end

# 458 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LittenGirlWalkToPlayer:
# 459 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 459 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 459 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 460 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_left
	step_end

# 463 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LittenHop:
# 464 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	jump_in_place_down
# 464 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	jump_in_place_down
	step_end

# 467 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LittenWalkToGirl:
# 468 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 468 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 468 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 468 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 469 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	face_left
	step_end

# 472 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LumineCaveWalkAway:
# 473 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 473 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 473 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 473 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 473 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 473 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 473 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 473 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 473 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
	step_end

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight::
# 477 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 478 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_LUMINE_CAVE_AGGRON_DEFEATED
# 479 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 480 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 481 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 482 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 8
# 483 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 20
# 484 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 21
# 485 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 22
# 486 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 23
# 487 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 24
# 488 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 25
# 489 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 26
# 490 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	addobject 1
# 491 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	addobject 2
# 492 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	addobject 11
# 493 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 8, 47, 0
# 494 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 20, 47, 0
# 495 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 21, 47, 0
# 496 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 22, 47, 0
# 497 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 23, 47, 0
# 498 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 24, 47, 0
# 499 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 25, 47, 0
# 500 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 26, 47, 0
# 501 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxy 1, 26, 13
# 502 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxy 2, 26, 14
# 503 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxy 11, 28, 13
# 504 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
# 505 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 507 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_0
# 513 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 516 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SUSPICIOUS, TRUE
# 518 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, AlbaWalkToPlayer
# 519 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, AlbaWalkToPlayer
# 520 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 521 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 522 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 523 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 524 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 525 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 526 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 528 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_1
# 534 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 536 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 537 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 538 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 539 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 540 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 541 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 543 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_2
# 550 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 552 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 553 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 554 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 555 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 556 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 557 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 558 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 559 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 560 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_3
# 568 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 571 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 572 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 573 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 574 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 575 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_4
# 579 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 581 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	savebgm MUS_DUMMY
# 582 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadedefaultbgm
# 584 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, LittenGirlZoom
# 585 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 586 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_5
# 589 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 590 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 16, LittenHop
# 591 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 592 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_WEAK
# 593 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmoncry
# 594 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, LittenGirlWalkToPlayer
# 595 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 596 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 597 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 598 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 599 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 600 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_6
# 603 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 604 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 606 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 16, LittenWalkToGirl
# 607 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 608 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 609 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 610 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 611 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 612 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_7
# 615 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 617 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 618 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, LumineCaveWalkAway
# 619 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 16, LumineCaveWalkAway
# 620 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 622 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_8
# 627 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 630 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SUSPICIOUS, FALSE
# 632 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 633 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 634 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 635 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, LumineCaveWalkAway
# 636 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, LumineCaveWalkAway
# 637 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 638 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 1
# 639 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 2
# 640 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 11
# 641 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 16
# 642 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 1, 47, 0
# 643 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 2, 47, 0
# 644 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 11, 47, 0
# 645 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 16, 47, 0
# 646 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setvar VAR_TEMP_0, 1
# 647 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
# 649 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
# 650 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	savebgm MUS_DUMMY
# 651 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadedefaultbgm
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_Text_0:
# 31 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "{COLOR RED}(No more salt here.)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Cringe_Text_0:
# 42 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "I'm hoping to find some diamonds here\n"
	.string "tonight!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC1_Text_0:
# 52 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "We heard there was a mass outbreak\n"
	.string "blocking the cave, but it seems like it's\l"
	.string "already been resolved...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_0:
# 90 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Fascinating... The sheer ferocity of an\n"
	.string "Aggron is truly without parallel...\p"
	.string "Their adamantine iron hide that serves\n"
	.string "as both sword and shield, compounded\l"
	.string "with their instinctive territorial\l"
	.string "nature...\p"
	.string "Yes... This mass outbreak has proved\n"
	.string "rather beneficial in realizing the\l"
	.string "potential of Pokémon...\p"
	.string "Oh?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_1:
# 103 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Ah, please excuse my ramblings, trainer.{PAUSE 30}\n"
	.string "I was simply enamored by the majesty of\l"
	.string "the Aggron over there.\p"
	.string "I do advise that you keep a safe\n"
	.string "distance, however.\p"
	.string "They have claimed this cavern as their\n"
	.string "home, and will not show mercy to those\l"
	.string "who dare trespass it.\p"
	.string "It is in everyone's best interest to\n"
	.string "stay put until the authorities arrive.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_2:
# 122 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Eeeh?{PAUSE 30} But my poor little Litten is\n"
	.string "getting picked on by those meanies!\p"
	.string "Please, can't you save her?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_3:
# 134 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "I understand your frustrations, but it\n"
	.string "is too dangerous for any of us to tread\l"
	.string "onto their territory.\p"
	.string "Even I do not possess the capabilities\n"
	.string "to surmount a mighty Aggron.\p"
	.string "All we can do is hope for the best and\n"
	.string "await the Silverwing Order.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_4:
# 147 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "B-But!...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_5:
# 162 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "You still wish to pass to rescue her\n"
	.string "Litten, despite my warnings?\p"
	.string "Hm...{PAUSE 30} I cannot in good faith let such a\n"
	.string "young trainer go on alone...\p"
	.string "But if you are that confident in your\n"
	.string "abilities, I would like to verify them\l"
	.string "first in a battle.\p"
	.string "If you can best me, I will grant you\n"
	.string "passage to save her Pokémon.\p"
	.string "I will give you a moment to prepare.\n"
	.string "Speak to me when you are ready.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_6:
# 174 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Have you made the necessary\n"
	.string "preparations for our battle?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_7:
# 178 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Very well. Prove to me that you have\n"
	.string "what it takes!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_8:
# 180 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Intriguing...\pYou've exceeded my expectations,{PAUSE 30}\nthat's for sure...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_9:
# 185 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "{COLOR GREEN}Alba: {COLOR DARK_GRAY}I must applaud you for your\n"
	.string "tactical prowess, trainer.\p"
	.string "As agreed upon, I will allow you to\n"
	.string "engage the Aggron by yourself.\p"
	.string "Please do take extreme care. Your next\n"
	.string "battle will not be against a trainer, but\l"
	.string "a truly savage beast.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_10:
# 218 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Please do take extreme care. Your next\n"
	.string "battle will not be against a trainer, but\l"
	.string "a truly savage beast.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_0:
# 230 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Please save my kitty!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_1:
# 235 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Waaaah!{PAUSE 30} My Litten is trapped over there\n"
	.string "with those big bad bullies!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC1_Text_0:
# 247 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "See that big strong Aggron, buddy?\n"
	.string "That's what you're gonna grow up to be!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Aron_Text_0:
# 258 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Ron... {COLOR BLUE}(I'm glad to be owned by a trainer.\n"
	.string "The wild Pokémon world is scary.)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Swampert_Text_0:
# 268 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "{COLOR RED}(Looks like Swampert is out of\n"
	.string "commission.)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC2_Text_0:
# 278 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "The horns of an Aggron are strong\n"
	.string "enough to pierce steel with ease, while\l"
	.string "their claws can shred through the\l"
	.string "strongest of bedrock.\p"
	.string "It's believed that ancient generals\n"
	.string "used to wear armor made from the\l"
	.string "plating of an Aggron as a symbol of\l"
	.string "strength.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC3_Text_0:
# 289 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "I could easily take down an Aggron by\n"
	.string "myself.{PAUSE 30} Just give me enough prep time!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC4_Text_0:
# 298 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Swampert! Are you alright?\p"
	.string "Argh... We couldn't even put a dent on\n"
	.string "that Aggron...\p"
	.string "It doesn't add up. Why weren't water or\n"
	.string "ground moves super effective on it...?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC5_Text_0:
# 310 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "I'm gonna miss out on meeting\n"
	.string "STARLIGHT cause of this DUMB Aggron!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_0:
# 320 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Eureka! A deposit of Sodium Chloride!\n"
	.string "This will go great with my french fries!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_1:
# 326 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Huh? What do you mean, it's not the\n"
	.string "same?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Litten_Text_0:
# 337 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Mew... {COLOR BLUE}(git mes out)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_0:
# 508 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "{COLOR RED}(Phew... Seems like defeating the Aggron\n"
	.string "caused the other Pokémon to flee...)\p"
	.string "(That Aggron... It was exuding the same\n"
	.string "shadowy aura as the Mightyena I fought\l"
	.string "with Melissa...)\p"
	.string "(What's going on here...?){PAUSE 60}\p"
	.string "{COLOR GREEN}Alba: {COLOR DARK_GRAY}Incredible...{PAUSE 30} I cannot believe my\n"
	.string "eyes...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_1:
# 529 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "My apologies, but I never caught your\n"
	.string "name. May I ask it by chance?\p"
	.string "...\p"
	.string "Ah, {PLAYER}, is it?\p"
	.string "Tell me, {PLAYER}, what is it that\n"
	.string "allows you to bring forth the latent\l"
	.string "power of your Pokémon?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_2:
# 544 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Hm... I see...{PAUSE 30} You believe it is your\n"
	.string "ability to understand and talk to\l"
	.string "Pokémon that enables you to form\l"
	.string "stronger bonds with them, thereby\l"
	.string "drawing out their maximum potential?\p"
	.string "An interesting prospect, {PLAYER}.\n"
	.string "Your response mirrors that of an old\l"
	.string "colleague I once worked with...\p"
	.string "I too hypothesize that the power of\n"
	.string "emotions is the key to unlocking a\l"
	.string "Pokémon's true strength...\p"
	.string "But which emotion specifically? I still\n"
	.string "have yet to figure out...\p"
	.string "Until then, my research on the mind of\n"
	.string "Pokémon continues...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_3:
# 561 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Hm? Did I notice anything strange\n"
	.string "about the Aggron?\p"
	.string "Not particularly...{PAUSE 30} Did you happen to\n"
	.string "see something that I did not?\p"
	.string "...\p"
	.string "Is that so...?\p"
	.string "Hmm... A menacing dark aura emanating\n"
	.string "from a Pokémon acting unnaturally...\p"
	.string "...and you say you encountered a\n"
	.string "Mightyena with the same traits as well?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_4:
# 576 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "That is rather worrisome, if what you\n"
	.string "say is true...{PAUSE 30} I was unable to observe\l"
	.string "anything like that from the Aggron.\p"
	.string "Perhaps I should take it in for further\n"
	.string "analysis...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_5:
# 587 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "My precious little Litten! I'm never\n"
	.string "gonna let you out of my sight again!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_6:
# 601 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Thank you, thank you, thank you,\n"
	.string "trainer! Here, I know it's not much, but\l"
	.string "please take it for saving my Litten!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_7:
# 613 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "The first thing we'll be doing at\n"
	.string "Bellehaven is getting you a leash!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_8:
# 623 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "{COLOR GREEN}Alba: {COLOR DARK_GRAY}...and with that, I believe it is\n"
	.string "about time I take my leave as well.\p"
	.string "Our battle was quite fruitful,\n"
	.string "{PLAYER}. I've little opportunities to\l"
	.string "interact with trainers with your...{PAUSE 30}\l"
	.string "expertise.\p"
	.string "Perhaps we shall meet again in the\n"
	.string "future. Hopefully by then, I will have\l"
	.string "found the answer to my hypothesis... as\l"
	.string "well as the answer to yours.$"
