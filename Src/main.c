/**
  ******************************************************************************
  * File Name          : main.c
  * Description        : Main program body
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2018 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f1xx_hal.h"
#include "i2c.h"
#include "rtc.h"
#include "gpio.h"

/* USER CODE BEGIN Includes */
#include  "SSD1306.h"
#include "pictures.h"

#include "CorperBlack.h" //TESTED-OK.
#include "CoorperNew.h"	  //TESTED-OK.
#include "Impact_12pt.h" //TESTED-OK
#include "Impact_22pt.h" //TESTED-OK
/* USER CODE END Includes */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
/* Private variables ---------------------------------------------------------*/
RTC_TimeTypeDef timeSet = { 11, 40, 57 };
RTC_DateTypeDef dateSet = { RTC_WEEKDAY_WEDNESDAY, RTC_MONTH_JANUARY, 16, 18 };

RTC_TimeTypeDef timeToDisplay;
RTC_DateTypeDef dateToDisplay;
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);

/* USER CODE BEGIN PFP */
/* Private function prototypes -----------------------------------------------*/
void
simpleDisplayDemo (void);
/* USER CODE END PFP */

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration----------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */
    __HAL_RCC_I2C1_CLK_ENABLE()
    ;
    __HAL_RCC_I2C1_FORCE_RESET();
    __HAL_RCC_I2C1_RELEASE_RESET();
  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_I2C1_Init();
  MX_RTC_Init();

  /* USER CODE BEGIN 2 */
    ssd1306_initDisplay ();

    //simpleDisplayDemo ();

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
    ssd1306_putString("Hello",&impact_22ptFontInfo,SSD1306_BLACK);
    ssd1306_putString("Hello",&impact_12ptFontInfo,SSD1306_BLACK);
    ssd1306_updateScreen();

    while (1)
    {
  /* USER CODE END WHILE */

  /* USER CODE BEGIN 3 */

    }
  /* USER CODE END 3 */

}

/** System Clock Configuration
*/
void SystemClock_Config(void)
{

  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;
  RCC_PeriphCLKInitTypeDef PeriphClkInit;

    /**Initializes the CPU, AHB and APB busses clocks 
    */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE|RCC_OSCILLATORTYPE_LSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.HSEPredivValue = RCC_HSE_PREDIV_DIV2;
  RCC_OscInitStruct.LSEState = RCC_LSE_ON;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL8;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Initializes the CPU, AHB and APB busses clocks 
    */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_1) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

  PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_RTC;
  PeriphClkInit.RTCClockSelection = RCC_RTCCLKSOURCE_LSE;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Configure the Systick interrupt time 
    */
  HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/1000);

    /**Configure the Systick 
    */
  HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK);

  /* SysTick_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(SysTick_IRQn, 0, 0);
}

/* USER CODE BEGIN 4 */

void
simpleDisplayDemo (void)
{

    for (int i = 53; i < 68; i++)
    {
        ssd1306_putChar (i, &cooperBlack_8ptFontInfo, SSD1306_WHITE);
    }

    for (int i = 53; i < 68; i++)
    {
        ssd1306_putChar (i, &impact_12ptFontInfo, SSD1306_WHITE);
    }
    for (int i = 52; i < 55; i++)
    {
        ssd1306_putChar (i, &impact_22ptFontInfo, SSD1306_WHITE);
    }
    ssd1306_drawRectangle (10, 10, 20, 20, SSD1306_WHITE);
    ssd1306_drawRectangle (20, 20, 120, 40, SSD1306_WHITE);
    ssd1306_drawCircle (20, 20, 10, SSD1306_WHITE);
    ssd1306_drawCircle (65, 32, 15, SSD1306_WHITE);
    ssd1306_drawLine (0, 0, 128, 64, SSD1306_WHITE);
    ssd1306_drawLine (0, 64, 128, 0, SSD1306_WHITE);
    ssd1306_drawLine (0, 32, 128, 32, SSD1306_WHITE);
    ssd1306_updateScreen ();
    HAL_Delay (2000);

    ssd1306_fill(SSD1306_BLACK);
    ssd1306_updateScreen ();
    HAL_Delay (2000);

    ssd1306_fill(SSD1306_WHITE);
    ssd1306_updateScreen ();
    HAL_Delay (2000);


    ssd1306_putString ("Test display rotation", &cooperBlack_8ptFontInfo, SSD1306_WHITE);
    ssd1306_updateScreen ();

    ssd1306_makeShortScroll (rightHorizontal, frames_2, 0x00, 0x0F);
    HAL_Delay (2000);
    ssd1306_makeShortScroll (leftHorizontal, frames_5, 0x00, 0x02);
    ssd1306_makeShortScroll (rightHorizontal, frames_5, 0x01, 0x02);
    HAL_Delay (2000);
    ssd1306_deActivateScroll ();

    ssd1306_fill(SSD1306_BLACK);
    ssd1306_updateScreen ();

    ssd1306_putString("/dev/drugs/C++", &cooperBlack_8ptFontInfo, SSD1306_WHITE );
    ssd1306_setCursor(0,11);
    ssd1306_putString("Hello World!", &cooperBlack_8ptFontInfo, SSD1306_WHITE );
    ssd1306_setCursor(0,22);
    ssd1306_putString("Test display ON/OFF", &cooperBlack_8ptFontInfo, SSD1306_WHITE );
    ssd1306_updateScreen ();
    HAL_Delay(1000);
    ssd1306_displayOff();
    HAL_Delay(1000);
    ssd1306_displayOn();
}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @param  None
  * @retval None
  */
void _Error_Handler(char * file, int line)
{
  /* USER CODE BEGIN Error_Handler_Debug */
    /* User can add his own implementation to report the HAL error return state */
    while (1)
    {
    }
  /* USER CODE END Error_Handler_Debug */ 
}

#ifdef USE_FULL_ASSERT

/**
   * @brief Reports the name of the source file and the source line number
   * where the assert_param error has occurred.
   * @param file: pointer to the source file name
   * @param line: assert_param error line source number
   * @retval None
   */
void assert_failed(uint8_t* file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
    /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */

}

#endif

/**
  * @}
  */ 

/**
  * @}
*/ 

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
