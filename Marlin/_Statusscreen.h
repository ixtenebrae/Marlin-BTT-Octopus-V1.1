/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define CONFIG_EXAMPLES_DIR "Creality/Ender-3 Pro/CrealityV422"

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//
#define STATUS_SCREEN_X 80
#define STATUS_LOGO_WIDTH 48

const unsigned char status_logo_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B11000000,B00000110,B00000000,B00000000,B00000000,
  B00000000,B10101111,B11101010,B00000000,B00000000,B00000000,
  B00000000,B01011000,B00110100,B00000000,B01100000,B00000000,
  B00000000,B00110111,B11011000,B00000001,B10011000,B00000000,
  B00000000,B00101111,B11101000,B00000010,B00000100,B00000000,
  B00000000,B11111011,B10111110,B00000100,B10010010,B00000000,
  B00000001,B00111011,B10111001,B00000101,B10011010,B00000000,
  B00000001,B00111011,B10111001,B00000101,B00001010,B00000000,
  B00000001,B00111111,B11111001,B00000101,B10011010,B00000000,
  B00000001,B11100111,B11001111,B00000100,B01100010,B00000000,
  B00000001,B11100000,B00001111,B00001010,B01100101,B00000000,
  B00000001,B00100000,B00001001,B00010010,B01100100,B10000000,
  B00000001,B00110000,B00011001,B00010010,B00000100,B10000000,
  B00000001,B00111111,B11111001,B00010111,B00001110,B10000000,
  B00000000,B11110011,B10011110,B00001000,B11110001,B00000000,
  B00000000,B00011111,B11110000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000
};

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          72
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          80
#endif
