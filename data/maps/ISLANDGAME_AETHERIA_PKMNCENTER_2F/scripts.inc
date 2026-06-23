ISLANDGAME_AETHERIA_PKMNCENTER_2F_MapScripts::
# 4 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_AETHERIA_PKMNCENTER_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 12 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_AETHERIA_PKMNCENTER_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_AETHERIA_PKMNCENTER_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	compare VAR_SERAFINA_STATE, 0
	goto_if_gt ISLANDGAME_AETHERIA_PKMNCENTER_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 9 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_AETHERIA_PKMNCENTER_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	setflag FLAG_TEMP_1
	return

ISLANDGAME_AETHERIA_PKMNCENTER_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	map_script_2 VAR_SERAFINA_STATE, 0, ISLANDGAME_AETHERIA_PKMNCENTER_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

ISLANDGAME_AETHERIA_PKMNCENTER_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 14 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	call ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene
	return


ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene::
# 23 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	lock
# 24 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	delay 30
# 25 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene_Movement_0
# 26 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	delay 30
# 27 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	applymovement LOCALID_BOY_3, ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene_Movement_1
# 28 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	waitmovement 0
# 29 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	delay 30
# 30 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene_Text_0
# 33 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	closemessage
# 34 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	playbgm MUS_BW_MUSICAL_STARDOM, TRUE
# 35 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	applymovement LOCALID_LASS, ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene_Movement_2
# 36 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	waitmovement 0
# 37 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	delay 30
# 38 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene_Text_1
# 42 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	closemessage
# 43 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	delay 30
# 44 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	applymovement LOCALID_BOY_4, ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene_Movement_3
# 45 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	waitmovement 0
# 46 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene_Text_2
# 49 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	closemessage
# 50 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	delay 30
# 51 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	applymovement LOCALID_SERAFINA, ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene_Movement_4
# 52 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	waitmovement 0
# 53 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	playse SE_SHINY
# 54 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	waitse
# 55 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene_Text_3
# 61 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	giveitem ITEM_CHERISH_BALL
# 62 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene_Text_4
# 66 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	closemessage
# 67 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 69 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	setflag FLAG_TEMP_1
# 70 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	clearflag FLAG_TEMP_2
# 71 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	removeobject LOCALID_SERAFINA
# 72 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	removeobject LOCALID_MAWILE
# 73 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	removeobject LOCALID_LASS
# 74 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	removeobject LOCALID_BOY_4
# 75 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	removeobject LOCALID_BEAUTY
# 76 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	removeobject LOCALID_MAN_5
# 77 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	removeobject LOCALID_BOY_3
# 78 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	removeobject LOCALID_WOMAN_2
# 80 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	addobject 12
# 81 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	addobject 14
# 82 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	addobject 15
# 83 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	addobject 16
# 84 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	addobject 17
# 85 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	addobject 18
# 87 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	setvar VAR_SERAFINA_STATE, 1
# 89 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 91 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	savebgm MUS_DUMMY
# 92 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	fadedefaultbgm
# 93 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_PKMNCENTER_2F_Lass::
# 99 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	lock
# 100 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	faceplayer
# 101 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_PKMNCENTER_2F_Lass_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_PKMNCENTER_2F_Obsessed::
# 107 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	lock
# 108 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_PKMNCENTER_2F_Obsessed_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_PKMNCENTER_2F_Lady::
# 116 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	lock
# 117 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	faceplayer
# 118 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_PKMNCENTER_2F_Lady_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_PKMNCENTER_2F_Beauty::
# 125 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	lock
# 126 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	faceplayer
# 127 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_PKMNCENTER_2F_Beauty_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_PKMNCENTER_2F_Simp::
# 134 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	lock
# 135 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	faceplayer
# 136 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_PKMNCENTER_2F_Simp_Text_0
	return


ISLANDGAME_AETHERIA_PKMNCENTER_2F_Man::
# 143 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	lock
# 144 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	faceplayer
# 145 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_PKMNCENTER_2F_Man_Text_0, MSGBOX_AUTOCLOSE
	return


# 25 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene_Movement_0:
# 25 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	emote_question_mark
	step_end

# 27 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene_Movement_1:
# 27 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	walk_in_place_right
# 27 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	walk_in_place_right
	step_end

# 35 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene_Movement_2:
# 35 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	walk_in_place_right
# 35 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	walk_in_place_right
# 35 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	walk_in_place_right
	step_end

# 44 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene_Movement_3:
# 44 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	walk_in_place_right
	step_end

# 51 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene_Movement_4:
# 51 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	walk_in_place_left
# 51 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	walk_in_place_down
# 51 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	walk_in_place_right
# 51 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	walk_in_place_up
# 51 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	walk_in_place_left
# 51 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	face_down
# 51 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	face_right
# 51 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	face_up
# 51 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	face_left
# 51 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	jump_in_place_left
# 51 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	emote_heart
	step_end

ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene_Text_0:
# 31 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	.string "Huh? What's going on here?$"

ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene_Text_1:
# 39 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	.string "Omigod, no way...\p"
	.string "...It's Serafina! STARLIGHT Serafina!$"

ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene_Text_2:
# 47 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	.string "Miss Serafina! I looooove you! Please\n"
	.string "notice me!$"

ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene_Text_3:
# 56 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	.string "Haiiiyooooo! How's it going, my cute\n"
	.string "little sweetie pies?\p"
	.string "It's your sweet little cinnamon swirl,\n"
	.string "Serafina, here to commemorate the\l"
	.string "grand renovation of Aetheria's Pokémon\l"
	.string "Center!\p"
	.string "For those who aren't caught up with the\n"
	.string "lore, this Pokémon Center was the site\l"
	.string "of my first ever performance, when I\l"
	.string "was still just a teeny tiny donut hole!\l"
	.string "Hee-hee.\p"
	.string "Sooooo, in honor of their patronage, I'll\n"
	.string "be giving away these snazzy Sera-ffic\l"
	.string "Cherish Balls! Please enjoy them!$"

ISLANDGAME_AETHERIA_PKMNCENTER_2F_SerafinaCutscene_Text_4:
# 63 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	.string "Ooooh, and don't forget! I'll be\n"
	.string "performing at Keleu Theater in\l"
	.string "Amberidge later this week! It'll be my\l"
	.string "last hoorah before the Silverwing\l"
	.string "Festival!\p"
	.string "Stay scrumptious, my sweetie pies!\n"
	.string "Hee-hee.$"

ISLANDGAME_AETHERIA_PKMNCENTER_2F_Lass_Text_0:
# 102 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	.string "Serafina and Mawile are soooo pretty! I\n"
	.string "gotta know her makeup routine...$"

ISLANDGAME_AETHERIA_PKMNCENTER_2F_Obsessed_Text_0:
# 109 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	.string "I can't believe Miss Serafina touched\n"
	.string "my hand...\p"
	.string "I can never wash it ever again!$"

ISLANDGAME_AETHERIA_PKMNCENTER_2F_Lady_Text_0:
# 119 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	.string "Before Serafina joined STARLIGHT, she\n"
	.string "performed around various Pokémon\l"
	.string "Centers as an underground idol.\p"
	.string "Then suddenly out of nowhere, she\n"
	.string "exploded in popularity overnight!$"

ISLANDGAME_AETHERIA_PKMNCENTER_2F_Beauty_Text_0:
# 128 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	.string "Normally, idols don't get to design their\n"
	.string "own outfits, and their wardrobe is\l"
	.string "usually handled by professional\l"
	.string "stylists.\p"
	.string "But the team at STARLIGHT were so\n"
	.string "impressed with Serafina's fashion\l"
	.string "sense that they made her the head of\l"
	.string "their outfit design!$"

ISLANDGAME_AETHERIA_PKMNCENTER_2F_Simp_Text_0:
# 137 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	.string "I can't believe Sera managed to get the\n"
	.string "rest of STARLIGHT to play Amoongus on\l"
	.string "stream yesterday!\p"
	.string "I knew becoming a Tier 3 subscriber was\n"
	.string "worth the one month allowance...$"

ISLANDGAME_AETHERIA_PKMNCENTER_2F_Man_Text_0:
# 146 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER_2F/scripts.pory"
	.string "I knew that girl seemed familiar...\p"
	.string "She was a part of a three-way\n"
	.string "collaboration with Iono and Canari!$"
