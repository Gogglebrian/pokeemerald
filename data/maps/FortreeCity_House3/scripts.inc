FortreeCity_House3_MapScripts::
	.byte 0

FortreeCity_House3_EventScript_Maniac::
	msgbox FortreeCity_House3_Text_MetStevenHadAmazingPokemon, MSGBOX_NPC
	end

FortreeCity_House3_EventScript_SchoolKidM::
	lock
	faceplayer
	bufferleadmonspeciesname STR_VAR_1
	msgbox FortreeCity_House3_Text_OhYourPokemon, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetLeadMonEnvioliteLevel
	call_if_eq VAR_RESULT, 255, FortreeCity_House3_EventScript_EnvioliteEgg
	call_if_eq VAR_RESULT, 0, FortreeCity_House3_EventScript_EnvioliteIneffective
	call_if_eq VAR_RESULT, 1, FortreeCity_House3_EventScript_Enviolite5
	call_if_eq VAR_RESULT, 2, FortreeCity_House3_EventScript_Enviolite10
	call_if_eq VAR_RESULT, 3, FortreeCity_House3_EventScript_Enviolite15
	call_if_eq VAR_RESULT, 4, FortreeCity_House3_EventScript_Enviolite20
	call_if_eq VAR_RESULT, 5, FortreeCity_House3_EventScript_Enviolite25
	call_if_eq VAR_RESULT, 6, FortreeCity_House3_EventScript_Enviolite30
	call_if_eq VAR_RESULT, 7, FortreeCity_House3_EventScript_Enviolite35
	call_if_eq VAR_RESULT, 8, FortreeCity_House3_EventScript_Enviolite40
	call_if_eq VAR_RESULT, 9, FortreeCity_House3_EventScript_Enviolite45
	call_if_eq VAR_RESULT, 10, FortreeCity_House3_EventScript_Enviolite50
	release
	end

FortreeCity_House3_EventScript_EnvioliteEgg::
	msgbox FortreeCity_House3_Text_EnvioliteEgg, MSGBOX_NPC
	end
	
FortreeCity_House3_EventScript_EnvioliteIneffective::
	msgbox FortreeCity_House3_Text_EnvioliteIneffective, MSGBOX_NPC
	end
	
FortreeCity_House3_EventScript_Enviolite5::
	msgbox FortreeCity_House3_Text_Enviolite5, MSGBOX_NPC
	end
	
FortreeCity_House3_EventScript_Enviolite10::
	msgbox FortreeCity_House3_Text_Enviolite10, MSGBOX_NPC
	end
	
FortreeCity_House3_EventScript_Enviolite15::
	msgbox FortreeCity_House3_Text_Enviolite15, MSGBOX_NPC
	end

FortreeCity_House3_EventScript_Enviolite20::
	msgbox FortreeCity_House3_Text_Enviolite20, MSGBOX_NPC
	end

FortreeCity_House3_EventScript_Enviolite25::
	msgbox FortreeCity_House3_Text_Enviolite25, MSGBOX_NPC
	end

FortreeCity_House3_EventScript_Enviolite30::
	msgbox FortreeCity_House3_Text_Enviolite30, MSGBOX_NPC
	end

FortreeCity_House3_EventScript_Enviolite35::
	msgbox FortreeCity_House3_Text_Enviolite35, MSGBOX_NPC
	end
	
FortreeCity_House3_EventScript_Enviolite40::
	msgbox FortreeCity_House3_Text_Enviolite40, MSGBOX_NPC
	end

FortreeCity_House3_EventScript_Enviolite45::
	msgbox FortreeCity_House3_Text_Enviolite45, MSGBOX_NPC
	end
	
FortreeCity_House3_EventScript_Enviolite50::
	msgbox FortreeCity_House3_Text_Enviolite50, MSGBOX_NPC
	end
	
FortreeCity_House3_Text_EnvioliteEgg:
	.string "I wonder what will hatch from it!$"

FortreeCity_House3_Text_EnvioliteIneffective:
	.string "…it won't benefit from holding an\n"
	.string "ENVYOLITE.$"

FortreeCity_House3_Text_Enviolite5:
	.string "…will be powered up 5% if it holds an\n"
	.string "ENVYOLITE.$"
	
FortreeCity_House3_Text_Enviolite10:
	.string "…will be powered up 10% if it holds an\n"
	.string "ENVYOLITE.$"

FortreeCity_House3_Text_Enviolite15:
	.string "…will be powered up 15% if it holds an\n"
	.string "ENVYOLITE.$"
	
FortreeCity_House3_Text_Enviolite20:
	.string "…will be powered up 20% if it holds an\n"
	.string "ENVYOLITE.$"
	
FortreeCity_House3_Text_Enviolite25:
	.string "…will be powered up 25% if it holds an\n"
	.string "ENVYOLITE.$"
	
FortreeCity_House3_Text_Enviolite30:
	.string "…will be powered up 30% if it holds an\n"
	.string "ENVYOLITE.$"
	
FortreeCity_House3_Text_Enviolite35:
	.string "…will be powered up 35% if it holds an\n"
	.string "ENVYOLITE.$"

FortreeCity_House3_Text_Enviolite40:
	.string "…will be powered up 40% if it holds an\n"
	.string "ENVYOLITE.$"
	
FortreeCity_House3_Text_Enviolite45:
	.string "…will be powered up 45% if it holds an\n"
	.string "ENVYOLITE.$"
	
FortreeCity_House3_Text_Enviolite50:
	.string "…will be powered up 50% if it holds an\n"
	.string "ENVYOLITE.$"
	
FortreeCity_House3_Text_OhYouHavePokedex:
	.string "What's that thing you have there?\p"
	.string "… … … … … …\p"
	.string "Oh, it's called a POKéDEX?\n"
	.string "It's really awesome!$"

FortreeCity_House3_Text_MetStevenHadAmazingPokemon:
	.string "While speaking about the ENVYOLITE,\n"
	.string "I remembered something.\p"
	.string "I met this TRAINER, STEVEN, when\n"
	.string "I was searching for rare stones.\p"
	.string "Hoo, boy, he had some amazing POKéMON\n"
	.string "with him.\p"
	.string "They weren't just rare, they were\n"
	.string "trained to terrifying extremes!\p"
	.string "He might even be stronger than the\n"
	.string "GYM LEADER in this town…$"
	
FortreeCity_House3_Text_OhYourPokemon:
	.string "I know all POKéMON's stats by heart!\n"
	.string "That means I know which POKéMON will\l" 
	.string "benefit from holding an ENVYOLITE.\p"
	.string "Oh?\n"
	.string "Your {STR_VAR_1}…$"
	
