/*
 * This code was written by Mychaela Falconia <falcon@freecalypso.org>
 * who refuses to claim copyright on it and has released it as public domain
 * instead. NO rights reserved, all rights relinquished.
 *
 * Tweaked (coding style changes) by Vadim Yanitskiy <axilirator@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

#include <stdint.h>
#include <rf/txcal.h>

/* APC offset (comes from the official firmware) for TI-classic targets */
uint8_t apc_offset = 48;

/*
 * The following Tx levels and ramps tables are the ones compiled into
 * the official Openmoko and FreeCalypso firmwares for GTA0x and FCDEV3B
 * devices; these are the tables which the firmware uses in the absence
 * of per-unit calibration files in FFS.  Any /gsm/rf/tx/levels.* files
 * found in FFS directly overwrite the compiled-in levels tables, and
 * any /gsm/rf/tx/ramps.* files likewise directly overwrite the
 * compiled-in ramps tables.
 */
struct txcal_tx_level rf_tx_levels_850[RF_TX_LEVELS_TABLE_SIZE] = {
	{ 507,  0,  0 }, /* 0 */
	{ 507,  0,  0 }, /* 1 */
	{ 507,  0,  0 }, /* 2 */
	{ 507,  0,  0 }, /* 3 */
	{ 507,  0,  0 }, /* 4 */
	{ 507,  0,  0 }, /* 5 */
	{ 417,  1,  0 }, /* 6 */
	{ 350,  2,  0 }, /* 7 */
	{ 282,  3,  0 }, /* 8 */
	{ 226,  4,  0 }, /* 9 */
	{ 183,  5,  0 }, /* 10 */
	{ 148,  6,  0 }, /* 11 */
	{ 121,  7,  0 }, /* 12 */
	{  98,  8,  0 }, /* 13 */
	{  80,  9,  0 }, /* 14 */
	{  66, 10,  0 }, /* 15 */
	{  54, 11,  0 }, /* 16 */
	{  44, 12,  0 }, /* 17 */
	{  36, 13,  0 }, /* 18 */
	{  29, 14,  0 }, /* 19 */
	{  29, 14,  0 }, /* 20 */
	{  29, 14,  0 }, /* 21 */
	{  29, 14,  0 }, /* 22 */
	{  29, 14,  0 }, /* 23 */
	{  29, 14,  0 }, /* 24 */
	{  29, 14,  0 }, /* 25 */
	{  29, 14,  0 }, /* 26 */
	{  29, 14,  0 }, /* 27 */
	{  29, 14,  0 }, /* 28 */
	{  29, 14,  0 }, /* 29 */
	{  29, 14,  0 }, /* 30 */
	{  29, 14,  0 }, /* 31 */
};

struct txcal_tx_level rf_tx_levels_900[RF_TX_LEVELS_TABLE_SIZE] = {
	{ 465,  0,  0 }, /* 0 */
	{ 465,  0,  0 }, /* 1 */
	{ 465,  0,  0 }, /* 2 */
	{ 465,  0,  0 }, /* 3 */
	{ 465,  0,  0 }, /* 4 */
	{ 465,  0,  0 }, /* 5 */
	{ 387,  1,  0 }, /* 6 */
	{ 324,  2,  0 }, /* 7 */
	{ 260,  3,  0 }, /* 8 */
	{ 210,  4,  0 }, /* 9 */
	{ 170,  5,  0 }, /* 10 */
	{ 138,  6,  0 }, /* 11 */
	{ 113,  7,  0 }, /* 12 */
	{  92,  8,  0 }, /* 13 */
	{  76,  9,  0 }, /* 14 */
	{  62, 10,  0 }, /* 15 */
	{  51, 11,  0 }, /* 16 */
	{  42, 12,  0 }, /* 17 */
	{  34, 13,  0 }, /* 18 */
	{  27, 14,  0 }, /* 19 */
	{  27, 14,  0 }, /* 20 */
	{  27, 14,  0 }, /* 21 */
	{  27, 14,  0 }, /* 22 */
	{  27, 14,  0 }, /* 23 */
	{  27, 14,  0 }, /* 24 */
	{  27, 14,  0 }, /* 25 */
	{  27, 14,  0 }, /* 26 */
	{  27, 14,  0 }, /* 27 */
	{  27, 14,  0 }, /* 28 */
	{  27, 14,  0 }, /* 29 */
	{  27, 14,  0 }, /* 30 */
	{  27, 14,  0 }, /* 31 */
};

struct txcal_tx_level rf_tx_levels_1800[RF_TX_LEVELS_TABLE_SIZE] = {
	{ 436,  0,  0 }, /* 0 */
	{ 363,  1,  0 }, /* 1 */
	{ 310,  2,  0 }, /* 2 */
	{ 253,  3,  0 }, /* 3 */
	{ 205,  4,  0 }, /* 4 */
	{ 168,  5,  0 }, /* 5 */
	{ 138,  6,  0 }, /* 6 */
	{ 113,  7,  0 }, /* 7 */
	{  93,  8,  0 }, /* 8 */
	{  76,  9,  0 }, /* 9 */
	{  61, 10,  0 }, /* 10 */
	{  50, 11,  0 }, /* 11 */
	{  40, 12,  0 }, /* 12 */
	{  32, 13,  0 }, /* 13 */
	{  26, 14,  0 }, /* 14 */
	{  20, 15,  0 }, /* 15 */
	{  20, 15,  0 }, /* 16 */
	{  20, 15,  0 }, /* 17 */
	{  20, 15,  0 }, /* 18 */
	{  20, 15,  0 }, /* 19 */
	{  20, 15,  0 }, /* 20 */
	{  20, 15,  0 }, /* 21 */
	{  20, 15,  0 }, /* 22 */
	{  20, 15,  0 }, /* 23 */
	{  20, 15,  0 }, /* 24 */
	{  20, 15,  0 }, /* 25 */
	{  20, 15,  0 }, /* 26 */
	{  20, 15,  0 }, /* 27 */
	{  20, 15,  0 }, /* 28 */
	{  20,  0,  0 }, /* 29 */
	{  20,  0,  0 }, /* 30 */
	{  20,  0,  0 }, /* 31 */
};

struct txcal_tx_level rf_tx_levels_1900[RF_TX_LEVELS_TABLE_SIZE] = {
	{ 429,  0,  0 }, /* 0 */
	{ 353,  1,  0 }, /* 1 */
	{ 302,  2,  0 }, /* 2 */
	{ 246,  3,  0 }, /* 3 */
	{ 200,  4,  0 }, /* 4 */
	{ 164,  5,  0 }, /* 5 */
	{ 135,  6,  0 }, /* 6 */
	{ 111,  7,  0 }, /* 7 */
	{  91,  8,  0 }, /* 8 */
	{  75,  9,  0 }, /* 9 */
	{  60, 10,  0 }, /* 10 */
	{  49, 11,  0 }, /* 11 */
	{  40, 12,  0 }, /* 12 */
	{  33, 13,  0 }, /* 13 */
	{  26, 14,  0 }, /* 14 */
	{  26, 15,  0 }, /* 15 */
	{  26, 15,  0 }, /* 16 */
	{  26, 15,  0 }, /* 17 */
	{  26, 15,  0 }, /* 18 */
	{  26, 15,  0 }, /* 19 */
	{  26, 15,  0 }, /* 20 */
	{  26, 15,  0 }, /* 21 */
	{  26, 15,  0 }, /* 22 */
	{  26, 15,  0 }, /* 23 */
	{  26, 15,  0 }, /* 24 */
	{  26, 15,  0 }, /* 25 */
	{  26, 15,  0 }, /* 26 */
	{  26, 15,  0 }, /* 27 */
	{  26, 15,  0 }, /* 28 */
	{  26,  0,  0 }, /* 29 */
	{  26,  0,  0 }, /* 30 */
	{  26,  0,  0 }, /* 31 */
};

struct txcal_ramp_def rf_tx_ramps_850[RF_TX_RAMP_SIZE] = {
      { /* profile 0 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  0,  0,  9, 18, 25, 31, 30, 15,  0,  0},
	/* ramp-down */
	{  0, 11, 31, 31, 31, 24,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 1 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  1,  1,  7, 16, 28, 31, 31, 13,  0,  0},
	/* ramp-down */
	{  0,  8, 31, 31, 31, 27,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 2 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  1,  1,  8, 16, 29, 31, 31, 11,  0,  0},
	/* ramp-down */
	{  0,  8, 28, 31, 31, 30,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 3 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  2,  0,  6, 18, 28, 31, 31, 12,  0,  0},
	/* ramp-down */
	{  0,  9, 24, 31, 31, 31,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 4 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  3,  0,  5, 19, 31, 31, 31,  8,  0,  0},
	/* ramp-down */
	{  0,  7, 31, 31, 31, 28,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 5 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  2,  0,  7, 18, 31, 31, 31,  8,  0,  0},
	/* ramp-down */
	{  0,  7, 31, 31, 31, 28,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 6 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  3,  0,  5, 20, 31, 31, 31,  7,  0,  0},
	/* ramp-down */
	{  0, 10, 21, 31, 31, 31,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 7 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  4,  0,  9, 23, 22, 31, 31,  8,  0,  0},
	/* ramp-down */
	{  0,  9, 24, 30, 31, 30,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 8 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  5,  0,  8, 21, 24, 31, 31,  8,  0,  0},
	/* ramp-down */
	{  0,  8, 23, 31, 31, 31,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 9 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  5,  0,  3,  1, 27, 22, 31, 31,  8,  0,  0},
	/* ramp-down */
	{  0,  8, 27, 25, 26, 31, 11,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 10 */
	/* ramp-up */
	{  0,  0,  0,  0,  5,  0,  0,  2,  7, 22, 23, 31, 31,  7,  0,  0},
	/* ramp-down */
	{  0,  7, 25, 30, 31, 31,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 11 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  5,  0,  4,  8, 21, 21, 31, 31,  7,  0,  0},
	/* ramp-down */
	{  0,  8, 21, 31, 31, 31,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 12 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  7,  0,  0, 12, 22, 25, 31, 27,  4,  0,  0},
	/* ramp-down */
	{  0,  9, 12, 21, 31, 31, 24,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 13 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  7,  0,  8, 15, 31, 31, 31,  5,  0,  0},
	/* ramp-down */
	{  0,  6, 14, 23, 31, 31, 23,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 14 */
	/* ramp-up */
	{  0,  0,  0,  0,  0, 20,  0,  0,  8, 15, 14, 31, 31,  9,  0,  0},
	/* ramp-down */
	{  0,  7, 31, 31, 31, 28,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 15 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
	/* ramp-down */
	{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
};

struct txcal_ramp_def rf_tx_ramps_900[RF_TX_RAMP_SIZE] = {
      { /* profile 0 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  0,  0,  9, 18, 25, 31, 30, 15,  0,  0},
	/* ramp-down */
	{  0, 11, 31, 31, 31, 24,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 1 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  1,  1,  7, 16, 28, 31, 31, 13,  0,  0},
	/* ramp-down */
	{  0,  8, 31, 31, 31, 27,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 2 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  1,  1,  8, 16, 29, 31, 31, 11,  0,  0},
	/* ramp-down */
	{  0,  8, 28, 31, 31, 30,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 3 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  2,  0,  6, 18, 28, 31, 31, 12,  0,  0},
	/* ramp-down */
	{  0,  9, 24, 31, 31, 31,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 4 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  3,  0,  5, 19, 31, 31, 31,  8,  0,  0},
	/* ramp-down */
	{  0,  7, 31, 31, 31, 28,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 5 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  2,  0,  7, 18, 31, 31, 31,  8,  0,  0},
	/* ramp-down */
	{  0,  7, 31, 31, 31, 28,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 6 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  3,  0,  5, 20, 31, 31, 31,  7,  0,  0},
	/* ramp-down */
	{  0, 10, 21, 31, 31, 31,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 7 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  4,  0,  9, 23, 22, 31, 31,  8,  0,  0},
	/* ramp-down */
	{  0,  9, 24, 30, 31, 30,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 8 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  5,  0,  8, 21, 24, 31, 31,  8,  0,  0},
	/* ramp-down */
	{  0,  8, 23, 31, 31, 31,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 9 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  5,  0,  3,  1, 27, 22, 31, 31,  8,  0,  0},
	/* ramp-down */
	{  0,  8, 27, 25, 26, 31, 11,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 10 */
	/* ramp-up */
	{  0,  0,  0,  0,  5,  0,  0,  2,  7, 22, 23, 31, 31,  7,  0,  0},
	/* ramp-down */
	{  0,  7, 25, 30, 31, 31,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 11 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  5,  0,  4,  8, 21, 21, 31, 31,  7,  0,  0},
	/* ramp-down */
	{  0,  8, 21, 31, 31, 31,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 12 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  7,  0,  0, 12, 22, 25, 31, 27,  4,  0,  0},
	/* ramp-down */
	{  0,  9, 12, 21, 31, 31, 24,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 13 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  7,  0,  8, 15, 31, 31, 31,  5,  0,  0},
	/* ramp-down */
	{  0,  6, 14, 23, 31, 31, 23,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 14 */
	/* ramp-up */
	{  0,  0,  0,  0,  0, 20,  0,  0,  8, 15, 14, 31, 31,  9,  0,  0},
	/* ramp-down */
	{  0,  7, 31, 31, 31, 28,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 15 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
	/* ramp-down */
	{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
      },
};

struct txcal_ramp_def rf_tx_ramps_1800[RF_TX_RAMP_SIZE] = {
      { /* profile 0 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  2,  3,  5, 16, 31, 31, 31,  9,  0,  0},
	/* ramp-down */
	{  0, 11, 31, 31, 31, 10, 11,  3,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 1 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  2,  3,  4, 17, 30, 31, 31, 10,  0,  0},
	/* ramp-down */
	{  0, 10, 31, 31, 31, 13,  9,  3,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 2 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  4,  2,  2, 18, 31, 31, 31,  9,  0,  0},
	/* ramp-down */
	{  0, 10, 26, 31, 31, 16, 10,  4,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 3 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  3,  4,  4, 15, 31, 31, 31,  9,  0,  0},
	/* ramp-down */
	{  0,  9, 31, 31, 31, 13,  6,  7,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 4 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  4,  3,  7, 11, 31, 31, 31, 10,  0,  0},
	/* ramp-down */
	{  0,  8, 31, 31, 31, 11,  9,  7,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 5 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  4,  3,  2,  7, 14, 25, 31, 31, 11,  0,  0},
	/* ramp-down */
	{  0, 14, 31, 31, 31,  9,  8,  4,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 6 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  7,  1,  3, 10, 12, 25, 31, 31,  8,  0,  0},
	/* ramp-down */
	{  0,  7, 30, 31, 31, 14,  4,  6,  5,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 7 */
	/* ramp-up */
	{  0,  0,  0,  0,  3,  5,  0,  5,  8, 12, 26, 31, 31,  7,  0,  0},
	/* ramp-down */
	{  0,  7, 31, 31, 31, 15,  0,  8,  5,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 8 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  9,  0,  3, 10, 16, 21, 31, 31,  7,  0,  0},
	/* ramp-down */
	{  0, 11, 28, 31, 27, 10, 11,  0, 10,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 9 */
	/* ramp-up */
	{  0,  0,  0,  0,  0, 10,  0,  6,  9, 15, 22, 29, 31,  6,  0,  0},
	/* ramp-down */
	{  0,  9, 22, 31, 31, 12,  5,  0, 18,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 10 */
	/* ramp-up */
	{  0,  0,  0,  0, 14,  0,  0,  8,  6, 20, 21, 29, 24,  6,  0,  0},
	/* ramp-down */
	{  0,  8, 28, 29, 26, 14,  6,  0, 17,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 11 */
	/* ramp-up */
	{  0,  0,  0,  0, 16,  0,  3,  5,  8, 16, 31, 28, 18,  3,  0,  0},
	/* ramp-down */
	{  0,  6, 18, 26, 31, 16,  9,  7,  0, 15,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 12 */
	/* ramp-up */
	{  0,  0,  0,  0, 19,  0,  3,  6,  8, 21, 24, 31, 14,  2,  0,  0},
	/* ramp-down */
	{  0,  0, 12, 31, 31, 27,  4,  0, 23,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 13 */
	/* ramp-up */
	{  0,  0,  0,  0,  0, 14, 14,  0,  0, 24, 31, 31, 14,  0,  0,  0},
	/* ramp-down */
	{  0,  0, 11, 31, 31, 22, 11,  3, 19,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 14 */
	/* ramp-up */
	{  0,  0,  0,  0,  0, 30,  1,  4,  8, 18, 31, 31,  5,  0,  0,  0},
	/* ramp-down */
	{  0,  0,  8, 31, 31, 22,  5,  0, 31,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 15 */
	/* ramp-up */
	{  0,  0,  0,  0,  0, 31, 13,  0,  0, 14, 31, 31,  8,  0,  0,  0},
	/* ramp-down */
	{  0,  0,  4, 31, 31, 25,  5,  0,  5, 26,  1,  0,  0,  0,  0,  0},
      },
};

struct txcal_ramp_def rf_tx_ramps_1900[RF_TX_RAMP_SIZE] = {
      { /* profile 0 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  7,  0,  0, 16, 31, 31, 31, 12,  0,  0},
	/* ramp-down */
	{  0, 13, 31, 31, 31, 18,  0,  4,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 1 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  2,  3,  4, 17, 30, 31, 31, 10,  0,  0},
	/* ramp-down */
	{  0, 10, 31, 31, 31, 13,  9,  3,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 2 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  4,  2,  2, 18, 31, 31, 31,  9,  0,  0},
	/* ramp-down */
	{  0, 10, 26, 31, 31, 16, 10,  4,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 3 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  3,  4,  4, 15, 31, 31, 31,  9,  0,  0},
	/* ramp-down */
	{  0,  9, 31, 31, 31, 13,  6,  7,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 4 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  0,  4,  3,  0, 18, 31, 31, 31, 10,  0,  0},
	/* ramp-down */
	{  0,  8, 31, 31, 31, 11,  9,  7,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 5 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  4,  3,  2,  7, 14, 25, 31, 31, 11,  0,  0},
	/* ramp-down */
	{  0, 14, 31, 31, 31,  9,  8,  4,  0,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 6 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  7,  1,  3, 10, 12, 25, 31, 31,  8,  0,  0},
	/* ramp-down */
	{  0,  7, 30, 31, 31, 14,  4,  6,  5,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 7 */
	/* ramp-up */
	{  0,  0,  0,  0,  3,  5,  0,  5,  8, 12, 26, 31, 31,  7,  0,  0},
	/* ramp-down */
	{  0,  7, 31, 31, 31, 15,  0,  8,  5,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 8 */
	/* ramp-up */
	{  0,  0,  0,  0,  0,  9,  0,  3, 10, 16, 21, 31, 31,  7,  0,  0},
	/* ramp-down */
	{  0, 11, 28, 31, 27, 10, 11,  0, 10,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 9 */
	/* ramp-up */
	{  0,  0,  0,  0,  0, 10,  0,  6,  9, 15, 22, 29, 31,  6,  0,  0},
	/* ramp-down */
	{  0,  9, 22, 31, 31, 12,  5,  0, 18,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 10 */
	/* ramp-up */
	{  0,  0,  0,  0, 14,  0,  0,  4, 10, 20, 21, 29, 24,  6,  0,  0},
	/* ramp-down */
	{  0,  8, 28, 29, 26, 14,  6,  0, 17,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 11 */
	/* ramp-up */
	{  0,  0,  0,  0, 16,  0,  3,  5,  8, 16, 31, 28, 18,  3,  0,  0},
	/* ramp-down */
	{  0,  6, 18, 26, 31, 16,  9,  7,  0, 15,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 12 */
	/* ramp-up */
	{  0,  0,  0,  0, 19,  0,  3,  6,  8, 21, 24, 31, 14,  2,  0,  0},
	/* ramp-down */
	{  0,  0, 12, 31, 31, 27,  4,  0, 23,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 13 */
	/* ramp-up */
	{  0,  0,  0,  0,  0, 14, 14,  0,  0, 24, 31, 31, 14,  0,  0,  0},
	/* ramp-down */
	{  0,  0, 11, 31, 31, 22, 11,  3, 19,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 14 */
	/* ramp-up */
	{  0,  0,  0,  0,  0, 30,  1,  4,  8, 18, 31, 31,  5,  0,  0,  0},
	/* ramp-down */
	{  0,  0,  8, 31, 31, 22,  5,  0, 31,  0,  0,  0,  0,  0,  0,  0},
      },
      { /* profile 15 */
	/* ramp-up */
	{  0,  0,  0,  0,  0, 30,  1,  4,  8, 18, 31, 31,  5,  0,  0,  0},
	/* ramp-down */
	{  0,  0,  8, 31, 31, 22,  5,  0, 31,  0,  0,  0,  0,  0,  0,  0},
      },
};