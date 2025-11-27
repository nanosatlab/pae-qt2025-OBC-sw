/**
 * *****************************************************************************
 * @file           : main.h
 * @brief          : Header for main.c file.
 *                   This file contains the common defines of the application.
 ******************************************************************************
 */

#ifndef __MAIN_H
#define __MAIN_H



#include "stm32mp1xx_hal.h"
//#include "stm32l476xx.h"
#include "FreeRTOS.h"
#include "task.h"
#include "log.h"
   

// OBC event group bits
#define OBC_TEMP_CAPTURE (1 << 0) // bit 0

// PAYLOAD event group bits
#define PAYLOAD_TEMP_CAPTURE (1 << 0) // bit 0


// Peripheral handles
extern SPI_HandleTypeDef hspi1;


void Error_Handler(void); // s'ha d'implementar


#endif /* __MAIN_H */
