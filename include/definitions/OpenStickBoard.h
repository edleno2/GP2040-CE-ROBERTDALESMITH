/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2021 Jason Skuby (mytechtoybox.com)
 */

#ifndef OPEN_STICK_BOARD_H_
#define OPEN_STICK_BOARD_H_

#include "Gamepad.h"

#define PIN_DPAD_UP     13
#define PIN_DPAD_DOWN   11
#define PIN_DPAD_LEFT   10
#define PIN_DPAD_RIGHT  12
#define PIN_BUTTON_01   4
#define PIN_BUTTON_02   5
#define PIN_BUTTON_03   0
#define PIN_BUTTON_04   1
#define PIN_BUTTON_05   3
#define PIN_BUTTON_06   2
#define PIN_BUTTON_07   7
#define PIN_BUTTON_08   6
#define PIN_BUTTON_09   8
#define PIN_BUTTON_10   9
#define PIN_BUTTON_11   17
#define PIN_BUTTON_12   16
#define PIN_BUTTON_13   28
#define PIN_BUTTON_14   18

#define BOARD_LEDS_PIN 14
#define BOARD_LEDS_COUNT 16

#define LEDS_DPAD_UP     3
#define LEDS_DPAD_DOWN   1
#define LEDS_DPAD_LEFT   0
#define LEDS_DPAD_RIGHT  2
#define LEDS_BUTTON_01   8
#define LEDS_BUTTON_02   9
#define LEDS_BUTTON_03   4
#define LEDS_BUTTON_04   5
#define LEDS_BUTTON_05   7
#define LEDS_BUTTON_06   6
#define LEDS_BUTTON_07   11
#define LEDS_BUTTON_08   10

#define DEFAULT_SOCD_MODE SOCD_MODE_NEUTRAL

#endif
