Route110_TrickHouseEntrance_MapScripts:: @ 8269A50
	map_script 3, Route110_TrickHouseEntrance_MapScript1_269A60
	map_script 2, Route110_TrickHouseEntrance_MapScript2_269CEE
	map_script 4, Route110_TrickHouseEntrance_MapScript2_269BD3
	.byte 0

Route110_TrickHouseEntrance_MapScript1_269A60: @ 8269A60
	setflag FLAG_0x8A2
	compare_var_to_value VAR_0x40B5, 1
	goto_eq Route110_TrickHouseEntrance_EventScript_269AF3
	compare_var_to_value VAR_0x40C1, 1
	goto_eq Route110_TrickHouseEntrance_EventScript_269AD7
	compare_var_to_value VAR_0x40A6, 1
	goto_eq Route110_TrickHouseEntrance_EventScript_269BB3
	compare_var_to_value VAR_0x40A7, 5
	call_if 1, Route110_TrickHouseEntrance_EventScript_269B03
	compare_var_to_value VAR_0x40A7, 3
	call_if 1, Route110_TrickHouseEntrance_EventScript_269B03
	compare_var_to_value VAR_0x40A7, 0
	call_if 1, Route110_TrickHouseEntrance_EventScript_269B03
	switch VAR_0x40A7
	case 0, Route110_TrickHouseEntrance_EventScript_269BBB
	case 1, Route110_TrickHouseEntrance_EventScript_269BC1
	case 3, Route110_TrickHouseEntrance_EventScript_269BC7
	case 4, Route110_TrickHouseEntrance_EventScript_269BCD
	end

Route110_TrickHouseEntrance_EventScript_269AD7:: @ 8269AD7
	setvar VAR_0x40A5, 1
	compare_var_to_value VAR_0x4044, 8
	goto_eq Route110_TrickHouseEntrance_EventScript_269AED
	setvar VAR_0x40A7, 2
	end

Route110_TrickHouseEntrance_EventScript_269AED:: @ 8269AED
	setvar VAR_0x40A7, 6
	end

Route110_TrickHouseEntrance_EventScript_269AF3:: @ 8269AF3
	setvar VAR_0x40B5, 0
	setvar VAR_0x40A7, 5
	setvar VAR_0x40A5, 1
	end

Route110_TrickHouseEntrance_EventScript_269B03:: @ 8269B03
	setvar VAR_0x40A7, 0
	compare_var_to_value VAR_0x4044, 1
	call_if 1, Route110_TrickHouseEntrance_EventScript_269B61
	compare_var_to_value VAR_0x4044, 2
	call_if 1, Route110_TrickHouseEntrance_EventScript_269B6B
	compare_var_to_value VAR_0x4044, 3
	call_if 1, Route110_TrickHouseEntrance_EventScript_269B75
	compare_var_to_value VAR_0x4044, 4
	call_if 1, Route110_TrickHouseEntrance_EventScript_269B7F
	compare_var_to_value VAR_0x4044, 5
	call_if 1, Route110_TrickHouseEntrance_EventScript_269B89
	compare_var_to_value VAR_0x4044, 6
	call_if 1, Route110_TrickHouseEntrance_EventScript_269B93
	compare_var_to_value VAR_0x4044, 7
	call_if 1, Route110_TrickHouseEntrance_EventScript_269B9D
	compare_var_to_value VAR_0x4044, 8
	call_if 1, Route110_TrickHouseEntrance_EventScript_269BA7
	return

Route110_TrickHouseEntrance_EventScript_269B61:: @ 8269B61
	checkflag FLAG_BADGE03_GET
	call_if 0, Route110_TrickHouseEntrance_EventScript_269BAD
	return

Route110_TrickHouseEntrance_EventScript_269B6B:: @ 8269B6B
	checkflag FLAG_BADGE04_GET
	call_if 0, Route110_TrickHouseEntrance_EventScript_269BAD
	return

Route110_TrickHouseEntrance_EventScript_269B75:: @ 8269B75
	checkflag FLAG_BADGE05_GET
	call_if 0, Route110_TrickHouseEntrance_EventScript_269BAD
	return

Route110_TrickHouseEntrance_EventScript_269B7F:: @ 8269B7F
	checkflag FLAG_BADGE06_GET
	call_if 0, Route110_TrickHouseEntrance_EventScript_269BAD
	return

Route110_TrickHouseEntrance_EventScript_269B89:: @ 8269B89
	checkflag FLAG_BADGE07_GET
	call_if 0, Route110_TrickHouseEntrance_EventScript_269BAD
	return

Route110_TrickHouseEntrance_EventScript_269B93:: @ 8269B93
	checkflag FLAG_BADGE08_GET
	call_if 0, Route110_TrickHouseEntrance_EventScript_269BAD
	return

Route110_TrickHouseEntrance_EventScript_269B9D:: @ 8269B9D
	checkflag FLAG_SYS_GAME_CLEAR
	call_if 0, Route110_TrickHouseEntrance_EventScript_269BAD
	return

Route110_TrickHouseEntrance_EventScript_269BA7:: @ 8269BA7
	setvar VAR_0x40A7, 4
	return

Route110_TrickHouseEntrance_EventScript_269BAD:: @ 8269BAD
	setvar VAR_0x40A7, 3
	return

Route110_TrickHouseEntrance_EventScript_269BB3:: @ 8269BB3
	setobjectxyperm 1, 5, 2
	end

Route110_TrickHouseEntrance_EventScript_269BBB:: @ 8269BBB
	setvar VAR_0x40A5, 0
	end

Route110_TrickHouseEntrance_EventScript_269BC1:: @ 8269BC1
	setvar VAR_0x40A5, 1
	end

Route110_TrickHouseEntrance_EventScript_269BC7:: @ 8269BC7
	setvar VAR_0x40A5, 1
	end

Route110_TrickHouseEntrance_EventScript_269BCD:: @ 8269BCD
	setvar VAR_0x40A5, 1
	end

Route110_TrickHouseEntrance_MapScript2_269BD3: @ 8269BD3
	map_script_2 VAR_0x40A6, 1, Route110_TrickHouseEntrance_EventScript_269C15
	map_script_2 VAR_0x40A7, 0, Route110_TrickHouseEntrance_EventScript_269C26
	map_script_2 VAR_0x40A7, 1, Route110_TrickHouseEntrance_EventScript_269CCC
	map_script_2 VAR_0x40A7, 2, Route110_TrickHouseEntrance_EventScript_269CD0
	map_script_2 VAR_0x40A7, 3, Route110_TrickHouseEntrance_EventScript_269CD0
	map_script_2 VAR_0x40A7, 4, Route110_TrickHouseEntrance_EventScript_269CCC
	map_script_2 VAR_0x40A7, 5, Route110_TrickHouseEntrance_EventScript_269CCC
	map_script_2 VAR_0x40A7, 6, Route110_TrickHouseEntrance_EventScript_269CDF
	.2byte 0

Route110_TrickHouseEntrance_EventScript_269C15:: @ 8269C15
	addobject 1
	showobjectat 1, ROUTE_110_TRICK_HOUSE_ENTRANCE
	turnobject 1, 4
	turnobject 255, 3
	end

Route110_TrickHouseEntrance_EventScript_269C26:: @ 8269C26
	addobject 1
	hideobjectat 1, ROUTE_110_TRICK_HOUSE_ENTRANCE
	switch VAR_0x4044
	case 0, Route110_TrickHouseEntrance_EventScript_269C8C
	case 1, Route110_TrickHouseEntrance_EventScript_269C94
	case 2, Route110_TrickHouseEntrance_EventScript_269C9C
	case 3, Route110_TrickHouseEntrance_EventScript_269CA4
	case 4, Route110_TrickHouseEntrance_EventScript_269CAC
	case 5, Route110_TrickHouseEntrance_EventScript_269CB4
	case 6, Route110_TrickHouseEntrance_EventScript_269CBC
	case 7, Route110_TrickHouseEntrance_EventScript_269CC4
	end

Route110_TrickHouseEntrance_EventScript_269C8C:: @ 8269C8C
	setobjectxy 1, 6, 3
	end

Route110_TrickHouseEntrance_EventScript_269C94:: @ 8269C94
	setobjectxy 1, 11, 5
	end

Route110_TrickHouseEntrance_EventScript_269C9C:: @ 8269C9C
	setobjectxy 1, 9, 1
	end

Route110_TrickHouseEntrance_EventScript_269CA4:: @ 8269CA4
	setobjectxy 1, 3, 1
	end

Route110_TrickHouseEntrance_EventScript_269CAC:: @ 8269CAC
	setobjectxy 1, 0, 5
	end

Route110_TrickHouseEntrance_EventScript_269CB4:: @ 8269CB4
	setobjectxy 1, 11, 1
	end

Route110_TrickHouseEntrance_EventScript_269CBC:: @ 8269CBC
	setobjectxy 1, 8, 1
	end

Route110_TrickHouseEntrance_EventScript_269CC4:: @ 8269CC4
	setobjectxy 1, 4, 4
	end

Route110_TrickHouseEntrance_EventScript_269CCC:: @ 8269CCC
	removeobject 1
	end

Route110_TrickHouseEntrance_EventScript_269CD0:: @ 8269CD0
	addobject 1
	setobjectxy 1, 5, 2
	turnobject 1, 2
	end

Route110_TrickHouseEntrance_EventScript_269CDF:: @ 8269CDF
	addobject 1
	setobjectxy 1, 5, 2
	turnobject 1, 1
	end

Route110_TrickHouseEntrance_MapScript2_269CEE: @ 8269CEE
	map_script_2 VAR_0x40A6, 1, Route110_TrickHouseEntrance_EventScript_269CF8
	.2byte 0

Route110_TrickHouseEntrance_EventScript_269CF8:: @ 8269CF8
	lockall
	delay 20
	compare_var_to_value VAR_0x4044, 0
	call_if 1, Route110_TrickHouseEntrance_EventScript_269E48
	msgbox Route110_TrickHouseEntrance_Text_26A78C, 4
	closemessage
	delay 20
	applymovement 1, Route110_TrickHouseEntrance_Movement_269E36
	waitmovement 0
	playse SE_W153
	applymovement 1, Route110_TrickHouseEntrance_Movement_269E3F
	waitmovement 0
	removeobject 1
	setvar VAR_0x40A7, 1
	setvar VAR_0x40A6, 0
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_269D39:: @ 8269D39
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_269D3B:: @ 8269D3B
	lockall
	switch VAR_0x40A7
	case 0, Route110_TrickHouseEntrance_EventScript_269D6E
	case 2, Route110_TrickHouseEntrance_EventScript_269E8F
	case 3, Route110_TrickHouseEntrance_EventScript_269E51
	case 6, Route110_TrickHouseEntrance_EventScript_26A039
	end

Route110_TrickHouseEntrance_EventScript_269D6E:: @ 8269D6E
	playse SE_PIN
	applymovement 255, Route110_TrickHouseEntrance_Movement_272598
	waitmovement 0
	applymovement 255, Route110_TrickHouseEntrance_Movement_27259A
	waitmovement 0
	compare_var_to_value VAR_0x4044, 0
	call_if 1, Route110_TrickHouseEntrance_EventScript_269DEE
	compare_var_to_value VAR_0x4044, 1
	call_if 1, Route110_TrickHouseEntrance_EventScript_269DF7
	compare_var_to_value VAR_0x4044, 2
	call_if 1, Route110_TrickHouseEntrance_EventScript_269E00
	compare_var_to_value VAR_0x4044, 3
	call_if 1, Route110_TrickHouseEntrance_EventScript_269E09
	compare_var_to_value VAR_0x4044, 4
	call_if 1, Route110_TrickHouseEntrance_EventScript_269E12
	compare_var_to_value VAR_0x4044, 5
	call_if 1, Route110_TrickHouseEntrance_EventScript_269E1B
	compare_var_to_value VAR_0x4044, 6
	call_if 1, Route110_TrickHouseEntrance_EventScript_269E24
	compare_var_to_value VAR_0x4044, 7
	call_if 1, Route110_TrickHouseEntrance_EventScript_269E2D
	closemessage
	setvar VAR_0x40A6, 1
	warpsilent ROUTE_110_TRICK_HOUSE_ENTRANCE, 255, 6, 2
	waitstate
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_269DEE:: @ 8269DEE
	msgbox Route110_TrickHouseEntrance_Text_26A48A, 4
	return

Route110_TrickHouseEntrance_EventScript_269DF7:: @ 8269DF7
	msgbox Route110_TrickHouseEntrance_Text_26A4DA, 4
	return

Route110_TrickHouseEntrance_EventScript_269E00:: @ 8269E00
	msgbox Route110_TrickHouseEntrance_Text_26A529, 4
	return

Route110_TrickHouseEntrance_EventScript_269E09:: @ 8269E09
	msgbox Route110_TrickHouseEntrance_Text_26A577, 4
	return

Route110_TrickHouseEntrance_EventScript_269E12:: @ 8269E12
	msgbox Route110_TrickHouseEntrance_Text_26A5C8, 4
	return

Route110_TrickHouseEntrance_EventScript_269E1B:: @ 8269E1B
	msgbox Route110_TrickHouseEntrance_Text_26A616, 4
	return

Route110_TrickHouseEntrance_EventScript_269E24:: @ 8269E24
	msgbox Route110_TrickHouseEntrance_Text_26A665, 4
	return

Route110_TrickHouseEntrance_EventScript_269E2D:: @ 8269E2D
	msgbox Route110_TrickHouseEntrance_Text_26A6B6, 4
	return

Route110_TrickHouseEnd_Movement_269E36: @ 8269E36
Route110_TrickHouseEntrance_Movement_269E36: @ 8269E36
	step_01
	step_12
	step_02
	step_12
	step_00
	step_12
	step_03
	step_12
	step_end

Route110_TrickHouseEnd_Movement_269E3F: @ 8269E3F
Route110_TrickHouseEntrance_Movement_269E3F: @ 8269E3F
	step_01
	step_52
	step_32
	step_32
	step_32
	step_32
	step_32
	step_32
	step_end

Route110_TrickHouseEntrance_EventScript_269E48:: @ 8269E48
	msgbox Route110_TrickHouseEntrance_Text_26A709, 4
	return

Route110_TrickHouseEntrance_EventScript_269E51:: @ 8269E51
	msgbox Route110_TrickHouseEntrance_Text_26A921, 4
	closemessage
	applymovement 1, Route110_TrickHouseEntrance_Movement_27259E
	waitmovement 0
	playse SE_PIN
	applymovement 1, Route110_TrickHouseEntrance_Movement_272598
	waitmovement 0
	applymovement 1, Route110_TrickHouseEntrance_Movement_27259A
	waitmovement 0
	msgbox Route110_TrickHouseEntrance_Text_26A9AF, 4
	applymovement 1, Route110_TrickHouseEntrance_Movement_2725A6
	waitmovement 0
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_269E8F:: @ 8269E8F
	applymovement 1, Route110_TrickHouseEntrance_Movement_27259E
	waitmovement 0
	msgbox Route110_TrickHouseEntrance_Text_26AA82, 4
	compare_var_to_value VAR_0x4044, 1
	goto_eq Route110_TrickHouseEntrance_EventScript_269EEF
	compare_var_to_value VAR_0x4044, 2
	goto_eq Route110_TrickHouseEntrance_EventScript_269F1B
	compare_var_to_value VAR_0x4044, 3
	goto_eq Route110_TrickHouseEntrance_EventScript_269F47
	compare_var_to_value VAR_0x4044, 4
	goto_eq Route110_TrickHouseEntrance_EventScript_269F73
	compare_var_to_value VAR_0x4044, 5
	goto_eq Route110_TrickHouseEntrance_EventScript_269F9F
	compare_var_to_value VAR_0x4044, 6
	goto_eq Route110_TrickHouseEntrance_EventScript_269FCB
	compare_var_to_value VAR_0x4044, 7
	goto_eq Route110_TrickHouseEntrance_EventScript_269FF7
	end

Route110_TrickHouseEntrance_EventScript_269EEF:: @ 8269EEF
	giveitem_std ITEM_RARE_CANDY
	compare_var_to_value VAR_RESULT, 1
	goto_eq Route110_TrickHouseEntrance_EventScript_26A023
	compare_var_to_value VAR_RESULT, 0
	call_if 1, Route110_TrickHouseEntrance_EventScript_27205E
	msgbox Route110_TrickHouseEntrance_Text_26AB00, 4
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_269F1B:: @ 8269F1B
	giveitem_std ITEM_TIMER_BALL
	compare_var_to_value VAR_RESULT, 1
	goto_eq Route110_TrickHouseEntrance_EventScript_26A023
	compare_var_to_value VAR_RESULT, 0
	call_if 1, Route110_TrickHouseEntrance_EventScript_27205E
	msgbox Route110_TrickHouseEntrance_Text_26AB00, 4
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_269F47:: @ 8269F47
	giveitem_std ITEM_HARD_STONE
	compare_var_to_value VAR_RESULT, 1
	goto_eq Route110_TrickHouseEntrance_EventScript_26A023
	compare_var_to_value VAR_RESULT, 0
	call_if 1, Route110_TrickHouseEntrance_EventScript_27205E
	msgbox Route110_TrickHouseEntrance_Text_26AB00, 4
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_269F73:: @ 8269F73
	giveitem_std ITEM_SMOKE_BALL
	compare_var_to_value VAR_RESULT, 1
	goto_eq Route110_TrickHouseEntrance_EventScript_26A023
	compare_var_to_value VAR_RESULT, 0
	call_if 1, Route110_TrickHouseEntrance_EventScript_27205E
	msgbox Route110_TrickHouseEntrance_Text_26AB00, 4
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_269F9F:: @ 8269F9F
	giveitem_std ITEM_TM12
	compare_var_to_value VAR_RESULT, 1
	goto_eq Route110_TrickHouseEntrance_EventScript_26A023
	compare_var_to_value VAR_RESULT, 0
	call_if 1, Route110_TrickHouseEntrance_EventScript_27205E
	msgbox Route110_TrickHouseEntrance_Text_26AB00, 4
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_269FCB:: @ 8269FCB
	giveitem_std ITEM_MAGNET
	compare_var_to_value VAR_RESULT, 1
	goto_eq Route110_TrickHouseEntrance_EventScript_26A023
	compare_var_to_value VAR_RESULT, 0
	call_if 1, Route110_TrickHouseEntrance_EventScript_27205E
	msgbox Route110_TrickHouseEntrance_Text_26AB00, 4
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_269FF7:: @ 8269FF7
	giveitem_std ITEM_PP_MAX
	compare_var_to_value VAR_RESULT, 1
	goto_eq Route110_TrickHouseEntrance_EventScript_26A023
	compare_var_to_value VAR_RESULT, 0
	call_if 1, Route110_TrickHouseEntrance_EventScript_27205E
	msgbox Route110_TrickHouseEntrance_Text_26AB00, 4
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A023:: @ 826A023
	setvar VAR_0x40C1, 0
	setvar VAR_0x40A7, 3
	applymovement 1, Route110_TrickHouseEntrance_Movement_2725A6
	waitmovement 0
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A039:: @ 826A039
	applymovement 1, Route110_TrickHouseEntrance_Movement_27259E
	waitmovement 0
	msgbox Route110_TrickHouseEntrance_Text_26AB2C, 4
	call Route110_TrickHouseEntrance_EventScript_26A070
	compare_var_to_value VAR_RESULT, 1
	goto_eq Route110_TrickHouseEntrance_EventScript_26A09A
	compare_var_to_value VAR_RESULT, 0
	call_if 1, Route110_TrickHouseEntrance_EventScript_272071
	msgbox Route110_TrickHouseEntrance_Text_26ABBD, 4
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A070:: @ 826A070
	multichoice 0, 0, 88, 1
	switch VAR_RESULT
	case 0, Route110_TrickHouseEntrance_EventScript_26A08A
	goto Route110_TrickHouseEntrance_EventScript_26A092

Route110_TrickHouseEntrance_EventScript_26A08A:: @ 826A08A
	givedecoration_std 31
	return

Route110_TrickHouseEntrance_EventScript_26A092:: @ 826A092
	givedecoration_std 32
	return

Route110_TrickHouseEntrance_EventScript_26A09A:: @ 826A09A
	msgbox Route110_TrickHouseEntrance_Text_26ABAE, 4
	closemessage
	applymovement 1, Route110_TrickHouseEntrance_Movement_26D632
	waitmovement 0
	applymovement 1, Route110_TrickHouseEntrance_Movement_269E36
	waitmovement 0
	playse SE_W153
	applymovement 1, Route110_TrickHouseEntrance_Movement_269E3F
	waitmovement 0
	removeobject 1
	setvar VAR_0x40C1, 0
	setvar VAR_0x40A7, 5
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A0D3:: @ 826A0D3
	lockall
	switch VAR_0x40A7
	case 0, Route110_TrickHouseEntrance_EventScript_26A106
	case 1, Route110_TrickHouseEntrance_EventScript_26A110
	case 4, Route110_TrickHouseEntrance_EventScript_26A201
	case 5, Route110_TrickHouseEntrance_EventScript_26A20B
	end

Route110_TrickHouseEntrance_EventScript_26A106:: @ 826A106
	msgbox Route110_TrickHouseEntrance_Text_26A878, 4
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A110:: @ 826A110
	msgbox Route110_TrickHouseEntrance_Text_26A887, 5
	closemessage
	compare_var_to_value VAR_RESULT, 1
	goto_eq Route110_TrickHouseEntrance_EventScript_26A126
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A126:: @ 826A126
	setmetatile 5, 1, 537, 0
	special DrawWholeMapView
	delay 20
	applymovement 255, Route110_TrickHouseEntrance_Movement_2725C9
	waitmovement 0
	applymovement 255, Route110_TrickHouseEntrance_Movement_26A1A7
	waitmovement 0
	switch VAR_0x4044
	case 0, Route110_TrickHouseEntrance_EventScript_26A1A9
	case 1, Route110_TrickHouseEntrance_EventScript_26A1B4
	case 2, Route110_TrickHouseEntrance_EventScript_26A1BF
	case 3, Route110_TrickHouseEntrance_EventScript_26A1CA
	case 4, Route110_TrickHouseEntrance_EventScript_26A1D5
	case 5, Route110_TrickHouseEntrance_EventScript_26A1E0
	case 6, Route110_TrickHouseEntrance_EventScript_26A1EB
	case 7, Route110_TrickHouseEntrance_EventScript_26A1F6
	end

Route110_TrickHouseEntrance_Movement_26A1A7: @ 826A1A7
	step_54
	step_end

Route110_TrickHouseEntrance_EventScript_26A1A9:: @ 826A1A9
	warp ROUTE_110_TRICK_HOUSE_PUZZLE_1, 255, 0, 21
	waitstate
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A1B4:: @ 826A1B4
	warp ROUTE_110_TRICK_HOUSE_PUZZLE_2, 255, 0, 21
	waitstate
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A1BF:: @ 826A1BF
	warp ROUTE_110_TRICK_HOUSE_PUZZLE_3, 255, 0, 21
	waitstate
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A1CA:: @ 826A1CA
	warp ROUTE_110_TRICK_HOUSE_PUZZLE_4, 255, 0, 21
	waitstate
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A1D5:: @ 826A1D5
	warp ROUTE_110_TRICK_HOUSE_PUZZLE_5, 255, 0, 21
	waitstate
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A1E0:: @ 826A1E0
	warp ROUTE_110_TRICK_HOUSE_PUZZLE_6, 255, 0, 21
	waitstate
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A1EB:: @ 826A1EB
	warp ROUTE_110_TRICK_HOUSE_PUZZLE_7, 255, 0, 21
	waitstate
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A1F6:: @ 826A1F6
	warp ROUTE_110_TRICK_HOUSE_PUZZLE_8, 255, 0, 21
	waitstate
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A201:: @ 826A201
	msgbox Route110_TrickHouseEntrance_Text_26A8BD, 4
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A20B:: @ 826A20B
	compare_var_to_value VAR_0x4044, 8
	goto_eq Route110_TrickHouseEntrance_EventScript_26A220
	msgbox Route110_TrickHouseEntrance_Text_26A878, 4
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A220:: @ 826A220
	msgbox Route110_TrickHouseEntrance_Text_26A8BD, 4
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A22A:: @ 826A22A
	lockall
	switch VAR_0x4044
	case 0, Route110_TrickHouseEntrance_EventScript_26A289
	case 1, Route110_TrickHouseEntrance_EventScript_26A2B2
	case 2, Route110_TrickHouseEntrance_EventScript_26A2DB
	case 3, Route110_TrickHouseEntrance_EventScript_26A304
	case 4, Route110_TrickHouseEntrance_EventScript_26A32D
	case 5, Route110_TrickHouseEntrance_EventScript_26A356
	case 6, Route110_TrickHouseEntrance_EventScript_26A37F
	case 7, Route110_TrickHouseEntrance_EventScript_26A3A8
	end

Route110_TrickHouseEntrance_EventScript_26A289:: @ 826A289
	compare_var_to_value VAR_0x40AB, 0
	goto_eq Route110_TrickHouseEntrance_EventScript_26A3D1
	msgbox Route110_TrickHousePuzzle1_Text_26B98D, 4
	playse SE_PIN
	setvar VAR_0x40AB, 2
	setmetatile 13, 1, 523, 0
	special DrawWholeMapView
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A2B2:: @ 826A2B2
	compare_var_to_value VAR_0x40AC, 0
	goto_eq Route110_TrickHouseEntrance_EventScript_26A3D1
	msgbox Route110_TrickHousePuzzle2_Text_26BCBA, 4
	playse SE_PIN
	setvar VAR_0x40AC, 2
	setmetatile 13, 1, 523, 0
	special DrawWholeMapView
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A2DB:: @ 826A2DB
	compare_var_to_value VAR_0x40AD, 0
	goto_eq Route110_TrickHouseEntrance_EventScript_26A3D1
	msgbox Route110_TrickHousePuzzle3_Text_26C609, 4
	playse SE_PIN
	setvar VAR_0x40AD, 2
	setmetatile 13, 1, 523, 0
	special DrawWholeMapView
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A304:: @ 826A304
	compare_var_to_value VAR_0x40AE, 0
	goto_eq Route110_TrickHouseEntrance_EventScript_26A3D1
	msgbox Route110_TrickHousePuzzle4_Text_26C8C3, 4
	playse SE_PIN
	setvar VAR_0x40AE, 2
	setmetatile 13, 1, 523, 0
	special DrawWholeMapView
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A32D:: @ 826A32D
	compare_var_to_value VAR_0x40AF, 0
	goto_eq Route110_TrickHouseEntrance_EventScript_26A3D1
	msgbox Route110_TrickHousePuzzle5_Text_26D660, 4
	playse SE_PIN
	setvar VAR_0x40AF, 2
	setmetatile 13, 1, 523, 0
	special DrawWholeMapView
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A356:: @ 826A356
	compare_var_to_value VAR_0x40B0, 0
	goto_eq Route110_TrickHouseEntrance_EventScript_26A3D1
	msgbox Route110_TrickHousePuzzle6_Text_26DE26, 4
	playse SE_PIN
	setvar VAR_0x40B0, 2
	setmetatile 13, 1, 523, 0
	special DrawWholeMapView
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A37F:: @ 826A37F
	compare_var_to_value VAR_0x40B1, 0
	goto_eq Route110_TrickHouseEntrance_EventScript_26A3D1
	msgbox Route110_TrickHousePuzzle7_EventScript_26E413, 4
	playse SE_PIN
	setvar VAR_0x40B1, 2
	setmetatile 13, 1, 523, 0
	special DrawWholeMapView
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A3A8:: @ 826A3A8
	compare_var_to_value VAR_0x40B2, 0
	goto_eq Route110_TrickHouseEntrance_EventScript_26A3D1
	msgbox Route110_TrickHousePuzzle8_EventScript_26E864, 4
	playse SE_PIN
	setvar VAR_0x40B2, 2
	setmetatile 13, 1, 523, 0
	special DrawWholeMapView
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A3D1:: @ 826A3D1
	msgbox Route110_TrickHouseEntrance_Text_26AC4F, 4
	releaseall
	end

Route110_TrickHousePuzzle1_EventScript_26A3DB:: @ 826A3DB
Route110_TrickHousePuzzle2_EventScript_26A3DB:: @ 826A3DB
Route110_TrickHousePuzzle3_EventScript_26A3DB:: @ 826A3DB
Route110_TrickHousePuzzle4_EventScript_26A3DB:: @ 826A3DB
Route110_TrickHousePuzzle5_EventScript_26A3DB:: @ 826A3DB
Route110_TrickHousePuzzle6_EventScript_26A3DB:: @ 826A3DB
Route110_TrickHousePuzzle7_EventScript_26A3DB:: @ 826A3DB
Route110_TrickHousePuzzle8_EventScript_26A3DB:: @ 826A3DB
	msgbox Route110_TrickHousePuzzle1_Text_26AC2F, 4
	releaseall
	end

Route110_TrickHousePuzzle1_EventScript_26A3E5:: @ 826A3E5
Route110_TrickHousePuzzle2_EventScript_26A3E5:: @ 826A3E5
Route110_TrickHousePuzzle3_EventScript_26A3E5:: @ 826A3E5
Route110_TrickHousePuzzle4_EventScript_26A3E5:: @ 826A3E5
Route110_TrickHousePuzzle5_EventScript_26A3E5:: @ 826A3E5
Route110_TrickHousePuzzle6_EventScript_26A3E5:: @ 826A3E5
Route110_TrickHousePuzzle7_EventScript_26A3E5:: @ 826A3E5
Route110_TrickHousePuzzle8_EventScript_26A3E5:: @ 826A3E5
	playfanfare BGM_FANFA4
	message Route110_TrickHousePuzzle1_Text_26ABE8
	waitfanfare
	msgbox Route110_TrickHousePuzzle1_Text_26ABFB, 4
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_26A3F8:: @ 826A3F8
	lockall
	msgbox Route110_TrickHouseEntrance_Text_26A474, 4
	releaseall
	compare_var_to_value VAR_0x4044, 0
	call_if 1, Route110_TrickHouseEntrance_EventScript_26A429
	compare_var_to_value VAR_0x4044, 1
	call_if 1, Route110_TrickHouseEntrance_EventScript_26A439
	compare_var_to_value VAR_0x4044, 2
	call_if 1, Route110_TrickHouseEntrance_EventScript_26A449
	setvar VAR_0x40A5, 1
	end

Route110_TrickHouseEntrance_EventScript_26A429:: @ 826A429
	setvar VAR_0x8004, 6
	setvar VAR_0x8005, 3
	call Route110_TrickHouseEntrance_EventScript_26A459
	return

Route110_TrickHouseEntrance_EventScript_26A439:: @ 826A439
	setvar VAR_0x8004, 11
	setvar VAR_0x8005, 5
	call Route110_TrickHouseEntrance_EventScript_26A459
	return

Route110_TrickHouseEntrance_EventScript_26A449:: @ 826A449
	setvar VAR_0x8004, 9
	setvar VAR_0x8005, 2
	call Route110_TrickHouseEntrance_EventScript_26A459
	return

Route110_TrickHouseEntrance_EventScript_26A459:: @ 826A459
	setvar VAR_0x8006, 0
	setfieldeffectargument 0, VAR_0x8004
	setfieldeffectargument 1, VAR_0x8005
	setfieldeffectargument 2, VAR_0x8006
	dofieldeffect 54
	waitfieldeffect 54
	delay 10
	return

Route110_TrickHouseEntrance_Text_26A474: @ 826A474
	.string "You’re being watched…$"

Route110_TrickHouseEntrance_Text_26A48A: @ 826A48A
	.string "Hah? Grrr…\p"
	.string "How did you know I concealed myself\n"
	.string "beneath this desk? You’re sharp!$"

Route110_TrickHouseEntrance_Text_26A4DA: @ 826A4DA
	.string "Hah? Grrr…\p"
	.string "How did you know I concealed myself\n"
	.string "behind this tree? You’re sharp!$"

Route110_TrickHouseEntrance_Text_26A529: @ 826A529
	.string "Hah? Grrr…\p"
	.string "How did you know I concealed myself\n"
	.string "in this dresser? You’re sharp!$"

Route110_TrickHouseEntrance_Text_26A577: @ 826A577
	.string "Hah? Grrr…\p"
	.string "How did you know I concealed myself\n"
	.string "beyond this window? You’re sharp!$"

Route110_TrickHouseEntrance_Text_26A5C8: @ 826A5C8
	.string "Hah? Grrr…\p"
	.string "How did you know I concealed myself\n"
	.string "in this planter? You’re sharp!$"

Route110_TrickHouseEntrance_Text_26A616: @ 826A616
	.string "Hah? Grrr…\p"
	.string "How did you know I concealed myself\n"
	.string "in this cupboard? You’re sharp!$"

Route110_TrickHouseEntrance_Text_26A665: @ 826A665
	.string "Hah? Grrr…\p"
	.string "How did you know I concealed myself\n"
	.string "behind this window? You’re sharp!$"

Route110_TrickHouseEntrance_Text_26A6B6: @ 826A6B6
	.string "Hah? Grrr…\p"
	.string "How did you know I concealed myself\n"
	.string "beneath this cushion? You’re sharp!$"

Route110_TrickHouseEntrance_Text_26A709: @ 826A709
	.string "Behold!\p"
	.string "For I am the greatest living mystery\n"
	.string "of a man in all of HOENN!\l"
	.string "They call me…\p"
	.string "The TRICK MASTER!\n"
	.string "Wahahaha! Glad to meet you!$"

Route110_TrickHouseEntrance_Text_26A78C: @ 826A78C
	.string "You, you’ve come to challenge\n"
	.string "my TRICK HOUSE, haven’t you?\p"
	.string "That’s why you’re here, isn’t it?\n"
	.string "Yes, it is!\p"
	.string "Consider your challenge accepted!\p"
	.string "Enter through the scroll there,\n"
	.string "and let your challenge commence!\p"
	.string "I shall be waiting in the back!$"

Route110_TrickHouseEntrance_Text_26A878: @ 826A878
	.string "It’s a scroll.$"

Route110_TrickHouseEntrance_Text_26A887: @ 826A887
	.string "There is a big hole behind the scroll!\p"
	.string "Want to go in?$"

Route110_TrickHouseEntrance_Text_26A8BD: @ 826A8BD
	.string "There is a note affixed to the scroll…\p"
	.string "“I am leaving on a journey.\n"
	.string "Don’t look for me. TRICK MASTER”$"

Route110_TrickHouseEntrance_Text_26A921: @ 826A921
	.string "For the next time, I’ll use this trick,\n"
	.string "and that scheme, and those ruses…\p"
	.string "Mufufufu… If I may say so, it’s\n"
	.string "brilliantly difficult, even for me!$"

Route110_TrickHouseEntrance_Text_26A9AF: @ 826A9AF
	.string "Hah? What?!\n"
	.string "Oh, it’s you!\p"
	.string "I’m in the midst of devising new tricky\n"
	.string "challenges!\p"
	.string "It’s not too much to ask for a bit more\n"
	.string "time for me to think, is it now?\l"
	.string "You wouldn’t begrudge me that?\l"
	.string "Come back in a little while!$"

Route110_TrickHouseEntrance_Text_26AA82: @ 826AA82
	.string "Ah, it’s you! You’re here to accept the\n"
	.string "reward from before, isn’t that right?\l"
	.string "Yes, right I am!\p"
	.string "Here!\n"
	.string "I’ll give it to you now!$"

Route110_TrickHouseEntrance_Text_26AB00: @ 826AB00
	.string "Hah?\n"
	.string "Did you not come to claim your reward?$"

Route110_TrickHouseEntrance_Text_26AB2C: @ 826AB2C
	.string "MECHADOLL 5 I AM!\n"
	.string "IF REWARD IS NOT TAKEN BY YOU,\l"
	.string "THEN TRICK MASTER YOU CANNOT FOLLOW.\p"
	.string "RED TENT OR BLUE TENT,\n"
	.string "WHICH DO YOU PREFER?$"

Route110_TrickHouseEntrance_Text_26ABAE: @ 826ABAE
	.string "THEN FAREWELL.$"

Route110_TrickHouseEntrance_Text_26ABBD: @ 826ABBD
	.string "YOUR PC STATUS: FULL AGAIN.\n"
	.string "MEAN, YOU ARE.$"

Route110_TrickHousePuzzle1_Text_26ABE8: @ 826ABE8
	.string "{PLAYER} found a scroll.$"

Route110_TrickHousePuzzle1_Text_26ABFB: @ 826ABFB
	.string "{PLAYER} memorized the secret code\n"
	.string "written on the scroll.$"

Route110_TrickHousePuzzle1_Text_26AC2F: @ 826AC2F
	.string "A secret code is written on it.$"

Route110_TrickHouseEntrance_Text_26AC4F: @ 826AC4F
	.string "The door is locked.\p"
	.string "…On closer inspection, this is written\n"
	.string "on it: “Write the secret code here.”$"
