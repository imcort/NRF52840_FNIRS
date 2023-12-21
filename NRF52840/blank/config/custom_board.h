#ifndef CUSTOM_BOARD_H
#define CUSTOM_BOARD_H

#include "nrf_gpio.h"

// LEDs definitions for Board
#define LEDS_NUMBER    1

#define LED_1                   3
#define LEDS_ACTIVE_STATE       1
#define LEDS_LIST { LED_1 }
//#define BSP_LED_0      LED_1

#define BUTTONS_NUMBER 0
#define BUTTONS_ACTIVE_STATE 0

//Sensor Pin Contact

#define IIC_SDA   NRF_GPIO_PIN_MAP(1,2)
#define IIC_SCL   NRF_GPIO_PIN_MAP(1,0)

#define IIC2_SDA   NRF_GPIO_PIN_MAP(1,11)
#define IIC2_SCL   NRF_GPIO_PIN_MAP(1,10)

//#define USE_SPI
//#define SPI_INSTANCE  2

#define ADS1258_CS              2
#define ADS1258_SCK				NRF_GPIO_PIN_MAP(1,9)
#define ADS1258_MOSI			5
#define ADS1258_MISO		    30
#define ADS1258_PWDN            7
#define ADS1258_RESET           12  //
#define ADS1258_DRDY            31
#define ADS1258_START           29

//Wireless and TF
//#define USE_SPI
#define SPI_PIN_MOSI            24
#define SPI_PIN_MISO            10
#define SPI_PIN_SCK             9

#define USE_INTERRUPT
#define A5133_CS                22
#define A5133_WTR               20
#define SD_CS                   13

#define ONE_WIRE                28
#define EN_5V                   NRF_GPIO_PIN_MAP(1,13)

#define USE_UART
#define UART_SENSOR_TX          17
#define UART_SENSOR_RX          15

#define ADS1258_IRQPRIORITY     2
#define ADS1258_START_IRQPRIORITY 0
#define A5133_IRQPRIORITY       5
#define IIC_IRQPRIORITY         6

#endif
