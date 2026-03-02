#include "stm32f4xx.h"

int main(void)
{
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();
    MX_TIM2_Init();

    HAL_TIM_Base_Start(&htim2);

    while (1)
    {
        if(__HAL_TIM_GET_FLAG(&htim2, TIM_FLAG_UPDATE) != RESET)
        {
            __HAL_TIM_CLEAR_FLAG(&htim2, TIM_FLAG_UPDATE);
            HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
        }
    }
}

##Example:
LED → PA5
Timer → TIM2
