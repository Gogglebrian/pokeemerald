const u32 enviolitePercentBonus[NUM_SPECIES] =
{
	[SPECIES_NONE] 			= 100,
	[SPECIES_BULBASAUR] 	= 100,
	[SPECIES_IVYSAUR] 		= 100,
	[SPECIES_VENUSAUR] 		= 100,
	[SPECIES_CHARMANDER] 	= 100,
	[SPECIES_CHARMELEON] 	= 100,
	[SPECIES_CHARIZARD] 	= 100,
	[SPECIES_SQUIRTLE] 		= 100,
	[SPECIES_WARTORTLE] 	= 100,
	[SPECIES_BLASTOISE] 	= 100,
	[SPECIES_CATERPIE] 		= 100,
	[SPECIES_METAPOD] 		= 100,
	[SPECIES_BUTTERFREE] 	= 130,
	[SPECIES_WEEDLE] 		= 100,
	[SPECIES_KAKUNA] 		= 100,
	[SPECIES_BEEDRILL] 		= 130,
	[SPECIES_PIDGEY] 		= 100,
	[SPECIES_PIDGEOTTO] 	= 100,
	[SPECIES_PIDGEOT] 		= 105,
	[SPECIES_RATTATA] 		= 100,
	[SPECIES_RATICATE] 		= 120,
	[SPECIES_SPEAROW] 		= 100,
	[SPECIES_FEAROW] 		= 115,
	[SPECIES_EKANS] 		= 100,
	[SPECIES_ARBOK] 		= 115,
	[SPECIES_PIKACHU] 		= 100,
	[SPECIES_RAICHU] 		= 100,
	[SPECIES_SANDSHREW] 	= 100,
	[SPECIES_SANDSLASH] 	= 110,
	[SPECIES_NIDORAN_F] 	= 100,
	[SPECIES_NIDORINA] 		= 100,
	[SPECIES_NIDOQUEEN] 	= 100,
	[SPECIES_NIDORAN_M] 	= 100,
	[SPECIES_NIDORINO] 		= 100,
	[SPECIES_NIDOKING] 		= 100,
	[SPECIES_CLEFAIRY] 		= 100,
	[SPECIES_CLEFABLE] 		= 100,
	[SPECIES_VULPIX] 		= 100,
	[SPECIES_NINETALES] 	= 100,
	[SPECIES_JIGGLYPUFF] 	= 100,
	[SPECIES_WIGGLYTUFF] 	= 115,
	[SPECIES_ZUBAT] 		= 100,
	[SPECIES_GOLBAT] 		= 100,
	[SPECIES_ODDISH] 		= 100,
	[SPECIES_GLOOM] 		= 100,
	[SPECIES_VILEPLUME] 	= 100,
	[SPECIES_PARAS] 		= 100,
	[SPECIES_PARASECT] 		= 120,
	[SPECIES_VENONAT] 		= 100,
	[SPECIES_VENOMOTH] 		= 110,
	[SPECIES_DIGLETT] 		= 100,
	[SPECIES_DUGTRIO] 		= 120,
	[SPECIES_MEOWTH] 		= 100,
	[SPECIES_PERSIAN] 		= 115,
	[SPECIES_PSYDUCK] 		= 100,
	[SPECIES_GOLDUCK] 		= 100,
	[SPECIES_MANKEY] 		= 100,
	[SPECIES_PRIMEAPE] 		= 100,
	[SPECIES_GROWLITHE] 	= 100,
	[SPECIES_ARCANINE] 		= 100,
	[SPECIES_POLIWAG] 		= 100,
	[SPECIES_POLIWHIRL] 	= 100,
	[SPECIES_POLIWRATH] 	= 100,
	[SPECIES_ABRA] 			= 100,
	[SPECIES_KADABRA] 		= 100,
	[SPECIES_ALAKAZAM] 		= 100,
	[SPECIES_MACHOP] 		= 100,
	[SPECIES_MACHOKE] 		= 100,
	[SPECIES_MACHAMP]	 	= 100,
	[SPECIES_BELLSPROUT] 	= 100,
	[SPECIES_WEEPINBELL] 	= 100,
	[SPECIES_VICTREEBEL] 	= 100,
	[SPECIES_TENTACOOL] 	= 100,
	[SPECIES_TENTACRUEL] 	= 100,
	[SPECIES_GEODUDE] 		= 100,
	[SPECIES_GRAVELER] 		= 100,
	[SPECIES_GOLEM] 		= 100,
	[SPECIES_PONYTA] 		= 100,
	[SPECIES_RAPIDASH] 		= 100,
	[SPECIES_SLOWPOKE] 		= 100,
	[SPECIES_SLOWBRO] 		= 100,
	[SPECIES_MAGNEMITE] 	= 100,
	[SPECIES_MAGNETON] 		= 100,
	[SPECIES_FARFETCHD] 	= 130,
	[SPECIES_DODUO] 		= 100,
	[SPECIES_DODRIO] 		= 110,
	[SPECIES_SEEL] 			= 100,
	[SPECIES_DEWGONG] 		= 105,
	[SPECIES_GRIMER] 		= 100,
	[SPECIES_MUK] 			= 100,
	[SPECIES_SHELLDER] 		= 100,
	[SPECIES_CLOYSTER] 		= 100,
	[SPECIES_GASTLY] 		= 100,
	[SPECIES_HAUNTER] 		= 100,
	[SPECIES_GENGAR] 		= 100,
	[SPECIES_ONIX] 			= 100,
	[SPECIES_DROWZEE] 		= 100,
	[SPECIES_HYPNO] 		= 100,
	[SPECIES_KRABBY] 		= 100,
	[SPECIES_KINGLER] 		= 105,
	[SPECIES_VOLTORB] 		= 100,
	[SPECIES_ELECTRODE] 	= 100,
	[SPECIES_EXEGGCUTE]	 	= 100,
	[SPECIES_EXEGGUTOR] 	= 100,
	[SPECIES_CUBONE] 		= 100,
	[SPECIES_MAROWAK] 		= 120,
	[SPECIES_HITMONLEE] 	= 110,
	[SPECIES_HITMONCHAN] 	= 110,
	[SPECIES_LICKITUNG] 	= 100,
	[SPECIES_KOFFING] 		= 100,
	[SPECIES_WEEZING] 		= 100,
	[SPECIES_RHYHORN] 		= 100,
	[SPECIES_RHYDON] 		= 100,
	[SPECIES_CHANSEY] 		= 100,
	[SPECIES_TANGELA] 		= 100,
	[SPECIES_KANGASKHAN] 	= 100,
	[SPECIES_HORSEA] 		= 100,
	[SPECIES_SEADRA] 		= 100,
	[SPECIES_GOLDEEN] 		= 100,
	[SPECIES_SEAKING] 		= 110,
	[SPECIES_STARYU] 		= 100,
	[SPECIES_STARMIE] 		= 100,
	[SPECIES_MR_MIME] 		= 110,
	[SPECIES_SCYTHER] 		= 100,
	[SPECIES_JYNX] 			= 110,
	[SPECIES_ELECTABUZZ] 	= 100,
	[SPECIES_MAGMAR] 		= 100,
	[SPECIES_PINSIR] 		= 100,
	[SPECIES_TAUROS] 		= 100,
	[SPECIES_MAGIKARP] 		= 100,
	[SPECIES_GYARADOS]	 	= 100,
	[SPECIES_LAPRAS] 		= 100,
	[SPECIES_DITTO] 		= 100,
	[SPECIES_EEVEE] 		= 100,
	[SPECIES_VAPOREON] 		= 100,
	[SPECIES_JOLTEON] 		= 100,
	[SPECIES_FLAREON] 		= 100,
	[SPECIES_PORYGON] 		= 100,
	[SPECIES_OMANYTE] 		= 100,
	[SPECIES_OMASTAR] 		= 100,
	[SPECIES_KABUTO] 		= 100,
	[SPECIES_KABUTOPS] 		= 100,
	[SPECIES_AERODACTYL] 	= 100,
	[SPECIES_SNORLAX] 		= 100,
	[SPECIES_ARTICUNO] 		= 100,
	[SPECIES_ZAPDOS] 		= 100,
	[SPECIES_MOLTRES] 		= 100,
	[SPECIES_DRATINI] 		= 100,
	[SPECIES_DRAGONAIR] 	= 100,
	[SPECIES_DRAGONITE] 	= 100,
	[SPECIES_MEWTWO] 		= 100,
	[SPECIES_MEW] 			= 100,
	[SPECIES_CHIKORITA] 	= 100,
	[SPECIES_BAYLEEF] 		= 100,
	[SPECIES_MEGANIUM] 		= 100,
	[SPECIES_CYNDAQUIL] 	= 100,
	[SPECIES_QUILAVA] 		= 100,
	[SPECIES_TYPHLOSION] 	= 100,
	[SPECIES_TOTODILE] 		= 100,
	[SPECIES_CROCONAW] 		= 100,
	[SPECIES_FERALIGATR] 	= 100,
	[SPECIES_SENTRET] 		= 100,
	[SPECIES_FURRET] 		= 120,
	[SPECIES_HOOTHOOT]	 	= 100,
	[SPECIES_NOCTOWL] 		= 110,
	[SPECIES_LEDYBA] 		= 100,
	[SPECIES_LEDIAN] 		= 130,
	[SPECIES_SPINARAK] 		= 100,
	[SPECIES_ARIADOS] 		= 125,
	[SPECIES_CROBAT] 		= 100,
	[SPECIES_CHINCHOU] 		= 100,
	[SPECIES_LANTURN] 		= 110,
	[SPECIES_PICHU] 		= 100,
	[SPECIES_CLEFFA] 		= 100,
	[SPECIES_IGGLYBUFF] 	= 100,
	[SPECIES_TOGEPI] 		= 100,
	[SPECIES_TOGETIC] 		= 100,
	[SPECIES_NATU] 			= 100,
	[SPECIES_XATU] 			= 110,
	[SPECIES_MAREEP] 		= 100,
	[SPECIES_FLAAFFY] 		= 100,
	[SPECIES_AMPHAROS] 		= 100,
	[SPECIES_BELLOSSOM] 	= 100,
	[SPECIES_MARILL] 		= 100,
	[SPECIES_AZUMARILL] 	= 115,
	[SPECIES_SUDOWOODO] 	= 120,
	[SPECIES_POLITOED] 		= 100,
	[SPECIES_HOPPIP] 		= 100,
	[SPECIES_SKIPLOOM] 		= 100,
	[SPECIES_JUMPLUFF] 		= 120,
	[SPECIES_AIPOM] 		= 100,
	[SPECIES_SUNKERN] 		= 100,
	[SPECIES_SUNFLORA] 		= 120,
	[SPECIES_YANMA] 		= 100,
	[SPECIES_WOOPER] 		= 100,
	[SPECIES_QUAGSIRE] 		= 120,
	[SPECIES_ESPEON] 		= 100,
	[SPECIES_UMBREON] 		= 100,
	[SPECIES_MURKROW] 		= 100,
	[SPECIES_SLOWKING] 		= 100,
	[SPECIES_MISDREAVUS] 	= 100,
	[SPECIES_UNOWN] 		= 150,
	[SPECIES_WOBBUFFET] 	= 125,
	[SPECIES_GIRAFARIG] 	= 100,
	[SPECIES_PINECO] 		= 100,
	[SPECIES_FORRETRESS] 	= 110,
	[SPECIES_DUNSPARCE]	 	= 100,
	[SPECIES_GLIGAR] 		= 100,
	[SPECIES_STEELIX] 		= 100,
	[SPECIES_SNUBBULL] 		= 100,
	[SPECIES_GRANBULL] 		= 110,
	[SPECIES_QWILFISH] 		= 115,
	[SPECIES_SCIZOR] 		= 100,
	[SPECIES_SHUCKLE] 		= 100,
	[SPECIES_HERACROSS] 	= 100,
	[SPECIES_SNEASEL] 		= 100,
	[SPECIES_TEDDIURSA] 	= 100,
	[SPECIES_URSARING] 		= 100,
	[SPECIES_SLUGMA] 		= 100,
	[SPECIES_MAGCARGO] 		= 120,
	[SPECIES_SWINUB] 		= 100,
	[SPECIES_PILOSWINE] 	= 100,
	[SPECIES_CORSOLA] 		= 125,
	[SPECIES_REMORAID] 		= 100,
	[SPECIES_OCTILLERY] 	= 100,
	[SPECIES_DELIBIRD] 		= 150,
	[SPECIES_MANTINE] 		= 100,
	[SPECIES_SKARMORY] 		= 110,
	[SPECIES_HOUNDOUR] 		= 100,
	[SPECIES_HOUNDOOM] 		= 100,
	[SPECIES_KINGDRA] 		= 100,
	[SPECIES_PHANPY] 		= 100,
	[SPECIES_DONPHAN] 		= 100,
	[SPECIES_PORYGON2] 		= 100,
	[SPECIES_STANTLER] 		= 100,
	[SPECIES_SMEARGLE] 		= 150,
	[SPECIES_TYROGUE] 		= 100,
	[SPECIES_HITMONTOP] 	= 110,
	[SPECIES_SMOOCHUM] 		= 100,
	[SPECIES_ELEKID] 		= 100,
	[SPECIES_MAGBY] 		= 100,
	[SPECIES_MILTANK] 		= 100,
	[SPECIES_BLISSEY] 		= 100,
	[SPECIES_RAIKOU] 		= 100,
	[SPECIES_ENTEI] 		= 100,
	[SPECIES_SUICUNE] 		= 100,
	[SPECIES_LARVITAR] 		= 100,
	[SPECIES_PUPITAR] 		= 100,
	[SPECIES_TYRANITAR] 	= 100,
	[SPECIES_LUGIA] 		= 100,
	[SPECIES_HO_OH] 		= 100,
	[SPECIES_CELEBI] 		= 100,

	[SPECIES_OLD_UNOWN_B] 	= 150,
	[SPECIES_OLD_UNOWN_C] 	= 150,
	[SPECIES_OLD_UNOWN_D] 	= 150,
	[SPECIES_OLD_UNOWN_E] 	= 150,
	[SPECIES_OLD_UNOWN_F] 	= 150,
	[SPECIES_OLD_UNOWN_G] 	= 150,
	[SPECIES_OLD_UNOWN_H] 	= 150,
	[SPECIES_OLD_UNOWN_I] 	= 150,
	[SPECIES_OLD_UNOWN_J] 	= 150,
	[SPECIES_OLD_UNOWN_K] 	= 150,
	[SPECIES_OLD_UNOWN_L] 	= 150,
	[SPECIES_OLD_UNOWN_M] 	= 150,
	[SPECIES_OLD_UNOWN_N] 	= 150,
	[SPECIES_OLD_UNOWN_O] 	= 150,
	[SPECIES_OLD_UNOWN_P] 	= 150,
	[SPECIES_OLD_UNOWN_Q] 	= 150,
	[SPECIES_OLD_UNOWN_R] 	= 150,
	[SPECIES_OLD_UNOWN_S] 	= 150,
	[SPECIES_OLD_UNOWN_T] 	= 150,
	[SPECIES_OLD_UNOWN_U] 	= 150,
	[SPECIES_OLD_UNOWN_V] 	= 150,
	[SPECIES_OLD_UNOWN_W] 	= 150,
	[SPECIES_OLD_UNOWN_X] 	= 150,
	[SPECIES_OLD_UNOWN_Y] 	= 150,
	[SPECIES_OLD_UNOWN_Z] 	= 150,

	[SPECIES_TREECKO] 		= 100,
	[SPECIES_GROVYLE] 		= 100,
	[SPECIES_SCEPTILE] 		= 100,
	[SPECIES_TORCHIC] 		= 100,
	[SPECIES_COMBUSKEN] 	= 100,
	[SPECIES_BLAZIKEN] 		= 100,
	[SPECIES_MUDKIP] 		= 100,
	[SPECIES_MARSHTOMP] 	= 100,
	[SPECIES_SWAMPERT] 		= 100,
	[SPECIES_POOCHYENA] 	= 100,
	[SPECIES_MIGHTYENA] 	= 120,
	[SPECIES_ZIGZAGOON] 	= 100,
	[SPECIES_LINOONE] 		= 120,
	[SPECIES_WURMPLE] 		= 100,
	[SPECIES_SILCOON] 		= 100,
	[SPECIES_BEAUTIFLY] 	= 125,
	[SPECIES_CASCOON] 		= 100,
	[SPECIES_DUSTOX] 		= 125,
	[SPECIES_LOTAD] 		= 100,
	[SPECIES_LOMBRE] 		= 100,
	[SPECIES_LUDICOLO] 		= 100,
	[SPECIES_SEEDOT] 		= 100,
	[SPECIES_NUZLEAF] 		= 100,
	[SPECIES_SHIFTRY] 		= 100,
	[SPECIES_NINCADA] 		= 100,
	[SPECIES_NINJASK] 		= 110,
	[SPECIES_SHEDINJA] 		= 150,
	[SPECIES_TAILLOW]		= 100,
	[SPECIES_SWELLOW] 		= 125,
	[SPECIES_SHROOMISH] 	= 100,
	[SPECIES_BRELOOM] 		= 110,
	[SPECIES_SPINDA] 		= 140,
	[SPECIES_WINGULL] 		= 100,
	[SPECIES_PELIPPER] 		= 110,
	[SPECIES_SURSKIT] 		= 100,
	[SPECIES_MASQUERAIN] 	= 110,
	[SPECIES_WAILMER] 		= 100,
	[SPECIES_WAILORD] 		= 100,
	[SPECIES_SKITTY] 		= 100,
	[SPECIES_DELCATTY] 		= 120,
	[SPECIES_KECLEON] 		= 115,
	[SPECIES_BALTOY] 		= 100,
	[SPECIES_CLAYDOL] 		= 100,
	[SPECIES_NOSEPASS] 		= 100,
	[SPECIES_TORKOAL] 		= 115,
	[SPECIES_SABLEYE] 		= 130,
	[SPECIES_BARBOACH] 		= 100,
	[SPECIES_WHISCASH] 		= 125,
	[SPECIES_LUVDISC] 		= 150,
	[SPECIES_CORPHISH] 		= 100,
	[SPECIES_CRAWDAUNT] 	= 110,
	[SPECIES_FEEBAS] 		= 100,
	[SPECIES_MILOTIC] 		= 100,
	[SPECIES_CARVANHA] 		= 100,
	[SPECIES_SHARPEDO] 		= 110,
	[SPECIES_TRAPINCH] 		= 100,
	[SPECIES_VIBRAVA] 		= 100,
	[SPECIES_FLYGON] 		= 100,
	[SPECIES_MAKUHITA] 		= 100,
	[SPECIES_HARIYAMA] 		= 110,
	[SPECIES_ELECTRIKE] 	= 100,
	[SPECIES_MANECTRIC] 	= 105,
	[SPECIES_NUMEL] 		= 100,
	[SPECIES_CAMERUPT] 		= 110,
	[SPECIES_SPHEAL] 		= 100,
	[SPECIES_SEALEO] 		= 100,
	[SPECIES_WALREIN] 		= 100,
	[SPECIES_CACNEA] 		= 100,
	[SPECIES_CACTURNE] 		= 100,
	[SPECIES_SNORUNT] 		= 100,
	[SPECIES_GLALIE] 		= 100,
	[SPECIES_LUNATONE] 		= 115,
	[SPECIES_SOLROCK] 		= 115,
	[SPECIES_AZURILL] 		= 100,
	[SPECIES_SPOINK] 		= 100,
	[SPECIES_GRUMPIG] 		= 100,
	[SPECIES_PLUSLE] 		= 125,
	[SPECIES_MINUN] 		= 125,
	[SPECIES_MAWILE] 		= 140,
	[SPECIES_MEDITITE] 		= 100,
	[SPECIES_MEDICHAM] 		= 100,
	[SPECIES_SWABLU] 		= 100,
	[SPECIES_ALTARIA] 		= 100,
	[SPECIES_WYNAUT]	 	= 100,
	[SPECIES_DUSKULL] 		= 100,
	[SPECIES_DUSCLOPS] 		= 100,
	[SPECIES_ROSELIA] 		= 100,
	[SPECIES_SLAKOTH] 		= 100,
	[SPECIES_VIGOROTH] 		= 100,
	[SPECIES_SLAKING] 		= 100,
	[SPECIES_GULPIN] 		= 100,
	[SPECIES_SWALOT] 		= 125,
	[SPECIES_TROPIUS] 		= 110,
	[SPECIES_WHISMUR] 		= 100,
	[SPECIES_LOUDRED] 		= 100,
	[SPECIES_EXPLOUD] 		= 100,
	[SPECIES_CLAMPERL] 		= 100,
	[SPECIES_HUNTAIL] 		= 100,
	[SPECIES_GOREBYSS] 		= 100,
	[SPECIES_ABSOL] 		= 110,
	[SPECIES_SHUPPET] 		= 100,
	[SPECIES_BANETTE] 		= 110,
	[SPECIES_SEVIPER] 		= 110,
	[SPECIES_ZANGOOSE] 		= 110,
	[SPECIES_RELICANTH] 	= 100,
	[SPECIES_ARON] 			= 100,
	[SPECIES_LAIRON] 		= 100,
	[SPECIES_AGGRON] 		= 100,
	[SPECIES_CASTFORM] 		= 120,
	[SPECIES_VOLBEAT]	 	= 120,
	[SPECIES_ILLUMISE] 		= 120,
	[SPECIES_LILEEP] 		= 100,
	[SPECIES_CRADILY] 		= 100,
	[SPECIES_ANORITH] 		= 100,
	[SPECIES_ARMALDO] 		= 100,
	[SPECIES_RALTS] 		= 100,
	[SPECIES_KIRLIA] 		= 100,
	[SPECIES_GARDEVOIR] 	= 100,
	[SPECIES_BAGON] 		= 100,
	[SPECIES_SHELGON] 		= 100,
	[SPECIES_SALAMENCE] 	= 100,
	[SPECIES_BELDUM] 		= 100,
	[SPECIES_METANG] 		= 100,
	[SPECIES_METAGROSS] 	= 100,
	[SPECIES_REGIROCK]	 	= 100,
	[SPECIES_REGICE] 		= 100,
	[SPECIES_REGISTEEL] 	= 100,
	[SPECIES_KYOGRE] 		= 100,
	[SPECIES_GROUDON] 		= 100,
	[SPECIES_RAYQUAZA] 		= 100,
	[SPECIES_LATIAS] 		= 100,
	[SPECIES_LATIOS] 		= 100,
	[SPECIES_JIRACHI] 		= 100,
	[SPECIES_DEOXYS] 		= 100,
	[SPECIES_CHIMECHO] 		= 110,
};