ISLANDGAME_COMMON_PKMNCENTER_Nurse::
# 6 "data/scripts/islandgame_common.pory"
	goto_if_unset FLAG_ORANNA_CHERIPORT_GOT_EEVEE, ISLANDGAME_COMMON_PKMNCENTER_Nurse_1
# 16 "data/scripts/islandgame_common.pory"
	setvar VAR_0x800B, 1
# 17 "data/scripts/islandgame_common.pory"
	call Common_EventScript_PkmnCenterNurse
# 18 "data/scripts/islandgame_common.pory"
	waitmessage
# 19 "data/scripts/islandgame_common.pory"
	waitbuttonpress
# 20 "data/scripts/islandgame_common.pory"
	release
	return

ISLANDGAME_COMMON_PKMNCENTER_Nurse_1:
# 7 "data/scripts/islandgame_common.pory"
	lock
# 8 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_Nurse_Text_0
# 12 "data/scripts/islandgame_common.pory"
	closemessage
# 13 "data/scripts/islandgame_common.pory"
	release
	return


ISLANDGAME_COMMON_PKMNCENTER_TimeChanger::
# 26 "data/scripts/islandgame_common.pory"
	lock
# 27 "data/scripts/islandgame_common.pory"
	faceplayer
# 28 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_TimeChanger_Text_0, MSGBOX_YESNO
# 33 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_COMMON_PKMNCENTER_TimeChanger_2
ISLANDGAME_COMMON_PKMNCENTER_TimeChanger_1:
# 45 "data/scripts/islandgame_common.pory"
	closemessage
# 46 "data/scripts/islandgame_common.pory"
	release
	return

ISLANDGAME_COMMON_PKMNCENTER_TimeChanger_2:
# 34 "data/scripts/islandgame_common.pory"
	fadescreen FADE_TO_BLACK
# 35 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_TimeChanger_Text_1
# 36 "data/scripts/islandgame_common.pory"
	waitmessage
# 37 "data/scripts/islandgame_common.pory"
	special StartWallClock
# 38 "data/scripts/islandgame_common.pory"
	waitstate
# 39 "data/scripts/islandgame_common.pory"
	delay 30
# 40 "data/scripts/islandgame_common.pory"
	setflag FLAG_SET_WALL_CLOCK
# 41 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_TimeChanger_Text_2
	goto ISLANDGAME_COMMON_PKMNCENTER_TimeChanger_1


ISLANDGAME_COMMON_PKMNCENTER_NameRater::
# 52 "data/scripts/islandgame_common.pory"
	lock
# 53 "data/scripts/islandgame_common.pory"
	faceplayer
# 54 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_NameRater_Text_0, MSGBOX_YESNO
# 58 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_COMMON_PKMNCENTER_NameRater_2
ISLANDGAME_COMMON_PKMNCENTER_NameRater_1:
# 118 "data/scripts/islandgame_common.pory"
NameRater_End:
# 119 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_NameRater_Text_7
# 120 "data/scripts/islandgame_common.pory"
	closemessage
# 121 "data/scripts/islandgame_common.pory"
	release
	return

ISLANDGAME_COMMON_PKMNCENTER_NameRater_2:
# 59 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_NameRater_Text_1
# 62 "data/scripts/islandgame_common.pory"
	special ChoosePartyMon
# 63 "data/scripts/islandgame_common.pory"
	waitstate
# 64 "data/scripts/islandgame_common.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne ISLANDGAME_COMMON_PKMNCENTER_NameRater_4
	goto ISLANDGAME_COMMON_PKMNCENTER_NameRater_1

ISLANDGAME_COMMON_PKMNCENTER_NameRater_4:
# 65 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 66 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq ISLANDGAME_COMMON_PKMNCENTER_NameRater_7
ISLANDGAME_COMMON_PKMNCENTER_NameRater_6:
# 72 "data/scripts/islandgame_common.pory"
	special BufferMonNickname
# 73 "data/scripts/islandgame_common.pory"
	special IsMonOTIDNotPlayers
# 74 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_COMMON_PKMNCENTER_NameRater_10
ISLANDGAME_COMMON_PKMNCENTER_NameRater_9:
# 83 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, MonOTNameNotPlayer
# 84 "data/scripts/islandgame_common.pory"
	special BufferMonNickname
# 85 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_COMMON_PKMNCENTER_NameRater_13
ISLANDGAME_COMMON_PKMNCENTER_NameRater_12:
# 94 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_NameRater_Text_4, MSGBOX_YESNO
# 98 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_COMMON_PKMNCENTER_NameRater_15
	goto ISLANDGAME_COMMON_PKMNCENTER_NameRater_1

ISLANDGAME_COMMON_PKMNCENTER_NameRater_7:
# 67 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_NameRater_Text_2
# 70 "data/scripts/islandgame_common.pory"
	goto NameRater_End
	goto ISLANDGAME_COMMON_PKMNCENTER_NameRater_6

ISLANDGAME_COMMON_PKMNCENTER_NameRater_10:
# 75 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_NameRater_Text_3
# 81 "data/scripts/islandgame_common.pory"
	goto NameRater_End
	goto ISLANDGAME_COMMON_PKMNCENTER_NameRater_9

ISLANDGAME_COMMON_PKMNCENTER_NameRater_13:
# 86 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_NameRater_Text_3
# 92 "data/scripts/islandgame_common.pory"
	goto NameRater_End
	goto ISLANDGAME_COMMON_PKMNCENTER_NameRater_12

ISLANDGAME_COMMON_PKMNCENTER_NameRater_15:
# 99 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_NameRater_Text_5
# 102 "data/scripts/islandgame_common.pory"
	call Common_EventScript_NameReceivedPartyMon
# 103 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
# 104 "data/scripts/islandgame_common.pory"
	special BufferMonNickname
# 105 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_COMMON_PKMNCENTER_NameRater_17
	goto ISLANDGAME_COMMON_PKMNCENTER_NameRater_1

ISLANDGAME_COMMON_PKMNCENTER_NameRater_17:
# 106 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_NameRater_Text_6
	goto ISLANDGAME_COMMON_PKMNCENTER_NameRater_1


ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter::
# 128 "data/scripts/islandgame_common.pory"
	lock
# 129 "data/scripts/islandgame_common.pory"
	faceplayer
# 130 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_Text_0, MSGBOX_YESNO
# 134 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_2
# 190 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_Text_8
# 191 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_1:
# 194 "data/scripts/islandgame_common.pory"
MoveDeleter_End:
# 195 "data/scripts/islandgame_common.pory"
	closemessage
# 196 "data/scripts/islandgame_common.pory"
	release
	return

ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_2:
# 135 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_Text_1
# 138 "data/scripts/islandgame_common.pory"
	special ChoosePartyMon
# 139 "data/scripts/islandgame_common.pory"
	waitstate
# 140 "data/scripts/islandgame_common.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_6
ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_5:
# 147 "data/scripts/islandgame_common.pory"
	special IsSelectedMonEgg
# 148 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_9
ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_8:
# 154 "data/scripts/islandgame_common.pory"
	special GetNumMovesSelectedMonHas
# 155 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 1
	goto_if_eq ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_12
ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_11:
# 163 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_Text_5
# 166 "data/scripts/islandgame_common.pory"
	fadescreen FADE_TO_BLACK
# 167 "data/scripts/islandgame_common.pory"
	special MoveDeleterChooseMoveToForget
# 168 "data/scripts/islandgame_common.pory"
	fadescreen FADE_FROM_BLACK
# 169 "data/scripts/islandgame_common.pory"
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, ISLANDGAME_PKMNCENTER_2F_MoveDeleter
# 170 "data/scripts/islandgame_common.pory"
	special BufferMoveDeleterNicknameAndMove
# 171 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_Text_6, MSGBOX_YESNO
# 174 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_14
# 185 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_Text_8
# 186 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
	goto ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_1

ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_6:
# 141 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_Text_2
# 145 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
	goto ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_5

ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_9:
# 149 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_Text_3
	goto ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_8

ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_12:
# 156 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_Text_4
# 161 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
	goto ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_11

ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_14:
# 175 "data/scripts/islandgame_common.pory"
	special MoveDeleterForgetMove
# 176 "data/scripts/islandgame_common.pory"
	playfanfare MUS_MOVE_DELETED
# 177 "data/scripts/islandgame_common.pory"
	waitfanfare
# 178 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_Text_7
# 182 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
	goto ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_1


ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner::
# 203 "data/scripts/islandgame_common.pory"
	lock
# 204 "data/scripts/islandgame_common.pory"
	faceplayer
# 205 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_0
# 210 "data/scripts/islandgame_common.pory"
	showmoneybox 0, 0
# 211 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_1, MSGBOX_YESNO
# 214 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_2
# 271 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_8
ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_1:
# 274 "data/scripts/islandgame_common.pory"
MoveRelearner_End:
# 275 "data/scripts/islandgame_common.pory"
	hidemoneybox
# 276 "data/scripts/islandgame_common.pory"
	closemessage
# 277 "data/scripts/islandgame_common.pory"
	release
	return

ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_2:
# 215 "data/scripts/islandgame_common.pory"
	checkmoney 1000
# 216 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_5
# 223 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_3
# 226 "data/scripts/islandgame_common.pory"
	special ChooseMonForMoveRelearner
# 227 "data/scripts/islandgame_common.pory"
	waitstate
# 228 "data/scripts/islandgame_common.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_9
ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_8:
# 234 "data/scripts/islandgame_common.pory"
	special IsSelectedMonEgg
# 235 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_12
ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_11:
# 241 "data/scripts/islandgame_common.pory"
	compare VAR_0x8005, 0
	goto_if_eq ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_15
ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_14:
# 247 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_7
# 250 "data/scripts/islandgame_common.pory"
	special TeachMoveRelearnerMove
# 251 "data/scripts/islandgame_common.pory"
	waitstate
# 252 "data/scripts/islandgame_common.pory"
	compare VAR_0x8004, 0
	goto_if_eq ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_18
ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_17:
# 256 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_9
# 259 "data/scripts/islandgame_common.pory"
	waitmessage
# 260 "data/scripts/islandgame_common.pory"
	showmoneybox 0, 0
# 261 "data/scripts/islandgame_common.pory"
	removemoney 1000
# 262 "data/scripts/islandgame_common.pory"
	updatemoneybox
# 263 "data/scripts/islandgame_common.pory"
	playse SE_SHOP
# 264 "data/scripts/islandgame_common.pory"
	waitse
# 265 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_10
	goto ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_1

ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_5:
# 217 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_2
# 220 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_1

ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_9:
# 229 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_4
# 232 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_8

ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_12:
# 236 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_5
# 239 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_11

ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_15:
# 242 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_6
# 245 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_14

ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_18:
# 253 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_8
# 254 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_17


ISLANDGAME_COMMON_PKMNCENTER_Nurse_Text_0:
# 9 "data/scripts/islandgame_common.pory"
	.string "Welcome to the Maryan isles, trainer!\n"
	.string "This is a Pokémon Center.\p"
	.string "It seems like you don't have any\n"
	.string "Pokémon right now, but when you do, you\l"
	.string "can take them here to heal them!$"

ISLANDGAME_COMMON_PKMNCENTER_TimeChanger_Text_0:
# 29 "data/scripts/islandgame_common.pory"
	.string "You look tired, trainer. Would you like\n"
	.string "to take a rest in one of our rooms?\p"
	.string "{COLOR RED}(Should I take a break and pass the\n"
	.string "time...?)$"

ISLANDGAME_COMMON_PKMNCENTER_TimeChanger_Text_1:
# 35 "data/scripts/islandgame_common.pory"
	.string "You took a break until...$"

ISLANDGAME_COMMON_PKMNCENTER_TimeChanger_Text_2:
# 42 "data/scripts/islandgame_common.pory"
	.string "We hope you had a good rest! Come back\n"
	.string "if you would like to pass time.$"

ISLANDGAME_COMMON_PKMNCENTER_NameRater_Text_0:
# 55 "data/scripts/islandgame_common.pory"
	.string "How's it going, youngin? I'm Marya's\n"
	.string "official Name Rater!\p"
	.string "Would you like me to impart my\n"
	.string "name-rating wisdom on your Pokémon?$"

ISLANDGAME_COMMON_PKMNCENTER_NameRater_Text_1:
# 60 "data/scripts/islandgame_common.pory"
	.string "Alrighty mate, whose name shall I giveth\n"
	.string "a critique on?$"

ISLANDGAME_COMMON_PKMNCENTER_NameRater_Text_2:
# 68 "data/scripts/islandgame_common.pory"
	.string "That's an egg, init? I can't judge a\n"
	.string "Pokémon that hasn't hatched yet!$"

ISLANDGAME_COMMON_PKMNCENTER_NameRater_Text_3:
# 76 "data/scripts/islandgame_common.pory"
	.string "Ah, {STR_VAR_1} is it? A truly\n"
	.string "spectacular name, I say!\p"
	.string "Its original trainer must have been a\n"
	.string "real nicknaming aficionado.\p"
	.string "If you wanted to change its name,\n"
	.string "though, I unfortunately can't do that.\p"
	.string "It would go against the official Name\n"
	.string "Rater moral code of ethics!$"

ISLANDGAME_COMMON_PKMNCENTER_NameRater_Text_4:
# 95 "data/scripts/islandgame_common.pory"
	.string "Hmm, so it's {STR_VAR_1}? A fitting\n"
	.string "name for such a fine Pokémon!\p"
	.string "But if you've a better name, I'm more\n"
	.string "than happy to change it to that!$"

ISLANDGAME_COMMON_PKMNCENTER_NameRater_Text_5:
# 100 "data/scripts/islandgame_common.pory"
	.string "What'll its new name be?$"

ISLANDGAME_COMMON_PKMNCENTER_NameRater_Text_6:
# 107 "data/scripts/islandgame_common.pory"
	.string "There we are! This Pokemon shall\n"
	.string "henceforth be known as...\p"
	.string "{STR_VAR_1}!\p"
	.string "And what a smashing name it is! I'm sure\n"
	.string "it's absolutely chuffed to have it!$"

ISLANDGAME_COMMON_PKMNCENTER_NameRater_Text_7:
# 119 "data/scripts/islandgame_common.pory"
	.string "If you've any Pokemon whose name you'd\n"
	.string "like me to rate, I'm always here!$"

ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_Text_0:
# 131 "data/scripts/islandgame_common.pory"
	.string "Why hello there, whippersnapper! I'm\n"
	.string "the...{PAUSE 30} um...{PAUSE 30} oh! The Move Deleter!\p"
	.string "Would you like me to have your Pokemon\n"
	.string "forget one of their moves?$"

ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_Text_1:
# 136 "data/scripts/islandgame_common.pory"
	.string "O-Oh! Splendid! Which Pokémon do you\n"
	.string "want me to make forget a move?$"

ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_Text_2:
# 142 "data/scripts/islandgame_common.pory"
	.string "Oh... I see. It was foolish of me to get\n"
	.string "excited...\p"
	.string "I suppose I will continue being useless\n"
	.string "in these modern times...$"

ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_Text_3:
# 150 "data/scripts/islandgame_common.pory"
	.string "Eh? Is this a prank? You think it's\n"
	.string "funny picking on the elderly?\p"
	.string "Kids these days... No respect for\n"
	.string "anyone but themselves.$"

ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_Text_4:
# 157 "data/scripts/islandgame_common.pory"
	.string "I'm afraid I cannot make a Pokemon\n"
	.string "forget its only move...\p"
	.string "Doing so would cause MissingNo. to\n"
	.string "appear and corrupt this game...\p"
	.string "Eh? What do you mean that's a load of\n"
	.string "baloney? Are you disrespecting me!?$"

ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_Text_5:
# 164 "data/scripts/islandgame_common.pory"
	.string "Alright, which move should be\n"
	.string "forgotten?$"

ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_Text_6:
# 172 "data/scripts/islandgame_common.pory"
	.string "Ah... {STR_VAR_1}'s {STR_VAR_2}?\n"
	.string "You want this move to be forgotten?$"

ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_Text_7:
# 179 "data/scripts/islandgame_common.pory"
	.string "Your {STR_VAR_1} has successfully\n"
	.string "forgotten the move {STR_VAR_2}!\p"
	.string "If you need another move forgotten,\n"
	.string "please come again!$"

ISLANDGAME_COMMON_PKMNCENTER_MoveDeleter_Text_8:
# 185 "data/scripts/islandgame_common.pory"
	.string "I see... I suppose there is no need for a\n"
	.string "Move Deleter in this world anymore...$"

ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_0:
# 206 "data/scripts/islandgame_common.pory"
	.string "Hullo! I am the all-powerful man known\n"
	.string "as the Move Relearner!\p"
	.string "I can help your Pokémon relearn moves\n"
	.string "they've previously learned!\p"
	.string "I can even teach them moves that they\n"
	.string "missed out on!$"

ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_1:
# 212 "data/scripts/islandgame_common.pory"
	.string "I can do this, for the low, low price of\n"
	.string "¥1000! How's that sound?$"

ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_2:
# 218 "data/scripts/islandgame_common.pory"
	.string "Sorry pal, I gotta make a living. I can't\n"
	.string "do it if ya don't got the money.$"

ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_3:
# 224 "data/scripts/islandgame_common.pory"
	.string "Awesome. Which Pokémon do you want to\n"
	.string "relearn a move?$"

ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_4:
# 230 "data/scripts/islandgame_common.pory"
	.string "If you ever need my power, I'll be here,\n"
	.string "waiting!$"

ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_5:
# 237 "data/scripts/islandgame_common.pory"
	.string "Umm... eggs don't even have moves to\n"
	.string "learn...$"

ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_6:
# 243 "data/scripts/islandgame_common.pory"
	.string "There's no moves for this Pokémon to\n"
	.string "relearn...$"

ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_7:
# 248 "data/scripts/islandgame_common.pory"
	.string "Which move should I reteach this\n"
	.string "Pokémon?$"

ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_8:
# 253 "data/scripts/islandgame_common.pory"
	.string "Well, if you change your mind, I'm always\n"
	.string "here!$"

ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_9:
# 257 "data/scripts/islandgame_common.pory"
	.string "Okay... {PAUSE 30}annnnnd...{PAUSE 30} done! Your Pokémon\n"
	.string "has relearned its move!$"

ISLANDGAME_COMMON_PKMNCENTER_MoveRelearner_Text_10:
# 266 "data/scripts/islandgame_common.pory"
	.string "Pleasure doin' business with you,\n"
	.string "trainer!$"
