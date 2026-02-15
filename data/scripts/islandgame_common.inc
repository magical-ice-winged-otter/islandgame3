Common_DisableAutoRun::
# 2 "data/scripts/islandgame_common.pory"
	msgbox Common_DisableAutoRun_Text_0
# 3 "data/scripts/islandgame_common.pory"
	waitmessage
# 4 "data/scripts/islandgame_common.pory"
	closemessage
	end


Common_EnableAutoRun::
# 9 "data/scripts/islandgame_common.pory"
	msgbox Common_EnableAutoRun_Text_0
# 10 "data/scripts/islandgame_common.pory"
	waitmessage
# 11 "data/scripts/islandgame_common.pory"
	closemessage
	end


Common_NextSubQuest::
Common_NextSubQuest_2:
# 27 "data/scripts/islandgame_common.pory"
	compare VAR_TEMP_B, VAR_TEMP_A
	goto_if_lt Common_NextSubQuest_3
	return

Common_NextSubQuest_3:
# 28 "data/scripts/islandgame_common.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, VAR_TEMP_C, VAR_TEMP_B
# 29 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_NextSubQuest_6
# 38 "data/scripts/islandgame_common.pory"
	addvar VAR_TEMP_B, 1
	goto Common_NextSubQuest_2

Common_NextSubQuest_6:
# 30 "data/scripts/islandgame_common.pory"
	subquestmenu QUEST_MENU_BUFFER_QUEST_NAME, VAR_TEMP_C, VAR_TEMP_B
	return


IslandGame_Common_PokemonCenter_1F_EventScript_Nurse::
# 46 "data/scripts/islandgame_common.pory"
	goto_if_unset FLAG_PROF_GAVE_EEVEE, IslandGame_Common_PokemonCenter_1F_EventScript_Nurse_1
# 56 "data/scripts/islandgame_common.pory"
	setvar VAR_0x800B, 1
# 57 "data/scripts/islandgame_common.pory"
	call Common_EventScript_PkmnCenterNurse
# 58 "data/scripts/islandgame_common.pory"
	waitmessage
# 59 "data/scripts/islandgame_common.pory"
	waitbuttonpress
# 60 "data/scripts/islandgame_common.pory"
	release
	return

IslandGame_Common_PokemonCenter_1F_EventScript_Nurse_1:
# 47 "data/scripts/islandgame_common.pory"
	lock
# 48 "data/scripts/islandgame_common.pory"
	msgbox IslandGame_Common_PokemonCenter_1F_EventScript_Nurse_Text_0
# 52 "data/scripts/islandgame_common.pory"
	closemessage
# 53 "data/scripts/islandgame_common.pory"
	release
	return


ISLANDGAME_PKMNCENTER_2F_TimeNPC::
# 68 "data/scripts/islandgame_common.pory"
	lock
# 69 "data/scripts/islandgame_common.pory"
	faceplayer
# 70 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_0, MSGBOX_YESNO
# 75 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_TimeNPC_2
ISLANDGAME_PKMNCENTER_2F_TimeNPC_1:
# 87 "data/scripts/islandgame_common.pory"
	closemessage
# 88 "data/scripts/islandgame_common.pory"
	release
	return

ISLANDGAME_PKMNCENTER_2F_TimeNPC_2:
# 76 "data/scripts/islandgame_common.pory"
	fadescreen FADE_TO_BLACK
# 77 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_1
# 78 "data/scripts/islandgame_common.pory"
	waitmessage
# 79 "data/scripts/islandgame_common.pory"
	special StartWallClock
# 80 "data/scripts/islandgame_common.pory"
	waitstate
# 81 "data/scripts/islandgame_common.pory"
	delay 30
# 82 "data/scripts/islandgame_common.pory"
	setflag FLAG_SET_WALL_CLOCK
# 83 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_2
	goto ISLANDGAME_PKMNCENTER_2F_TimeNPC_1


ISLANDGAME_PKMNCENTER_2F_NameRater::
# 94 "data/scripts/islandgame_common.pory"
	lock
# 95 "data/scripts/islandgame_common.pory"
	faceplayer
# 96 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_0, MSGBOX_YESNO
# 100 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_2
ISLANDGAME_PKMNCENTER_2F_NameRater_1:
# 160 "data/scripts/islandgame_common.pory"
NameRater_End:
# 161 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_7
# 162 "data/scripts/islandgame_common.pory"
	closemessage
# 163 "data/scripts/islandgame_common.pory"
	release
	return

ISLANDGAME_PKMNCENTER_2F_NameRater_2:
# 101 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_1
# 104 "data/scripts/islandgame_common.pory"
	special ChoosePartyMon
# 105 "data/scripts/islandgame_common.pory"
	waitstate
# 106 "data/scripts/islandgame_common.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne ISLANDGAME_PKMNCENTER_2F_NameRater_4
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_1

ISLANDGAME_PKMNCENTER_2F_NameRater_4:
# 107 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 108 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_7
ISLANDGAME_PKMNCENTER_2F_NameRater_6:
# 114 "data/scripts/islandgame_common.pory"
	special BufferMonNickname
# 115 "data/scripts/islandgame_common.pory"
	special IsMonOTIDNotPlayers
# 116 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_10
ISLANDGAME_PKMNCENTER_2F_NameRater_9:
# 125 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, MonOTNameNotPlayer
# 126 "data/scripts/islandgame_common.pory"
	special BufferMonNickname
# 127 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_13
ISLANDGAME_PKMNCENTER_2F_NameRater_12:
# 136 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_4, MSGBOX_YESNO
# 140 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_15
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_1

ISLANDGAME_PKMNCENTER_2F_NameRater_7:
# 109 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_2
# 112 "data/scripts/islandgame_common.pory"
	goto NameRater_End
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_6

ISLANDGAME_PKMNCENTER_2F_NameRater_10:
# 117 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_3
# 123 "data/scripts/islandgame_common.pory"
	goto NameRater_End
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_9

ISLANDGAME_PKMNCENTER_2F_NameRater_13:
# 128 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_3
# 134 "data/scripts/islandgame_common.pory"
	goto NameRater_End
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_12

ISLANDGAME_PKMNCENTER_2F_NameRater_15:
# 141 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_5
# 144 "data/scripts/islandgame_common.pory"
	call Common_EventScript_NameReceivedPartyMon
# 145 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
# 146 "data/scripts/islandgame_common.pory"
	special BufferMonNickname
# 147 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_17
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_1

ISLANDGAME_PKMNCENTER_2F_NameRater_17:
# 148 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_6
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_1


ISLANDGAME_PKMNCENTER_2F_MoveDeleter::
# 169 "data/scripts/islandgame_common.pory"
	lock
# 170 "data/scripts/islandgame_common.pory"
	faceplayer
# 171 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_0, MSGBOX_YESNO
# 175 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_2
# 231 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_8
# 232 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
ISLANDGAME_PKMNCENTER_2F_MoveDeleter_1:
# 235 "data/scripts/islandgame_common.pory"
MoveDeleter_End:
# 236 "data/scripts/islandgame_common.pory"
	closemessage
# 237 "data/scripts/islandgame_common.pory"
	release
	return

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_2:
# 176 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_1
# 179 "data/scripts/islandgame_common.pory"
	special ChoosePartyMon
# 180 "data/scripts/islandgame_common.pory"
	waitstate
# 181 "data/scripts/islandgame_common.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_6
ISLANDGAME_PKMNCENTER_2F_MoveDeleter_5:
# 188 "data/scripts/islandgame_common.pory"
	special IsSelectedMonEgg
# 189 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_9
ISLANDGAME_PKMNCENTER_2F_MoveDeleter_8:
# 195 "data/scripts/islandgame_common.pory"
	special GetNumMovesSelectedMonHas
# 196 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 1
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_12
ISLANDGAME_PKMNCENTER_2F_MoveDeleter_11:
# 204 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_5
# 207 "data/scripts/islandgame_common.pory"
	fadescreen FADE_TO_BLACK
# 208 "data/scripts/islandgame_common.pory"
	special MoveDeleterChooseMoveToForget
# 209 "data/scripts/islandgame_common.pory"
	fadescreen FADE_FROM_BLACK
# 210 "data/scripts/islandgame_common.pory"
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, ISLANDGAME_PKMNCENTER_2F_MoveDeleter
# 211 "data/scripts/islandgame_common.pory"
	special BufferMoveDeleterNicknameAndMove
# 212 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_6, MSGBOX_YESNO
# 215 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_14
# 226 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_8
# 227 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_1

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_6:
# 182 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_2
# 186 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_5

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_9:
# 190 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_3
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_8

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_12:
# 197 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_4
# 202 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_11

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_14:
# 216 "data/scripts/islandgame_common.pory"
	special MoveDeleterForgetMove
# 217 "data/scripts/islandgame_common.pory"
	playfanfare MUS_MOVE_DELETED
# 218 "data/scripts/islandgame_common.pory"
	waitfanfare
# 219 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_7
# 223 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_1


ISLANDGAME_PKMNCENTER_2F_MoveRelearner::
# 243 "data/scripts/islandgame_common.pory"
	lock
# 244 "data/scripts/islandgame_common.pory"
	faceplayer
# 245 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_0
# 250 "data/scripts/islandgame_common.pory"
	showmoneybox 0, 0
# 251 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_1, MSGBOX_YESNO
# 254 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_2
# 311 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_8
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_1:
# 314 "data/scripts/islandgame_common.pory"
MoveRelearner_End:
# 315 "data/scripts/islandgame_common.pory"
	hidemoneybox
# 316 "data/scripts/islandgame_common.pory"
	closemessage
# 317 "data/scripts/islandgame_common.pory"
	release
	return

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_2:
# 255 "data/scripts/islandgame_common.pory"
	checkmoney 1000
# 256 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_5
# 263 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_3
# 266 "data/scripts/islandgame_common.pory"
	special ChooseMonForMoveRelearner
# 267 "data/scripts/islandgame_common.pory"
	waitstate
# 268 "data/scripts/islandgame_common.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_9
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_8:
# 274 "data/scripts/islandgame_common.pory"
	special IsSelectedMonEgg
# 275 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_PKMNCENTER_2F_MoveRelearner_12
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_11:
# 281 "data/scripts/islandgame_common.pory"
	compare VAR_0x8005, 0
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_15
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_14:
# 287 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_7
# 290 "data/scripts/islandgame_common.pory"
	special TeachMoveRelearnerMove
# 291 "data/scripts/islandgame_common.pory"
	waitstate
# 292 "data/scripts/islandgame_common.pory"
	compare VAR_0x8004, 0
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_18
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_17:
# 296 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_9
# 299 "data/scripts/islandgame_common.pory"
	waitmessage
# 300 "data/scripts/islandgame_common.pory"
	showmoneybox 0, 0
# 301 "data/scripts/islandgame_common.pory"
	removemoney 1000
# 302 "data/scripts/islandgame_common.pory"
	updatemoneybox
# 303 "data/scripts/islandgame_common.pory"
	playse SE_SHOP
# 304 "data/scripts/islandgame_common.pory"
	waitse
# 305 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_10
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_1

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_5:
# 257 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_2
# 260 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_1

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_9:
# 269 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_4
# 272 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_8

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_12:
# 276 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_5
# 279 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_11

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_15:
# 282 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_6
# 285 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_14

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_18:
# 293 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_8
# 294 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_17


Common_EventScript_OverworldPokemon::
# 321 "data/scripts/islandgame_common.pory"
	lock
# 322 "data/scripts/islandgame_common.pory"
	faceplayer
# 323 "data/scripts/islandgame_common.pory"
	setflag FLAG_SMART_WILD_AI
# 324 "data/scripts/islandgame_common.pory"
	startwildoverworldencounter
# 325 "data/scripts/islandgame_common.pory"
	clearflag FLAG_SMART_WILD_AI
# 326 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 328 "data/scripts/islandgame_common.pory"
	switch VAR_RESULT
# 329 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_LOST, Common_EventScript_OverworldPokemon_3
# 331 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_RAN, Common_EventScript_OverworldPokemon_4
# 333 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_WON, Common_EventScript_OverworldPokemon_5
# 335 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_CAUGHT, Common_EventScript_OverworldPokemon_6
# 338 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
Common_EventScript_OverworldPokemon_1:
# 340 "data/scripts/islandgame_common.pory"
	release
	return

Common_EventScript_OverworldPokemon_3:
	goto Common_EventScript_OverworldPokemon_1

Common_EventScript_OverworldPokemon_4:
	goto Common_EventScript_OverworldPokemon_1

Common_EventScript_OverworldPokemon_5:
# 334 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto Common_EventScript_OverworldPokemon_1

Common_EventScript_OverworldPokemon_6:
# 336 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto Common_EventScript_OverworldPokemon_1


Common_EventScript_OverworldPokemon_Level::
# 344 "data/scripts/islandgame_common.pory"
	lock
# 345 "data/scripts/islandgame_common.pory"
	faceplayer
# 346 "data/scripts/islandgame_common.pory"
	setflag FLAG_SMART_WILD_AI
# 347 "data/scripts/islandgame_common.pory"
	startoverworldencounter 23
# 348 "data/scripts/islandgame_common.pory"
	clearflag FLAG_SMART_WILD_AI
# 349 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 351 "data/scripts/islandgame_common.pory"
	switch VAR_RESULT
# 352 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_LOST, Common_EventScript_OverworldPokemon_Level_3
# 354 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_RAN, Common_EventScript_OverworldPokemon_Level_4
# 356 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_WON, Common_EventScript_OverworldPokemon_Level_5
# 358 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_CAUGHT, Common_EventScript_OverworldPokemon_Level_6
# 361 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
Common_EventScript_OverworldPokemon_Level_1:
# 363 "data/scripts/islandgame_common.pory"
	release
	return

Common_EventScript_OverworldPokemon_Level_3:
	goto Common_EventScript_OverworldPokemon_Level_1

Common_EventScript_OverworldPokemon_Level_4:
	goto Common_EventScript_OverworldPokemon_Level_1

Common_EventScript_OverworldPokemon_Level_5:
# 357 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto Common_EventScript_OverworldPokemon_Level_1

Common_EventScript_OverworldPokemon_Level_6:
# 359 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto Common_EventScript_OverworldPokemon_Level_1


Common_EventScript_VendingMachine::
# 367 "data/scripts/islandgame_common.pory"
	lock
# 369 "data/scripts/islandgame_common.pory"
Common_VendingMachine:
# 370 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_0
# 373 "data/scripts/islandgame_common.pory"
	showmoneybox 17, 1
# 374 "data/scripts/islandgame_common.pory"
	dynmultipush Common_EventScript_VendingMachine_Text_1, 0
# 375 "data/scripts/islandgame_common.pory"
	dynmultipush Common_EventScript_VendingMachine_Text_2, 35
# 376 "data/scripts/islandgame_common.pory"
	dynmultipush Common_EventScript_VendingMachine_Text_3, 36
# 377 "data/scripts/islandgame_common.pory"
	dynmultipush Common_EventScript_VendingMachine_Text_4, 37
# 378 "data/scripts/islandgame_common.pory"
	dynmultistack 0, 0, TRUE, 4, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 379 "data/scripts/islandgame_common.pory"
	switch VAR_RESULT
# 380 "data/scripts/islandgame_common.pory"
	case 35, Common_EventScript_VendingMachine_3
# 419 "data/scripts/islandgame_common.pory"
	case 36, Common_EventScript_VendingMachine_4
# 458 "data/scripts/islandgame_common.pory"
	case 37, Common_EventScript_VendingMachine_5
# 497 "data/scripts/islandgame_common.pory"
	goto VendingMachine_End
Common_EventScript_VendingMachine_1:
# 500 "data/scripts/islandgame_common.pory"
VendingMachine_End:
# 501 "data/scripts/islandgame_common.pory"
	hidemoneybox
# 502 "data/scripts/islandgame_common.pory"
	closemessage
# 503 "data/scripts/islandgame_common.pory"
	release
	return

Common_EventScript_VendingMachine_3:
# 381 "data/scripts/islandgame_common.pory"
	checkmoney 500
# 382 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_8
Common_EventScript_VendingMachine_7:
# 388 "data/scripts/islandgame_common.pory"
	removemoney 500
# 389 "data/scripts/islandgame_common.pory"
	updatemoneybox
# 390 "data/scripts/islandgame_common.pory"
	playse SE_SHOP
# 391 "data/scripts/islandgame_common.pory"
	waitse
# 392 "data/scripts/islandgame_common.pory"
	playse SE_VEND
# 393 "data/scripts/islandgame_common.pory"
	waitse
# 394 "data/scripts/islandgame_common.pory"
	hidemoneybox
# 397 "data/scripts/islandgame_common.pory"
	random 10
# 398 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_17
Common_EventScript_VendingMachine_16:
# 407 "data/scripts/islandgame_common.pory"
	giveitem ITEM_FRESH_WATER
# 410 "data/scripts/islandgame_common.pory"
	random 5
# 411 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_26
Common_EventScript_VendingMachine_25:
# 418 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_1

Common_EventScript_VendingMachine_4:
# 420 "data/scripts/islandgame_common.pory"
	checkmoney 800
# 421 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_11
Common_EventScript_VendingMachine_10:
# 427 "data/scripts/islandgame_common.pory"
	removemoney 800
# 428 "data/scripts/islandgame_common.pory"
	updatemoneybox
# 429 "data/scripts/islandgame_common.pory"
	playse SE_SHOP
# 430 "data/scripts/islandgame_common.pory"
	waitse
# 431 "data/scripts/islandgame_common.pory"
	playse SE_VEND
# 432 "data/scripts/islandgame_common.pory"
	waitse
# 433 "data/scripts/islandgame_common.pory"
	hidemoneybox
# 436 "data/scripts/islandgame_common.pory"
	random 10
# 437 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_20
Common_EventScript_VendingMachine_19:
# 446 "data/scripts/islandgame_common.pory"
	giveitem ITEM_SODA_POP
# 449 "data/scripts/islandgame_common.pory"
	random 5
# 450 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_29
Common_EventScript_VendingMachine_28:
# 457 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_1

Common_EventScript_VendingMachine_5:
# 459 "data/scripts/islandgame_common.pory"
	checkmoney 1200
# 460 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_14
Common_EventScript_VendingMachine_13:
# 466 "data/scripts/islandgame_common.pory"
	removemoney 1200
# 467 "data/scripts/islandgame_common.pory"
	updatemoneybox
# 468 "data/scripts/islandgame_common.pory"
	playse SE_SHOP
# 469 "data/scripts/islandgame_common.pory"
	waitse
# 470 "data/scripts/islandgame_common.pory"
	playse SE_VEND
# 471 "data/scripts/islandgame_common.pory"
	waitse
# 472 "data/scripts/islandgame_common.pory"
	hidemoneybox
# 475 "data/scripts/islandgame_common.pory"
	random 10
# 476 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_23
Common_EventScript_VendingMachine_22:
# 485 "data/scripts/islandgame_common.pory"
	giveitem ITEM_LEMONADE
# 488 "data/scripts/islandgame_common.pory"
	random 5
# 489 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_32
Common_EventScript_VendingMachine_31:
# 495 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_1

Common_EventScript_VendingMachine_8:
# 383 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_5
# 386 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_7

Common_EventScript_VendingMachine_11:
# 422 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_5
# 425 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_10

Common_EventScript_VendingMachine_14:
# 461 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_5
# 464 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_13

Common_EventScript_VendingMachine_17:
# 399 "data/scripts/islandgame_common.pory"
	playse SE_TRUCK_UNLOAD
# 400 "data/scripts/islandgame_common.pory"
	waitse
# 401 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_6
# 404 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_16

Common_EventScript_VendingMachine_20:
# 438 "data/scripts/islandgame_common.pory"
	playse SE_TRUCK_UNLOAD
# 439 "data/scripts/islandgame_common.pory"
	waitse
# 440 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_6
# 443 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_19

Common_EventScript_VendingMachine_23:
# 477 "data/scripts/islandgame_common.pory"
	playse SE_TRUCK_UNLOAD
# 478 "data/scripts/islandgame_common.pory"
	waitse
# 479 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_6
# 482 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_22

Common_EventScript_VendingMachine_26:
# 412 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_7
# 415 "data/scripts/islandgame_common.pory"
	giveitem ITEM_FRESH_WATER
	goto Common_EventScript_VendingMachine_25

Common_EventScript_VendingMachine_29:
# 451 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_7
# 454 "data/scripts/islandgame_common.pory"
	giveitem ITEM_SODA_POP
	goto Common_EventScript_VendingMachine_28

Common_EventScript_VendingMachine_32:
# 490 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_7
# 493 "data/scripts/islandgame_common.pory"
	giveitem ITEM_LEMONADE
	goto Common_EventScript_VendingMachine_31


Common_RemoveTemporaryObject::
# 507 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 508 "data/scripts/islandgame_common.pory"
	goto_if_unset FLAG_SYS_CTRL_OBJ_DELETE, Common_RemoveTemporaryObject_2
# 509 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Common_RemoveTemporaryObject_5
# 509 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Common_RemoveTemporaryObject_5
Common_RemoveTemporaryObject_4:
	return

Common_RemoveTemporaryObject_2:
	return

Common_RemoveTemporaryObject_5:
# 510 "data/scripts/islandgame_common.pory"
	removeobject VAR_LAST_TALKED
	goto Common_RemoveTemporaryObject_4


Common_DisableAutoRun_Text_0:
# 2 "data/scripts/islandgame_common.pory"
	.string "Auto Run {COLOR RED}Disabled{COLOR DARK_GRAY}.$"

Common_EnableAutoRun_Text_0:
# 9 "data/scripts/islandgame_common.pory"
	.string "Auto Run {COLOR GREEN}Enabled{COLOR DARK_GRAY}.$"

IslandGame_Common_PokemonCenter_1F_EventScript_Nurse_Text_0:
# 49 "data/scripts/islandgame_common.pory"
	.string "Welcome to the Maryan isles! This is a\n"
	.string "Pokémon Center.\p"
	.string "Trainers can bring their Pokémon here\n"
	.string "to have them healed free of charge!$"

ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_0:
# 71 "data/scripts/islandgame_common.pory"
	.string "You look tired, trainer. Would you like\n"
	.string "to take a rest in one of our rooms?\p"
	.string "{COLOR RED}(Should I take a break and pass the\n"
	.string "time...?)$"

ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_1:
# 77 "data/scripts/islandgame_common.pory"
	.string "You took a break until...$"

ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_2:
# 84 "data/scripts/islandgame_common.pory"
	.string "We hope you had a good rest! Come back\n"
	.string "if you would like to pass time.$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_0:
# 97 "data/scripts/islandgame_common.pory"
	.string "How's it going, youngin? I'm Marya's\n"
	.string "official Name Rater!\p"
	.string "Would you like me to impart my\n"
	.string "name-rating wisdom on your Pokémon?$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_1:
# 102 "data/scripts/islandgame_common.pory"
	.string "Alrighty mate, whose name shall I giveth\n"
	.string "a critique on?$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_2:
# 110 "data/scripts/islandgame_common.pory"
	.string "That's an egg, init? I can't judge a\n"
	.string "Pokémon that hasn't hatched yet!$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_3:
# 118 "data/scripts/islandgame_common.pory"
	.string "Ah, {STR_VAR_1} is it? A truly\n"
	.string "spectacular name, I say!\p"
	.string "Its original trainer must have been a\n"
	.string "real nicknaming aficionado.\p"
	.string "If you wanted to change its name,\n"
	.string "though, I unfortunately can't do that.\p"
	.string "It would go against the official Name\n"
	.string "Rater moral code of ethics!$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_4:
# 137 "data/scripts/islandgame_common.pory"
	.string "Hmm, so it's {STR_VAR_1}? A fitting\n"
	.string "name for such a fine Pokémon!\p"
	.string "But if you've a better name, I'm more\n"
	.string "than happy to change it to that!$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_5:
# 142 "data/scripts/islandgame_common.pory"
	.string "What'll its new name be?$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_6:
# 149 "data/scripts/islandgame_common.pory"
	.string "There we are! This Pokemon shall\n"
	.string "henceforth be known as...\p"
	.string "{STR_VAR_1}!\p"
	.string "And what a smashing name it is! I'm sure\n"
	.string "it's absolutely chuffed to have it!$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_7:
# 161 "data/scripts/islandgame_common.pory"
	.string "If you've any Pokemon whose name you'd\n"
	.string "like me to rate, I'm always here!$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_0:
# 172 "data/scripts/islandgame_common.pory"
	.string "Why hello there, whippersnapper! I'm\n"
	.string "the...{PAUSE 30} um...{PAUSE 30} oh! The Move Deleter!\p"
	.string "Would you like me to have your Pokemon\n"
	.string "forget one of their moves?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_1:
# 177 "data/scripts/islandgame_common.pory"
	.string "O-Oh! Splendid! Which Pokémon do you\n"
	.string "want me to make forget a move?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_2:
# 183 "data/scripts/islandgame_common.pory"
	.string "Oh... I see. It was foolish of me to get\n"
	.string "excited...\p"
	.string "I suppose I will continue being useless\n"
	.string "in these modern times...$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_3:
# 191 "data/scripts/islandgame_common.pory"
	.string "Eh? Is this a prank? You think it's\n"
	.string "funny picking on the elderly?\p"
	.string "Kids these days... No respect for\n"
	.string "anyone but themselves.$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_4:
# 198 "data/scripts/islandgame_common.pory"
	.string "I'm afraid I cannot make a Pokemon\n"
	.string "forget its only move...\p"
	.string "Doing so would cause MissingNo. to\n"
	.string "appear and corrupt this game...\p"
	.string "Eh? What do you mean that's a load of\n"
	.string "baloney? Are you disrespecting me!?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_5:
# 205 "data/scripts/islandgame_common.pory"
	.string "Alright, which move should be\n"
	.string "forgotten?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_6:
# 213 "data/scripts/islandgame_common.pory"
	.string "Ah... {STR_VAR_1}'s {STR_VAR_2}?\n"
	.string "You want this move to be forgotten?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_7:
# 220 "data/scripts/islandgame_common.pory"
	.string "Your {STR_VAR_1} has successfully\n"
	.string "forgotten the move {STR_VAR_2}!\p"
	.string "If you need another move forgotten,\n"
	.string "please come again!$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_8:
# 226 "data/scripts/islandgame_common.pory"
	.string "I see... I suppose there is no need for a\n"
	.string "Move Deleter in this world anymore...$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_0:
# 246 "data/scripts/islandgame_common.pory"
	.string "Hullo! I am the all-powerful guru known\n"
	.string "as the Move Relearner!\p"
	.string "I can help your Pokémon relearn moves\n"
	.string "they've previously learned!\p"
	.string "I can even teach them moves that they\n"
	.string "missed out on!$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_1:
# 252 "data/scripts/islandgame_common.pory"
	.string "I can do this, for the low, low price of\n"
	.string "¥1000! How's that sound?$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_2:
# 258 "data/scripts/islandgame_common.pory"
	.string "Sorry pal, I gotta make a living. I can't\n"
	.string "do it if ya don't got the money.$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_3:
# 264 "data/scripts/islandgame_common.pory"
	.string "Awesome. Which Pokémon do you want to\n"
	.string "relearn a move?$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_4:
# 270 "data/scripts/islandgame_common.pory"
	.string "If you ever need my power, I'll be here,\n"
	.string "waiting!$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_5:
# 277 "data/scripts/islandgame_common.pory"
	.string "Umm... eggs don't even have moves to\n"
	.string "learn...$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_6:
# 283 "data/scripts/islandgame_common.pory"
	.string "There's no moves for this Pokémon to\n"
	.string "relearn...$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_7:
# 288 "data/scripts/islandgame_common.pory"
	.string "Which move should I reteach this\n"
	.string "Pokémon?$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_8:
# 293 "data/scripts/islandgame_common.pory"
	.string "Well, if you change your mind, I'm always\n"
	.string "here!$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_9:
# 297 "data/scripts/islandgame_common.pory"
	.string "Okay... {PAUSE 30}annnnnd...{PAUSE 30} done! Your Pokémon\n"
	.string "has relearned its move!$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_10:
# 306 "data/scripts/islandgame_common.pory"
	.string "Pleasure doin' business with you,\n"
	.string "trainer!$"

Common_EventScript_VendingMachine_Text_0:
# 371 "data/scripts/islandgame_common.pory"
	.string "{COLOR RED}(It's a vending machine. What should I\n"
	.string "get?)$"

Common_EventScript_VendingMachine_Text_1:
# 374 "data/scripts/islandgame_common.pory"
	.string "Nah, I'm good$"

Common_EventScript_VendingMachine_Text_2:
# 375 "data/scripts/islandgame_common.pory"
	.string "Fresh Water - ¥500$"

Common_EventScript_VendingMachine_Text_3:
# 376 "data/scripts/islandgame_common.pory"
	.string "Soda Pop - ¥800$"

Common_EventScript_VendingMachine_Text_4:
# 377 "data/scripts/islandgame_common.pory"
	.string "Lemonade - ¥1200$"

Common_EventScript_VendingMachine_Text_5:
# 384 "data/scripts/islandgame_common.pory"
	.string "{COLOR RED}(I don't have enough money.)$"

Common_EventScript_VendingMachine_Text_6:
# 402 "data/scripts/islandgame_common.pory"
	.string "{COLOR RED}(Looks like the machine got jammed.\n"
	.string "What a scam.)$"

Common_EventScript_VendingMachine_Text_7:
# 413 "data/scripts/islandgame_common.pory"
	.string "{COLOR RED}(Huh? Looks like another drink fell\n"
	.string "along with mine.)$"
