/**
 * @file main.c
 * @author Logeshwaran S (you@domain.com)
 * @brief Smart Engine Cooling System
 * @version 0.1
 * @date 05-03-2022
 * @copyright Copyright (c) 2022
 * 
 */

#include <avr/io.h>
#include<util/delay.h>
#include"Activity.h"
int main(void)
{
    ENGINE_STARTING(); //starting the Engine
    ADC_INITIALIZATION(); //Initializing ADC to accept temperature values
    TIMER_INITIALIZATION(); //Initializing Timer by dividing clock with 64 prescale
    LCD_INITIALIZATION(); //Initializing LCD

    uint16_t read;

	while(1)
    {
        if(ENGINE_START)
        {
            PORTD|=(1<<PD2);
            if(FAN_ON){
                LED_ON;
                _delay_ms(200);
                CLEAR_LCD();
                read=SENSE_ADC(0);
                PWM_OUPUT(read);

            }
            else
                {
                    LED_OFF;
                     _delay_ms(200);
                    FAN_OFF;
                    _delay_ms(200);
                    CLEAR_LCD();
                }
        }
        else{
            LED_OFF;
            _delay_ms(200);
            FAN_OFF;
            _delay_ms(200);
            CLEAR_LCD();
        }
    }
    return 0;
}
