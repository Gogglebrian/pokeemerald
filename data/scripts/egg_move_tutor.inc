Common_EventScript_EggMoveTutor_Price::
	showmoneybox 0, 0
	msgbox Common_EggMoveTutor_Teach_Egg_Moves, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Common_EventScript_EggMoveTutor_ComeBackWithMoreBadges
	checkmoney 3000, 0
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EggMoveTutor_no_Money
	goto Common_EventScript_EggMoveTutor_ChooseMon
	end

Common_EventScript_EggMoveTutor_ChooseMon:: @ 82013D6
	msgbox Common_EggMoveTutor_Text_TutorWhichMon, MSGBOX_DEFAULT
	special ChooseMonForEggTutor
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq Common_EventScript_EggMoveTutor_ComeBackWithMoreBadges
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
	showmoneybox 0, 0
	msgbox Common_EggMoveTutor_Text_TakeTheMoney, MSGBOX_DEFAULT
	removemoney 3000, 0
	playse SE_SHOP
	hidemoneybox
	showmoneybox 0, 0
	goto Common_EventScript_EggMoveTutor_ComeBackWithMoreBadges
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
	
Common_EventScript_EggMoveTutor_ComeBackWithMoreBadges::
	specialvar VAR_RESULT, GetEggCapsEnabled
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_EggMoveTutor_ComeBackAnytime
	goto_if_set FLAG_BADGE08_GET, Common_EventScript_EggMoveTutor_ComeBackAnytime
	msgbox Common_EggMoveTutor_ComeBackWithMoreBadges, MSGBOX_DEFAULT
	hidemoneybox
	releaseall
	end
	
Common_EggMoveTutor_no_Money::
	msgbox Common_EggMoveTutor_Text_no_Money, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

Common_EggMoveTutor_Text_TakeTheMoney:
	.string "That'll be ¥3000… Thanks!$"

Common_EggMoveTutor_Text_TutorWhichMon:
	.string "Which POKéMON should I have\n"
	.string "remember a move?$"

Common_EggMoveTutor_Text_TeachWhichMove:
	.string "Which move should it remember?$"	

Common_EggMoveTutor_Teach_Egg_Moves:
    .string "I can teach cool moves that only\n"
	.string "specially-bred POKéMON would\l"
	.string "usually know.\p"
	.string "It's ¥3000 a pop, interested?$"
	
Common_EggMoveTutor_ComeBackWithMoreBadges:
	.string "I can teach more powerful moves, but\n"
	.string "only after you get more GYM BADGES.\l"
	.string "Come back and visit regularly!$"

Common_EggMoveTutor_ComeBackAnytime:
    .string "Come back anytime!$"
	
Common_EggMoveTutor_Text_no_Money:
	.string "It looks like you don't have enough\n"
	.string "money!$"
	
Common_EggMoveTutor_Text_DontHaveMoveToTeachPokemon:
	.string "It doesn't seem like that POKéMON has\n"
	.string "any moves that it can remember.$"

Common_EggMoveTutor_Text_ThatIsMerelyAnEgg:
	.string "What?\n"
	.string "No EGG should know any moves.$"

