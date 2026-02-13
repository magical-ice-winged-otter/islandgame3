ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts::
# 6 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 20 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	gettime
# 9 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 9 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 13 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setflag FLAG_TEMP_2
ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 16 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setvar VAR_TEMP_0, 0
	return

ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setflag FLAG_TEMP_3
	goto ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 21 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_ReturnFromHell
	.2byte 0


ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_ReturnFromHell::
# 26 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	lockall
# 27 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setvar VAR_TEMP_0, 1
# 28 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	checkitem ITEM_ISLANDGAME_STRANGE_DISC
# 29 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_ReturnFromHell_2
	return

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_ReturnFromHell_1:
# 30 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 31 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 32 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 33 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 34 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 35 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 36 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_ReturnFromHell_Text_0
# 42 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	closemessage
# 43 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_ReturnFromHell_2:
# 29 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	goto_if_set FLAG_ANOMALY01_DEFEATED, ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_ReturnFromHell_1
	return


ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop::
# 48 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	lock
# 49 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	goto_if_set FLAG_ANOMALY01_DEFEATED, ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_2
# 55 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_Text_1
# 59 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	checkitem ITEM_ISLANDGAME_STRANGE_DISC
# 60 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_5
ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_1:
# 86 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_2:
# 50 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_Text_0
	goto ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_1

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_5:
# 61 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_Text_2, MSGBOX_YESNO
# 64 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_7
	goto ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_1

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_7:
# 65 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	special Script_FadeOutMapMusic
# 66 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitstate
# 67 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_Text_3
# 73 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	closemessage
# 74 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 75 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setvar VAR_RESULT, 0
# 76 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	playse SE_ORB
# 77 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	special DoOrbEffect
# 78 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 300
# 79 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	special FadeOutOrbEffect
# 80 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, spookySpin
# 81 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 82 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	warp MAP_ISLANDGAME_ANOMALY01_1F, 8, 15
	goto ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_1


ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_TV::
# 90 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	lock
# 91 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_TV_Text_0
# 95 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll::
# 100 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	lock
# 101 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	switch VAR_CAMP_PERSI_STATE
# 102 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	case 1, ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_3
# 213 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_Text_9
ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_1:
# 215 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	closemessage
# 216 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_3:
# 103 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_Text_0
# 107 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setflag FLAG_FOLLOWERS_DISABLED
# 108 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	hidefollower
# 109 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	closemessage
# 110 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 10
# 111 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	playse SE_EXIT
# 112 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	addobject 2
# 113 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setobjectxy 2, 4, 4
# 114 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 30
# 115 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement 2, Common_Movement_QuestionMark
# 116 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 117 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 118 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 119 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 120 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_Text_1
# 123 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	closemessage
# 124 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 125 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	playse SE_PIN
# 126 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 127 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 128 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 129 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 130 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 131 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_Text_2
# 134 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	closemessage
# 135 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 136 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 137 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 138 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_Text_3
# 146 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	closemessage
# 147 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 148 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 149 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 150 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement 2, Common_Movement_QuestionMark
# 151 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 152 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_Text_4
# 157 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	closemessage
# 158 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 159 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 160 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 30
# 161 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	trainerbattle_no_intro TRAINER_CAMP_PERSI_THIEF, ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_Text_5
# 162 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement 2, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Backoff
# 163 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 164 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 165 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_Text_6
# 169 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	closemessage
# 170 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 171 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 172 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 173 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_Text_7
# 179 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	closemessage
# 180 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 181 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 182 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 183 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 184 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 185 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 186 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 187 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 188 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_Text_8
# 193 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	closemessage
# 194 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 195 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 196 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement 2, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Unlock
# 197 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement 2, Common_Movement_WalkDown
# 198 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 199 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	playse SE_EXIT
# 200 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitse
# 201 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setobjectxyperm 2, -1, -1
# 202 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	removeobject 2
# 203 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setvar VAR_CAMP_PERSI_STATE, 2
# 204 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 205 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 206 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 207 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 208 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 209 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 210 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	giveitem ITEM_ISLANDGAME_TRADING_CARD
# 211 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
	goto ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_1


# 219 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_Backoff:
# 220 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	face_up
# 221 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	lock_facing_direction
# 222 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	walk_fast_down
	step_end

# 225 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_Unlock:
# 226 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	unlock_facing_direction
	step_end

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_ReturnFromHell_Text_0:
# 37 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "...\p"
	.string "{COLOR RED}(Augh... my head...)\p"
	.string "(What in the world was all of that? Was\n"
	.string "it all just a dream?)\p"
	.string "(Seems like the program's deleted itself\n"
	.string "as well...)$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_Text_0:
# 51 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "> You try to open “LostSilver.exe”, but\n"
	.string "it just results in an error.$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_Text_1:
# 56 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "It's a dusty old laptop. It looks like\n"
	.string "it's been here for years.\p"
	.string "There seems to still be some power in it.\n"
	.string "You could probably still use it.$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_Text_2:
# 62 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "Insert the strange disc into the\n"
	.string "laptop?$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_Text_3:
# 68 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "> You booted up the laptop and inserted\n"
	.string "the disc.\p"
	.string "“LostSilver.exe” is automatically\n"
	.string "installed and opened.\p"
	.string "It's loading...{PAUSE 60} loading...{PAUSE 60} loading...{PAUSE 60}\p"
	.string "{COLOR RED}(Huh? It seems like the laptop froze\n"
	.string "while attempting to run the game.)$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_TV_Text_0:
# 92 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "It's a really old television set riddled\n"
	.string "with cobwebs.\p"
	.string "You tried to turn it on, but nothing\n"
	.string "happened.$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_Text_0:
# 104 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "{COLOR RED}(It's just a regular old Gulpin doll.)\p"
	.string "(Oh? There seems to be something\n"
	.string "stashed inside it...)$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_Text_1:
# 121 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "Huh? What are you doing here?$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_Text_2:
# 132 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "H-Hey! You were snooping around in my\n"
	.string "secret base, weren't you!?$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_Text_3:
# 139 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "Mrgrgr... {PAUSE 30}Fine! You got me! I stole it! I'm\n"
	.string "the one who took that camper's card!\p"
	.string "It's not fair! I've been using up my\n"
	.string "allowance for WEEKS trying to get one,\l"
	.string "and he pulls it from his FIRST pack?\p"
	.string "A card with THAT much power shouldn't\n"
	.string "be allowed! There's no reason a newbie\l"
	.string "should be able to beat me so easily!\p"
	.string "I'm just leveling the playing field, is\n"
	.string "all! You understand, right!?\p"
	.string "...\p"
	.string "...Now that you know the truth, you're\n"
	.string "gonna tattle on me, aren't you?$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_Text_4:
# 153 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "H-Huh? You'll let me go... if I just beat\n"
	.string "you in a Pokémon battle?\p"
	.string "Heh... I guess have no choice but to\n"
	.string "oblige.\p"
	.string "I'll show you the power of my bug\n"
	.string "Pokémon!$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_Text_5:
# 161 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "T-This isn't right! I should've won!$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_Text_6:
# 166 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "I don't get it... My Pokémon should've\n"
	.string "won! They're much stronger then yours!\p"
	.string "Is...{PAUSE 30} power not all there is to battling?\n"
	.string "Can weaker Pokémon still beat stronger\l"
	.string "Pokémon with the right strategy?$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_Text_7:
# 174 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "I... I see. That's what you were trying\n"
	.string "to teach me with that battle, wasn't it?\p"
	.string "To show me how dumb it was of me to get\n"
	.string "so worked up over a trading card...\p"
	.string "Heh... I sure feel like a real big stupid\n"
	.string "jerk now.\p"
	.string "Well, I guess it's time for me pay for my\n"
	.string "crimes...$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_Text_8:
# 189 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "Huh? You won't tell on me? B-But, I\n"
	.string "lost...\p"
	.string "...\p"
	.string "O-Okay. Thank you so much! I won't\n"
	.string "forget your kindness, trainer! I\l"
	.string "promise to never ever steal again!$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_GulpinDoll_Text_9:
# 213 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "{COLOR RED}(It's just a regular old Gulpin doll.)$"
