ISLANDGAME_CAMP_PERSI_MapScripts::
# 21 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 22 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setobjectaswildencounter 32, ENCOUNTER_LAND
# 23 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setobjectaswildencounter 33, ENCOUNTER_LAND
# 26 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	quest_emote_on_warp 25, QUEST_PERSI_FAVORITE_CARD
# 28 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_set FLAG_CAMP_PERSI_JONAS_DEFEATED, ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 32 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	gettime
# 34 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 34 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 38 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_TEMP_2
ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 41 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	returnqueststate QUEST_PERSI_FAVORITE_CARD
# 42 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	switch VAR_RESULT
# 43 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	return

ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 29 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 35 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_TEMP_1
	goto ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 43 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_TEMP_3
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle1::
# 58 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_1, ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text_0, ISLANDGAME_CAMP_PERSI_HanzoKatana
# 59 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text_1
# 62 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	closemessage
# 63 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_HanzoKatana::
# 74 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 76 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_HanzoKatana_Text_0
# 81 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkitem ITEM_ISLANDGAME_MACHETE
# 82 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_HanzoKatana_2
ISLANDGAME_CAMP_PERSI_HanzoKatana_1:
# 85 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	closemessage
# 86 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_HanzoKatana_2:
# 83 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_ISLANDGAME_MACHETE
	goto ISLANDGAME_CAMP_PERSI_HanzoKatana_1


ISLANDGAME_CAMP_PERSI_TrainerBattle2::
# 92 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_2, ISLANDGAME_CAMP_PERSI_TrainerBattle2_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle2_Defeated_Text
# 93 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle2_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle3::
# 114 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_3, ISLANDGAME_CAMP_PERSI_TrainerBattle3_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle3_Defeated_Text
# 115 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle3_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle4::
# 136 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_4, ISLANDGAME_CAMP_PERSI_TrainerBattle4_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle4_Defeated_Text
# 137 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle4_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle5::
# 162 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_5, ISLANDGAME_CAMP_PERSI_TrainerBattle5_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle5_Defeated_Text
# 163 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle5_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage::
# 193 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage_Text_0
# 194 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	closemessage
	return


ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage::
# 199 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_0
# 211 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 212 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_no_intro TRAINER_CAMP_PERSI_JONAS, ISLANDGAME_CAMP_PERSI_Jonas_Defeated_Text
# 213 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 214 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 215 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	switch VAR_RESULT
# 216 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_3
# 226 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_2
# 230 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	closemessage
# 231 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playfanfare MUS_HEAL
# 232 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitfanfare
# 233 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	special HealPlayerParty
# 234 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_3
# 237 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_ENERGY_POWDER
ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_1:
# 240 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_4
# 249 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	closemessage
	return

ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_3:
# 217 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_1
# 221 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	closemessage
# 222 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playfanfare MUS_HEAL
# 223 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitfanfare
# 224 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	special HealPlayerParty
	goto ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_1


ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup::
# 254 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removeobject 13, MAP_ISLANDGAME_CAMP_PERSI
# 255 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removeobject 31, MAP_ISLANDGAME_CAMP_PERSI
# 256 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 257 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 258 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	releaseall
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterMiddle::
# 265 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 266 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 267 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 268 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleIntro
# 269 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 31, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleIntro
# 270 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 272 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 274 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 275 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 276 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 277 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleOutro
# 278 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 31, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleOutro
# 279 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 281 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 282 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 284 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterLeft::
# 288 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 289 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 290 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 291 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementLeftIntro
# 292 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 31, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementLeftIntro
# 293 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 294 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 296 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 298 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 299 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 300 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 301 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 302 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 31, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 303 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 305 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 306 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 308 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterFarLeft::
# 312 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 313 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 314 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 315 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarLeftIntro
# 316 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 31, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarLeftIntro
# 317 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 318 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 320 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 322 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 323 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 324 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 325 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 326 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 31, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 327 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 329 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 330 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 332 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterRight::
# 336 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 337 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 338 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 339 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementRightIntro
# 340 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 31, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementRightIntro
# 341 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 342 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 344 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 346 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 347 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 348 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 349 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 350 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 31, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 351 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 353 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 354 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 356 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterFarRight::
# 360 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 361 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 362 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 363 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarRightIntro
# 364 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 31, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarRightIntro
# 365 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 366 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 368 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 370 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 371 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 372 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 373 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 374 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 31, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 375 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 377 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 378 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 380 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


# 383 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleIntro:
# 384 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 384 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 384 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 384 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 384 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
	step_end

# 387 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleOutro:
# 388 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_left
# 389 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 389 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 389 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 389 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 389 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 389 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 389 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
	step_end

# 392 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementLeftIntro:
# 393 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 393 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 393 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 393 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 393 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 393 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 394 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	face_left
	step_end

# 397 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarLeftIntro:
# 398 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 398 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 398 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 398 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 398 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 398 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 399 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_left
	step_end

# 402 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementRightIntro:
# 403 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 403 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 403 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 403 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 403 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 403 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 404 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	face_right
	step_end

# 407 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarRightIntro:
# 408 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 408 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 408 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 408 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 408 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 408 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 409 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_right
	step_end

# 412 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro:
# 413 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 413 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 413 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 413 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 413 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 413 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
	step_end

# 416 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave:
# 417 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	delay_16
# 417 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	delay_16
# 418 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	face_down
	step_end

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl::
# 442 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 443 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 445 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_set FLAG_DAILY_PERSI_COOKIE_GIRL_SALE, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_2
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_1:
# 450 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	showmoneybox 0, 0
# 451 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlTalk1, MSGBOX_YESNO
# 453 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_5
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_4:
# 458 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkmoney 250
# 460 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_8
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_7:
# 465 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 467 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_11
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_10:
# 472 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_DAILY_PERSI_COOKIE_GIRL_SALE
# 473 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removemoney 250
# 474 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	updatemoneybox
# 475 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_4
# 476 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 477 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 479 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
CookieGirl_End:
# 480 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 481 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 482 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 483 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_2:
# 446 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_0
# 447 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CookieGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_5:
# 454 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_1
# 455 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CookieGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_4

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_8:
# 461 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_2
# 462 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CookieGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_7

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_11:
# 468 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_3
# 469 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CookieGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_10


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy::
# 494 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 495 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 497 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_set FLAG_DAILY_PERSI_CANDY_BOY_SALE, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_2
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_1:
# 502 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	showmoneybox 0, 0
# 503 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyTalk1, MSGBOX_YESNO
# 505 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_5
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_4:
# 510 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkmoney 250
# 512 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_8
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_7:
# 517 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkitemspace ITEM_RAGE_CANDY_BAR
# 519 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_11
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_10:
# 524 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_DAILY_PERSI_CANDY_BOY_SALE
# 525 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removemoney 250
# 526 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	updatemoneybox
# 527 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 528 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_4
# 529 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_RAGE_CANDY_BAR
# 531 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
CandyBoy_End:
# 532 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 533 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 534 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 535 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_2:
# 498 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_0
# 499 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CandyBoy_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_5:
# 506 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_1
# 507 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CandyBoy_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_4

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_8:
# 513 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_2
# 514 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CandyBoy_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_7

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_11:
# 520 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_3
# 521 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CandyBoy_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_10


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC1::
# 544 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 545 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 546 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC1Talk
# 547 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC2::
# 559 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 560 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 561 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC2Talk
# 562 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC3::
# 572 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 573 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 574 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC3Talk
# 575 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC4::
# 585 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 586 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 587 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC4Talk
# 588 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC5::
# 599 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 600 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC5Talk
# 601 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC6::
# 611 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 612 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC6Talk
# 613 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC7::
# 623 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 624 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 625 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC7Talk
# 626 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC8::
# 636 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 637 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 638 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC8Talk
# 639 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 10, Common_Movement_FaceOriginalDirection
# 640 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 641 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC9::
# 651 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 652 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC9Talk
# 653 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC10::
# 664 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 665 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 666 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC10Talk
# 667 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC11::
# 680 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 681 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 682 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC11Talk
# 683 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC12::
# 693 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 694 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 695 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC12Talk
# 696 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC13::
# 707 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 708 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 709 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC13Talk
# 710 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14::
# 721 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 722 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 723 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	returnqueststate QUEST_PERSI_FAVORITE_CARD
# 725 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	switch VAR_RESULT
# 726 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_INACTIVE, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_3
# 741 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_ACTIVE, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_4
# 758 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_5
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1:
# 766 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_3:
# 727 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_0, MSGBOX_YESNO
# 734 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_6
# 739 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_2
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_4:
# 742 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkitem ITEM_ISLANDGAME_TRADING_CARD
# 744 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_9
# 756 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_4
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_5:
# 759 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_5
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_6:
# 735 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_1
# 736 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	startquest QUEST_PERSI_FAVORITE_CARD
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_9:
# 745 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removeitem ITEM_ISLANDGAME_TRADING_CARD
# 746 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_3
# 752 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 753 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	completequest QUEST_PERSI_FAVORITE_CARD
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_Zigzag::
# 770 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 771 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 772 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 773 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_Zigzag_Text_0
# 774 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 775 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 776 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl::
# 780 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 781 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 782 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_2
# 793 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk3
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_1:
# 796 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
WaterGirl_End:
# 797 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_2:
# 783 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk1, MSGBOX_YESNO
# 784 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_6
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_5:
# 788 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk2
# 789 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 790 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_6:
# 785 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_Text_0
# 786 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto WaterGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_5


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WARNING::
# 824 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 825 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WARNING_Text_0, MSGBOX_SIGN
# 831 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN1::
# 835 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 836 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN1_DESC
# 837 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN2::
# 848 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 849 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN2_DESC
# 850 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN3::
# 861 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 862 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN3_DESC
# 863 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN4::
# 873 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 874 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN4_DESC
# 875 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN5::
# 886 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 887 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN5_DESC
# 888 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN7::
# 898 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 899 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN7_Text_0
# 900 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance::
# 904 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 905 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_Text_0, MSGBOX_YESNO
# 907 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_1
# 911 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_1:
# 908 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	warp MAP_ISLANDGAME_CAMP_PERSI_MACHETE_TREE, 0
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text_0:
# 58 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Bakana... I lost!?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text_1:
# 60 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "I may not be worthy of my blade now, but\n"
	.string "I will be back for it later! Believe it!$"

ISLANDGAME_CAMP_PERSI_HanzoKatana_Text_0:
# 77 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Naruhodo... It appears I still have a lot\n"
	.string "to learn...\p"
	.string "{PLAYER}-san! As my first battle and\n"
	.string "only loss, please take my ka-ta-na.\p"
	.string "It will serve you well in your journey, I\n"
	.string "know of it!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage_Text_0:
# 193 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}Ah, you there!$"

ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_0:
# 200 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "You don't look like you're from around\n"
	.string "here. Are you a tourist by chance?\p"
	.string "...\p"
	.string "Oh? You've come to aid Professor Palm in\n"
	.string "his research and become a Pokémon\l"
	.string "trainer?\p"
	.string "Well, pardon my assumption, then!\n"
	.string "Welcome to the Maryan Isles,\l"
	.string "{PLAYER}!\p"
	.string "My name is {COLOR GREEN}Jonas{COLOR DARK_GRAY}. I'm a traveling\n"
	.string "merchant of The Silverwing Order.\p"
	.string "The Silverwing Order is in charge of\n"
	.string "governing the isles. It's our job to\l"
	.string "make sure everyone here is comfortable\l"
	.string "and safe!\p"
	.string "My role in particular is traveling\n"
	.string "around to provide goods and inform\l"
	.string "visitors of the Marya region!\p"
	.string "But that's enough about me. You said\n"
	.string "you were a Pokémon trainer, right?\p"
	.string "In that case...{PAUSE 60} mind if I trouble you for\n"
	.string "a little battle?$"

ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_1:
# 218 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR GREEN}Jonas: {COLOR DARK_GRAY}Thank you for the exciting\n"
	.string "battle, {PLAYER}. You possess\l"
	.string "exceptional talent for a beginner!\p"
	.string "Here, allow me to heal our Pokémon.$"

ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_2:
# 227 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR GREEN}Jonas: {COLOR DARK_GRAY}Thank you for the battle,\n"
	.string "{PLAYER}. Your Pokémon fought as\l"
	.string "hard as they could!\p"
	.string "Here, allow me to heal our Pokémon.$"

ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_3:
# 235 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR GREEN}Jonas: {COLOR DARK_GRAY}I'd also like to give you this.\n"
	.string "It'll be of great use to you as a\l"
	.string "beginner!$"

ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_4:
# 241 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Unfortunately, this is where our\n"
	.string "conversation must end. I've got a long\l"
	.string "day ahead of me, a-ha.\p"
	.string "But before I depart, I thought I'd let\n"
	.string "you know about our upcoming Silverwing\l"
	.string "Festival!\p"
	.string "It is a grand celebration we host\n"
	.string "annually to honor our lord and savior,\l"
	.string "Lugia, who rescued Marya from\l"
	.string "destruction thousands of years ago!\p"
	.string "It's not for another month, but I\n"
	.string "implore you to stick around for it!\p"
	.string "Ah, I must get going now, lest I fall\n"
	.string "even further behind schedule.\p"
	.string "It was a pleasure meeting you,\n"
	.string "{PLAYER}.\p"
	.string "By Lugia, may our paths cross again.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_0:
# 446 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}We can only sell one cookie per day!\p"
	.string "We don't have many cookies left...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_1:
# 454 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Eeeh? But I said they were delicious...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_2:
# 461 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Eeeh? You don't have enough money?\n"
	.string "Phooey...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_3:
# 468 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Eeeh? You don't have enough room for\n"
	.string "this cookie?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_4:
# 475 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Yay! Thank you for your support!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_0:
# 498 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Sorry, we're running low on candy bars,\n"
	.string "so we can only give one per person.\p"
	.string "Come again tomorrow!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_1:
# 506 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Drats. I need more sales for that\n"
	.string "skateboard...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_2:
# 513 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Huh? You don't have enough money?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_3:
# 520 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Huh? You don't have room for this candy\n"
	.string "bar?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_4:
# 528 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Woohoo! Thanks for your support!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_0:
# 728 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "WAAAAAAH!\p"
	.string "I lost my super rare Charizard trading\n"
	.string "card!\p"
	.string "It was in my deck this morning, but now\n"
	.string "it's gone!\p"
	.string "I've looked everywhere for it, but I\n"
	.string "can't find it anywhere! Please help me!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_1:
# 735 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "My deck won't work without that\n"
	.string "Charizard card!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_2:
# 739 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "PLZZZZZZZZZ$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_3:
# 747 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Yaaaay! You found it! Where was it?\p"
	.string "...\p"
	.string "Huh? It was just under my bed? But I\n"
	.string "checked under there a million times...\p"
	.string "Oh well. All that matters is I have my\n"
	.string "card back!\p"
	.string "Here, take this. I made it during arts\n"
	.string "and crafts!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_4:
# 756 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Have you found it yet?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_5:
# 761 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Now I'm ready for my duel! Do you like\n"
	.string "playing the trading card game too?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_Zigzag_Text_0:
# 773 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR RED}It's just staring at me... menacingly?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_Text_0:
# 785 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Aww. That's a shame. I was going to\n"
	.string "share this Squirt Bottle with you.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WARNING_Text_0:
# 826 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Hi! I'm a sentient sign. I'm here to warn\n"
	.string "you about the dangers of Nuzlocke.\p"
	.string "I uh, I just wouldn't try it. Trust me,\n"
	.string "it's not going to end well...\p"
	.string "...but if you think you've got what it\n"
	.string "takes hotshot, prove me wrong...\p"
	.string "- Billy The Board$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN7_Text_0:
# 899 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "CHERIPORT{LEFT_ARROW}\nCAMP PERSI{UP_ARROW}$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_Text_0:
# 905 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "There's a slight opening in the tree!\n"
	.string "Want to climb inside?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text::
# 66 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Nani!? You've got sharp senses to find\n"
	.string "a grandmaster ninja like me...\p"
	.string "{COLOR DARK_GRAY}But how will you fare in battle against\n"
	.string "me and my nakama?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle2_Text::
# 96 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}What the heck! I almost caught a\n"
	.string "Pokémon and you messed me up!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle2_Defeated_Text::
# 102 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "If only I had another Pokémon...$"

ISLANDGAME_CAMP_PERSI_TrainerBattle2_PostDefeated_Text::
# 107 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Go bug someone else! Camp's already\n"
	.string "miserable enough with Hanzo!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle3_Text::
# 118 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}There's only one thing better than the\n"
	.string "outdoors: A fiery Pokémon battle!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle3_Defeated_Text::
# 124 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Hoo boy, your Pokémon are hot!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle3_PostDefeated_Text::
# 129 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I really like Pokémon battles. It's a\n"
	.string "great chance to bond with your buds!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle4_Text::
# 140 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}If I want Lazlo to notice me, I'll have\n"
	.string "to become a fiery Pokémon trainer!\p"
	.string "{COLOR DARK_GRAY}So um, get your game on, I guess!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle4_Defeated_Text::
# 147 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Was I fiery enough?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle4_PostDefeated_Text::
# 152 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Pokémon battles aren't really my thing,\n"
	.string "to be frank. {COLOR DARK_GRAY}Maybe there's something\l"
	.string "else I can catch Lazlo's eye with...$"

ISLANDGAME_CAMP_PERSI_TrainerBattle5_Text::
# 166 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm studying Pokémon, and apparently\n"
	.string "one of the best ways to study them is\l"
	.string "to analyze them in battle.\p"
	.string "{COLOR DARK_GRAY}Please, help me with my research!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle5_Defeated_Text::
# 173 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "I learned a lot from our battle!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle5_PostDefeated_Text::
# 178 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Pokémon can hold items like berries to\n"
	.string "give them an edge in battle.\p"
	.string "{COLOR DARK_GRAY}But they can't hold items like potions\n"
	.string "for some reason. Why is that?$"

ISLANDGAME_CAMP_PERSI_Jonas_Defeated_Text::
# 422 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Ah... \p"
	.string "Your aptitude for battle is...{PAUSE 60}\n"
	.string "quite remarkable.{PAUSE 30}$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlTalk1::
# 434 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Hi there! I'm selling delicious Girl\n"
	.string "Scout Cookies to support Troop 115.\p"
	.string "{COLOR DARK_GRAY}Would you like to buy one for ¥250?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyTalk1::
# 486 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Hi there! I'm selling tasty Boy Scout\n"
	.string "Candy Bars to support Troop 117.\p"
	.string "{COLOR DARK_GRAY}Would you like to buy one for ¥250?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC1Talk::
# 550 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm one of the counselors here at Camp\n"
	.string "Persi. I tell you man, it is NOT easy.\p"
	.string "{COLOR DARK_GRAY}Coming up with new spooky stories to\n"
	.string "tell during campfire time is tough work.\p"
	.string "{COLOR DARK_GRAY}Maybe for tonight's campfire we'll just\n"
	.string "sing a song.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC2Talk::
# 565 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}My mom made me come here. I just want to\n"
	.string "stay inside and play video games...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC3Talk::
# 578 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm taking the campers on a nature hike\n"
	.string "later today.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC4Talk::
# 591 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm in time-out for throwing a pancake\n"
	.string "at a counselor.\p"
	.string "{COLOR DARK_GRAY}It was just a prank though... I thought\n"
	.string "camp was about having fun.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC5Talk::
# 604 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Um... do you mind? I'm tryna do my\n"
	.string "business here...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC6Talk::
# 616 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Remember kids! Don't feed the wildlife!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC7Talk::
# 629 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm too scared to go deeper... Pokémon\n"
	.string "are scary.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC8Talk::
# 644 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}When I'm a Pokémon Trainer, I'm gonna\n"
	.string "catch a Zigazagoon here! They're cute!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC9Talk::
# 656 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Hanzo! Hanzo! Ugh... where could that\n"
	.string "troublemaker have gone?\p"
	.string "{COLOR DARK_GRAY}I swear, we need to put a leash on that\n"
	.string "boy...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC10Talk::
# 670 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Our campout last week was a complete\n"
	.string "disaster.\p"
	.string "{COLOR DARK_GRAY}I got stuck in a group with Hanzo, and\n"
	.string "he didn't help us at all!\p"
	.string "{COLOR DARK_GRAY}To make things worse, it was just\n"
	.string "raining all day too, so we were soaked.\p"
	.string "{COLOR DARK_GRAY}I don't even know why he's here. All he\n"
	.string "does is goof off in the forest.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC11Talk::
# 686 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}That Hanzo dweeb gives me the creeps.\n"
	.string "He thinks he's an anime protagonist.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC12Talk::
# 699 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}When kindling a flame, it's important to\n"
	.string "use the right materials.\p"
	.string "{COLOR DARK_GRAY}One poor kid found out the hard way\n"
	.string "when he threw poison ivy in his fire.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC13Talk::
# 713 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}The older boys are so cool... They know\n"
	.string "how to build a tent with just sticks!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk1::
# 800 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I really like gardening. Do you like\n"
	.string "gardening too?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk2::
# 806 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Hooray! Here, take one of these and we\n"
	.string "can become gardening buddies!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk3::
# 812 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}It's important to give your plants\n"
	.string "water! Remember to take care of them!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN1_DESC::
# 840 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}CAMP PERSI\n"
	.string "{COLOR DARK_GRAY}The greatest summer camp in Marya!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN2_DESC::
# 853 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}THE WILD SIDE\n"
	.string "{COLOR DARK_GRAY}! SUPERVISION REQUIRED !$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN3_DESC::
# 866 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}PERSI LAKE\n"
	.string "NO SWIMMING WITHOUT A COUNSELOR!!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN4_DESC::
# 878 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}THE BERRY GOOD BERRY SHOP\n"
	.string "{COLOR DARK_GRAY}Contribute to our garden! (Please)$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN5_DESC::
# 891 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR RED}(What is this music? It sounds like\n"
	.string "dududududududuDUDUDUDUDU...)$"
