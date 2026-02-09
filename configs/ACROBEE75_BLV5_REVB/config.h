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
    REFERENCE: sha256_649a2f09c218999ef81c0067fa2f2325dce392b7beb2ea91d03f002c83898dc9
    DATE: 2025-01-01
*/

#pragma once

#define FC_TARGET_MCU     STM32G47X

#define BOARD_NAME        ACROBEE75_BLV5_REVB
#define MANUFACTURER_ID   NEWBEEDRONE 

#define USE_ACC
#define USE_GYRO
#define USE_ACC_SPI_ICM42688P
#define USE_GYRO_SPI_ICM42688P
#define USE_ACC_SPI_MPU6000
#define USE_GYRO_SPI_MPU6000

#define USE_BARO
#define USE_LED_STRIP
#define USE_BARO_DPS310
#define USE_MAX7456
#define USE_VTX_RTC6705
#define USE_GPS
#define USE_GPS_NMEA
#define USE_GPS_UBLOX
#define USE_GPS_RESCUE
#define USE_BARO
#define USE_BARO_DPS310
#define USE_MAG
#define USE_ALTITUDE_HOLD
#define USE_POSITION_HOLD
#define USE_SERIALRX_SBUS
#define RTC6705_DYNAMIC_POWER_CTRL
#define SPI_SHARED_MAX7456_AND_RTC6705

#define BEEPER_PIN           PB7
#define MOTOR1_PIN           PB0
#define MOTOR2_PIN           PB1
#define MOTOR3_PIN           PA6
#define MOTOR4_PIN           PA7
#define LED0_PIN             PB2
#define LED1_PIN             PC13
#define LED_STRIP_PIN        PB9
#define UART1_RX_PIN         PA10
#define UART1_TX_PIN         PA9
#define UART2_RX_PIN         PA3
#define UART2_TX_PIN         PA2
#define UART3_RX_PIN         PB11
#define UART3_TX_PIN         PB10
#define UART4_RX_PIN         PC11
#define UART4_TX_PIN         PC10
#define I2C2_SCL_PIN         PA8
#define I2C2_SDA_PIN         PC14

#define RTC6705_EX_POWER_1_PIN          PC6  // External VTx Power LSB
#define RTC6705_EX_POWER_2_PIN          PB15 // External VTx Power MSB

#define SPI1_SCK_PIN         PB3
#define SPI1_SDI_PIN         PB4
#define SPI1_SDO_PIN         PB5

#define ADC_VBAT_PIN         PA0
#define ADC_CURR_PIN         PA1
#define RTC6705_CS_PIN       PA14
#define GYRO_1_EXTI_PIN      PC14
#define GYRO_1_CS_PIN        PA4
#define MAX7456_SPI_CS_PIN   PA15
#define PINIO1_PIN           PB8

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, MOTOR1_PIN   ,    1, 0) \
    TIMER_PIN_MAP( 1, MOTOR2_PIN   ,    1, 0) \
    TIMER_PIN_MAP( 2, MOTOR3_PIN   ,    2, 1) \
    TIMER_PIN_MAP( 3, MOTOR4_PIN   ,    2, 1) \
    TIMER_PIN_MAP( 4, LED_STRIP_PIN,    1, 10) 

#define ADC_INSTANCE        ADC1    
#define ADC1_DMA_OPT        12

#define YAW_MOTORS_REVERSED          1 
#define GYRO_1_ALIGN                 CW90_DEG
#define GYRO_1_SPI_INSTANCE          SPI1
#define MAX7456_SPI_INSTANCE         SPI1
#define RTC6705_SPI_INSTANCE         SPI1
#define SERIALRX_UART                SERIAL_PORT_UART3
#define DEFAULT_RX_FEATURE           FEATURE_RX_SERIAL
#define SERIALRX_PROVIDER            SERIALRX_CRSF
#define DEFAULT_DSHOT_BITBANG        DSHOT_BITBANG_ON
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_VOLTAGE_METER_SCALE  110
#define DEFAULT_CURRENT_METER_SCALE  410
#define DEFAULT_CURRENT_METER_OFFSET 240
#define PINIO1_CONFIG                (PINIO_CONFIG_MODE_OUT_PP)
#define BEEPER_INVERTED
#define SYSTEM_HSE_MHZ 8

#ifndef USE_TARGET_CONFIG
#define USE_TARGET_CONFIG
#endif