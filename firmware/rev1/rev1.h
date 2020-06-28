#pragma once

#include "unk.h"

#include "quantum.h"

#define LAYOUT_default( \
	K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,      K70,   K71,   K72,   K73,   K74,   K75,   K76,   K77, \
	K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,      K80,   K81,   K82,   K83,   K84,   K85,   K86,   K87, \
	K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,      K90,   K91,   K92,   K93,   K94,   K95,   K96,   K97, \
	K30,   K31,   K32,   K33,   K34,   K35,   K36,   K37,      K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107, \
	K40,   K41,   K42,   K43,   K44,   K45,   K46,   K47,      K110,  K111,  K112,  K113,  K114,  K115,  K116,  K117 \
	) \
	{ \
		{ K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07}, \
		{ K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17}, \
		{ K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27}, \
		{ K30,   K31,   K32,   K33,   K34,   K35,   K36,   K37}, \
		{ K40,   K41,   K42,   K43,   K44,   K45,   K46,   K47}, \
\
		{ K70  , K71,   K72,   K73,   K74,   K75,   K76,   K77}, \
		{ K80,   K81,   K82,   K83,   K84,   K85,   K86,   K87}, \
		{ K90,   K91,   K92,   K93,   K94,   K95,   K96,   K97}, \
		{ K100,  K101,  K102,  K103,  K104,  K105,  K106, K107}, \
		{ K110,  K111,  K112,  K113,  K114,  K115,  K116,  K117} \
	}
