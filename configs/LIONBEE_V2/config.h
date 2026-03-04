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

#define BOARD_NAME        LIONBEE_V2
#define MANUFACTURER_ID   HBRD

#define USE_ACC
#define USE_ACC_SPI_ICM42688P
#define USE_GYRO
#define USE_GYRO_SPI_ICM42688P

#define USE_FLASH
#define USE_FLASH_M25P16
#define USE_FLASH_W25Q128FV
#define USE_FLASH_W25N01G
#define USE_RX_SPI
#define USE_RX_EXPRESSLRS
#define USE_RX_SX1280
#undef  USE_RX_SX127X
#define USE_BARO
#define USE_BARO_DPS310
#define USE_MAG
#define USE_MAX7456
#define USE_GPS
#define USE_ALTITUDE_HOLD
#define USE_POSITION_HOLD
#define USE_VTX_RTC6705
#define SPI_SHARED_MAX7456_AND_RTC6705

#define MOTOR1_PIN           PA1
#define MOTOR2_PIN           PA0
#define MOTOR3_PIN           PA9
#define MOTOR4_PIN           PA10
#define LED0_PIN             PB8
#define LED_STRIP_PIN        PB1
#define UART5_RX_PIN         PB5
#define UART5_TX_PIN         PB6
#define I2C2_SCL_PIN         PB10
#define I2C2_SDA_PIN         PB11
#define RTC6705_EX_POWER_1_PIN          PA14   // External VTx Power LSB
#define RTC6705_EX_POWER_2_PIN          PB7    // External VTx Power MSB

#define SPI1_SCK_PIN         PA5
#define SPI1_SDO_PIN         PA7
#define SPI1_SDI_PIN         PA6
#define SPI1_NSS_PIN         PA4
#define SPI2_SCK_PIN         PB13
#define SPI2_SDI_PIN         PB14
#define SPI2_SDO_PIN         PB15
#define SPI3_SCK_PIN         PB12
#define SPI3_SDI_PIN         PB4
#define SPI3_SDO_PIN         PB0
#define RX_SPI_CS_PIN                   PA8
#define RX_SPI_LED_PIN                  PB9
#define RX_SPI_EXTI_PIN                 PB3
#define RX_SPI_BIND_PIN                 PH2
#define RX_EXPRESSLRS_SPI_RESET_PIN     PH3
#define RX_EXPRESSLRS_SPI_BUSY_PIN      PA15
#define ADC_VBAT_PIN         PA2
#define ADC_CURR_PIN         PA3
#define FLASH_CS_PIN         PC15
#define MAX7456_SPI_CS_PIN   PC14
#define RTC6705_CS_PIN       PB2
#define GYRO_1_EXTI_PIN      PC13
#define GYRO_1_CS_PIN        SPI1_NSS_PIN

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, LED_STRIP_PIN, 2, 0 ) \
    TIMER_PIN_MAP( 1, MOTOR1_PIN   , 1, 0 ) \
    TIMER_PIN_MAP( 2, MOTOR2_PIN   , 1, 0 ) \
    TIMER_PIN_MAP( 3, MOTOR3_PIN   , 1, 0 ) \
    TIMER_PIN_MAP( 4, MOTOR4_PIN   , 1, 0 ) 

#define ADC_INSTANCE        ADC1    
#define ADC1_DMA_OPT        12

#define RX_SPI_INSTANCE                 SPI2
#define RX_EXPRESSLRS_TIMER_INSTANCE    TMR5//( BIT(1) | BIT(2) | BIT(3) | BIT(4) | BIT(5) | BIT(8) | BIT(20) )
#define RX_SPI_LED_INVERTED
#define RX_SPI_PROTOCOL                 EXPRESSLRS
#define RX_SPI_DEFAULT_PROTOCOL         RX_SPI_EXPRESSLRS
#define DEFAULT_RX_FEATURE              FEATURE_RX_SPI
#define GYRO_1_SPI_INSTANCE             SPI1
#define GYRO_1_ALIGN                    CW270_DEG
#define DEFAULT_ALIGN_BOARD_PITCH       180
#define MAX7456_SPI_INSTANCE            SPI3
#define RTC6705_SPI_INSTANCE            SPI3
#define RTC6705_DYNAMIC_POWER_CTRL // For External VTx Power Controller
#define CMS_SKIP_EMPTY_VTX_TABLE_ENTRIES
#define FLASH_SPI_INSTANCE              SPI3
#define BARO_BUSTYPE                    BUS_TYPE_I2C
#define MAG_BUSTYPE                     BUS_TYPE_I2C
#define BARO_I2C_INSTANCE               I2CDEV_2
#define MAG_I2C_INSTANCE                I2CDEV_2
#define DEFAULT_BLACKBOX_DEVICE         BLACKBOX_DEVICE_FLASH
#define DEFAULT_VOLTAGE_METER_SCALE     58
#define DEFAULT_CURRENT_METER_SCALE     513
#define DEFAULT_CURRENT_METER_SOURCE    CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE    VOLTAGE_METER_ADC
#define SYSTEM_HSE_MHZ 8
#ifndef USE_TARGET_CONFIG
#define USE_TARGET_CONFIG
#endif