EverGrandeCity_PokemonLeague_1F_MapObjects: @ 8533860
	object_event 1, MAP_OBJ_GFX_NURSE, 0, 0, 3, 2, 3, 8, 0, 0, 0, 0, EverGrandeCity_PokemonLeague_1F_EventScript_2295FC, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_MART_EMPLOYEE, 0, 0, 16, 2, 3, 8, 0, 0, 0, 0, EverGrandeCity_PokemonLeague_1F_EventScript_22960A, 0, 0, 0
	object_event 3, MAP_OBJ_GFX_MAN_4, 0, 0, 8, 2, 3, 8, 17, 0, 0, 0, EverGrandeCity_PokemonLeague_1F_EventScript_229636, 0, 0, 0
	object_event 4, MAP_OBJ_GFX_MAN_4, 0, 0, 11, 2, 3, 8, 17, 0, 0, 0, EverGrandeCity_PokemonLeague_1F_EventScript_229636, 0, 0, 0

EverGrandeCity_PokemonLeague_1F_MapWarps: @ 85338C0
	warp_def 9, 11, 3, 0, EVER_GRANDE_CITY
	warp_def 10, 11, 3, 0, EVER_GRANDE_CITY
	warp_def 9, 1, 3, 0, EVER_GRANDE_CITY_HALL_5
	warp_def 10, 1, 3, 0, EVER_GRANDE_CITY_HALL_5
	warp_def 1, 7, 4, 0, EVER_GRANDE_CITY_POKEMON_LEAGUE_2F

EverGrandeCity_PokemonLeague_1F_MapEvents:: @ 85338E8
	map_events EverGrandeCity_PokemonLeague_1F_MapObjects, EverGrandeCity_PokemonLeague_1F_MapWarps, 0x0, 0x0

