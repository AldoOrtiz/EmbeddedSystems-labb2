#include "timer.h"

#include <avr/io.h>
#include <stdio.h>

volatile float dutyCycle = 0;  // Global variable for regulation of led on-off period

void timer_init() {
    // 19.9.1. Register A
    TCCR0A &= ~(1 << COM0A0);
    TCCR0A |= (1 << COM0A1);
    TCCR0A |= (1 << WGM00);
    TCCR0A |= (1 << WGM01);

    // 64 prescaler kapitel 19-10, Register B
    TCCR0B &= ~(1 << WGM02);
    TCCR0B |= (1 << CS00);   // CS00 -> 1
    TCCR0B |= ~(1 << CS01);  // CS01 -> 1
    TCCR0B &= (1 << CS02);   // CS02 -> 0
}