/*
 * This file is part of RaceFlight.
 *
 * RaceFlight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * RaceFlight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with RaceFlight.  If not, see <http://www.gnu.org/licenses/>.
 */

#define TARGET_BOARD_IDENTIFIER "AFF3" 

#define USBD_PRODUCT_STRING "Naze32 Pro"
#ifdef OPBL
	#define USBD_SERIALNUMBER_STRING "0x800C000"
#endif

#pragma once

#define LED0        PB12
#define BEEPER      PB10
#define GYRO
#define ACC

#define USE_VCP
#define USE_USART1
#define USE_USART2
#define SERIAL_PORT_COUNT 3

#define ESC_1WIRE

#define USE_I2C
#define I2C_DEVICE (I2CDEV_1)

#define BLACKBOX
#define GPS
#define GTUNE
#define SERIAL_RX
#define TELEMETRY
#define USE_SERVOS
#define USE_CLI

#define SPEKTRUM_BIND

#define BIND_PORT  GPIOA
#define BIND_PIN   Pin_3

