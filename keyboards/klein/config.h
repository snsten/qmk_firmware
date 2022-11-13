// Copyright 2022 ssh (@snsten)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define MATRIX_ROWS 8 // Rows are doubled-up.
#define MATRIX_COLS 5

#define MASTER_RIGHT
#define SOFT_SERIAL_PIN D2


#define CIRQUE_PINNACLE_TAP_ENABLE
#define CIRQUE_PINNACLE_SECONDARY_TAP_ENABLE
#define POINTING_DEVICE_GESTURES_CURSOR_GLIDE_ENABLE
#define POINTING_DEVICE_GESTURES_SCROLL_ENABLE

#define POINTING_DEVICE_ROTATION_90
#define CIRQUE_PINNACLE_DIAMETER_MM 35