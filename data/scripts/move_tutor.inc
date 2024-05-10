Common_EventScript_MoveTutor_Price::
	showmoneybox 0, 0
	msgbox Common_MoveTutor_Teach_Tutor_Moves, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Common_EventScript_MoveTutor_ComeBackAnytime
	checkmoney 6000, 0
	compare VAR_RESULT, FALSE
	goto_if_eq Common_MoveTutor_no_Money
	goto Common_EventScript_MoveTutor_ChooseMon
	end

Common_EventScript_MoveTutor_ChooseMon:: @ 82013D6
	msgbox Common_MoveTutor_Text_TutorWhichMon, MSGBOX_DEFAULT
	special ChooseMonForNewMoveTutor
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq Common_EventScript_MoveTutor_ComeBackAnytime
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_MoveTutor_CantTeachEgg
	compare VAR_0x8005, 0
	goto_if_eq Common_EventScript_MoveTutor_NoMoveToTeachMon
	goto Common_EventScript_MoveTutor_ChooseTutorMove
	end
	
Common_EventScript_MoveTutor_ChooseTutorMove:: @ 820140C
	msgbox Common_MoveTutor_Text_TeachWhichMove, MSGBOX_DEFAULT
	special TeachTutorMove
	waitstate
	compare VAR_0x8004, 0
	goto_if_eq Common_EventScript_MoveTutor_ChooseMon
	showmoneybox 0, 0
	msgbox Common_MoveTutor_Text_TakeTheMoney, MSGBOX_DEFAULT
	removemoney 6000, 0
	playse SE_SHOP
	hidemoneybox
	showmoneybox 0, 0
	goto Common_EventScript_MoveTutor_ComeBackAnytime
	end
	
Common_EventScript_MoveTutor_NoMoveToTeachMon:: @ 8201436
	msgbox Common_MoveTutor_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
	goto Common_EventScript_MoveTutor_ChooseMon
	end
	
Common_EventScript_MoveTutor_CantTeachEgg:: @ 8201444
	msgbox Common_MoveTutor_Text_ThatIsMerelyAnEgg, MSGBOX_DEFAULT
	goto Common_EventScript_MoveTutor_ChooseMon
	end
	
Common_EventScript_MoveTutor_ComeBackAnytime:: @ 8201452
	msgbox Common_MoveTutor_ComeBackAnytime, MSGBOX_DEFAULT
	hidemoneybox
	releaseall
	end
	
Common_MoveTutor_no_Money::
	msgbox Common_MoveTutor_Text_no_Money, MSGBOX_DEFAULT
	hidemoneybox
	release
	end
	
Common_MoveTutor_Text_TakeTheMoney:
	.string "That'll be ¥6000… Thanks!$"
	
Common_MoveTutor_Text_TutorWhichMon: @ 82015A5
	.string "Which POKéMON should I have\n"
	.string "remember a move?$"

Common_MoveTutor_Text_TeachWhichMove: @ 82015C3
	.string "Which move should it remember?$"	

Common_MoveTutor_Teach_Tutor_Moves:
    .string "I can teach cool moves that only\n"
	.string "the experts at the BATTLE FRONTIER\l"
	.string "would usually know.\p"
	.string "It's ¥6000 a pop, interested?$"
	
Common_MoveTutor_ComeBackAnytime:
    .string "Come back anytime!$"
	
Common_MoveTutor_Text_no_Money:
	.string "It looks like you don't have enough\n"
	.string "money!$"
	
Common_MoveTutor_Text_DontHaveMoveToTeachPokemon: @ 82015DE
	.string "It doesn't seem like that POKEéMON has\n"
	.string "any moves that it can remember.$"

Common_MoveTutor_Text_ThatIsMerelyAnEgg:
	.string "What?\n"
	.string "No EGG should know any moves.$"

