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


IslandGame_Common_PokeMart_Sign::
# 56 "data/scripts/islandgame_common.pory"
	msgbox IslandGame_Common_PokeMart_Sign_Text_0, MSGBOX_SIGN
	return


IslandGame_Common_PokeCenter_Sign::
# 63 "data/scripts/islandgame_common.pory"
	msgbox IslandGame_Common_PokeCenter_Sign_Text_0, MSGBOX_SIGN
	return


IslandGame_Common_PokemonCenter_1F_EventScript_Nurse::
# 70 "data/scripts/islandgame_common.pory"
	goto_if_unset FLAG_PROF_GAVE_EEVEE, IslandGame_Common_PokemonCenter_1F_EventScript_Nurse_1
# 80 "data/scripts/islandgame_common.pory"
	setvar VAR_0x800B, 1
# 81 "data/scripts/islandgame_common.pory"
	call Common_EventScript_PkmnCenterNurse
# 82 "data/scripts/islandgame_common.pory"
	waitmessage
# 83 "data/scripts/islandgame_common.pory"
	waitbuttonpress
# 84 "data/scripts/islandgame_common.pory"
	release
	return

IslandGame_Common_PokemonCenter_1F_EventScript_Nurse_1:
# 71 "data/scripts/islandgame_common.pory"
	lock
# 72 "data/scripts/islandgame_common.pory"
	msgbox IslandGame_Common_PokemonCenter_1F_EventScript_Nurse_Text_0
# 76 "data/scripts/islandgame_common.pory"
	closemessage
# 77 "data/scripts/islandgame_common.pory"
	release
	return


ISLANDGAME_PKMNCENTER_2F_TimeNPC::
# 89 "data/scripts/islandgame_common.pory"
	lock
# 90 "data/scripts/islandgame_common.pory"
	faceplayer
# 91 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_0, MSGBOX_YESNO
# 96 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_TimeNPC_2
ISLANDGAME_PKMNCENTER_2F_TimeNPC_1:
# 108 "data/scripts/islandgame_common.pory"
	closemessage
# 109 "data/scripts/islandgame_common.pory"
	release
	return

ISLANDGAME_PKMNCENTER_2F_TimeNPC_2:
# 97 "data/scripts/islandgame_common.pory"
	fadescreen FADE_TO_BLACK
# 98 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_1
# 99 "data/scripts/islandgame_common.pory"
	waitmessage
# 100 "data/scripts/islandgame_common.pory"
	special StartWallClock
# 101 "data/scripts/islandgame_common.pory"
	waitstate
# 102 "data/scripts/islandgame_common.pory"
	delay 30
# 103 "data/scripts/islandgame_common.pory"
	setflag FLAG_SET_WALL_CLOCK
# 104 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_2
	goto ISLANDGAME_PKMNCENTER_2F_TimeNPC_1


ISLANDGAME_PKMNCENTER_2F_NameRater::
# 113 "data/scripts/islandgame_common.pory"
	lock
# 114 "data/scripts/islandgame_common.pory"
	faceplayer
# 115 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_0, MSGBOX_YESNO
# 119 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_2
ISLANDGAME_PKMNCENTER_2F_NameRater_1:
# 179 "data/scripts/islandgame_common.pory"
NameRater_End:
# 180 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_7
# 181 "data/scripts/islandgame_common.pory"
	closemessage
# 182 "data/scripts/islandgame_common.pory"
	release
	return

ISLANDGAME_PKMNCENTER_2F_NameRater_2:
# 120 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_1
# 123 "data/scripts/islandgame_common.pory"
	special ChoosePartyMon
# 124 "data/scripts/islandgame_common.pory"
	waitstate
# 125 "data/scripts/islandgame_common.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne ISLANDGAME_PKMNCENTER_2F_NameRater_4
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_1

ISLANDGAME_PKMNCENTER_2F_NameRater_4:
# 126 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 127 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_7
ISLANDGAME_PKMNCENTER_2F_NameRater_6:
# 133 "data/scripts/islandgame_common.pory"
	special BufferMonNickname
# 134 "data/scripts/islandgame_common.pory"
	special IsMonOTIDNotPlayers
# 135 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_10
ISLANDGAME_PKMNCENTER_2F_NameRater_9:
# 144 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, MonOTNameNotPlayer
# 145 "data/scripts/islandgame_common.pory"
	special BufferMonNickname
# 146 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_13
ISLANDGAME_PKMNCENTER_2F_NameRater_12:
# 155 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_4, MSGBOX_YESNO
# 159 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_15
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_1

ISLANDGAME_PKMNCENTER_2F_NameRater_7:
# 128 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_2
# 131 "data/scripts/islandgame_common.pory"
	goto NameRater_End
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_6

ISLANDGAME_PKMNCENTER_2F_NameRater_10:
# 136 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_3
# 142 "data/scripts/islandgame_common.pory"
	goto NameRater_End
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_9

ISLANDGAME_PKMNCENTER_2F_NameRater_13:
# 147 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_3
# 153 "data/scripts/islandgame_common.pory"
	goto NameRater_End
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_12

ISLANDGAME_PKMNCENTER_2F_NameRater_15:
# 160 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_5
# 163 "data/scripts/islandgame_common.pory"
	call Common_EventScript_NameReceivedPartyMon
# 164 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
# 165 "data/scripts/islandgame_common.pory"
	special BufferMonNickname
# 166 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_17
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_1

ISLANDGAME_PKMNCENTER_2F_NameRater_17:
# 167 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_6
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_1


ISLANDGAME_PKMNCENTER_2F_MoveDeleter::
# 186 "data/scripts/islandgame_common.pory"
	lock
# 187 "data/scripts/islandgame_common.pory"
	faceplayer
# 188 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_0, MSGBOX_YESNO
# 192 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_2
# 248 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_8
# 249 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
ISLANDGAME_PKMNCENTER_2F_MoveDeleter_1:
# 252 "data/scripts/islandgame_common.pory"
MoveDeleter_End:
# 253 "data/scripts/islandgame_common.pory"
	closemessage
# 254 "data/scripts/islandgame_common.pory"
	release
	return

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_2:
# 193 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_1
# 196 "data/scripts/islandgame_common.pory"
	special ChoosePartyMon
# 197 "data/scripts/islandgame_common.pory"
	waitstate
# 198 "data/scripts/islandgame_common.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_6
ISLANDGAME_PKMNCENTER_2F_MoveDeleter_5:
# 205 "data/scripts/islandgame_common.pory"
	special IsSelectedMonEgg
# 206 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_9
ISLANDGAME_PKMNCENTER_2F_MoveDeleter_8:
# 212 "data/scripts/islandgame_common.pory"
	special GetNumMovesSelectedMonHas
# 213 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 1
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_12
ISLANDGAME_PKMNCENTER_2F_MoveDeleter_11:
# 221 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_5
# 224 "data/scripts/islandgame_common.pory"
	fadescreen FADE_TO_BLACK
# 225 "data/scripts/islandgame_common.pory"
	special MoveDeleterChooseMoveToForget
# 226 "data/scripts/islandgame_common.pory"
	fadescreen FADE_FROM_BLACK
# 227 "data/scripts/islandgame_common.pory"
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, ISLANDGAME_PKMNCENTER_2F_MoveDeleter
# 228 "data/scripts/islandgame_common.pory"
	special BufferMoveDeleterNicknameAndMove
# 229 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_6, MSGBOX_YESNO
# 232 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_14
# 243 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_8
# 244 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_1

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_6:
# 199 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_2
# 203 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_5

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_9:
# 207 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_3
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_8

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_12:
# 214 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_4
# 219 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_11

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_14:
# 233 "data/scripts/islandgame_common.pory"
	special MoveDeleterForgetMove
# 234 "data/scripts/islandgame_common.pory"
	playfanfare MUS_MOVE_DELETED
# 235 "data/scripts/islandgame_common.pory"
	waitfanfare
# 236 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_7
# 240 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_1


ISLANDGAME_PKMNCENTER_2F_MoveRelearner::
# 258 "data/scripts/islandgame_common.pory"
	lock
# 259 "data/scripts/islandgame_common.pory"
	faceplayer
# 260 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_0
# 265 "data/scripts/islandgame_common.pory"
	showmoneybox 0, 0
# 266 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_1, MSGBOX_YESNO
# 269 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_2
# 326 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_8
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_1:
# 329 "data/scripts/islandgame_common.pory"
MoveRelearner_End:
# 330 "data/scripts/islandgame_common.pory"
	hidemoneybox
# 331 "data/scripts/islandgame_common.pory"
	closemessage
# 332 "data/scripts/islandgame_common.pory"
	release
	return

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_2:
# 270 "data/scripts/islandgame_common.pory"
	checkmoney 1000
# 271 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_5
# 278 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_3
# 281 "data/scripts/islandgame_common.pory"
	special ChooseMonForMoveRelearner
# 282 "data/scripts/islandgame_common.pory"
	waitstate
# 283 "data/scripts/islandgame_common.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_9
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_8:
# 289 "data/scripts/islandgame_common.pory"
	special IsSelectedMonEgg
# 290 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_PKMNCENTER_2F_MoveRelearner_12
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_11:
# 296 "data/scripts/islandgame_common.pory"
	compare VAR_0x8005, 0
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_15
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_14:
# 302 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_7
# 305 "data/scripts/islandgame_common.pory"
	special TeachMoveRelearnerMove
# 306 "data/scripts/islandgame_common.pory"
	waitstate
# 307 "data/scripts/islandgame_common.pory"
	compare VAR_0x8004, 0
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_18
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_17:
# 311 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_9
# 314 "data/scripts/islandgame_common.pory"
	waitmessage
# 315 "data/scripts/islandgame_common.pory"
	showmoneybox 0, 0
# 316 "data/scripts/islandgame_common.pory"
	removemoney 1000
# 317 "data/scripts/islandgame_common.pory"
	updatemoneybox
# 318 "data/scripts/islandgame_common.pory"
	playse SE_SHOP
# 319 "data/scripts/islandgame_common.pory"
	waitse
# 320 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_10
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_1

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_5:
# 272 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_2
# 275 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_1

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_9:
# 284 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_4
# 287 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_8

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_12:
# 291 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_5
# 294 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_11

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_15:
# 297 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_6
# 300 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_14

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_18:
# 308 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_8
# 309 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_17


Common_EventScript_OverworldPokemon::
# 348 "data/scripts/islandgame_common.pory"
	lock
# 349 "data/scripts/islandgame_common.pory"
	faceplayer
# 350 "data/scripts/islandgame_common.pory"
	setflag FLAG_SMART_WILD_AI
# 351 "data/scripts/islandgame_common.pory"
	startwildoverworldencounter
# 352 "data/scripts/islandgame_common.pory"
	clearflag FLAG_SMART_WILD_AI
# 353 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 355 "data/scripts/islandgame_common.pory"
	switch VAR_RESULT
# 356 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_LOST, Common_EventScript_OverworldPokemon_3
# 358 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_RAN, Common_EventScript_OverworldPokemon_4
# 360 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_WON, Common_EventScript_OverworldPokemon_5
# 362 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_CAUGHT, Common_EventScript_OverworldPokemon_6
# 365 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
Common_EventScript_OverworldPokemon_1:
# 367 "data/scripts/islandgame_common.pory"
	release
	return

Common_EventScript_OverworldPokemon_3:
	goto Common_EventScript_OverworldPokemon_1

Common_EventScript_OverworldPokemon_4:
	goto Common_EventScript_OverworldPokemon_1

Common_EventScript_OverworldPokemon_5:
# 361 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto Common_EventScript_OverworldPokemon_1

Common_EventScript_OverworldPokemon_6:
# 363 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto Common_EventScript_OverworldPokemon_1


Common_EventScript_OverworldPokemon_Level::
# 371 "data/scripts/islandgame_common.pory"
	lock
# 372 "data/scripts/islandgame_common.pory"
	faceplayer
# 373 "data/scripts/islandgame_common.pory"
	setflag FLAG_SMART_WILD_AI
# 374 "data/scripts/islandgame_common.pory"
	startoverworldencounter 23
# 375 "data/scripts/islandgame_common.pory"
	clearflag FLAG_SMART_WILD_AI
# 376 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 378 "data/scripts/islandgame_common.pory"
	switch VAR_RESULT
# 379 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_LOST, Common_EventScript_OverworldPokemon_Level_3
# 381 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_RAN, Common_EventScript_OverworldPokemon_Level_4
# 383 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_WON, Common_EventScript_OverworldPokemon_Level_5
# 385 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_CAUGHT, Common_EventScript_OverworldPokemon_Level_6
# 388 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
Common_EventScript_OverworldPokemon_Level_1:
# 390 "data/scripts/islandgame_common.pory"
	release
	return

Common_EventScript_OverworldPokemon_Level_3:
	goto Common_EventScript_OverworldPokemon_Level_1

Common_EventScript_OverworldPokemon_Level_4:
	goto Common_EventScript_OverworldPokemon_Level_1

Common_EventScript_OverworldPokemon_Level_5:
# 384 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto Common_EventScript_OverworldPokemon_Level_1

Common_EventScript_OverworldPokemon_Level_6:
# 386 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto Common_EventScript_OverworldPokemon_Level_1


Common_EventScript_VendingMachine::
# 394 "data/scripts/islandgame_common.pory"
	lock
# 396 "data/scripts/islandgame_common.pory"
Common_VendingMachine:
# 397 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_0
# 400 "data/scripts/islandgame_common.pory"
	showmoneybox 17, 1
# 401 "data/scripts/islandgame_common.pory"
	dynmultipush Common_EventScript_VendingMachine_Text_1, 0
# 402 "data/scripts/islandgame_common.pory"
	dynmultipush Common_EventScript_VendingMachine_Text_2, 35
# 403 "data/scripts/islandgame_common.pory"
	dynmultipush Common_EventScript_VendingMachine_Text_3, 36
# 404 "data/scripts/islandgame_common.pory"
	dynmultipush Common_EventScript_VendingMachine_Text_4, 37
# 405 "data/scripts/islandgame_common.pory"
	dynmultistack 0, 0, TRUE, 4, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 406 "data/scripts/islandgame_common.pory"
	switch VAR_RESULT
# 407 "data/scripts/islandgame_common.pory"
	case 35, Common_EventScript_VendingMachine_3
# 446 "data/scripts/islandgame_common.pory"
	case 36, Common_EventScript_VendingMachine_4
# 485 "data/scripts/islandgame_common.pory"
	case 37, Common_EventScript_VendingMachine_5
# 524 "data/scripts/islandgame_common.pory"
	goto VendingMachine_End
Common_EventScript_VendingMachine_1:
# 527 "data/scripts/islandgame_common.pory"
VendingMachine_End:
# 528 "data/scripts/islandgame_common.pory"
	hidemoneybox
# 529 "data/scripts/islandgame_common.pory"
	closemessage
# 530 "data/scripts/islandgame_common.pory"
	release
	return

Common_EventScript_VendingMachine_3:
# 408 "data/scripts/islandgame_common.pory"
	checkmoney 800
# 409 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_8
Common_EventScript_VendingMachine_7:
# 415 "data/scripts/islandgame_common.pory"
	removemoney 800
# 416 "data/scripts/islandgame_common.pory"
	updatemoneybox
# 417 "data/scripts/islandgame_common.pory"
	playse SE_SHOP
# 418 "data/scripts/islandgame_common.pory"
	waitse
# 419 "data/scripts/islandgame_common.pory"
	playse SE_VEND
# 420 "data/scripts/islandgame_common.pory"
	waitse
# 421 "data/scripts/islandgame_common.pory"
	hidemoneybox
# 424 "data/scripts/islandgame_common.pory"
	random 10
# 425 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_17
Common_EventScript_VendingMachine_16:
# 434 "data/scripts/islandgame_common.pory"
	giveitem ITEM_FRESH_WATER
# 437 "data/scripts/islandgame_common.pory"
	random 5
# 438 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_26
Common_EventScript_VendingMachine_25:
# 445 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_1

Common_EventScript_VendingMachine_4:
# 447 "data/scripts/islandgame_common.pory"
	checkmoney 1100
# 448 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_11
Common_EventScript_VendingMachine_10:
# 454 "data/scripts/islandgame_common.pory"
	removemoney 1100
# 455 "data/scripts/islandgame_common.pory"
	updatemoneybox
# 456 "data/scripts/islandgame_common.pory"
	playse SE_SHOP
# 457 "data/scripts/islandgame_common.pory"
	waitse
# 458 "data/scripts/islandgame_common.pory"
	playse SE_VEND
# 459 "data/scripts/islandgame_common.pory"
	waitse
# 460 "data/scripts/islandgame_common.pory"
	hidemoneybox
# 463 "data/scripts/islandgame_common.pory"
	random 10
# 464 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_20
Common_EventScript_VendingMachine_19:
# 473 "data/scripts/islandgame_common.pory"
	giveitem ITEM_SODA_POP
# 476 "data/scripts/islandgame_common.pory"
	random 5
# 477 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_29
Common_EventScript_VendingMachine_28:
# 484 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_1

Common_EventScript_VendingMachine_5:
# 486 "data/scripts/islandgame_common.pory"
	checkmoney 1300
# 487 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_14
Common_EventScript_VendingMachine_13:
# 493 "data/scripts/islandgame_common.pory"
	removemoney 1300
# 494 "data/scripts/islandgame_common.pory"
	updatemoneybox
# 495 "data/scripts/islandgame_common.pory"
	playse SE_SHOP
# 496 "data/scripts/islandgame_common.pory"
	waitse
# 497 "data/scripts/islandgame_common.pory"
	playse SE_VEND
# 498 "data/scripts/islandgame_common.pory"
	waitse
# 499 "data/scripts/islandgame_common.pory"
	hidemoneybox
# 502 "data/scripts/islandgame_common.pory"
	random 10
# 503 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_23
Common_EventScript_VendingMachine_22:
# 512 "data/scripts/islandgame_common.pory"
	giveitem ITEM_LEMONADE
# 515 "data/scripts/islandgame_common.pory"
	random 5
# 516 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_32
Common_EventScript_VendingMachine_31:
# 522 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_1

Common_EventScript_VendingMachine_8:
# 410 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_5
# 413 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_7

Common_EventScript_VendingMachine_11:
# 449 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_5
# 452 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_10

Common_EventScript_VendingMachine_14:
# 488 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_5
# 491 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_13

Common_EventScript_VendingMachine_17:
# 426 "data/scripts/islandgame_common.pory"
	playse SE_TRUCK_UNLOAD
# 427 "data/scripts/islandgame_common.pory"
	waitse
# 428 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_6
# 431 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_16

Common_EventScript_VendingMachine_20:
# 465 "data/scripts/islandgame_common.pory"
	playse SE_TRUCK_UNLOAD
# 466 "data/scripts/islandgame_common.pory"
	waitse
# 467 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_6
# 470 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_19

Common_EventScript_VendingMachine_23:
# 504 "data/scripts/islandgame_common.pory"
	playse SE_TRUCK_UNLOAD
# 505 "data/scripts/islandgame_common.pory"
	waitse
# 506 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_6
# 509 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_22

Common_EventScript_VendingMachine_26:
# 439 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_7
# 442 "data/scripts/islandgame_common.pory"
	giveitem ITEM_FRESH_WATER
	goto Common_EventScript_VendingMachine_25

Common_EventScript_VendingMachine_29:
# 478 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_7
# 481 "data/scripts/islandgame_common.pory"
	giveitem ITEM_SODA_POP
	goto Common_EventScript_VendingMachine_28

Common_EventScript_VendingMachine_32:
# 517 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_7
# 520 "data/scripts/islandgame_common.pory"
	giveitem ITEM_LEMONADE
	goto Common_EventScript_VendingMachine_31


Common_TryRemoveTemporaryObject::
# 534 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 535 "data/scripts/islandgame_common.pory"
	goto_if_unset FLAG_SYS_CTRL_OBJ_DELETE, Common_TryRemoveTemporaryObject_2
# 536 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Common_TryRemoveTemporaryObject_5
# 536 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Common_TryRemoveTemporaryObject_5
Common_TryRemoveTemporaryObject_4:
	return

Common_TryRemoveTemporaryObject_2:
	return

Common_TryRemoveTemporaryObject_5:
# 537 "data/scripts/islandgame_common.pory"
	setobjecthidden VAR_LAST_TALKED
# 538 "data/scripts/islandgame_common.pory"
	removeobject VAR_LAST_TALKED
	goto Common_TryRemoveTemporaryObject_4


Common_AttemptTrade::
# 545 "data/scripts/islandgame_common.pory"
	setorcopyvar VAR_0x8008, VAR_0x8000
# 546 "data/scripts/islandgame_common.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 547 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 548 "data/scripts/islandgame_common.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 549 "data/scripts/islandgame_common.pory"
	special ChoosePartyMon
# 550 "data/scripts/islandgame_common.pory"
	waitstate
# 551 "data/scripts/islandgame_common.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 553 "data/scripts/islandgame_common.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_AttemptTrade_2
# 558 "data/scripts/islandgame_common.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 559 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 560 "data/scripts/islandgame_common.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 562 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne Common_AttemptTrade_5
# 567 "data/scripts/islandgame_common.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 568 "data/scripts/islandgame_common.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 569 "data/scripts/islandgame_common.pory"
	special CreateInGameTradePokemon
# 570 "data/scripts/islandgame_common.pory"
	special DoInGameTradeScene
# 571 "data/scripts/islandgame_common.pory"
	waitstate
# 572 "data/scripts/islandgame_common.pory"
	setvar VAR_RESULT, TRADE_SUCCESS
	return

Common_AttemptTrade_2:
# 554 "data/scripts/islandgame_common.pory"
	setvar VAR_RESULT, TRADE_CANCELED
	return

Common_AttemptTrade_5:
# 563 "data/scripts/islandgame_common.pory"
	setvar VAR_RESULT, TRADE_WRONG_SPECIES
	return


Common_DisableAutoRun_Text_0:
# 2 "data/scripts/islandgame_common.pory"
	.string "Auto Run {COLOR RED}Disabled{COLOR DARK_GRAY}.$"

Common_EnableAutoRun_Text_0:
# 9 "data/scripts/islandgame_common.pory"
	.string "Auto Run {COLOR GREEN}Enabled{COLOR DARK_GRAY}.$"

IslandGame_Common_PokeMart_Sign_Text_0:
# 57 "data/scripts/islandgame_common.pory"
	.string "StrixMart\n"
	.string "OPEN 24 HOURS$"

IslandGame_Common_PokeCenter_Sign_Text_0:
# 64 "data/scripts/islandgame_common.pory"
	.string "Pokémon Center\n"
	.string "Now serving humans upstairs!$"

IslandGame_Common_PokemonCenter_1F_EventScript_Nurse_Text_0:
# 73 "data/scripts/islandgame_common.pory"
	.string "Welcome to the Maryan isles! This is a\n"
	.string "Pokémon Center.\p"
	.string "Trainers can bring their Pokémon here\n"
	.string "to have them healed free of charge!$"

ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_0:
# 92 "data/scripts/islandgame_common.pory"
	.string "You look tired, trainer. Would you like\n"
	.string "to take a rest in one of our rooms?\p"
	.string "{COLOR RED}(Should I take a break and pass the\n"
	.string "time...?)$"

ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_1:
# 98 "data/scripts/islandgame_common.pory"
	.string "You took a break until...$"

ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_2:
# 105 "data/scripts/islandgame_common.pory"
	.string "We hope you had a good rest! Come back\n"
	.string "if you would like to pass time.$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_0:
# 116 "data/scripts/islandgame_common.pory"
	.string "How's it going, youngin? I'm Marya's\n"
	.string "official Name Rater!\p"
	.string "Would you like me to impart my\n"
	.string "name-rating wisdom on your Pokémon?$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_1:
# 121 "data/scripts/islandgame_common.pory"
	.string "Alrighty mate, whose name shall I giveth\n"
	.string "a critique on?$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_2:
# 129 "data/scripts/islandgame_common.pory"
	.string "That's an egg, init? I can't judge a\n"
	.string "Pokémon that hasn't hatched yet!$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_3:
# 137 "data/scripts/islandgame_common.pory"
	.string "Ah, {STR_VAR_1} is it? A truly\n"
	.string "spectacular name, I say!\p"
	.string "Its original trainer must have been a\n"
	.string "real nicknaming aficionado.\p"
	.string "If you wanted to change its name,\n"
	.string "though, I unfortunately can't do that.\p"
	.string "It would go against the official Name\n"
	.string "Rater moral code of ethics!$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_4:
# 156 "data/scripts/islandgame_common.pory"
	.string "Hmm, so it's {STR_VAR_1}? A fitting\n"
	.string "name for such a fine Pokémon!\p"
	.string "But if you've a better name, I'm more\n"
	.string "than happy to change it to that!$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_5:
# 161 "data/scripts/islandgame_common.pory"
	.string "What'll its new name be?$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_6:
# 168 "data/scripts/islandgame_common.pory"
	.string "There we are! This Pokemon shall\n"
	.string "henceforth be known as...\p"
	.string "{STR_VAR_1}!\p"
	.string "And what a smashing name it is! I'm sure\n"
	.string "it's absolutely chuffed to have it!$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_7:
# 180 "data/scripts/islandgame_common.pory"
	.string "If you've any Pokemon whose name you'd\n"
	.string "like me to rate, I'm always here!$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_0:
# 189 "data/scripts/islandgame_common.pory"
	.string "Why hello there, whippersnapper! I'm\n"
	.string "the...{PAUSE 30} um...{PAUSE 30} oh! The Move Deleter!\p"
	.string "Would you like me to have your Pokemon\n"
	.string "forget one of their moves?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_1:
# 194 "data/scripts/islandgame_common.pory"
	.string "O-Oh! Splendid! Which Pokémon do you\n"
	.string "want me to make forget a move?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_2:
# 200 "data/scripts/islandgame_common.pory"
	.string "Oh... I see. It was foolish of me to get\n"
	.string "excited...\p"
	.string "I suppose I will continue being useless\n"
	.string "in these modern times...$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_3:
# 208 "data/scripts/islandgame_common.pory"
	.string "Eh? Is this a prank? You think it's\n"
	.string "funny picking on the elderly?\p"
	.string "Kids these days... No respect for\n"
	.string "anyone but themselves.$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_4:
# 215 "data/scripts/islandgame_common.pory"
	.string "I'm afraid I cannot make a Pokemon\n"
	.string "forget its only move...\p"
	.string "Doing so would cause MissingNo. to\n"
	.string "appear and corrupt this game...\p"
	.string "Eh? What do you mean that's a load of\n"
	.string "baloney? Are you disrespecting me!?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_5:
# 222 "data/scripts/islandgame_common.pory"
	.string "Alright, which move should be\n"
	.string "forgotten?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_6:
# 230 "data/scripts/islandgame_common.pory"
	.string "Ah... {STR_VAR_1}'s {STR_VAR_2}?\n"
	.string "You want this move to be forgotten?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_7:
# 237 "data/scripts/islandgame_common.pory"
	.string "Your {STR_VAR_1} has successfully\n"
	.string "forgotten the move {STR_VAR_2}!\p"
	.string "If you need another move forgotten,\n"
	.string "please come again!$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_8:
# 243 "data/scripts/islandgame_common.pory"
	.string "I see... I suppose there is no need for a\n"
	.string "Move Deleter in this world anymore...$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_0:
# 261 "data/scripts/islandgame_common.pory"
	.string "Hullo! I am the all-powerful guru known\n"
	.string "as the Move Relearner!\p"
	.string "I can help your Pokémon relearn moves\n"
	.string "they've previously learned!\p"
	.string "I can even teach them moves that they\n"
	.string "missed out on!$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_1:
# 267 "data/scripts/islandgame_common.pory"
	.string "I can do this, for the low, low price of\n"
	.string "¥1000! How's that sound?$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_2:
# 273 "data/scripts/islandgame_common.pory"
	.string "Sorry pal, I gotta make a living. I can't\n"
	.string "do it if ya don't got the money.$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_3:
# 279 "data/scripts/islandgame_common.pory"
	.string "Awesome. Which Pokémon do you want to\n"
	.string "relearn a move?$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_4:
# 285 "data/scripts/islandgame_common.pory"
	.string "If you ever need my power, I'll be here,\n"
	.string "waiting!$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_5:
# 292 "data/scripts/islandgame_common.pory"
	.string "Umm... eggs don't even have moves to\n"
	.string "learn...$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_6:
# 298 "data/scripts/islandgame_common.pory"
	.string "There's no moves for this Pokémon to\n"
	.string "relearn...$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_7:
# 303 "data/scripts/islandgame_common.pory"
	.string "Which move should I reteach this\n"
	.string "Pokémon?$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_8:
# 308 "data/scripts/islandgame_common.pory"
	.string "Well, if you change your mind, I'm always\n"
	.string "here!$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_9:
# 312 "data/scripts/islandgame_common.pory"
	.string "Okay... {PAUSE 30}annnnnd...{PAUSE 30} done! Your Pokémon\n"
	.string "has relearned its move!$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_10:
# 321 "data/scripts/islandgame_common.pory"
	.string "Pleasure doin' business with you,\n"
	.string "trainer!$"

Common_EventScript_VendingMachine_Text_0:
# 398 "data/scripts/islandgame_common.pory"
	.string "{COLOR RED}(It's a vending machine. What should I\n"
	.string "get?)$"

Common_EventScript_VendingMachine_Text_1:
# 401 "data/scripts/islandgame_common.pory"
	.string "Nah, I'm good$"

Common_EventScript_VendingMachine_Text_2:
# 402 "data/scripts/islandgame_common.pory"
	.string "Fresh Water - ¥800$"

Common_EventScript_VendingMachine_Text_3:
# 403 "data/scripts/islandgame_common.pory"
	.string "Soda Pop - ¥1100$"

Common_EventScript_VendingMachine_Text_4:
# 404 "data/scripts/islandgame_common.pory"
	.string "Lemonade - ¥1300$"

Common_EventScript_VendingMachine_Text_5:
# 411 "data/scripts/islandgame_common.pory"
	.string "{COLOR RED}(I don't have enough money.)$"

Common_EventScript_VendingMachine_Text_6:
# 429 "data/scripts/islandgame_common.pory"
	.string "{COLOR RED}(Looks like the machine got jammed.\n"
	.string "What a scam.)$"

Common_EventScript_VendingMachine_Text_7:
# 440 "data/scripts/islandgame_common.pory"
	.string "{COLOR RED}(Huh? Looks like another drink fell\n"
	.string "along with mine.)$"
