#include <avr/io.h>
#include <avr/pgmspace.h>
#include <stdbool.h>
#include <stdio.h>
#include <util/delay.h>

#include "led.h"
#include "serial.h"
#include "timer.h"

int ledCounter = 1000;

void main(void) {
    // initTimer0();  // initalise timer 0
    timer_init();

    while (1) {
        LED_init();
        OCR0A = 250;
        _delay_ms(1000);

        LED_init();
        OCR0A = 150;
        _delay_ms(1000);

        LED_init();
        OCR0A = 50;
        _delay_ms(1000);
    }
}
