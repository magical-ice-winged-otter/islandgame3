ISLANDGAME_AETHERIA_CONDO_1F_MapScripts::
	.byte 0


ISLANDGAME_AETHERIA_CONDO_1F_TV::
# 6 "data/maps/ISLANDGAME_AETHERIA_CONDO_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CONDO_1F_TV_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_CONDO_1F_Deliveryman::
# 12 "data/maps/ISLANDGAME_AETHERIA_CONDO_1F/scripts.pory"
	lock
# 13 "data/maps/ISLANDGAME_AETHERIA_CONDO_1F/scripts.pory"
	faceplayer
# 14 "data/maps/ISLANDGAME_AETHERIA_CONDO_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CONDO_1F_Deliveryman_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_CONDO_1F_AceTrainer::
# 23 "data/maps/ISLANDGAME_AETHERIA_CONDO_1F/scripts.pory"
	lock
# 24 "data/maps/ISLANDGAME_AETHERIA_CONDO_1F/scripts.pory"
	faceplayer
# 25 "data/maps/ISLANDGAME_AETHERIA_CONDO_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CONDO_1F_AceTrainer_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_CONDO_1F_Fennekin::
# 35 "data/maps/ISLANDGAME_AETHERIA_CONDO_1F/scripts.pory"
	lock
# 36 "data/maps/ISLANDGAME_AETHERIA_CONDO_1F/scripts.pory"
	faceplayer
# 37 "data/maps/ISLANDGAME_AETHERIA_CONDO_1F/scripts.pory"
	playmoncry SPECIES_FENNEKIN, CRY_MODE_NORMAL
# 38 "data/maps/ISLANDGAME_AETHERIA_CONDO_1F/scripts.pory"
	waitmoncry
# 39 "data/maps/ISLANDGAME_AETHERIA_CONDO_1F/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_CONDO_1F_Man::
# 43 "data/maps/ISLANDGAME_AETHERIA_CONDO_1F/scripts.pory"
	lock
# 44 "data/maps/ISLANDGAME_AETHERIA_CONDO_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CONDO_1F_Man_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_CONDO_1F_TV_Text_0:
# 7 "data/maps/ISLANDGAME_AETHERIA_CONDO_1F/scripts.pory"
	.string "{COLOR RED}(Serafina seems to be making an\n"
	.string "appearance at Aetheria's Pokémon\l"
	.string "Center.)$"

ISLANDGAME_AETHERIA_CONDO_1F_Deliveryman_Text_0:
# 15 "data/maps/ISLANDGAME_AETHERIA_CONDO_1F/scripts.pory"
	.string "According to a tabloid, Primrose was\n"
	.string "seen entering this condo at night...\p"
	.string "That seems pretty suspicious for an\n"
	.string "idol, doesn't it?\p"
	.string "That can only mean one thing...{PAUSE 30} One of\n"
	.string "these rooms belongs to her!\p"
	.string "Or maybe...{PAUSE 30} she's got a secret\n"
	.string "boyfriend? The plot thickens...$"

ISLANDGAME_AETHERIA_CONDO_1F_AceTrainer_Text_0:
# 26 "data/maps/ISLANDGAME_AETHERIA_CONDO_1F/scripts.pory"
	.string "Primrose's signature Pokémon is her\n"
	.string "stylish and snazzy Delcatty.\p"
	.string "But it wasn't always her signature\n"
	.string "Pokémon. In the beginning, her partner\l"
	.string "used to be a cute little Eevee!\p"
	.string "Then one day, she stopped using it.\p"
	.string "Don't get me wrong, her Delcatty is\n"
	.string "amazing, but I can't help but feel bad\l"
	.string "for her Eevee.\p"
	.string "I hope nothing bad happened...$"

ISLANDGAME_AETHERIA_CONDO_1F_Man_Text_0:
# 45 "data/maps/ISLANDGAME_AETHERIA_CONDO_1F/scripts.pory"
	.string "Great Maryan reef, look at that crowd!\n"
	.string "All just to see a cute girl celebrate\l"
	.string "the renovation of a Pokémon Center?\p"
	.string "The power of an idol is incredible... I\n"
	.string "gotta get one to promote my tool shop.$"
