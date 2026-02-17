ISLANDGAME_MINTY_MEADOWS_3_MapScripts::
	.byte 0


ISLANDGAME_MINTY_MEADOWS_3_Interact_Ressy::
# 6 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_3_Interact_Ressy_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_3_Interact_Chimecho::
# 15 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	playmoncry SPECIES_GALLADE, CRY_MODE_NORMAL
# 16 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_3_Interact_Chimecho_Text_0, MSGBOX_NPC
# 17 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	applymovement 2, ISLANDGAME_MINTY_MEADOWS_3_Interact_Chimecho_Movement_0
	return


ISLANDGAME_MINTY_MEADOWS_3_Interact_Aegislash::
# 21 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	playmoncry SPECIES_AEGISLASH, CRY_MODE_NORMAL
# 22 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_3_Interact_Aegislash_Text_0, MSGBOX_NPC
	return


# 17 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_3_Interact_Chimecho_Movement_0:
# 17 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	face_original_direction
	step_end

ISLANDGAME_MINTY_MEADOWS_3_Interact_Ressy_Text_0:
# 7 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	.string "The mysterious man stares blankly into\n"
	.string "the vast horizon.\p"
	.string "What a loser. You should like, just\n"
	.string "forget he exists and stuff.\p"
	.string "Definitely don't come back here later.\n"
	.string "It would be a huge waste of time.\p"
	.string "Yup.$"

ISLANDGAME_MINTY_MEADOWS_3_Interact_Chimecho_Text_0:
# 16 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	.string "Gallade! {COLOR BLUE}(I long for a worthy\n"
	.string "adversary!)$"

ISLANDGAME_MINTY_MEADOWS_3_Interact_Aegislash_Text_0:
# 22 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	.string "Shwing! {COLOR BLUE}(THOU SHALL NOT PASSETH)$"
