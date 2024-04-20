Common_EventScript_EggMoveTutor_Price::
	showmoneybox 0, 0
	msgbox Common_EggMoveTutor_Teach_Egg_Moves, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Common_EventScript_EggMoveTutor_ComeBackAnytime
	checkmoney 8000, 0
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EggMoveTutor_no_Money
	goto Common_EventScript_EggMoveTutor_ChooseMon
	end

Common_EventScript_EggMoveTutor_ChooseMon:: @ 82013D6
	msgbox Common_EggMoveTutor_Text_TutorWhichMon, MSGBOX_DEFAULT
	special ChooseMonForEggTutor
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq Common_EventScript_EggMoveTutor_ComeBackAnytime
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_EggMoveTutor_CantTeachEgg
	compare VAR_0x8005, 0
	goto_if_eq Common_EventScript_EggMoveTutor_NoMoveToTeachMon
	goto Common_EventScript_EggMoveTutor_ChooseEggMove
	end
	
Common_EventScript_EggMoveTutor_ChooseEggMove:: @ 820140C
	msgbox Common_EggMoveTutor_Text_TeachWhichMove, MSGBOX_DEFAULT
	special TeachEggTutorMove
	waitstate
	compare VAR_0x8004, 0
	goto_if_eq Common_EventScript_EggMoveTutor_ChooseMon
	removemoney 8000, 0
	goto Common_EventScript_EggMoveTutor_ComeBackAnytime
	end
	
Common_EventScript_EggMoveTutor_NoMoveToTeachMon:: @ 8201436
	msgbox Common_EggMoveTutor_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
	goto Common_EventScript_EggMoveTutor_ChooseMon
	end
	
Common_EventScript_EggMoveTutor_CantTeachEgg:: @ 8201444
	msgbox Common_EggMoveTutor_Text_ThatIsMerelyAnEgg, MSGBOX_DEFAULT
	goto Common_EventScript_EggMoveTutor_ChooseMon
	end
	
Common_EventScript_EggMoveTutor_ComeBackAnytime:: @ 8201452
	msgbox Common_EggMoveTutor_ComeBackAnytime, MSGBOX_DEFAULT
	hidemoneybox
	releaseall
	end
	
Common_EggMoveTutor_no_Money::
	msgbox Common_EggMoveTutor_Text_no_Money, MSGBOX_DEFAULT
	hidemoneybox
	release
	end
	
Common_EggMoveTutor_Text_TutorWhichMon: @ 82015A5
	.string "Which POKéMON should I have\n"
	.string "remember a move?$"

Common_EggMoveTutor_Text_TeachWhichMove: @ 82015C3
	.string "Which move should it remember?$"	

Common_EggMoveTutor_Teach_Egg_Moves:
    .string "I can teach cool moves that only\n"
	.string "specially-bred POKéMON would\l"
	.string "usually know.\p"
	.string "It's ¥8000 a pop, interested?$"
	
Common_EggMoveTutor_ComeBackAnytime:
    .string "Come back anytime!$"
	
Common_EggMoveTutor_Text_no_Money:
	.string "It looks like you don't have enough\n"
	.string "money!$"
	
Common_EggMoveTutor_Text_DontHaveMoveToTeachPokemon: @ 82015DE
	.string "It doesn't seem like that POKéMON has\n"
	.string "any moves that it can remember.$"

Common_EggMoveTutor_Text_ThatIsMerelyAnEgg:
	.string "What?\n"
	.string "No EGG should know any moves.$"

