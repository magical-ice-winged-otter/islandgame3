ISLANDGAME_AETHERIA_PKMNCENTER_MapScripts::
	.byte 0


ISLANDGAME_AETHERIA_PKMNCENTER_Maniac::
# 9 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	lock
# 10 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	faceplayer
# 11 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_PKMNCENTER_Maniac_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_PKMNCENTER_Breeder::
# 19 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	lock
# 20 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	faceplayer
# 21 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_PKMNCENTER_Breeder_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_PKMNCENTER_Officer::
# 32 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	lock
# 33 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	faceplayer
# 34 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_PKMNCENTER_Officer_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_PKMNCENTER_Boy::
# 42 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	lock
# 43 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	faceplayer
# 44 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_PKMNCENTER_Boy_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_PKMNCENTER_Pichu::
# 51 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	lock
# 52 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	faceplayer
# 53 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_WEAK
# 54 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_PKMNCENTER_Pichu_Text_0
# 57 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_PKMNCENTER_Maniac_Text_0:
# 12 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	.string "STARLIGHT Ghost Hunters was TOTALLY\n"
	.string "robbed at the Pokéstar Awards\l"
	.string "Ceremony!\p"
	.string "You're telling me some conveyor belt\n"
	.string "sludge like The Pixelmon Movie deserves\l"
	.string "movie of the year over a cinematic\l"
	.string "masterpiece like STARLIGHT Ghost\l"
	.string "Hunters!?\p"
	.string "I am OUTRAGED by the blatant\n"
	.string "disrespect of foreign films by these\l"
	.string "snooty and talentless Unovan HACKS!$"

ISLANDGAME_AETHERIA_PKMNCENTER_Breeder_Text_0:
# 22 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	.string "Not all Pokémon within the same species\n"
	.string "are the same.\p"
	.string "Many of them have regional forms,\n"
	.string "meaning they'll look and behave\l"
	.string "differently based on where they're\l"
	.string "found!\p"
	.string "But here's where it gets confusing...\p"
	.string "Sometimes Pokémon that look very\n"
	.string "similar are not related at all.\p"
	.string "For example, Sinistea and Poltchageist\n"
	.string "are not actually regional forms, as they\l"
	.string "are two entirely different species!\p"
	.string "We've yet a name for these types of\n"
	.string "Pokémon, but I've been calling them\l"
	.string "“convergent species”!$"

ISLANDGAME_AETHERIA_PKMNCENTER_Officer_Text_0:
# 35 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	.string "Please remember to stay vigilant at\n"
	.string "night, especially as a tourist.\p"
	.string "A group of thugs calling themselves the\n"
	.string "Goon Gang have been prowling the\l"
	.string "streets at night looking for easy prey.\p"
	.string "They can be identified by their black\n"
	.string "jackets and motorcycles. If you see\l"
	.string "one, please do not engage in battle.$"

ISLANDGAME_AETHERIA_PKMNCENTER_Boy_Text_0:
# 45 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	.string "I traded my shiny Wingull for this shiny\n"
	.string "Pichu, only to find out that it's just a\l"
	.string "regular one.\p"
	.string "That's the last time I do a shiny trade\n"
	.string "in the dark alleyways of the city...$"

ISLANDGAME_AETHERIA_PKMNCENTER_Pichu_Text_0:
# 55 "data/maps/ISLANDGAME_AETHERIA_PKMNCENTER/scripts.pory"
	.string "{COLOR BLUE}(Trainer... no want me? :( )$"
