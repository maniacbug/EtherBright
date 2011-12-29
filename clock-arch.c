#include "global-conf.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <avr/interrupt.h>
#include <avr/io.h>
#include <avr/sfr_defs.h>

#include "clock-arch.h"
#undef true
#undef false
#include "Arduino.h"

//Initialise the clock
void clock_init(){
	init();
}

//Return time
clock_time_t clock_time(){
	return (clock_time_t)millis(); 
}
