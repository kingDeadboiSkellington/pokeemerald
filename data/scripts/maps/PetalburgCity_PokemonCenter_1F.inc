PetalburgCity_PokemonCenter_1F_MapScripts:: @ 82079E8
	map_script 3, PetalburgCity_PokemonCenter_1F_MapScript1_2079F3
	map_script 5, PetalburgCity_PokemonCenter_1F_MapScript1_277C30
	.byte 0

PetalburgCity_PokemonCenter_1F_MapScript1_2079F3: @ 82079F3
	setrespawn 3
	call PetalburgCity_PokemonCenter_1F_EventScript_2718DE
	end

PetalburgCity_PokemonCenter_1F_EventScript_2079FC:: @ 82079FC
	setvar VAR_0x800B, 1
	call PetalburgCity_PokemonCenter_1F_EventScript_27191E
	waitmessage
	waitbuttonpress
	release
	end

PetalburgCity_PokemonCenter_1F_EventScript_207A0A:: @ 8207A0A
	msgbox PetalburgCity_PokemonCenter_1F_Text_207A76, 2
	end

PetalburgCity_PokemonCenter_1F_EventScript_207A13:: @ 8207A13
	msgbox PetalburgCity_PokemonCenter_1F_Text_207AD6, 2
	end

PetalburgCity_PokemonCenter_1F_EventScript_207A1C:: @ 8207A1C
	lock
	faceplayer
	msgbox PetalburgCity_PokemonCenter_1F_Text_207B09, 4
	specialvar VAR_RESULT, sub_81394D8
	compare_var_to_value VAR_RESULT, 1
	goto_eq PetalburgCity_PokemonCenter_1F_EventScript_207A38
	release
	end

PetalburgCity_PokemonCenter_1F_EventScript_207A38:: @ 8207A38
	compare_var_to_value VAR_FIRST_POKE, 0
	call_if 1, PetalburgCity_PokemonCenter_1F_EventScript_207A5B
	compare_var_to_value VAR_FIRST_POKE, 1
	call_if 1, PetalburgCity_PokemonCenter_1F_EventScript_207A64
	compare_var_to_value VAR_FIRST_POKE, 2
	call_if 1, PetalburgCity_PokemonCenter_1F_EventScript_207A6D
	release
	end

PetalburgCity_PokemonCenter_1F_EventScript_207A5B:: @ 8207A5B
	msgbox PetalburgCity_PokemonCenter_1F_Text_207BB0, 4
	return

PetalburgCity_PokemonCenter_1F_EventScript_207A64:: @ 8207A64
	msgbox PetalburgCity_PokemonCenter_1F_Text_207C35, 4
	return

PetalburgCity_PokemonCenter_1F_EventScript_207A6D:: @ 8207A6D
	msgbox PetalburgCity_PokemonCenter_1F_Text_207CB7, 4
	return

PetalburgCity_PokemonCenter_1F_Text_207A76: @ 8207A76
	.string "That PC-based POKéMON Storage\n"
	.string "System…\p"
	.string "Whoever made it must be some kind\n"
	.string "of a scientific wizard!$"

PetalburgCity_PokemonCenter_1F_Text_207AD6: @ 8207AD6
	.string "When my POKéMON ate an\n"
	.string "ORAN BERRY, it regained HP!$"

PetalburgCity_PokemonCenter_1F_Text_207B09: @ 8207B09
	.string "There are many types of POKéMON.\p"
	.string "All types have their strengths and\n"
	.string "weaknesses against other types.\p"
	.string "Depending on the types of POKéMON,\n"
	.string "a battle could be easy or hard.$"

PetalburgCity_PokemonCenter_1F_Text_207BB0: @ 8207BB0
	.string "For example, your TREECKO\n"
	.string "is a GRASS type.\p"
	.string "It’s strong against the WATER and\n"
	.string "GROUND types.\p"
	.string "But, it’s weak against FIRE-type\n"
	.string "POKéMON.$"

PetalburgCity_PokemonCenter_1F_Text_207C35: @ 8207C35
	.string "For example, your TORCHIC\n"
	.string "is a FIRE type.\p"
	.string "It’s strong against the GRASS and\n"
	.string "BUG types.\p"
	.string "But, it’s weak against WATER-type\n"
	.string "POKéMON.$"

PetalburgCity_PokemonCenter_1F_Text_207CB7: @ 8207CB7
	.string "For example, your MUDKIP\n"
	.string "is a WATER type.\p"
	.string "It’s strong against the FIRE type.\p"
	.string "But, it’s weak against GRASS-type\n"
	.string "and ELECTRIC-type POKéMON.$"

