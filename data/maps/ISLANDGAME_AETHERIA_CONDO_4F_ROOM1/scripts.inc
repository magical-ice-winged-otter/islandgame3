ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_MapScripts::
# 2 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	goto_if_set FLAG_AETHERIA_CYNTHIA_JUMPSCARE, ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	setvar VAR_TEMP_0, 0
	return

ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaCutscene
	.2byte 0


ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaCutscene::
# 13 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	lockall
# 14 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	applymovement LOCALID_CYNTHIA, ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaCutscene_Movement_0
# 15 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	waitmovement 0
# 16 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaCutscene_Text_0
# 21 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	closemessage
# 22 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	applymovement LOCALID_CYNTHIA, ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaCutscene_Movement_1
# 23 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	waitmovement 0
# 24 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	playse SE_PIN
# 25 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	applymovement LOCALID_CYNTHIA, ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaCutscene_Movement_2
# 26 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	waitmovement 0
# 27 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_CHAMPION, TRUE
# 28 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	applymovement LOCALID_CYNTHIA, ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaCutscene_Movement_3
# 29 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaCutscene_Text_1
# 40 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	call ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaBattle
# 42 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	setflag FLAG_AETHERIA_CYNTHIA_JUMPSCARE
# 43 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	setvar VAR_TEMP_0, 1
# 44 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	savebgm MUS_DUMMY
# 45 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	fadedefaultbgm
# 46 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_Cynthia::
# 51 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	lock
# 52 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	faceplayer
# 53 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	goto_if_set FLAG_AETHERIA_CYNTHIA_DEFEATED, ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_Cynthia_2
# 61 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_Cynthia_Text_1, MSGBOX_YESNO
# 64 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_Cynthia_5
ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_Cynthia_1:
# 68 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	closemessage
# 69 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_Cynthia_2:
# 54 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_Cynthia_Text_0, MSGBOX_AUTOCLOSE
	goto ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_Cynthia_1

ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_Cynthia_5:
# 65 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	call ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaBattle
	goto ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_Cynthia_1


ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaBattle::
# 74 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 75 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	trainerbattle_no_intro TRAINER_AETHERIA_CYNTHIA, ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaBattle_Text_0
# 76 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 77 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 78 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	switch VAR_RESULT
# 79 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaBattle_3
# 90 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	special HealPlayerParty
# 91 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaBattle_Text_2
ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaBattle_1:
	return

ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaBattle_3:
# 80 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaBattle_Text_1
# 87 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	giveitem ITEM_SHINY_CHARM
# 88 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	setflag FLAG_AETHERIA_CYNTHIA_DEFEATED
	goto ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaBattle_1


# 14 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaCutscene_Movement_0:
# 14 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	walk_in_place_up
# 14 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	walk_in_place_up
# 14 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	delay_16
# 14 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	delay_16
# 14 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	delay_16
# 14 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	walk_in_place_fast_up
# 14 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	delay_16
# 14 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	delay_16
	step_end

# 22 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaCutscene_Movement_1:
# 22 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	delay_16
# 22 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	delay_16
# 22 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	delay_16
# 22 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	emote_question_mark
# 22 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	delay_16
# 22 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	delay_16
# 22 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	delay_16
	step_end

# 25 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaCutscene_Movement_2:
# 25 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	face_down
# 25 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	delay_16
# 25 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	emote_exclamation_mark
# 25 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	delay_16
# 25 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	delay_16
# 25 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	delay_16
	step_end

# 28 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaCutscene_Movement_3:
# 28 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	walk_down
# 28 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	walk_down
# 28 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	delay_16
# 28 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	delay_16
# 28 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	delay_16
	step_end

ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaCutscene_Text_0:
# 17 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}Hmm, I'm not quite sure I'm feeling\n"
	.string "this outfit...\p"
	.string "It's a lot more... daring than what I am\n"
	.string "used to.\p"
	.string "...Oh?$"

ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaCutscene_Text_1:
# 30 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	.string "And whom might you be?\p"
	.string "...\p"
	.string "Ah, {PLAYER}, is it? It's good to meet\n"
	.string "you.\p"
	.string "My name is Cynthia. I am a Pokémon\n"
	.string "trainer, just like you.\p"
	.string "I've come to these exotic isles to\n"
	.string "research its Pokémon mythology, and to\l"
	.string "take a little vacation, as is visually\l"
	.string "apparent, a-ha.\p"
	.string "The tale of the great Sea Guardian... it\n"
	.string "is a story familiar to me in concept, but\l"
	.string "I hope to learn more in detail in the\l"
	.string "next coming weeks.\p"
	.string "Additionally, I also hope to learn more\n"
	.string "about the trainers here.\p"
	.string "Would you care to be my first\n"
	.string "investigation opportunity?$"

ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_Cynthia_Text_0:
# 55 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	.string "{COLOR GREEN}Cynthia: {COLOR DARK_GRAY}What do you think of my beach\n"
	.string "attire?\p"
	.string "Is it befitting of me? Is it too bold?\p"
	.string "Ah, perhaps it is not a very appropriate\n"
	.string "question to be asking of you.$"

ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_Cynthia_Text_1:
# 62 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	.string "{COLOR GREEN}Cynthia: {COLOR DARK_GRAY}Returned for another round,\n"
	.string "have we?$"

ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaBattle_Text_0:
# 75 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	.string "That was a fun battle, {PLAYER}.\pYou truly are exceptional!$"

ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaBattle_Text_1:
# 82 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	.string "{COLOR GREEN}Cynthia:{COLOR DARK_GRAY} What an intense fight!\p"
	.string "It seems that no matter where my\n"
	.string "travels take me, I always meet a trainer\l"
	.string "like you, {PLAYER}.\p"
	.string "I'd like you to have this. A gift for\n"
	.string "providing me with such an exhilarating\l"
	.string "experience.$"

ISLANDGAME_AETHERIA_CONDO_4F_ROOM1_CynthiaBattle_Text_2:
# 92 "data/maps/ISLANDGAME_AETHERIA_CONDO_4F_ROOM1/scripts.pory"
	.string "{COLOR GREEN}Cynthia:{COLOR DARK_GRAY} What a refreshing battle! Your\n"
	.string "Pokémon fought with vim and vigor,\l"
	.string "{PLAYER}. I'd like to battle again in\l"
	.string "the future.$"
