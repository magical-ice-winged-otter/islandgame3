Common_DisableAutoRun::
# 4 "data/scripts/islandgame_common.pory"
	msgbox Common_DisableAutoRun_Text_0
# 5 "data/scripts/islandgame_common.pory"
	waitmessage
# 6 "data/scripts/islandgame_common.pory"
	closemessage
	end


Common_EnableAutoRun::
# 11 "data/scripts/islandgame_common.pory"
	msgbox Common_EnableAutoRun_Text_0
# 12 "data/scripts/islandgame_common.pory"
	waitmessage
# 13 "data/scripts/islandgame_common.pory"
	closemessage
	end


Common_NextSubQuest::
Common_NextSubQuest_2:
# 30 "data/scripts/islandgame_common.pory"
	compare VAR_TEMP_B, VAR_TEMP_A
	goto_if_lt Common_NextSubQuest_3
	return

Common_NextSubQuest_3:
# 31 "data/scripts/islandgame_common.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, VAR_TEMP_C, VAR_TEMP_B
# 32 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_NextSubQuest_6
# 41 "data/scripts/islandgame_common.pory"
	addvar VAR_TEMP_B, 1
	goto Common_NextSubQuest_2

Common_NextSubQuest_6:
# 33 "data/scripts/islandgame_common.pory"
	subquestmenu QUEST_MENU_BUFFER_QUEST_NAME, VAR_TEMP_C, VAR_TEMP_B
	return


IslandGame_Common_PokemonCenter_1F_EventScript_Nurse::
# 47 "data/scripts/islandgame_common.pory"
	goto_if_unset FLAG_PROF_GAVE_EEVEE, IslandGame_Common_PokemonCenter_1F_EventScript_Nurse_1
# 57 "data/scripts/islandgame_common.pory"
	setvar VAR_0x800B, 1
# 58 "data/scripts/islandgame_common.pory"
	call Common_EventScript_PkmnCenterNurse
# 59 "data/scripts/islandgame_common.pory"
	waitmessage
# 60 "data/scripts/islandgame_common.pory"
	waitbuttonpress
# 61 "data/scripts/islandgame_common.pory"
	release
	return

IslandGame_Common_PokemonCenter_1F_EventScript_Nurse_1:
# 48 "data/scripts/islandgame_common.pory"
	lock
# 49 "data/scripts/islandgame_common.pory"
	msgbox IslandGame_Common_PokemonCenter_1F_EventScript_Nurse_Text_0
# 53 "data/scripts/islandgame_common.pory"
	closemessage
# 54 "data/scripts/islandgame_common.pory"
	release
	return


ISLANDGAME_PKMNCENTER_2F_TimeNPC::
# 69 "data/scripts/islandgame_common.pory"
	lock
# 70 "data/scripts/islandgame_common.pory"
	faceplayer
# 71 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_0, MSGBOX_YESNO
# 76 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_TimeNPC_2
ISLANDGAME_PKMNCENTER_2F_TimeNPC_1:
# 88 "data/scripts/islandgame_common.pory"
	closemessage
# 89 "data/scripts/islandgame_common.pory"
	release
	return

ISLANDGAME_PKMNCENTER_2F_TimeNPC_2:
# 77 "data/scripts/islandgame_common.pory"
	fadescreen FADE_TO_BLACK
# 78 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_1
# 79 "data/scripts/islandgame_common.pory"
	waitmessage
# 80 "data/scripts/islandgame_common.pory"
	special StartWallClock
# 81 "data/scripts/islandgame_common.pory"
	waitstate
# 82 "data/scripts/islandgame_common.pory"
	delay 30
# 83 "data/scripts/islandgame_common.pory"
	setflag FLAG_SET_WALL_CLOCK
# 84 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_2
	goto ISLANDGAME_PKMNCENTER_2F_TimeNPC_1


ISLANDGAME_PKMNCENTER_2F_NameRater::
# 95 "data/scripts/islandgame_common.pory"
	lock
# 96 "data/scripts/islandgame_common.pory"
	faceplayer
# 97 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_0, MSGBOX_YESNO
# 101 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_2
ISLANDGAME_PKMNCENTER_2F_NameRater_1:
# 161 "data/scripts/islandgame_common.pory"
NameRater_End:
# 162 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_7
# 163 "data/scripts/islandgame_common.pory"
	closemessage
# 164 "data/scripts/islandgame_common.pory"
	release
	return

ISLANDGAME_PKMNCENTER_2F_NameRater_2:
# 102 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_1
# 105 "data/scripts/islandgame_common.pory"
	special ChoosePartyMon
# 106 "data/scripts/islandgame_common.pory"
	waitstate
# 107 "data/scripts/islandgame_common.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne ISLANDGAME_PKMNCENTER_2F_NameRater_4
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_1

ISLANDGAME_PKMNCENTER_2F_NameRater_4:
# 108 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 109 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_7
ISLANDGAME_PKMNCENTER_2F_NameRater_6:
# 115 "data/scripts/islandgame_common.pory"
	special BufferMonNickname
# 116 "data/scripts/islandgame_common.pory"
	special IsMonOTIDNotPlayers
# 117 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_10
ISLANDGAME_PKMNCENTER_2F_NameRater_9:
# 126 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, MonOTNameNotPlayer
# 127 "data/scripts/islandgame_common.pory"
	special BufferMonNickname
# 128 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_13
ISLANDGAME_PKMNCENTER_2F_NameRater_12:
# 137 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_4, MSGBOX_YESNO
# 141 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_15
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_1

ISLANDGAME_PKMNCENTER_2F_NameRater_7:
# 110 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_2
# 113 "data/scripts/islandgame_common.pory"
	goto NameRater_End
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_6

ISLANDGAME_PKMNCENTER_2F_NameRater_10:
# 118 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_3
# 124 "data/scripts/islandgame_common.pory"
	goto NameRater_End
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_9

ISLANDGAME_PKMNCENTER_2F_NameRater_13:
# 129 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_3
# 135 "data/scripts/islandgame_common.pory"
	goto NameRater_End
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_12

ISLANDGAME_PKMNCENTER_2F_NameRater_15:
# 142 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_5
# 145 "data/scripts/islandgame_common.pory"
	call Common_EventScript_NameReceivedPartyMon
# 146 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
# 147 "data/scripts/islandgame_common.pory"
	special BufferMonNickname
# 148 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_17
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_1

ISLANDGAME_PKMNCENTER_2F_NameRater_17:
# 149 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_6
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_1


ISLANDGAME_PKMNCENTER_2F_MoveDeleter::
# 170 "data/scripts/islandgame_common.pory"
	lock
# 171 "data/scripts/islandgame_common.pory"
	faceplayer
# 172 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_0, MSGBOX_YESNO
# 176 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_2
# 232 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_8
# 233 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
ISLANDGAME_PKMNCENTER_2F_MoveDeleter_1:
# 236 "data/scripts/islandgame_common.pory"
MoveDeleter_End:
# 237 "data/scripts/islandgame_common.pory"
	closemessage
# 238 "data/scripts/islandgame_common.pory"
	release
	return

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_2:
# 177 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_1
# 180 "data/scripts/islandgame_common.pory"
	special ChoosePartyMon
# 181 "data/scripts/islandgame_common.pory"
	waitstate
# 182 "data/scripts/islandgame_common.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_6
ISLANDGAME_PKMNCENTER_2F_MoveDeleter_5:
# 189 "data/scripts/islandgame_common.pory"
	special IsSelectedMonEgg
# 190 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_9
ISLANDGAME_PKMNCENTER_2F_MoveDeleter_8:
# 196 "data/scripts/islandgame_common.pory"
	special GetNumMovesSelectedMonHas
# 197 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 1
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_12
ISLANDGAME_PKMNCENTER_2F_MoveDeleter_11:
# 205 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_5
# 208 "data/scripts/islandgame_common.pory"
	fadescreen FADE_TO_BLACK
# 209 "data/scripts/islandgame_common.pory"
	special MoveDeleterChooseMoveToForget
# 210 "data/scripts/islandgame_common.pory"
	fadescreen FADE_FROM_BLACK
# 211 "data/scripts/islandgame_common.pory"
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, ISLANDGAME_PKMNCENTER_2F_MoveDeleter
# 212 "data/scripts/islandgame_common.pory"
	special BufferMoveDeleterNicknameAndMove
# 213 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_6, MSGBOX_YESNO
# 216 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_14
# 227 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_8
# 228 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_1

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_6:
# 183 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_2
# 187 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_5

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_9:
# 191 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_3
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_8

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_12:
# 198 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_4
# 203 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_11

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_14:
# 217 "data/scripts/islandgame_common.pory"
	special MoveDeleterForgetMove
# 218 "data/scripts/islandgame_common.pory"
	playfanfare MUS_MOVE_DELETED
# 219 "data/scripts/islandgame_common.pory"
	waitfanfare
# 220 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_7
# 224 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_1


ISLANDGAME_PKMNCENTER_2F_MoveRelearner::
# 244 "data/scripts/islandgame_common.pory"
	lock
# 245 "data/scripts/islandgame_common.pory"
	faceplayer
# 246 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_0
# 251 "data/scripts/islandgame_common.pory"
	showmoneybox 0, 0
# 252 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_1, MSGBOX_YESNO
# 255 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_2
# 312 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_8
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_1:
# 315 "data/scripts/islandgame_common.pory"
MoveRelearner_End:
# 316 "data/scripts/islandgame_common.pory"
	hidemoneybox
# 317 "data/scripts/islandgame_common.pory"
	closemessage
# 318 "data/scripts/islandgame_common.pory"
	release
	return

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_2:
# 256 "data/scripts/islandgame_common.pory"
	checkmoney 1000
# 257 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_5
# 264 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_3
# 267 "data/scripts/islandgame_common.pory"
	special ChooseMonForMoveRelearner
# 268 "data/scripts/islandgame_common.pory"
	waitstate
# 269 "data/scripts/islandgame_common.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_9
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_8:
# 275 "data/scripts/islandgame_common.pory"
	special IsSelectedMonEgg
# 276 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_PKMNCENTER_2F_MoveRelearner_12
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_11:
# 282 "data/scripts/islandgame_common.pory"
	compare VAR_0x8005, 0
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_15
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_14:
# 288 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_7
# 291 "data/scripts/islandgame_common.pory"
	special TeachMoveRelearnerMove
# 292 "data/scripts/islandgame_common.pory"
	waitstate
# 293 "data/scripts/islandgame_common.pory"
	compare VAR_0x8004, 0
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_18
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_17:
# 297 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_9
# 300 "data/scripts/islandgame_common.pory"
	waitmessage
# 301 "data/scripts/islandgame_common.pory"
	showmoneybox 0, 0
# 302 "data/scripts/islandgame_common.pory"
	removemoney 1000
# 303 "data/scripts/islandgame_common.pory"
	updatemoneybox
# 304 "data/scripts/islandgame_common.pory"
	playse SE_SHOP
# 305 "data/scripts/islandgame_common.pory"
	waitse
# 306 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_10
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_1

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_5:
# 258 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_2
# 261 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_1

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_9:
# 270 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_4
# 273 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_8

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_12:
# 277 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_5
# 280 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_11

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_15:
# 283 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_6
# 286 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_14

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_18:
# 294 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_8
# 295 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_17


Common_EventScript_OverworldPokemon::
# 322 "data/scripts/islandgame_common.pory"
	lock
# 323 "data/scripts/islandgame_common.pory"
	faceplayer
# 324 "data/scripts/islandgame_common.pory"
	setflag FLAG_SMART_WILD_AI
# 325 "data/scripts/islandgame_common.pory"
	startwildoverworldencounter
# 326 "data/scripts/islandgame_common.pory"
	clearflag FLAG_SMART_WILD_AI
# 327 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 329 "data/scripts/islandgame_common.pory"
	switch VAR_RESULT
# 330 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_LOST, Common_EventScript_OverworldPokemon_3
# 332 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_RAN, Common_EventScript_OverworldPokemon_4
# 334 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_WON, Common_EventScript_OverworldPokemon_5
# 336 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_CAUGHT, Common_EventScript_OverworldPokemon_6
# 339 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
Common_EventScript_OverworldPokemon_1:
# 341 "data/scripts/islandgame_common.pory"
	release
	return

Common_EventScript_OverworldPokemon_3:
	goto Common_EventScript_OverworldPokemon_1

Common_EventScript_OverworldPokemon_4:
	goto Common_EventScript_OverworldPokemon_1

Common_EventScript_OverworldPokemon_5:
# 335 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto Common_EventScript_OverworldPokemon_1

Common_EventScript_OverworldPokemon_6:
# 337 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto Common_EventScript_OverworldPokemon_1


Common_EventScript_OverworldPokemon_Level::
# 345 "data/scripts/islandgame_common.pory"
	lock
# 346 "data/scripts/islandgame_common.pory"
	faceplayer
# 347 "data/scripts/islandgame_common.pory"
	setflag FLAG_SMART_WILD_AI
# 348 "data/scripts/islandgame_common.pory"
	startoverworldencounter 23
# 349 "data/scripts/islandgame_common.pory"
	clearflag FLAG_SMART_WILD_AI
# 350 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 352 "data/scripts/islandgame_common.pory"
	switch VAR_RESULT
# 353 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_LOST, Common_EventScript_OverworldPokemon_Level_3
# 355 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_RAN, Common_EventScript_OverworldPokemon_Level_4
# 357 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_WON, Common_EventScript_OverworldPokemon_Level_5
# 359 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_CAUGHT, Common_EventScript_OverworldPokemon_Level_6
# 362 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
Common_EventScript_OverworldPokemon_Level_1:
# 364 "data/scripts/islandgame_common.pory"
	release
	return

Common_EventScript_OverworldPokemon_Level_3:
	goto Common_EventScript_OverworldPokemon_Level_1

Common_EventScript_OverworldPokemon_Level_4:
	goto Common_EventScript_OverworldPokemon_Level_1

Common_EventScript_OverworldPokemon_Level_5:
# 358 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto Common_EventScript_OverworldPokemon_Level_1

Common_EventScript_OverworldPokemon_Level_6:
# 360 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto Common_EventScript_OverworldPokemon_Level_1


Common_EventScript_VendingMachine::
# 368 "data/scripts/islandgame_common.pory"
	lock
# 370 "data/scripts/islandgame_common.pory"
Common_VendingMachine:
# 371 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_0
# 374 "data/scripts/islandgame_common.pory"
	showmoneybox 17, 1
# 375 "data/scripts/islandgame_common.pory"
	dynmultipush Common_EventScript_VendingMachine_Text_1, 0
# 376 "data/scripts/islandgame_common.pory"
	dynmultipush Common_EventScript_VendingMachine_Text_2, 35
# 377 "data/scripts/islandgame_common.pory"
	dynmultipush Common_EventScript_VendingMachine_Text_3, 36
# 378 "data/scripts/islandgame_common.pory"
	dynmultipush Common_EventScript_VendingMachine_Text_4, 37
# 379 "data/scripts/islandgame_common.pory"
	dynmultistack 0, 0, TRUE, 4, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 380 "data/scripts/islandgame_common.pory"
	switch VAR_RESULT
# 381 "data/scripts/islandgame_common.pory"
	case 35, Common_EventScript_VendingMachine_3
# 420 "data/scripts/islandgame_common.pory"
	case 36, Common_EventScript_VendingMachine_4
# 459 "data/scripts/islandgame_common.pory"
	case 37, Common_EventScript_VendingMachine_5
# 498 "data/scripts/islandgame_common.pory"
	goto VendingMachine_End
Common_EventScript_VendingMachine_1:
# 501 "data/scripts/islandgame_common.pory"
VendingMachine_End:
# 502 "data/scripts/islandgame_common.pory"
	hidemoneybox
# 503 "data/scripts/islandgame_common.pory"
	closemessage
# 504 "data/scripts/islandgame_common.pory"
	release
	return

Common_EventScript_VendingMachine_3:
# 382 "data/scripts/islandgame_common.pory"
	checkmoney 500
# 383 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_8
Common_EventScript_VendingMachine_7:
# 389 "data/scripts/islandgame_common.pory"
	removemoney 500
# 390 "data/scripts/islandgame_common.pory"
	updatemoneybox
# 391 "data/scripts/islandgame_common.pory"
	playse SE_SHOP
# 392 "data/scripts/islandgame_common.pory"
	waitse
# 393 "data/scripts/islandgame_common.pory"
	playse SE_VEND
# 394 "data/scripts/islandgame_common.pory"
	waitse
# 395 "data/scripts/islandgame_common.pory"
	hidemoneybox
# 398 "data/scripts/islandgame_common.pory"
	random 10
# 399 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_17
Common_EventScript_VendingMachine_16:
# 408 "data/scripts/islandgame_common.pory"
	giveitem ITEM_FRESH_WATER
# 411 "data/scripts/islandgame_common.pory"
	random 5
# 412 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_26
Common_EventScript_VendingMachine_25:
# 419 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_1

Common_EventScript_VendingMachine_4:
# 421 "data/scripts/islandgame_common.pory"
	checkmoney 800
# 422 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_11
Common_EventScript_VendingMachine_10:
# 428 "data/scripts/islandgame_common.pory"
	removemoney 800
# 429 "data/scripts/islandgame_common.pory"
	updatemoneybox
# 430 "data/scripts/islandgame_common.pory"
	playse SE_SHOP
# 431 "data/scripts/islandgame_common.pory"
	waitse
# 432 "data/scripts/islandgame_common.pory"
	playse SE_VEND
# 433 "data/scripts/islandgame_common.pory"
	waitse
# 434 "data/scripts/islandgame_common.pory"
	hidemoneybox
# 437 "data/scripts/islandgame_common.pory"
	random 10
# 438 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_20
Common_EventScript_VendingMachine_19:
# 447 "data/scripts/islandgame_common.pory"
	giveitem ITEM_SODA_POP
# 450 "data/scripts/islandgame_common.pory"
	random 5
# 451 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_29
Common_EventScript_VendingMachine_28:
# 458 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_1

Common_EventScript_VendingMachine_5:
# 460 "data/scripts/islandgame_common.pory"
	checkmoney 1200
# 461 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_14
Common_EventScript_VendingMachine_13:
# 467 "data/scripts/islandgame_common.pory"
	removemoney 1200
# 468 "data/scripts/islandgame_common.pory"
	updatemoneybox
# 469 "data/scripts/islandgame_common.pory"
	playse SE_SHOP
# 470 "data/scripts/islandgame_common.pory"
	waitse
# 471 "data/scripts/islandgame_common.pory"
	playse SE_VEND
# 472 "data/scripts/islandgame_common.pory"
	waitse
# 473 "data/scripts/islandgame_common.pory"
	hidemoneybox
# 476 "data/scripts/islandgame_common.pory"
	random 10
# 477 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_23
Common_EventScript_VendingMachine_22:
# 486 "data/scripts/islandgame_common.pory"
	giveitem ITEM_LEMONADE
# 489 "data/scripts/islandgame_common.pory"
	random 5
# 490 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_VendingMachine_32
Common_EventScript_VendingMachine_31:
# 496 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_1

Common_EventScript_VendingMachine_8:
# 384 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_5
# 387 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_7

Common_EventScript_VendingMachine_11:
# 423 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_5
# 426 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_10

Common_EventScript_VendingMachine_14:
# 462 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_5
# 465 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_13

Common_EventScript_VendingMachine_17:
# 400 "data/scripts/islandgame_common.pory"
	playse SE_TRUCK_UNLOAD
# 401 "data/scripts/islandgame_common.pory"
	waitse
# 402 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_6
# 405 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_16

Common_EventScript_VendingMachine_20:
# 439 "data/scripts/islandgame_common.pory"
	playse SE_TRUCK_UNLOAD
# 440 "data/scripts/islandgame_common.pory"
	waitse
# 441 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_6
# 444 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_19

Common_EventScript_VendingMachine_23:
# 478 "data/scripts/islandgame_common.pory"
	playse SE_TRUCK_UNLOAD
# 479 "data/scripts/islandgame_common.pory"
	waitse
# 480 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_6
# 483 "data/scripts/islandgame_common.pory"
	goto Common_VendingMachine
	goto Common_EventScript_VendingMachine_22

Common_EventScript_VendingMachine_26:
# 413 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_7
# 416 "data/scripts/islandgame_common.pory"
	giveitem ITEM_FRESH_WATER
	goto Common_EventScript_VendingMachine_25

Common_EventScript_VendingMachine_29:
# 452 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_7
# 455 "data/scripts/islandgame_common.pory"
	giveitem ITEM_SODA_POP
	goto Common_EventScript_VendingMachine_28

Common_EventScript_VendingMachine_32:
# 491 "data/scripts/islandgame_common.pory"
	msgbox Common_EventScript_VendingMachine_Text_7
# 494 "data/scripts/islandgame_common.pory"
	giveitem ITEM_LEMONADE
	goto Common_EventScript_VendingMachine_31


Common_DisableAutoRun_Text_0:
# 4 "data/scripts/islandgame_common.pory"
	.string "Auto Run {COLOR RED}Disabled{COLOR DARK_GRAY}.$"

Common_EnableAutoRun_Text_0:
# 11 "data/scripts/islandgame_common.pory"
	.string "Auto Run {COLOR GREEN}Enabled{COLOR DARK_GRAY}.$"

IslandGame_Common_PokemonCenter_1F_EventScript_Nurse_Text_0:
# 50 "data/scripts/islandgame_common.pory"
	.string "Welcome to the Maryan isles! This is a\n"
	.string "Pokémon Center.\p"
	.string "Trainers can bring their Pokémon here\n"
	.string "to have them healed free of charge!$"

ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_0:
# 72 "data/scripts/islandgame_common.pory"
	.string "You look tired, trainer. Would you like\n"
	.string "to take a rest in one of our rooms?\p"
	.string "{COLOR RED}(Should I take a break and pass the\n"
	.string "time...?)$"

ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_1:
# 78 "data/scripts/islandgame_common.pory"
	.string "You took a break until...$"

ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_2:
# 85 "data/scripts/islandgame_common.pory"
	.string "We hope you had a good rest! Come back\n"
	.string "if you would like to pass time.$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_0:
# 98 "data/scripts/islandgame_common.pory"
	.string "How's it going, youngin? I'm Marya's\n"
	.string "official Name Rater!\p"
	.string "Would you like me to impart my\n"
	.string "name-rating wisdom on your Pokémon?$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_1:
# 103 "data/scripts/islandgame_common.pory"
	.string "Alrighty mate, whose name shall I giveth\n"
	.string "a critique on?$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_2:
# 111 "data/scripts/islandgame_common.pory"
	.string "That's an egg, init? I can't judge a\n"
	.string "Pokémon that hasn't hatched yet!$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_3:
# 119 "data/scripts/islandgame_common.pory"
	.string "Ah, {STR_VAR_1} is it? A truly\n"
	.string "spectacular name, I say!\p"
	.string "Its original trainer must have been a\n"
	.string "real nicknaming aficionado.\p"
	.string "If you wanted to change its name,\n"
	.string "though, I unfortunately can't do that.\p"
	.string "It would go against the official Name\n"
	.string "Rater moral code of ethics!$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_4:
# 138 "data/scripts/islandgame_common.pory"
	.string "Hmm, so it's {STR_VAR_1}? A fitting\n"
	.string "name for such a fine Pokémon!\p"
	.string "But if you've a better name, I'm more\n"
	.string "than happy to change it to that!$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_5:
# 143 "data/scripts/islandgame_common.pory"
	.string "What'll its new name be?$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_6:
# 150 "data/scripts/islandgame_common.pory"
	.string "There we are! This Pokemon shall\n"
	.string "henceforth be known as...\p"
	.string "{STR_VAR_1}!\p"
	.string "And what a smashing name it is! I'm sure\n"
	.string "it's absolutely chuffed to have it!$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_7:
# 162 "data/scripts/islandgame_common.pory"
	.string "If you've any Pokemon whose name you'd\n"
	.string "like me to rate, I'm always here!$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_0:
# 173 "data/scripts/islandgame_common.pory"
	.string "Why hello there, whippersnapper! I'm\n"
	.string "the...{PAUSE 30} um...{PAUSE 30} oh! The Move Deleter!\p"
	.string "Would you like me to have your Pokemon\n"
	.string "forget one of their moves?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_1:
# 178 "data/scripts/islandgame_common.pory"
	.string "O-Oh! Splendid! Which Pokémon do you\n"
	.string "want me to make forget a move?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_2:
# 184 "data/scripts/islandgame_common.pory"
	.string "Oh... I see. It was foolish of me to get\n"
	.string "excited...\p"
	.string "I suppose I will continue being useless\n"
	.string "in these modern times...$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_3:
# 192 "data/scripts/islandgame_common.pory"
	.string "Eh? Is this a prank? You think it's\n"
	.string "funny picking on the elderly?\p"
	.string "Kids these days... No respect for\n"
	.string "anyone but themselves.$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_4:
# 199 "data/scripts/islandgame_common.pory"
	.string "I'm afraid I cannot make a Pokemon\n"
	.string "forget its only move...\p"
	.string "Doing so would cause MissingNo. to\n"
	.string "appear and corrupt this game...\p"
	.string "Eh? What do you mean that's a load of\n"
	.string "baloney? Are you disrespecting me!?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_5:
# 206 "data/scripts/islandgame_common.pory"
	.string "Alright, which move should be\n"
	.string "forgotten?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_6:
# 214 "data/scripts/islandgame_common.pory"
	.string "Ah... {STR_VAR_1}'s {STR_VAR_2}?\n"
	.string "You want this move to be forgotten?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_7:
# 221 "data/scripts/islandgame_common.pory"
	.string "Your {STR_VAR_1} has successfully\n"
	.string "forgotten the move {STR_VAR_2}!\p"
	.string "If you need another move forgotten,\n"
	.string "please come again!$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_8:
# 227 "data/scripts/islandgame_common.pory"
	.string "I see... I suppose there is no need for a\n"
	.string "Move Deleter in this world anymore...$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_0:
# 247 "data/scripts/islandgame_common.pory"
	.string "Hullo! I am the all-powerful guru known\n"
	.string "as the Move Relearner!\p"
	.string "I can help your Pokémon relearn moves\n"
	.string "they've previously learned!\p"
	.string "I can even teach them moves that they\n"
	.string "missed out on!$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_1:
# 253 "data/scripts/islandgame_common.pory"
	.string "I can do this, for the low, low price of\n"
	.string "¥1000! How's that sound?$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_2:
# 259 "data/scripts/islandgame_common.pory"
	.string "Sorry pal, I gotta make a living. I can't\n"
	.string "do it if ya don't got the money.$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_3:
# 265 "data/scripts/islandgame_common.pory"
	.string "Awesome. Which Pokémon do you want to\n"
	.string "relearn a move?$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_4:
# 271 "data/scripts/islandgame_common.pory"
	.string "If you ever need my power, I'll be here,\n"
	.string "waiting!$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_5:
# 278 "data/scripts/islandgame_common.pory"
	.string "Umm... eggs don't even have moves to\n"
	.string "learn...$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_6:
# 284 "data/scripts/islandgame_common.pory"
	.string "There's no moves for this Pokémon to\n"
	.string "relearn...$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_7:
# 289 "data/scripts/islandgame_common.pory"
	.string "Which move should I reteach this\n"
	.string "Pokémon?$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_8:
# 294 "data/scripts/islandgame_common.pory"
	.string "Well, if you change your mind, I'm always\n"
	.string "here!$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_9:
# 298 "data/scripts/islandgame_common.pory"
	.string "Okay... {PAUSE 30}annnnnd...{PAUSE 30} done! Your Pokémon\n"
	.string "has relearned its move!$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_10:
# 307 "data/scripts/islandgame_common.pory"
	.string "Pleasure doin' business with you,\n"
	.string "trainer!$"

Common_EventScript_VendingMachine_Text_0:
# 372 "data/scripts/islandgame_common.pory"
	.string "{COLOR RED}(It's a vending machine. What should I\n"
	.string "get?)$"

Common_EventScript_VendingMachine_Text_1:
# 375 "data/scripts/islandgame_common.pory"
	.string "Nah, I'm good$"

Common_EventScript_VendingMachine_Text_2:
# 376 "data/scripts/islandgame_common.pory"
	.string "Fresh Water - ¥500$"

Common_EventScript_VendingMachine_Text_3:
# 377 "data/scripts/islandgame_common.pory"
	.string "Soda Pop - ¥800$"

Common_EventScript_VendingMachine_Text_4:
# 378 "data/scripts/islandgame_common.pory"
	.string "Lemonade - ¥1200$"

Common_EventScript_VendingMachine_Text_5:
# 385 "data/scripts/islandgame_common.pory"
	.string "{COLOR RED}(I don't have enough money.)$"

Common_EventScript_VendingMachine_Text_6:
# 403 "data/scripts/islandgame_common.pory"
	.string "{COLOR RED}(Looks like the machine got jammed.\n"
	.string "What a scam.)$"

Common_EventScript_VendingMachine_Text_7:
# 414 "data/scripts/islandgame_common.pory"
	.string "{COLOR RED}(Huh? Looks like another drink fell\n"
	.string "along with mine.)$"
