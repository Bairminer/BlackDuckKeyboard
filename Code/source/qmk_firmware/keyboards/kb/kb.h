#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, \
	      K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, \
	      K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, \
	      K301, K302,                   K306,             K309, K310  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011 }, \
	{ KC_NO, K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111 }, \
	{ KC_NO, K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211 }, \
	{ KC_NO, K301,  K302,  KC_NO, KC_NO, KC_NO, K306,  KC_NO, KC_NO, K309,  K310,  KC_NO }  \
}

#endif