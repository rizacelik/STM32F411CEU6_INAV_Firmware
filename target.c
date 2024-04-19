/*
* This file is part of Cleanflight.
*
* Cleanflight is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* Cleanflight is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdbool.h>
#include <platform.h>

#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"


timerHardware_t timerHardware[] = {
    DEF_TIM(TIM9, CH2, PA3,   TIM_USE_PPM,   0, 0), // PPM IN


    DEF_TIM(TIM3, CH1, PB4,  TIM_USE_OUTPUT_AUTO,  0, 0), // S1  D(1,4,5)
    DEF_TIM(TIM3, CH2, PB5,  TIM_USE_OUTPUT_AUTO,  0, 0), // S2  D(1,5,5)
    DEF_TIM(TIM4, CH1, PB6,  TIM_USE_OUTPUT_AUTO,  0, 0), // S3  D(1,0,2)
    DEF_TIM(TIM4, CH2, PB7,  TIM_USE_OUTPUT_AUTO,  0, 0), // S4  D(1,3,2)
    DEF_TIM(TIM2, CH1, PA5,  TIM_USE_OUTPUT_AUTO,  0, 0), // S5  D(1,6,3) STM32F411CE SERVO 1 or MOTOR 5
    DEF_TIM(TIM2, CH3, PB10, TIM_USE_OUTPUT_AUTO,  0, 0), // S6  D(1,1,3) STM32F411CE SERVO 2 or MOTOR 6

#if defined(STM32F411CE_HEX)

    DEF_TIM(TIM5, CH1, PA0,  TIM_USE_OUTPUT_AUTO,  0, 0), // S7  D(1,2,6) SERVO 1
    DEF_TIM(TIM5, CH2, PA1,  TIM_USE_OUTPUT_AUTO,  0, 0), // S8  D(1,4,6) SERVO 2

#elif defined(STM32F411CE)

    DEF_TIM(TIM5, CH1, PA0,  TIM_USE_ANY,   0, 0), // Softserial2_TX  D(1,2,6)
    DEF_TIM(TIM5, CH2, PA1,  TIM_USE_ANY,   0, 0), // Softserial2_RX  D(1,4,6)

#endif

    DEF_TIM(TIM1, CH2, PA9,  TIM_USE_ANY,  0, 0), // Softserial1_TX  D(1,0,2)
    DEF_TIM(TIM1, CH3, PA10, TIM_USE_ANY,  0, 0), // Softserial1_RX  D(1,3,2)

    DEF_TIM(TIM3, CH4, PB1, TIM_USE_BEEPER, 0, 0), // BEEPER PWM OPT
    DEF_TIM(TIM1, CH1, PA8, TIM_USE_LED,    0, 0), // 2812LED TIM_USE_LED   D(2,1,6)

};
const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
