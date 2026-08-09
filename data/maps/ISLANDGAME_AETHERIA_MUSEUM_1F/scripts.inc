ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts::
# 12 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	compare VAR_AETHERIA_STATE, 2
	goto_if_eq ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_AETHERIA_MUSEUM_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_TicketCheckerRight::
# 25 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 26 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	faceplayer
# 27 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_TicketCheckerRight_Text_0, MSGBOX_AUTOCLOSE
# 30 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	applymovement LOCALID_TICKET_CHECKER_RIGHT, ISLANDGAME_AETHERIA_MUSEUM_1F_TicketCheckerRight_Movement_0
# 31 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryRight::
# 35 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 36 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	playse SE_PIN
# 37 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	applymovement LOCALID_TICKET_CHECKER_RIGHT, ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryRight_Movement_0
# 38 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	waitmovement 0
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryRight_Movement_1
# 40 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryRight_Text_0, MSGBOX_AUTOCLOSE
# 43 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryRight_Movement_2
# 44 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	waitmovement 0
# 45 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_TicketCheckerLeft::
# 49 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 50 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	faceplayer
# 51 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_TicketCheckerRight_Text_0, MSGBOX_AUTOCLOSE
# 54 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	applymovement LOCALID_TICKET_CHECKER_LEFT, ISLANDGAME_AETHERIA_MUSEUM_1F_TicketCheckerRight_Movement_0
# 55 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryLeft::
# 59 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 60 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	playse SE_PIN
# 61 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	applymovement LOCALID_TICKET_CHECKER_LEFT, ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryRight_Movement_0
# 62 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	waitmovement 0
# 63 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryRight_Movement_1
# 64 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryRight_Text_0, MSGBOX_AUTOCLOSE
# 67 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryLeft_Movement_0
# 68 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	waitmovement 0
# 69 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_Receptionist::
# 78 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 79 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	faceplayer
# 80 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_Receptionist_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_Karen::
# 88 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 89 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_Karen_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_KarenKid::
# 96 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 97 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_KarenKid_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_Receptionist2::
# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 104 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_Receptionist2_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_Artist::
# 111 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 112 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_Artist_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_NinjaBoy::
# 119 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 120 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_NinjaBoy_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_Psychic::
# 126 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 127 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	faceplayer
# 128 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_Psychic_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_FatMan::
# 136 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 137 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	faceplayer
# 138 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_FatMan_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_Woman::
# 144 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 145 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_Woman_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_SchoolKid::
# 151 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 152 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	faceplayer
# 153 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_SchoolKid_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_SilverwingGuy::
# 160 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	lock
# 161 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	faceplayer
# 162 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_SilverwingGuy_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_IsleGuardiansPainting::
# 171 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_IsleGuardiansPainting_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_PokemonPainting::
# 180 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_PokemonPainting_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_BerriesPainting::
# 187 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_BerriesPainting_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_LandscapePainting::
# 194 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_LandscapePainting_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_PokeballPainting::
# 201 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_PokeballPainting_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_VasePainting::
# 208 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_VasePainting_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_GrassPainting::
# 214 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_GrassPainting_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_1F_StoneTablet::
# 222 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_1F_StoneTablet_Text_0, MSGBOX_SIGN
	return


# 30 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_1F_TicketCheckerRight_Movement_0:
# 30 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	face_down
	step_end

# 37 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryRight_Movement_0:
# 37 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	face_down
# 37 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	emote_exclamation_mark
# 37 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	delay_16
# 37 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	delay_16
	step_end

# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryRight_Movement_1:
# 39 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	face_up
	step_end

# 43 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryRight_Movement_2:
# 43 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	walk_left
	step_end

# 67 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryLeft_Movement_0:
# 67 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	walk_right
	step_end

ISLANDGAME_AETHERIA_MUSEUM_1F_TicketCheckerRight_Text_0:
# 28 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "Only those with a museum ticket may\n"
	.string "continue into the exhibit hall.$"

ISLANDGAME_AETHERIA_MUSEUM_1F_NoEntryRight_Text_0:
# 41 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "Excuse me, but only those with a ticket\n"
	.string "may enter the exhibit hall.$"

ISLANDGAME_AETHERIA_MUSEUM_1F_Receptionist_Text_0:
# 81 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "Welcome to Aetheria's Museum of Fine\n"
	.string "Arts.\p"
	.string "Unfortunately due to high demand, we\n"
	.string "are currently sold out of tickets.\p"
	.string "We apologize for the inconvenience.$"

ISLANDGAME_AETHERIA_MUSEUM_1F_Karen_Text_0:
# 90 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "Are you even listening? I said I want a\n"
	.string "REFUND on my TICKET!\p"
	.string "I'm done speaking with you! Where is\n"
	.string "your manager!?$"

ISLANDGAME_AETHERIA_MUSEUM_1F_KarenKid_Text_0:
# 98 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "Moooooooom! I want my Rotom Pad!$"

ISLANDGAME_AETHERIA_MUSEUM_1F_Receptionist2_Text_0:
# 105 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "Again, as per my previous statement, all\n"
	.string "ticket sales are final.\p"
	.string "If you have any disagreements with our\n"
	.string "policy, you are free to express your\l"
	.string "concerns through our website.$"

ISLANDGAME_AETHERIA_MUSEUM_1F_Artist_Text_0:
# 113 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "Hmmm, yes... This is quite the masterful\n"
	.string "composition.\p"
	.string "It truly depicts the Isle Guardians in\n"
	.string "all their limitless splendor.$"

ISLANDGAME_AETHERIA_MUSEUM_1F_NinjaBoy_Text_0:
# 121 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "Heheh. If I stay still on this wall,\n"
	.string "people will think I'm part of the\l"
	.string "exhibit!$"

ISLANDGAME_AETHERIA_MUSEUM_1F_Psychic_Text_0:
# 129 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "The vast majority of human history is\n"
	.string "unknown.\p"
	.string "Whether it was destroyed, lost,\n"
	.string "rewritten, or just the simple fact that\l"
	.string "humans have existed long before the\l"
	.string "creation of recordkeeping.\p"
	.string "It is quite disturbing, is it not? We\n"
	.string "truly know nothing of the world.$"

ISLANDGAME_AETHERIA_MUSEUM_1F_FatMan_Text_0:
# 139 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "So mysterious... What secrets do you\n"
	.string "think are hiding in that island, if it\l"
	.string "even exists?$"

ISLANDGAME_AETHERIA_MUSEUM_1F_Woman_Text_0:
# 146 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "Ooooh, what a beautiful looking vase!\n"
	.string "I've never seen anything like it!$"

ISLANDGAME_AETHERIA_MUSEUM_1F_SchoolKid_Text_0:
# 154 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "I'm in the process of writing a novel,\n"
	.string "but I've been having trouble converting\l"
	.string "my thoughts into words.\p"
	.string "I'm hoping that this cultural excursion\n"
	.string "will remedy my writing block.$"

ISLANDGAME_AETHERIA_MUSEUM_1F_SilverwingGuy_Text_0:
# 163 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "This ancient tablet is the oldest\n"
	.string "recollection we have of The Darkest\l"
	.string "Night.\p"
	.string "We have ensured its preservation for\n"
	.string "thousands of years, and shall continue.\p"
	.string "So that the advent of our lord and\n"
	.string "savior shall never be forgotten.$"

ISLANDGAME_AETHERIA_MUSEUM_1F_IsleGuardiansPainting_Text_0:
# 172 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "“Wings of Majesty”\n"
	.string "By Kozmocrat\p"
	.string "“For thousands of years, the isles of\n"
	.string "Marya have been under the winged\l"
	.string "protection of these legendary avians.”\p"
	.string "“Articuno, Zapdos, and Moltres.”\p"
	.string "“As long as they remain perched atop\n"
	.string "their mountainous roost, order will be\l"
	.string "preserved.”$"

ISLANDGAME_AETHERIA_MUSEUM_1F_PokemonPainting_Text_0:
# 181 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "“A Girl and Her Pokémon”\n"
	.string "By Kyraipikuma\p"
	.string "“In loving memory of Sir Buttermilk\n"
	.string "Pancake Flapjack III”$"

ISLANDGAME_AETHERIA_MUSEUM_1F_BerriesPainting_Text_0:
# 188 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "“Still Life”\n"
	.string "By InsertNameAqui\p"
	.string "{COLOR RED}(It's a painting of an assortment of\n"
	.string "scrumptious-looking berries.)$"

ISLANDGAME_AETHERIA_MUSEUM_1F_LandscapePainting_Text_0:
# 195 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "“Faraway Island”\n"
	.string "By Keleu\p"
	.string "“A mythical island in the far reaches of\n"
	.string "the Maryan Sea.”$"

ISLANDGAME_AETHERIA_MUSEUM_1F_PokeballPainting_Text_0:
# 202 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "“Ancient Poké Ball”\p"
	.string "“A Poké Ball hand-crafted by the\n"
	.string "ancient Arborians using an Apricorn.”$"

ISLANDGAME_AETHERIA_MUSEUM_1F_VasePainting_Text_0:
# 209 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "{COLOR RED}(It's just a painting of a vase. That's\n"
	.string "it. There's nothing special about it.)$"

ISLANDGAME_AETHERIA_MUSEUM_1F_GrassPainting_Text_0:
# 215 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "“Sylvan Sanctuary”\p"
	.string "“We dedicate this painting to the voice\n"
	.string "of the forest.”\p"
	.string "“May another bountiful harvest befall\n"
	.string "our lush jungle.”$"

ISLANDGAME_AETHERIA_MUSEUM_1F_StoneTablet_Text_0:
# 223 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_1F/scripts.pory"
	.string "“Ancient Tablet”\p"
	.string "“Within the maws of the Great Volcano\n"
	.string "slumbered the wicked Wings of Chaos.”\p"
	.string "“A primordial force of unstoppable evil,\n"
	.string "it once threatened to engulf the world\l"
	.string "in eternal shadow.”\p"
	.string "“But from the depths emerged our\n"
	.string "glorious savior to grant us salvation.”\p"
	.string "“And so the fiend was sealed whence it\n"
	.string "came. The world saved from cataclysmic\l"
	.string "destruction.”$"
