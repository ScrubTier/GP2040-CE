/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2024 OpenStickCommunity (gp2040-ce.info)
 */

#ifndef PICO_BOARD_CONFIG_H_
#define PICO_BOARD_CONFIG_H_

#include "enums.pb.h"
#include "class/hid/hid.h"

#define BOARD_CONFIG_LABEL "Reflex Encode v2.0"

// Main pin mapping Configuration
//                                                  // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define GPIO_PIN_02 GpioAction::BUTTON_PRESS_UP     // UP     | UP     | UP      | UP       | UP     | UP     |
#define GPIO_PIN_03 GpioAction::BUTTON_PRESS_DOWN   // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   |
#define GPIO_PIN_04 GpioAction::BUTTON_PRESS_RIGHT  // RIGHT  | RIGHT  | RIGHT   | RIGHT    | RIGHT  | RIGHT  |
#define GPIO_PIN_05 GpioAction::BUTTON_PRESS_LEFT   // LEFT   | LEFT   | LEFT    | LEFT     | LEFT   | LEFT   |
#define GPIO_PIN_06 GpioAction::BUTTON_PRESS_B1     // B1     | A      | B       | Cross    | 2      | K1     |
#define GPIO_PIN_07 GpioAction::BUTTON_PRESS_B2     // B2     | B      | A       | Circle   | 3      | K2     |
#define GPIO_PIN_08 GpioAction::BUTTON_PRESS_R2     // R2     | RT     | ZR      | R2       | 8      | K3     |
#define GPIO_PIN_09 GpioAction::BUTTON_PRESS_L2     // L2     | LT     | ZL      | L2       | 7      | K4     |
#define GPIO_PIN_10 GpioAction::BUTTON_PRESS_B3     // B3     | X      | Y       | Square   | 1      | P1     |
#define GPIO_PIN_11 GpioAction::BUTTON_PRESS_B4     // B4     | Y      | X       | Triangle | 4      | P2     |
#define GPIO_PIN_12 GpioAction::BUTTON_PRESS_R1     // R1     | RB     | R       | R1       | 6      | P3     |
#define GPIO_PIN_13 GpioAction::BUTTON_PRESS_L1     // L1     | LB     | L       | L1       | 5      | P4     |
#define GPIO_PIN_16 GpioAction::BUTTON_PRESS_S1     // S1     | Back   | Minus   | Select   | 9      | Coin   |
#define GPIO_PIN_17 GpioAction::BUTTON_PRESS_S2     // S2     | Start  | Plus    | Start    | 10     | Start  |
#define GPIO_PIN_18 GpioAction::BUTTON_PRESS_L3     // L3     | LS     | LS      | L3       | 11     | LS     |
#define GPIO_PIN_19 GpioAction::BUTTON_PRESS_R3     // R3     | RS     | RS      | R3       | 12     | RS     |
#define GPIO_PIN_20 GpioAction::BUTTON_PRESS_A1     // A1     | Guide  | Home    | PS       | 13     | ~      |
#define GPIO_PIN_21 GpioAction::BUTTON_PRESS_A2     // A2     | ~      | Capture | ~        | 14     | ~      |


// Keyboard Mapping Configuration
//                                            // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define KEY_DPAD_UP     HID_KEY_ARROW_UP      // UP     | UP     | UP      | UP       | UP     | UP     |
#define KEY_DPAD_DOWN   HID_KEY_ARROW_DOWN    // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   |
#define KEY_DPAD_RIGHT  HID_KEY_ARROW_RIGHT   // RIGHT  | RIGHT  | RIGHT   | RIGHT    | RIGHT  | RIGHT  |
#define KEY_DPAD_LEFT   HID_KEY_ARROW_LEFT    // LEFT   | LEFT   | LEFT    | LEFT     | LEFT   | LEFT   |
#define KEY_BUTTON_B1   HID_KEY_SHIFT_LEFT    // B1     | A      | B       | Cross    | 2      | K1     |
#define KEY_BUTTON_B2   HID_KEY_Z             // B2     | B      | A       | Circle   | 3      | K2     |
#define KEY_BUTTON_R2   HID_KEY_X             // R2     | RT     | ZR      | R2       | 8      | K3     |
#define KEY_BUTTON_L2   HID_KEY_V             // L2     | LT     | ZL      | L2       | 7      | K4     |
#define KEY_BUTTON_B3   HID_KEY_CONTROL_LEFT  // B3     | X      | Y       | Square   | 1      | P1     |
#define KEY_BUTTON_B4   HID_KEY_ALT_LEFT      // B4     | Y      | X       | Triangle | 4      | P2     |
#define KEY_BUTTON_R1   HID_KEY_SPACE         // R1     | RB     | R       | R1       | 6      | P3     |
#define KEY_BUTTON_L1   HID_KEY_C             // L1     | LB     | L       | L1       | 5      | P4     |
#define KEY_BUTTON_S1   HID_KEY_5             // S1     | Back   | Minus   | Select   | 9      | Coin   |
#define KEY_BUTTON_S2   HID_KEY_1             // S2     | Start  | Plus    | Start    | 10     | Start  |
#define KEY_BUTTON_L3   HID_KEY_EQUAL         // L3     | LS     | LS      | L3       | 11     | LS     |
#define KEY_BUTTON_R3   HID_KEY_MINUS         // R3     | RS     | RS      | R3       | 12     | RS     |
#define KEY_BUTTON_A1   HID_KEY_9             // A1     | Guide  | Home    | PS       | 13     | ~      |
#define KEY_BUTTON_A2   HID_KEY_F2            // A2     | ~      | Capture | ~        | 14     | ~      |
#define KEY_BUTTON_FN   -1                    // Hotkey Function                                        |

#define USB_PERIPHERAL_ENABLED 1
#define USB_PERIPHERAL_PIN_DPLUS 14

#define DEFAULT_INPUT_MODE INPUT_MODE_PS5
#define DEFAULT_INPUT_MODE_R1 INPUT_MODE_XBONE
#define DEFAULT_INPUT_MODE_B4 INPUT_MODE_PS5
#define DEFAULT_PS5AUTHENTICATION_TYPE INPUT_MODE_AUTH_TYPE_USB

#define TURBO_ENABLED 1
#define GPIO_PIN_29 GpioAction::BUTTON_PRESS_TURBO

#define BOARD_LED_ENABLED 1
#define BOARD_LED_TYPE ON_BOARD_LED_MODE_PS_AUTH

#define HAS_I2C_DISPLAY 1
#define I2C0_ENABLED 1
#define I2C0_PIN_SDA 0
#define I2C0_PIN_SCL 1
#define DISPLAY_I2C_BLOCK i2c0
#define SPLASH_MODE SPLASH_MODE_STATIC

#define DEFAULT_SPLASH \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xB0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xB8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xDE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x2F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x77,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFB,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xBD,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xDE,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xDF,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x6F,0xB8,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x37,0xDC,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x37,0xEE,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1B,0xF7,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFB,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x39,0xFD,0x80,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3D,0xFE,0xC0,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0xFF,0x60,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x7F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0x7F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xBF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0x9F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xDF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xCF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xEF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xEF,0xFF,0x80,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xF7,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xDD,0xF7,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xDB,0xFB,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xD7,0xFB,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xE1,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0x7D,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xDB,0xFD,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xBB,0xFE,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xBF,0xFE,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x5F,0xFE,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x01,0xFF,0xFE,0xFF,0xF1,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x03,0xFF,0xFE,0xEE,0x03,0x7F,0xFF,0xC0,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x07,0xFF,0xFD,0xE7,0xFB,0x9F,0xFF,0xE0,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x0F,0xFF,0xFB,0xEF,0xFB,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x1F,0xFC,0x0F,0xDF,0xFB,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xDF,0xF1,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xCF,0xE0,0x3F,0xFF,0xFC,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x7F,0xFF,0xFF,0xC0,0x00,0x1F,0xFF,0xFE,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x80,0x00,0x0F,0xFF,0xFF,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x01,0xFF,0xFF,0xF0,0x00,0x00,0x07,0xFF,0xFF,0x80,0x00,0x00,0x00, \
0x00,0x00,0x00,0x03,0xFF,0xFF,0xE0,0x00,0x00,0x03,0xFF,0xFF,0xC0,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x03,0xFC,0x3F,0xE3,0xFC,0xE0,0x1F,0xF7,0x01,0xC0,0x00,0x00,0x00, \
0x00,0x00,0x00,0x03,0xFE,0x3F,0xE3,0xFC,0xE0,0x1F,0xF3,0x83,0x80,0x00,0x00,0x00, \
0x00,0x00,0x00,0x03,0x8E,0x38,0x03,0x80,0xE0,0x1C,0x01,0xC7,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x03,0x8E,0x38,0x03,0x80,0xE0,0x1C,0x01,0xEF,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x03,0x8E,0x38,0x03,0x80,0xE0,0x1C,0x00,0xFE,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x03,0xFC,0x3F,0xC3,0xF8,0xE0,0x1F,0xE0,0x7C,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x03,0xF8,0x3F,0xC3,0xF8,0xE0,0x1F,0xE0,0x7C,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x03,0x9C,0x38,0x03,0x80,0xE0,0x1C,0x00,0xFE,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x03,0x9C,0x38,0x03,0x80,0xE0,0x1C,0x01,0xEF,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x03,0x8E,0x38,0x03,0x80,0xE0,0x1C,0x01,0xC7,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x03,0x8E,0x3F,0xE3,0x80,0xFF,0x1F,0xF3,0x83,0x80,0x00,0x00,0x00, \
0x00,0x00,0x00,0x03,0x87,0x3F,0xE3,0x80,0xFF,0x1F,0xF7,0x01,0xC0,0x00,0x00,0x00

#endif