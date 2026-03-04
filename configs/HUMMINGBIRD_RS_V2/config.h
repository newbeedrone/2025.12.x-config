/*
* This file is part of Betaflight.
*
* Betaflight is free software. You can redistribute this software
* and/or modify this software under the terms of the GNU General
* Public License as published by the Free Software Foundation,
* either version 3 of the License, or (at your option) any later
* version.
*
* Betaflight is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public
* License along with this software.
*
* If not, see <http://www.gnu.org/licenses/>.
*/

/*
    SUPPORTED TARGET - THANK YOU
    REFERENCE: sha256_10a21db2f0c1df677b29c245ac2122d271ee543bc5916b99dfeee73867587273
    DATE: 2025-01-01
*/

#pragma once

#define FC_TARGET_MCU     AT32F435G

#define BOARD_NAME        HMB_RS_V2
#define MANUFACTURER_ID   HBRD

#define USE_ACC
#define USE_ACC_SPI_ICM42688P
#define USE_GYRO
#define USE_GYRO_SPI_ICM42688P

#define USE_BARO
#define USE_BARO_DPS310
#define USE_MAG
#define USE_MAX7456
#define USE_GPS
#define USE_GPS
#define USE_GPS_NMEA
#define USE_GPS_UBLOX
#define USE_GPS_RESCUE
#define USE_ALTITUDE_HOLD
#define USE_POSITION_HOLD
#define USE_VTX_RTC6705

#define MOTOR1_PIN           PB10
#define MOTOR2_PIN           PB11
#define MOTOR3_PIN           PB5
#define MOTOR4_PIN           PB4
#define LED0_PIN             PA9
#define LED_STRIP_PIN        PH2
#define UART2_RX_PIN         PA3
#define UART2_TX_PIN         PA2
#define UART4_RX_PIN         PA1
#define UART4_TX_PIN         PA0
#define UART5_RX_PIN         PB8
#define UART5_TX_PIN         PB9
#define RTC6705_EX_POWER_1_PIN          PC14  // External VTx Power LSB
#define RTC6705_EX_POWER_2_PIN          PC13  // External VTx Power MSB

#define SPI1_SCK_PIN         PA5
#define SPI1_SDO_PIN         PA7
#define SPI1_SDI_PIN         PA6
#define SPI2_SCK_PIN         PB13
#define SPI2_SDI_PIN         PB14
#define SPI2_SDO_PIN         PB15

#define ADC_VBAT_PIN         PB0
#define ADC_CURR_PIN         PB1
#define MAX7456_SPI_CS_PIN   PA4
#define RTC6705_CS_PIN       PC15
#define GYRO_1_EXTI_PIN      PA8
#define GYRO_1_CS_PIN        PB12

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, LED_STRIP_PIN, 1, 5 ) \
    TIMER_PIN_MAP( 1, MOTOR1_PIN   , 1, 0 ) \
    TIMER_PIN_MAP( 2, MOTOR2_PIN   , 1, 0 ) \
    TIMER_PIN_MAP( 3, MOTOR3_PIN   , 1, 0 ) \
    TIMER_PIN_MAP( 4, MOTOR4_PIN   , 1, 0 ) 

#define ADC_INSTANCE        ADC1    
#define ADC1_DMA_OPT        0

#define GYRO_1_SPI_INSTANCE             SPI2
#define GYRO_1_ALIGN                    CW90_DEG
#define MAX7456_SPI_INSTANCE            SPI1
#define RTC6705_SPI_INSTANCE            SPI1
#define USE_SPI_DMA_ENABLE_LATE
#define SERIALRX_UART                   SERIAL_PORT_UART4
#define SERIALRX_PROVIDER               SERIALRX_CRSF
#define DEFAULT_RX_FEATURE              FEATURE_RX_SERIAL
#define RTC6705_DYNAMIC_POWER_CTRL // For External VTx Power Controller
#define CMS_SKIP_EMPTY_VTX_TABLE_ENTRIES
#define DEFAULT_VOLTAGE_METER_SCALE     112
#define DEFAULT_CURRENT_METER_SCALE     680
#define DEFAULT_CURRENT_METER_OFFSET    120
#define DEFAULT_CURRENT_METER_SOURCE    CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE    VOLTAGE_METER_ADC
#define SYSTEM_HSE_MHZ 8
#ifndef USE_TARGET_CONFIG
#define USE_TARGET_CONFIG
#endif