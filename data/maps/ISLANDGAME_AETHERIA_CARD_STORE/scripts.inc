ISLANDGAME_AETHERIA_CARD_STORE_MapScripts::
# 5 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_AETHERIA_CARD_STORE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_AETHERIA_CARD_STORE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettimeofday
# 0 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq ISLANDGAME_AETHERIA_CARD_STORE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 10 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_AETHERIA_CARD_STORE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	setflag FLAG_TEMP_3
	return


ISLANDGAME_AETHERIA_CARD_STORE_Binder::
# 17 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CARD_STORE_Binder_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_CARD_STORE_Board::
# 24 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CARD_STORE_Board_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_CARD_STORE_SaltyPlayer::
# 35 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	lock
# 36 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CARD_STORE_SaltyPlayer_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_CARD_STORE_LittleCamper::
# 44 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	lock
# 45 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CARD_STORE_LittleCamper_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_CARD_STORE_Nerd::
# 51 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	lock
# 52 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CARD_STORE_Nerd_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_CARD_STORE_Girl::
# 59 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	lock
# 60 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CARD_STORE_Girl_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_CARD_STORE_AlakazamPlayer::
# 66 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	lock
# 67 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CARD_STORE_AlakazamPlayer_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_CARD_STORE_Whiner::
# 75 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	lock
# 76 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CARD_STORE_Whiner_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_CARD_STORE_Bye::
# 83 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	lock
# 84 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	faceplayer
# 85 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CARD_STORE_Bye_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_CARD_STORE_Owner::
# 91 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	lock
# 92 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	faceplayer
	gettimeofday
# 0 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq ISLANDGAME_AETHERIA_CARD_STORE_Owner_1
# 100 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	goto_if_unset FLAG_AETHERIA_RED_CARD, ISLANDGAME_AETHERIA_CARD_STORE_Owner_4
# 110 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CARD_STORE_Owner_Text_2
	return

ISLANDGAME_AETHERIA_CARD_STORE_Owner_1:
# 94 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CARD_STORE_Owner_Text_0, MSGBOX_AUTOCLOSE
	return

ISLANDGAME_AETHERIA_CARD_STORE_Owner_4:
# 101 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CARD_STORE_Owner_Text_1
# 107 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	giveitem ITEM_RED_CARD
	return


ISLANDGAME_AETHERIA_CARD_STORE_Assistant::
# 120 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	lock
# 121 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	faceplayer
# 122 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CARD_STORE_Assistant_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_CARD_STORE_InvestorBro::
# 130 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	lock
# 131 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CARD_STORE_InvestorBro_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_CARD_STORE_Scalper::
# 140 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	lock
# 141 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CARD_STORE_Scalper_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_CARD_STORE_Scalper2::
# 147 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	lock
# 148 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CARD_STORE_Scalper2_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_CARD_STORE_Puller::
# 154 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	lock
# 155 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CARD_STORE_Puller_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_CARD_STORE_Kid::
# 163 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	lock
# 164 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CARD_STORE_Kid_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_CARD_STORE_Mother::
# 170 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	lock
# 171 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CARD_STORE_Mother_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_CARD_STORE_Binder_Text_0:
# 18 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	.string "{COLOR RED}(It's a trade binder full of rare cards.)\p"
	.string "(It's mostly comprised of different\n"
	.string "Pikachu, Charizard, and Greninja cards.)$"

ISLANDGAME_AETHERIA_CARD_STORE_Board_Text_0:
# 25 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	.string "{COLOR RED}(It's a schedule detailing all of the\n"
	.string "upcoming events for this month.)$"

ISLANDGAME_AETHERIA_CARD_STORE_SaltyPlayer_Text_0:
# 37 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	.string "Woooow, who could've guessed, another\n"
	.string "lame Crustle player ruining the game for\l"
	.string "everyone as usual.\p"
	.string "Can they just ban that card already?\n"
	.string "Like are we for real, man? It's just not\l"
	.string "fair anymore dude like I can't do\l"
	.string "anything about it.\p"
	.string "I didn't pay ¥15000 just to lose to some\n"
	.string "kid with his degenerate no-skill stun\l"
	.string "deck!$"

ISLANDGAME_AETHERIA_CARD_STORE_LittleCamper_Text_0:
# 46 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	.string "Ummmmm, good game...?$"

ISLANDGAME_AETHERIA_CARD_STORE_Nerd_Text_0:
# 53 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	.string "You know... if you're looking to get\n"
	.string "better, we could continue playing at my\l"
	.string "place...\p"
	.string "I'd be happy to teach you some\n"
	.string "deckbuilding quantum mechanics...$"

ISLANDGAME_AETHERIA_CARD_STORE_Girl_Text_0:
# 61 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	.string "Eeeeeh...$"

ISLANDGAME_AETHERIA_CARD_STORE_AlakazamPlayer_Text_0:
# 68 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	.string "Evolve Abra into Kadabra. Use Kadabra\n"
	.string "ability to draw 2 cards. Evolve\l"
	.string "Dunsparce into Dudunsparce. Attach\l"
	.string "Enriching Energy to Dudunsparce to\l"
	.string "draw 4 cards.\p"
	.string "Use Dudunsparce ability, draw 3 cards\n"
	.string "and shuffle back. Play Poké Pad to add\l"
	.string "Alakazam. Use Rare Candy to evolve Abra\l"
	.string "into Alakazam. Use Alakazam ability to\l"
	.string "draw 3 cards.\p"
	.string "Use Wondrous Patch to attach a Psychic\n"
	.string "Energy to Alakazam. Use my other\l"
	.string "Dudunsparce ability to draw 3 cards and\l"
	.string "shuffle it back. Use Fezandipiti ability\l"
	.string "to draw 3 more cards...$"

ISLANDGAME_AETHERIA_CARD_STORE_Whiner_Text_0:
# 77 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	.string "DOES YOUR TURN HAVE AN END!?$"

ISLANDGAME_AETHERIA_CARD_STORE_Bye_Text_0:
# 86 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	.string "We have an uneven amount of players in\n"
	.string "the tournament, so I got a bye for the\l"
	.string "first round.$"

ISLANDGAME_AETHERIA_CARD_STORE_Owner_Text_0:
# 95 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	.string "Welcome to The Top Deck!\p"
	.string "Unfortunately, our PTCG tournament has\n"
	.string "already started, but you're more than\l"
	.string "welcome to spectate!$"

ISLANDGAME_AETHERIA_CARD_STORE_Owner_Text_1:
# 102 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	.string "Welcome to The Top Deck!\p"
	.string "If you're looking for packs of the\n"
	.string "newest expansion, I regret to inform\l"
	.string "you that we just ran out...\p"
	.string "Due to complications with the\n"
	.string "distributor, I'm not sure when we'll get\l"
	.string "more of it.\p"
	.string "In the meantime, please accept this\n"
	.string "promotional card as apologies for the\l"
	.string "inconvenience.$"

ISLANDGAME_AETHERIA_CARD_STORE_Owner_Text_2:
# 111 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	.string "That right there is a special\n"
	.string "holographic Red Card!\p"
	.string "Not only is it a powerful card in the\n"
	.string "TCG, but it is also quite useful in\l"
	.string "Pokémon battles as well!\p"
	.string "We're hoping to get at least another\n"
	.string "wave of Maryan Masters before the\l"
	.string "festival, so be sure to visit our booth\l"
	.string "for another chance!$"

ISLANDGAME_AETHERIA_CARD_STORE_Assistant_Text_0:
# 123 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	.string "As the judge, it's my job to handle any\n"
	.string "ruling disputes players may have during\l"
	.string "the course of a match.\p"
	.string "It is also my job to diffuse any hostile\n"
	.string "situations that might arise during the\l"
	.string "tournament... which I have had to do a\l"
	.string "couple of times.\p"
	.string "Card games are serious business.$"

ISLANDGAME_AETHERIA_CARD_STORE_InvestorBro_Text_0:
# 132 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	.string "This purchase limit is an OUTRAGE!\p"
	.string "Why should I be punished for being\n"
	.string "successful enough to have the funds to\l"
	.string "purchase a case of the newest set!?\p"
	.string "Need I remind you that I alone pay for\n"
	.string "your store's rent each month!?\p"
	.string "I will not tolerate this disrespect of\n"
	.string "my affluence!$"

ISLANDGAME_AETHERIA_CARD_STORE_Scalper_Text_0:
# 142 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	.string "Get your hands off my ETB! I was here\n"
	.string "first! It's first come, first serve!$"

ISLANDGAME_AETHERIA_CARD_STORE_Scalper2_Text_0:
# 149 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	.string "Yeah, right! My hands were on it first!\n"
	.string "It belongs to me!$"

ISLANDGAME_AETHERIA_CARD_STORE_Puller_Text_0:
# 156 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	.string "C'mon...{PAUSE 30} C'mon...{PAUSE 30} heart of the cards...\n"
	.string "guide me!!!\p"
	.string "Arrgh... not another Whimsicott EX! I\n"
	.string "already got like three of these!\p"
	.string "Man, I negged so hard on this box... I'm\n"
	.string "never opening product again!$"

ISLANDGAME_AETHERIA_CARD_STORE_Kid_Text_0:
# 165 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	.string "Mooooom! Can I get this Greninja\n"
	.string "pleeaaaaase?$"

ISLANDGAME_AETHERIA_CARD_STORE_Mother_Text_0:
# 172 "data/maps/ISLANDGAME_AETHERIA_CARD_STORE/scripts.pory"
	.string "Oh, sweetie... That one's too\n"
	.string "expensive... How about this Budew\l"
	.string "instead?$"
