/**
 * @file Activity1.c
 * @author Logeshwaran S (you@domain.com)
 * @brief Engine Starting
 * @version 0.1
 * @date 2022-03-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "Activity1.h"

/**
 * @brief Engine starting and configuring the engine, cooler and LED
 * 
 */
void ENGINE_STARTING(){
    DDRD|=(1<<PD0); //Setting PDO pin
    DDRD&=~(1<<PD1); //clearing PD1 pin
    PORTD|=(1<<PD1); //Setting PD1 pin
    DDRD&=~(1<<PD2); //clearing PD2 pin
    PORTD|=(1<<PD2); //Setting PD2 pin
}