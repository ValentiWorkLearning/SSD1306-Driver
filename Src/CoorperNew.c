/*
 * CoorperNew.c
 *
 *  Created on: 15 ���. 2018 �.
 *      Author: Valenti
 */

//
//  Font data for Courier New 8pt
//
#include "FontInfo.h"
// Character bitmaps for Courier New 8pt
const uint8_t courierNew_8ptBitmaps[] =
{
	// @0 '!' (1 pixels wide)
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //
	0x80, // #
	0x00, //
	0x00, //
	0x00, //

	// @10 '"' (3 pixels wide)
	0xA0, // # #
	0xA0, // # #
	0xA0, // # #
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //

	// @20 '#' (5 pixels wide)
	0x28, //   # #
	0x50, //  # #
	0xF8, // #####
	0x50, //  # #
	0x50, //  # #
	0xF8, // #####
	0x50, //  # #
	0xA0, // # #
	0x00, //
	0x00, //

	// @30 '$' (4 pixels wide)
	0x20, //   #
	0x70, //  ###
	0x80, // #
	0x60, //  ##
	0x10, //    #
	0xE0, // ###
	0x40, //  #
	0x40, //  #
	0x00, //
	0x00, //

	// @40 '%' (4 pixels wide)
	0x40, //  #
	0xA0, // # #
	0x40, //  #
	0xF0, // ####
	0x20, //   #
	0x50, //  # #
	0x20, //   #
	0x00, //
	0x00, //
	0x00, //

	// @50 '&' (5 pixels wide)
	0x00, //
	0x30, //   ##
	0x40, //  #
	0x40, //  #
	0xB0, // # ##
	0x90, // #  #
	0x78, //  ####
	0x00, //
	0x00, //
	0x00, //

	// @60 ''' (1 pixels wide)
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //

	// @70 '(' (2 pixels wide)
	0x40, //  #
	0x40, //  #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x40, //  #
	0x40, //  #
	0x00, //
	0x00, //

	// @80 ')' (2 pixels wide)
	0x80, // #
	0x80, // #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x80, // #
	0x80, // #
	0x00, //
	0x00, //

	// @90 '*' (5 pixels wide)
	0x20, //   #
	0xF8, // #####
	0x20, //   #
	0x50, //  # #
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //

	// @100 '+' (5 pixels wide)
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0xF8, // #####
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x00, //
	0x00, //
	0x00, //

	// @110 ',' (3 pixels wide)
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x60, //  ##
	0xC0, // ##
	0x80, // #
	0x00, //

	// @120 '-' (5 pixels wide)
	0x00, //
	0x00, //
	0x00, //
	0xF8, // #####
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //

	// @130 '.' (2 pixels wide)
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0xC0, // ##
	0x00, //
	0x00, //
	0x00, //

	// @140 '/' (5 pixels wide)
	0x08, //     #
	0x10, //    #
	0x10, //    #
	0x20, //   #
	0x20, //   #
	0x40, //  #
	0x40, //  #
	0x80, // #
	0x00, //
	0x00, //

	// @150 '0' (5 pixels wide)
	0x70, //  ###
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x70, //  ###
	0x00, //
	0x00, //
	0x00, //

	// @160 '1' (5 pixels wide)
	0x60, //  ##
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0xF8, // #####
	0x00, //
	0x00, //
	0x00, //

	// @170 '2' (5 pixels wide)
	0x70, //  ###
	0x88, // #   #
	0x10, //    #
	0x20, //   #
	0x40, //  #
	0x80, // #
	0xF8, // #####
	0x00, //
	0x00, //
	0x00, //

	// @180 '3' (5 pixels wide)
	0x70, //  ###
	0x88, // #   #
	0x08, //     #
	0x30, //   ##
	0x08, //     #
	0x88, // #   #
	0x70, //  ###
	0x00, //
	0x00, //
	0x00, //

	// @190 '4' (5 pixels wide)
	0x10, //    #
	0x30, //   ##
	0x50, //  # #
	0x90, // #  #
	0xF8, // #####
	0x10, //    #
	0x38, //   ###
	0x00, //
	0x00, //
	0x00, //

	// @200 '5' (5 pixels wide)
	0x78, //  ####
	0x40, //  #
	0x40, //  #
	0x70, //  ###
	0x08, //     #
	0x88, // #   #
	0x70, //  ###
	0x00, //
	0x00, //
	0x00, //

	// @210 '6' (5 pixels wide)
	0x38, //   ###
	0x40, //  #
	0x80, // #
	0xF0, // ####
	0x88, // #   #
	0x88, // #   #
	0x70, //  ###
	0x00, //
	0x00, //
	0x00, //

	// @220 '7' (5 pixels wide)
	0xF8, // #####
	0x88, // #   #
	0x08, //     #
	0x10, //    #
	0x10, //    #
	0x20, //   #
	0x20, //   #
	0x00, //
	0x00, //
	0x00, //

	// @230 '8' (5 pixels wide)
	0x70, //  ###
	0x88, // #   #
	0x88, // #   #
	0x70, //  ###
	0x88, // #   #
	0x88, // #   #
	0x70, //  ###
	0x00, //
	0x00, //
	0x00, //

	// @240 '9' (5 pixels wide)
	0x70, //  ###
	0x88, // #   #
	0x88, // #   #
	0x78, //  ####
	0x08, //     #
	0x10, //    #
	0xE0, // ###
	0x00, //
	0x00, //
	0x00, //

	// @250 ':' (2 pixels wide)
	0x00, //
	0x00, //
	0xC0, // ##
	0x00, //
	0x00, //
	0x00, //
	0xC0, // ##
	0x00, //
	0x00, //
	0x00, //

	// @260 ';' (3 pixels wide)
	0x00, //
	0x00, //
	0x60, //  ##
	0x00, //
	0x00, //
	0x60, //  ##
	0xC0, // ##
	0x80, // #
	0x00, //
	0x00, //

	// @270 '<' (5 pixels wide)
	0x00, //
	0x08, //     #
	0x30, //   ##
	0xC0, // ##
	0x30, //   ##
	0x08, //     #
	0x00, //
	0x00, //
	0x00, //
	0x00, //

	// @280 '=' (5 pixels wide)
	0x00, //
	0x00, //
	0xF8, // #####
	0x00, //
	0xF8, // #####
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //

	// @290 '>' (5 pixels wide)
	0x00, //
	0x80, // #
	0x60, //  ##
	0x18, //    ##
	0x60, //  ##
	0x80, // #
	0x00, //
	0x00, //
	0x00, //
	0x00, //

	// @300 '?' (4 pixels wide)
	0x60, //  ##
	0x90, // #  #
	0x10, //    #
	0x20, //   #
	0x20, //   #
	0x00, //
	0x60, //  ##
	0x00, //
	0x00, //
	0x00, //

	// @310 '@' (5 pixels wide)
	0x70, //  ###
	0x88, // #   #
	0x98, // #  ##
	0xA8, // # # #
	0xA8, // # # #
	0x98, // #  ##
	0x80, // #
	0x78, //  ####
	0x00, //
	0x00, //

	// @320 'A' (7 pixels wide)
	0x30, //   ##
	0x10, //    #
	0x28, //   # #
	0x28, //   # #
	0x38, //   ###
	0x44, //  #   #
	0xEE, // ### ###
	0x00, //
	0x00, //
	0x00, //

	// @330 'B' (6 pixels wide)
	0xF8, // #####
	0x44, //  #   #
	0x44, //  #   #
	0x78, //  ####
	0x44, //  #   #
	0x44, //  #   #
	0xF8, // #####
	0x00, //
	0x00, //
	0x00, //

	// @340 'C' (5 pixels wide)
	0x78, //  ####
	0x88, // #   #
	0x80, // #
	0x80, // #
	0x80, // #
	0x88, // #   #
	0x70, //  ###
	0x00, //
	0x00, //
	0x00, //

	// @350 'D' (6 pixels wide)
	0xF0, // ####
	0x48, //  #  #
	0x44, //  #   #
	0x44, //  #   #
	0x44, //  #   #
	0x48, //  #  #
	0xF0, // ####
	0x00, //
	0x00, //
	0x00, //

	// @360 'E' (5 pixels wide)
	0xF8, // #####
	0x48, //  #  #
	0x50, //  # #
	0x70, //  ###
	0x50, //  # #
	0x48, //  #  #
	0xF8, // #####
	0x00, //
	0x00, //
	0x00, //

	// @370 'F' (5 pixels wide)
	0xF8, // #####
	0x48, //  #  #
	0x50, //  # #
	0x70, //  ###
	0x50, //  # #
	0x40, //  #
	0xE0, // ###
	0x00, //
	0x00, //
	0x00, //

	// @380 'G' (6 pixels wide)
	0x78, //  ####
	0x88, // #   #
	0x80, // #
	0x80, // #
	0x9C, // #  ###
	0x88, // #   #
	0x70, //  ###
	0x00, //
	0x00, //
	0x00, //

	// @390 'H' (7 pixels wide)
	0xEE, // ### ###
	0x44, //  #   #
	0x44, //  #   #
	0x7C, //  #####
	0x44, //  #   #
	0x44, //  #   #
	0xEE, // ### ###
	0x00, //
	0x00, //
	0x00, //

	// @400 'I' (5 pixels wide)
	0xF8, // #####
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0xF8, // #####
	0x00, //
	0x00, //
	0x00, //

	// @410 'J' (5 pixels wide)
	0x78, //  ####
	0x10, //    #
	0x10, //    #
	0x10, //    #
	0x90, // #  #
	0x90, // #  #
	0x60, //  ##
	0x00, //
	0x00, //
	0x00, //

	// @420 'K' (7 pixels wide)
	0xEE, // ### ###
	0x44, //  #   #
	0x48, //  #  #
	0x70, //  ###
	0x48, //  #  #
	0x44, //  #   #
	0xE6, // ###  ##
	0x00, //
	0x00, //
	0x00, //

	// @430 'L' (5 pixels wide)
	0xE0, // ###
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x48, //  #  #
	0x48, //  #  #
	0xF8, // #####
	0x00, //
	0x00, //
	0x00, //

	// @440 'M' (7 pixels wide)
	0xEE, // ### ###
	0x6C, //  ## ##
	0x6C, //  ## ##
	0x54, //  # # #
	0x44, //  #   #
	0x44, //  #   #
	0xEE, // ### ###
	0x00, //
	0x00, //
	0x00, //

	// @450 'N' (7 pixels wide)
	0xEE, // ### ###
	0x64, //  ##  #
	0x64, //  ##  #
	0x54, //  # # #
	0x54, //  # # #
	0x4C, //  #  ##
	0xEC, // ### ##
	0x00, //
	0x00, //
	0x00, //

	// @460 'O' (5 pixels wide)
	0x70, //  ###
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x70, //  ###
	0x00, //
	0x00, //
	0x00, //

	// @470 'P' (5 pixels wide)
	0xF0, // ####
	0x48, //  #  #
	0x48, //  #  #
	0x48, //  #  #
	0x70, //  ###
	0x40, //  #
	0xE0, // ###
	0x00, //
	0x00, //
	0x00, //

	// @480 'Q' (5 pixels wide)
	0x70, //  ###
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x70, //  ###
	0x38, //   ###
	0x00, //
	0x00, //

	// @490 'R' (6 pixels wide)
	0xF0, // ####
	0x48, //  #  #
	0x48, //  #  #
	0x48, //  #  #
	0x70, //  ###
	0x48, //  #  #
	0xE4, // ###  #
	0x00, //
	0x00, //
	0x00, //

	// @500 'S' (5 pixels wide)
	0x68, //  ## #
	0x98, // #  ##
	0x80, // #
	0x70, //  ###
	0x08, //     #
	0x88, // #   #
	0xF0, // ####
	0x00, //
	0x00, //
	0x00, //

	// @510 'T' (5 pixels wide)
	0xF8, // #####
	0xA8, // # # #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x70, //  ###
	0x00, //
	0x00, //
	0x00, //

	// @520 'U' (7 pixels wide)
	0xEE, // ### ###
	0x44, //  #   #
	0x44, //  #   #
	0x44, //  #   #
	0x44, //  #   #
	0x44, //  #   #
	0x38, //   ###
	0x00, //
	0x00, //
	0x00, //

	// @530 'V' (7 pixels wide)
	0xEE, // ### ###
	0x44, //  #   #
	0x44, //  #   #
	0x48, //  #  #
	0x28, //   # #
	0x28, //   # #
	0x30, //   ##
	0x00, //
	0x00, //
	0x00, //

	// @540 'W' (7 pixels wide)
	0xEE, // ### ###
	0x44, //  #   #
	0x54, //  # # #
	0x54, //  # # #
	0x54, //  # # #
	0x54, //  # # #
	0x28, //   # #
	0x00, //
	0x00, //
	0x00, //

	// @550 'X' (7 pixels wide)
	0xC6, // ##   ##
	0x44, //  #   #
	0x28, //   # #
	0x10, //    #
	0x28, //   # #
	0x44, //  #   #
	0xC6, // ##   ##
	0x00, //
	0x00, //
	0x00, //

	// @560 'Y' (7 pixels wide)
	0xEE, // ### ###
	0x44, //  #   #
	0x28, //   # #
	0x10, //    #
	0x10, //    #
	0x10, //    #
	0x38, //   ###
	0x00, //
	0x00, //
	0x00, //

	// @570 'Z' (5 pixels wide)
	0xF8, // #####
	0x88, // #   #
	0x10, //    #
	0x20, //   #
	0x40, //  #
	0x88, // #   #
	0xF8, // #####
	0x00, //
	0x00, //
	0x00, //

	// @580 '[' (2 pixels wide)
	0xC0, // ##
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0xC0, // ##
	0x00, //
	0x00, //

	// @590 '\' (4 pixels wide)
	0x80, // #
	0x40, //  #
	0x40, //  #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x10, //    #
	0x10, //    #
	0x00, //
	0x00, //

	// @600 ']' (2 pixels wide)
	0xC0, // ##
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0xC0, // ##
	0x00, //
	0x00, //

	// @610 '^' (5 pixels wide)
	0x20, //   #
	0x50, //  # #
	0x88, // #   #
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //

	// @620 '_' (7 pixels wide)
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0xFE, // #######

	// @630 '`' (2 pixels wide)
	0x80, // #
	0x40, //  #
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //

	// @640 'a' (6 pixels wide)
	0x00, //
	0x00, //
	0x70, //  ###
	0x88, // #   #
	0x78, //  ####
	0x88, // #   #
	0xFC, // ######
	0x00, //
	0x00, //
	0x00, //

	// @650 'b' (6 pixels wide)
	0xC0, // ##
	0x40, //  #
	0x58, //  # ##
	0x64, //  ##  #
	0x44, //  #   #
	0x44, //  #   #
	0xF8, // #####
	0x00, //
	0x00, //
	0x00, //

	// @660 'c' (5 pixels wide)
	0x00, //
	0x00, //
	0x78, //  ####
	0x88, // #   #
	0x80, // #
	0x80, // #
	0x78, //  ####
	0x00, //
	0x00, //
	0x00, //

	// @670 'd' (6 pixels wide)
	0x18, //    ##
	0x08, //     #
	0x68, //  ## #
	0x98, // #  ##
	0x88, // #   #
	0x88, // #   #
	0x7C, //  #####
	0x00, //
	0x00, //
	0x00, //

	// @680 'e' (5 pixels wide)
	0x00, //
	0x00, //
	0x70, //  ###
	0x88, // #   #
	0xF8, // #####
	0x80, // #
	0x78, //  ####
	0x00, //
	0x00, //
	0x00, //

	// @690 'f' (4 pixels wide)
	0x30, //   ##
	0x40, //  #
	0xF0, // ####
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0xF0, // ####
	0x00, //
	0x00, //
	0x00, //

	// @700 'g' (6 pixels wide)
	0x00, //
	0x00, //
	0x6C, //  ## ##
	0x98, // #  ##
	0x88, // #   #
	0x88, // #   #
	0x78, //  ####
	0x08, //     #
	0x70, //  ###
	0x00, //

	// @710 'h' (7 pixels wide)
	0xC0, // ##
	0x40, //  #
	0x58, //  # ##
	0x64, //  ##  #
	0x44, //  #   #
	0x44, //  #   #
	0xEE, // ### ###
	0x00, //
	0x00, //
	0x00, //

	// @720 'i' (5 pixels wide)
	0x20, //   #
	0x00, //
	0xE0, // ###
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0xF8, // #####
	0x00, //
	0x00, //
	0x00, //

	// @730 'j' (4 pixels wide)
	0x20, //   #
	0x00, //
	0xF0, // ####
	0x10, //    #
	0x10, //    #
	0x10, //    #
	0x10, //    #
	0x10, //    #
	0xE0, // ###
	0x00, //

	// @740 'k' (6 pixels wide)
	0xC0, // ##
	0x40, //  #
	0x5C, //  # ###
	0x48, //  #  #
	0x70, //  ###
	0x48, //  #  #
	0xDC, // ## ###
	0x00, //
	0x00, //
	0x00, //

	// @750 'l' (5 pixels wide)
	0x60, //  ##
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0xF8, // #####
	0x00, //
	0x00, //
	0x00, //

	// @760 'm' (7 pixels wide)
	0x00, //
	0x00, //
	0xE8, // ### #
	0x54, //  # # #
	0x54, //  # # #
	0x54, //  # # #
	0xFE, // #######
	0x00, //
	0x00, //
	0x00, //

	// @770 'n' (7 pixels wide)
	0x00, //
	0x00, //
	0xD8, // ## ##
	0x64, //  ##  #
	0x44, //  #   #
	0x44, //  #   #
	0xEE, // ### ###
	0x00, //
	0x00, //
	0x00, //

	// @780 'o' (5 pixels wide)
	0x00, //
	0x00, //
	0x70, //  ###
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x70, //  ###
	0x00, //
	0x00, //
	0x00, //

	// @790 'p' (6 pixels wide)
	0x00, //
	0x00, //
	0xD8, // ## ##
	0x64, //  ##  #
	0x44, //  #   #
	0x44, //  #   #
	0x78, //  ####
	0x40, //  #
	0xE0, // ###
	0x00, //

	// @800 'q' (6 pixels wide)
	0x00, //
	0x00, //
	0x6C, //  ## ##
	0x98, // #  ##
	0x88, // #   #
	0x88, // #   #
	0x78, //  ####
	0x08, //     #
	0x1C, //    ###
	0x00, //

	// @810 'r' (5 pixels wide)
	0x00, //
	0x00, //
	0xD8, // ## ##
	0x60, //  ##
	0x40, //  #
	0x40, //  #
	0xF0, // ####
	0x00, //
	0x00, //
	0x00, //

	// @820 's' (5 pixels wide)
	0x00, //
	0x00, //
	0x78, //  ####
	0x80, // #
	0x70, //  ###
	0x08, //     #
	0xF0, // ####
	0x00, //
	0x00, //
	0x00, //

	// @830 't' (6 pixels wide)
	0x00, //
	0x40, //  #
	0xF8, // #####
	0x40, //  #
	0x40, //  #
	0x44, //  #   #
	0x38, //   ###
	0x00, //
	0x00, //
	0x00, //

	// @840 'u' (7 pixels wide)
	0x00, //
	0x00, //
	0xCC, // ##  ##
	0x44, //  #   #
	0x44, //  #   #
	0x4C, //  #  ##
	0x36, //   ## ##
	0x00, //
	0x00, //
	0x00, //

	// @850 'v' (7 pixels wide)
	0x00, //
	0x00, //
	0xEE, // ### ###
	0x44, //  #   #
	0x48, //  #  #
	0x28, //   # #
	0x30, //   ##
	0x00, //
	0x00, //
	0x00, //

	// @860 'w' (7 pixels wide)
	0x00, //
	0x00, //
	0xEE, // ### ###
	0x44, //  #   #
	0x54, //  # # #
	0x54, //  # # #
	0x28, //   # #
	0x00, //
	0x00, //
	0x00, //

	// @870 'x' (5 pixels wide)
	0x00, //
	0x00, //
	0xD8, // ## ##
	0x50, //  # #
	0x20, //   #
	0x50, //  # #
	0xD8, // ## ##
	0x00, //
	0x00, //
	0x00, //

	// @880 'y' (7 pixels wide)
	0x00, //
	0x00, //
	0xEE, // ### ###
	0x44, //  #   #
	0x28, //   # #
	0x28, //   # #
	0x10, //    #
	0x10, //    #
	0x70, //  ###
	0x00, //

	// @890 'z' (5 pixels wide)
	0x00, //
	0x00, //
	0xF8, // #####
	0x90, // #  #
	0x20, //   #
	0x48, //  #  #
	0xF8, // #####
	0x00, //
	0x00, //
	0x00, //

	// @900 '{' (3 pixels wide)
	0x20, //   #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0xC0, // ##
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x20, //   #
	0x00, //

	// @910 '|' (1 pixels wide)
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //
	0x00, //

	// @920 '}' (3 pixels wide)
	0x80, // #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x60, //  ##
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x80, // #
	0x00, //

	// @930 '~' (5 pixels wide)
	0x00, //
	0x00, //
	0x00, //
	0x68, //  ## #
	0xB0, // # ##
	0x00, //
	0x00, //
	0x00, //
	0x00, //
	0x00, //
};

// Character descriptors for Courier New 8pt
// { [Char width in bits], [Offset into courierNew_8ptCharBitmaps in bytes] }
const FontCharInfo_t courierNew_8ptDescriptors[] =
{
	{1, 0}, 		// !
	{3, 10}, 		// "
	{5, 20}, 		// #
	{4, 30}, 		// $
	{4, 40}, 		// %
	{5, 50}, 		// &
	{1, 60}, 		// '
	{2, 70}, 		// (
	{2, 80}, 		// )
	{5, 90}, 		// *
	{5, 100}, 		// +
	{3, 110}, 		// ,
	{5, 120}, 		// -
	{2, 130}, 		// .
	{5, 140}, 		// /
	{5, 150}, 		// 0
	{5, 160}, 		// 1
	{5, 170}, 		// 2
	{5, 180}, 		// 3
	{5, 190}, 		// 4
	{5, 200}, 		// 5
	{5, 210}, 		// 6
	{5, 220}, 		// 7
	{5, 230}, 		// 8
	{5, 240}, 		// 9
	{2, 250}, 		// :
	{3, 260}, 		// ;
	{5, 270}, 		// <
	{5, 280}, 		// =
	{5, 290}, 		// >
	{4, 300}, 		// ?
	{5, 310}, 		// @
	{7, 320}, 		// A
	{6, 330}, 		// B
	{5, 340}, 		// C
	{6, 350}, 		// D
	{5, 360}, 		// E
	{5, 370}, 		// F
	{6, 380}, 		// G
	{7, 390}, 		// H
	{5, 400}, 		// I
	{5, 410}, 		// J
	{7, 420}, 		// K
	{5, 430}, 		// L
	{7, 440}, 		// M
	{7, 450}, 		// N
	{5, 460}, 		// O
	{5, 470}, 		// P
	{5, 480}, 		// Q
	{6, 490}, 		// R
	{5, 500}, 		// S
	{5, 510}, 		// T
	{7, 520}, 		// U
	{7, 530}, 		// V
	{7, 540}, 		// W
	{7, 550}, 		// X
	{7, 560}, 		// Y
	{5, 570}, 		// Z
	{2, 580}, 		// [
	{4, 590}, 		//
	{2, 600}, 		// ]
	{5, 610}, 		// ^
	{7, 620}, 		// _
	{2, 630}, 		// `
	{6, 640}, 		// a
	{6, 650}, 		// b
	{5, 660}, 		// c
	{6, 670}, 		// d
	{5, 680}, 		// e
	{4, 690}, 		// f
	{6, 700}, 		// g
	{7, 710}, 		// h
	{5, 720}, 		// i
	{4, 730}, 		// j
	{6, 740}, 		// k
	{5, 750}, 		// l
	{7, 760}, 		// m
	{7, 770}, 		// n
	{5, 780}, 		// o
	{6, 790}, 		// p
	{6, 800}, 		// q
	{5, 810}, 		// r
	{5, 820}, 		// s
	{6, 830}, 		// t
	{7, 840}, 		// u
	{7, 850}, 		// v
	{7, 860}, 		// w
	{5, 870}, 		// x
	{7, 880}, 		// y
	{5, 890}, 		// z
	{3, 900}, 		// {
	{1, 910}, 		// |
	{3, 920}, 		// }
	{5, 930}, 		// ~
};

// Font information for Courier New 8pt
const FontInfo_t courierNew_8ptFontInfo =
{
	10, //  Character height
	'!', //  Start character
	'~', //  End character
	2, //  Width, in pixels, of space character
	courierNew_8ptDescriptors, //  Character descriptor array
	courierNew_8ptBitmaps, //  Character bitmap array
};


