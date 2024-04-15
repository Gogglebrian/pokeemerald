.set LOCALID_MOVE_RELEARNER, 1

FallarborTown_MoveRelearnersHouse_MapScripts::
	.byte 0

@ Since the Move Relearner is redundant in this hack, we'll have him give the Link Cable instead
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner::
	lockall
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_set FLAG_RECEIVED_LINK_CABLE, FallarborTown_MoveRelearnersHouse_EventScript_ExplainLinkCable
	msgbox FallarborTown_MoveRelearnersHouse_Text_WantYouToHaveLinkCable, MSGBOX_DEFAULT
	giveitem ITEM_LINK_CABLE
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_NoRoomLinkCable
	setflag FLAG_RECEIVED_LINK_CABLE
	goto FallarborTown_MoveRelearnersHouse_EventScript_ExplainLinkCable
	end
	
FallarborTown_MoveRelearnersHouse_EventScript_ExplainLinkCable::
	msgbox FallarborTown_MoveRelearnersHouse_Text_ExplainLinkCable, MSGBOX_DEFAULT
	release
	end
	
FallarborTown_MoveRelearnersHouse_EventScript_NoRoomLinkCable::
	msgbox FallarborTown_MoveRelearnersHouse_Text_NoRoom, MSGBOX_DEFAULT
	release
	end
	
FallarborTown_MoveRelearnersHouse_Text_WantYouToHaveLinkCable:
	.string "Oh, an ambitious young POKéMON\n"
	.string "TRAINER! What a nice surprise!\p"
	.string "As a boy, I ventured far and wide,\n"
	.string "trading POKéMON with everyone I met...\p"
	.string "That's how I became known as\n"
	.string "the POKéMON TRADING GURU.\p"
	.string "I like the cut of your jib, kid.\n"
	.string "Take this USEFUL GIFT!$"
	
FallarborTown_MoveRelearnersHouse_Text_ExplainLinkCable:
	.string "The LINK CABLE can simulate a POKéMON\n"
	.string "trade. It's fun, and sometimes useful.\p"
	.string "Try trading KADABRA, MACHOKE, or\n"
	.string "GRAVELER and see what happens!$"
	
FallarborTown_MoveRelearnersHouse_Text_NoRoom:
	.string "Oh, you don't have room?\p"
	.string "Throw some stuff out and come back!$"
