/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#include "stm32l4xx_hal.h"

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
#define PA_SW_CTRL_Pin GPIO_PIN_13
#define PA_SW_CTRL_GPIO_Port GPIOC
#define RF_Detector_Pin GPIO_PIN_0
#define RF_Detector_GPIO_Port GPIOC
#define ETC_2_Pin GPIO_PIN_1
#define ETC_2_GPIO_Port GPIOC
#define ETC_3_Pin GPIO_PIN_2
#define ETC_3_GPIO_Port GPIOC
#define ETC_1_Pin GPIO_PIN_3
#define ETC_1_GPIO_Port GPIOC
#define OAD2_Pin GPIO_PIN_0
#define OAD2_GPIO_Port GPIOA
#define OAD_Pin GPIO_PIN_1
#define OAD_GPIO_Port GPIOA
#define IRQ_Pin GPIO_PIN_2
#define IRQ_GPIO_Port GPIOA
#define IRQ_EXTI_IRQn EXTI2_IRQn
#define NCS_Pin GPIO_PIN_3
#define NCS_GPIO_Port GPIOA
#define EN_Pin GPIO_PIN_4
#define EN_GPIO_Port GPIOA
#define PA_PWR_ON_Pin GPIO_PIN_4
#define PA_PWR_ON_GPIO_Port GPIOC
#define KEY_DOWN_Pin GPIO_PIN_5
#define KEY_DOWN_GPIO_Port GPIOC
#define BT_RESET_Pin GPIO_PIN_0
#define BT_RESET_GPIO_Port GPIOB
#define USART3_CTS_Pin GPIO_PIN_2
#define USART3_CTS_GPIO_Port GPIOB
#define BAT_GPO_Pin GPIO_PIN_12
#define BAT_GPO_GPIO_Port GPIOB
#define CHG_EN_Pin GPIO_PIN_15
#define CHG_EN_GPIO_Port GPIOB
#define KEY_MF_Pin GPIO_PIN_8
#define KEY_MF_GPIO_Port GPIOA
#define FLASH_CS_Pin GPIO_PIN_15
#define FLASH_CS_GPIO_Port GPIOA
#define IMU_CS_Pin GPIO_PIN_2
#define IMU_CS_GPIO_Port GPIOD
#define IMU_INT1_Pin GPIO_PIN_3
#define IMU_INT1_GPIO_Port GPIOB
#define IMU_INT1_EXTI_IRQn EXTI3_IRQn
#define IMU_INT2_Pin GPIO_PIN_4
#define IMU_INT2_GPIO_Port GPIOB
#define IMU_INT2_EXTI_IRQn EXTI4_IRQn
#define KEY_UP_Pin GPIO_PIN_5
#define KEY_UP_GPIO_Port GPIOB
#define LED_R_Pin GPIO_PIN_6
#define LED_R_GPIO_Port GPIOB
#define LED_B_Pin GPIO_PIN_7
#define LED_B_GPIO_Port GPIOB
#define LED_G_Pin GPIO_PIN_8
#define LED_G_GPIO_Port GPIOB
#define BUZZER_Pin GPIO_PIN_9
#define BUZZER_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
