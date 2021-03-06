/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Bitmap for splashscreen
 *
 * You may use one of the following tools to generate the C++ bitmap array from
 * a black and white image:
 *
 *  - http://www.marlinfw.org/tools/u8glib/converter.html
 *  - http://www.digole.com/tools/PicturetoC_Hex_converter.php
 */
//custom screen can be up to 112 wide and 64 high

#include <avr/pgmspace.h>

#define CUSTOM_BOOTSCREEN_TIMEOUT   2500
#define CUSTOM_BOOTSCREEN_BMPWIDTH  128
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64

// Width: 112, Height: 64
const unsigned char custom_start_bmp[1024] PROGMEM = {
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFC,0x07,0xFF,0x7F,0xFF,0x9F,0x7F,0xFF,0xFF,0xE0,0x73,0xFF,0x7F,0xFF,0xFF,
0xFF,0xFC,0xE3,0xFF,0x1F,0xFF,0x8F,0x7F,0xFF,0xFF,0xC7,0x23,0xFF,0x3F,0xFF,0xFF,
0xFF,0xFC,0xF2,0x03,0x01,0x80,0x87,0x20,0x30,0x1F,0xCF,0xE2,0x73,0x01,0xFF,0xFF,
0xFF,0xFC,0x86,0x71,0x39,0x9C,0x8E,0x27,0xF0,0x3F,0xCF,0xE2,0x73,0x39,0xFF,0xFF,
0xFF,0xFC,0xC6,0x31,0x39,0x9C,0x8E,0x27,0x3F,0x1F,0xC7,0x22,0x73,0x39,0xFF,0xFF,
0xFF,0xFD,0xE3,0x03,0x01,0x80,0xC6,0x60,0x30,0x1F,0xE0,0x27,0x03,0x01,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFE,0x3F,0x8F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0x7F,0xCF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0x7F,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0xFF,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0xFF,0xC7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0x7F,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0xFF,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xEF,
0xFF,0xFF,0xFF,0xFC,0xFF,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x93,
0xFF,0xFF,0xFF,0xFC,0xFF,0xE7,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xF8,0x00,0x00,0x3B,
0xFF,0xFF,0xFF,0xFC,0x7F,0xE7,0xFF,0xFF,0xFF,0xFE,0x3F,0xFF,0xE0,0x00,0x00,0x3B,
0xFF,0xFF,0xFF,0xFC,0xFF,0xE7,0xFF,0xFF,0xFF,0xFF,0x1F,0xFF,0xC7,0xFF,0xFF,0x87,
0xFF,0xFF,0xFF,0xFC,0xFF,0xE7,0xFF,0xFF,0xFF,0xFF,0x8F,0xFF,0x8F,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xE0,0x03,0xE7,0xFF,0xFF,0xFF,0xFF,0xC7,0xFF,0x1F,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xC0,0x01,0xC7,0xFF,0xDF,0xFD,0xFF,0xE3,0xFE,0x3F,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xE0,0x03,0xC7,0xFF,0x9F,0xF8,0xFF,0xF1,0xFC,0x7F,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0xFF,0xE7,0xFF,0x9F,0xF8,0xFF,0xF8,0xF8,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0xFF,0xE7,0xFF,0x9F,0xF8,0xFF,0xFC,0x70,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0xFF,0xE7,0xFF,0x9F,0xF8,0xFF,0xFE,0x61,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0xFF,0xC7,0xFF,0x9F,0xF8,0xFF,0xFF,0x07,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0xFF,0xE7,0xFF,0x9F,0xF8,0xFF,0xFF,0x8F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0xFF,0xE7,0xFF,0x9F,0xF8,0xFF,0xFF,0x87,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0xFF,0xE7,0xFF,0x9F,0xF8,0xFF,0xFF,0x03,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0xFF,0xE7,0xFF,0x9F,0xF8,0xFF,0xFC,0x31,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0x7F,0xC7,0xFF,0x9F,0xF8,0xFF,0xFC,0x70,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0x7F,0xC7,0xFF,0x9F,0xF8,0xFF,0xF8,0xF8,0x7F,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0x7F,0xC7,0xFF,0x9F,0xF8,0xFF,0xF1,0xFC,0x3F,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0x7F,0xC7,0xFF,0x9F,0xF8,0xFF,0xE3,0xFE,0x3F,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0x7F,0xC7,0xFF,0x9F,0xF8,0xFF,0xC7,0xFF,0x1F,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0xFF,0xE7,0xFF,0x8F,0xF8,0xFF,0x8F,0xFF,0x8F,0xFF,0xFF,0xFF,
0xC7,0xFF,0xFF,0xF8,0xFF,0xE7,0xFF,0x0F,0xF8,0x7F,0x1F,0xFF,0xC7,0xFF,0xFF,0xFF,
0x98,0x03,0xFF,0xE1,0xFF,0xF1,0xFC,0x07,0xF0,0x3C,0x3F,0xFF,0xE3,0xFF,0xFF,0xFF,
0xB8,0x00,0x00,0x03,0xFF,0xF8,0x00,0x60,0x03,0x00,0x7F,0xFF,0xF1,0xFF,0xFF,0xFF,
0x98,0x00,0x00,0x07,0xFF,0xFC,0x01,0xFC,0x1F,0xC1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xC7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
};
