/**
 * @file Activity1.h
 * @author Logeshwaran S (you@domain.com)
 * @brief Initialization of Engine, Cooler and led
 * @version 0.1
 * @date 2022-03-06
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

#include <avr/io.h>
#include<util/delay.h>

#define ENGINE_CHECK !(PIND &(1<<PD1))
#define COOLER_ON (PIND &(1<<PD2))
#define COOLER_OFF PORTD&=~(1<<PD2)
#define LED_ON PORTD|=(1<<PD0)
#define LED_OFF PORTD &=~(1<<PD0)

void ENGINE_STARTING();

#endif // ACTIVITY1_H_INCLUDED