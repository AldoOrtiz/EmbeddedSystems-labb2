#include "led.h"

#include <avr/io.h>
#include <stdio.h>

#define DUTYMAX 255

void LED_init() {
    DDRB |= (1 << PB1);
    DDRB &= ~(1 << PB1);
    DDRD |= (1 << PD6);
}

void toogle_led() {
    PORTB ^= _BV(PORTB1);  // toggle led
}

// void blinkLED_init() {
//     DDRB |= (1 << PB1);
// }

// void blink() {
//     uint8_t counter = 0;
//     while (1) {
//         if (TIFR0 & (1 << OCF0A)) {
//             TIFR0 |= (1 << OCF0A);
//             counter++;
//         }
//         if (counter == 10) {
//             PORTB ^= (1 << PB1);
//             counter = 0;
//         }
//     }
// }
