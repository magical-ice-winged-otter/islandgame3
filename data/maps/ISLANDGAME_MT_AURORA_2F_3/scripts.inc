ISLANDGAME_MT_AURORA_2F_3_MapScripts::
# 9 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MT_AURORA_2F_3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MT_AURORA_2F_3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	compare VAR_ROSEVALE_STATE, 1
	goto_if_ne ISLANDGAME_MT_AURORA_2F_3_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

ISLANDGAME_MT_AURORA_2F_3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	setflag FLAG_TEMP_1
	return

ISLANDGAME_MT_AURORA_2F_3_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 11 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	compare VAR_ROSEVALE_STATE, 5
	goto_if_ne ISLANDGAME_MT_AURORA_2F_3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return


# 17 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
WalkInPlaceUp:
# 18 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_in_place_up
	step_end

# 21 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
JumpInPlaceDown2:
# 22 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	jump_in_place_down
# 22 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	jump_in_place_down
	step_end

ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene::
# 26 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	lock
# 27 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 30 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 31 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_Delay32
# 32 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 33 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_0
# 37 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	closemessage
# 39 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_WEAK
# 40 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 4, JumpInPlaceDown2
# 41 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_Delay48
# 42 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 43 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, WalkInPlaceUp
# 44 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_Delay32
# 45 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 46 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_1
# 49 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_2
# 55 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	closemessage
# 59 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_QuestionMark
# 60 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_Delay48
# 61 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 62 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_Delay32
# 63 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 65 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_3
# 69 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	closemessage
# 71 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 72 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_Delay32
# 73 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 74 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_4
# 75 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	closemessage
# 76 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	fadedefaultbgm
# 77 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	setvar VAR_ROSEVALE_STATE, 5
# 78 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_Delay48
# 79 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 80 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	release
	return


ISLANDGAME_MT_AURORA_2F_3_Arthur_Interact::
# 84 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	lock
# 85 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	faceplayer
# 86 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_4
# 87 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	release
	return


ISLANDGAME_MT_AURORA_2F_3_Azurill_Interact::
# 91 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	lock
# 92 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	faceplayer
# 93 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_WEAK
# 94 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ISLANDGAME_MT_AURORA_2F_3_Azurill_Interact_Text_0
# 95 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	release
	return


ISLANDGAME_MT_AURORA_2F_3_EdeaInteract::
# 99 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	lock
# 100 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	faceplayer
# 101 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	trainerbattle_single TRAINER_MT_AURORA_EDEA, ISLANDGAME_MT_AURORA_2F_3_EdeaInteract_Text_0, ISLANDGAME_MT_AURORA_2F_3_EdeaInteract_Text_1, ThiefDefeated
	return


# 106 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
Movement_AzurillOutOfWay:
# 107 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	face_right
# 108 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	lock_facing_direction
# 109 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_left
# 110 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	unlock_facing_direction
	step_end

# 113 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
Movement_ThiefRunAway:
# 114 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	delay_16
# 115 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_faster_left
# 116 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_faster_down
# 116 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_faster_down
# 116 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_faster_down
# 116 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_faster_down
# 116 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_faster_down
# 116 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_faster_down
# 116 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_faster_down
	step_end

# 119 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
Movement_AzurillHappy:
# 120 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	jump_in_place_right
# 120 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	jump_in_place_right
# 121 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_fast_right
# 122 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_fast_down
# 122 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_fast_down
# 123 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	face_right
	step_end

# 126 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
Movement_ArticunoDescend:
# 127 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_slow_down
# 127 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_slow_down
# 127 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_slow_down
# 127 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_slow_down
	step_end

# 130 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
Movement_ArticunoAscend:
# 131 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	lock_facing_direction
# 132 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_slow_up
# 132 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_slow_up
# 132 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_slow_up
# 132 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_slow_up
	step_end

ThiefDefeated:
# 136 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	lock
# 139 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 140 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	setvar VAR_0x8000, 12
# 141 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	setvar VAR_0x8001, 15
# 142 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	callnative TeleportCamera
# 143 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 144 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 12, 15
# 145 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 149 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 150 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, WalkInPlaceUp
# 151 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_Delay32
# 152 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 153 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ThiefDefeated_Text_0
# 156 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 157 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ThiefDefeated_Text_1
# 163 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	closemessage
# 164 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
# 165 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmoncry
# 167 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_QuestionMark
# 168 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_QuestionMark
# 169 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 4, Common_Movement_QuestionMark
# 170 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 171 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 172 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 173 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	closemessage
# 174 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 175 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 176 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 179 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	fadescreen FADE_TO_WHITE
# 180 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	addobject 2
# 181 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	setobjectxy 2, 12, 9
# 182 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 183 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 2, Movement_ArticunoDescend
# 184 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 187 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 188 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 189 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 190 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 191 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	playse SE_PIN
# 192 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 193 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 194 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 195 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 196 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 197 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 198 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 199 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 200 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 201 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 202 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
# 203 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 204 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 206 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ThiefDefeated_Text_2
# 211 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	closemessage
# 213 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 4, Movement_AzurillOutOfWay
# 214 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Movement_ThiefRunAway
# 215 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 216 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 217 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 218 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 219 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 220 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 221 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 222 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	removeobject 3
# 223 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 224 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_NORMAL
# 225 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmoncry
# 226 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	closemessage
# 227 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 228 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 229 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 230 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 231 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 232 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 235 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	delay 30
# 236 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 2, Movement_ArticunoAscend
# 237 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 238 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	fadescreen FADE_TO_WHITE
# 239 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	removeobject 2
# 240 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 242 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, WalkInPlaceUp
# 243 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 244 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_Delay32
# 245 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 246 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 247 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ThiefDefeated_Text_3
# 252 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 253 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 4, Movement_AzurillHappy
# 254 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 255 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 256 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ThiefDefeated_Text_4
# 259 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 260 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 261 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ThiefDefeated_Text_5
# 264 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	closemessage
# 265 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 266 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 267 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 268 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 270 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ThiefDefeated_Text_6
# 275 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	setvar VAR_ROSEVALE_STATE, 2
# 277 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 278 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	delay 30
# 279 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	removeobject 5
# 282 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	warp MAP_ISLANDGAME_ROSEVALE, 13, 26
	return


ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_0:
# 34 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR GREEN}Thief: {COLOR DARK_GRAY}Pfft. THAT was your attempt at\n"
	.string "battling?\p"
	.string "You didn't even land a single hit on any\n"
	.string "of my Pokémon!\p"
	.string "{COLOR DARK_GRAY}And you came ALL this way just to try\n"
	.string "and stop me? How pathetic.$"

ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_1:
# 46 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Mgrgrgr...$"

ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_2:
# 50 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR GREEN}Thief: {COLOR DARK_GRAY}Haha, this shiny Azurill is gonna\n"
	.string "snag me a fortune on the black market!\p"
	.string "As for you...{PAUSE 60} quit moping and just and\n"
	.string "get a new one for your little sis.\p"
	.string "She's just a dumb child, she probably\n"
	.string "won't even notice the difference.\p"
	.string "Country bumpkins like you don't\n"
	.string "understand the value of shiny Pokémon.$"

ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_3:
# 66 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR DARK_GRAY}Hm?{PAUSE 60} And just who are you? A friend of\n"
	.string "his?\p"
	.string "{COLOR DARK_GRAY}Beat it, kid! Unless you want to get\n"
	.string "demolished like this loser!$"

ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_4:
# 74 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Please! You have to stop her!\n"
	.string "That Azurill means everything to my\l"
	.string "little sister!\p"
	.string "I-I tried my best...{PAUSE 60} but it just wasn't\n"
	.string "enough...$"

ISLANDGAME_MT_AURORA_2F_3_Azurill_Interact_Text_0:
# 94 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "Azu... {COLOR BLUE}(pls halp)$"

ISLANDGAME_MT_AURORA_2F_3_EdeaInteract_Text_0:
# 102 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR GREEN}Thief: {COLOR DARK_GRAY}-sigh- This is why I hate kids.{PAUSE 60}\n"
	.string "You brats just never listen!$"

ISLANDGAME_MT_AURORA_2F_3_EdeaInteract_Text_1:
# 103 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "I-Impossible! Just who are you!?$"

ThiefDefeated_Text_0:
# 154 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Ha! You lost!{PAUSE 60} Now, give me back\n"
	.string "my sister's Azurill!$"

ThiefDefeated_Text_1:
# 158 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR GREEN}Edea: {COLOR DARK_GRAY}In your dreams, squirt! I'm not\n"
	.string "giving this Pokémon up! It's worth more\l"
	.string "money than you'll ever amount to!\p"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}H-Huh? But you have to! We beat\n"
	.string "you, fair and square!\p"
	.string "{COLOR GREEN}Edea: {COLOR DARK_GRAY}And? Who said winning means I\n"
	.string "have to give my precious cargo up? I'm\l"
	.string "taking this Azurill with me! Peace out,\l"
	.string "losers!\p"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}No! W-Wait!$"

ThiefDefeated_Text_2:
# 207 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR GREEN}Edea: {COLOR DARK_GRAY}W-What!? Articuno!? Where in the\n"
	.string "blazes did you come from!?\p"
	.string "Ngggh...{PAUSE 60} F-Fine! I'll give back their\n"
	.string "stupid Azurill!\p"
	.string "You punks got lucky this time! Now... if\n"
	.string "you don't mind me...{PAUSE 60} I'm outta here!$"

ThiefDefeated_Text_3:
# 248 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Holy moly...{PAUSE 60} Was that...\n"
	.string "Articuno!?\p"
	.string "It left before we could say anything...{PAUSE 60}\n"
	.string "T-Thank you for the help, Articuno!$"

ThiefDefeated_Text_4:
# 257 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "Azurill! I'm so sorry for not being more\n"
	.string "watchful. I should've never left you\l"
	.string "and my little sister out of sight.$"

ThiefDefeated_Text_5:
# 262 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "Oh, and thank you too! Er...$"

ThiefDefeated_Text_6:
# 271 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}{PLAYER}? Well, I owe you big\n"
	.string "and Articuno big time for helping me.\p"
	.string "I couldn't do anything... If it weren't\n"
	.string "for you and Articuno, Azurill would've\l"
	.string "been lost forever!\p"
	.string "Ah... Ah... Achoo!{PAUSE 60} Brrr... It's freezing in\n"
	.string "here.{PAUSE 60} Let's head back to Rosevale.$"
