/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_Pin GPIO_PIN_13
#define LED_GPIO_Port GPIOC
#define Botton1_Pin GPIO_PIN_14
#define Botton1_GPIO_Port GPIOC
#define Botton2_Pin GPIO_PIN_15
#define Botton2_GPIO_Port GPIOC
#define Horizontal_Ms1_Pin GPIO_PIN_0
#define Horizontal_Ms1_GPIO_Port GPIOA
#define Horizontal_Ms2_Pin GPIO_PIN_1
#define Horizontal_Ms2_GPIO_Port GPIOA
#define Horizontal_Ms3_Pin GPIO_PIN_2
#define Horizontal_Ms3_GPIO_Port GPIOA
#define Horizontal_Step_Pin GPIO_PIN_3
#define Horizontal_Step_GPIO_Port GPIOA
#define Horizontal_Dir_Pin GPIO_PIN_4
#define Horizontal_Dir_GPIO_Port GPIOA
#define Motor_Enable_Pin GPIO_PIN_5
#define Motor_Enable_GPIO_Port GPIOA
#define Vertical_Ms1_Pin GPIO_PIN_6
#define Vertical_Ms1_GPIO_Port GPIOA
#define Vertical_Ms2_Pin GPIO_PIN_7
#define Vertical_Ms2_GPIO_Port GPIOA
#define Vertical_Ms3_Pin GPIO_PIN_0
#define Vertical_Ms3_GPIO_Port GPIOB
#define Vertical_Step_Pin GPIO_PIN_1
#define Vertical_Step_GPIO_Port GPIOB
#define Vertical_Dir_Pin GPIO_PIN_10
#define Vertical_Dir_GPIO_Port GPIOB
#define cylinder_1_Pin GPIO_PIN_8
#define cylinder_1_GPIO_Port GPIOA
#define cylinder_2_Pin GPIO_PIN_9
#define cylinder_2_GPIO_Port GPIOA
#define steering_engine_Pin GPIO_PIN_10
#define steering_engine_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
