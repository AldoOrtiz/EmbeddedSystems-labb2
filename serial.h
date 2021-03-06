#ifndef SERIAL_H_
#define SERIAL_H_

#define BAUDRATE 38400
#define UBRR (F_CPU / (16 * BAUDRATE) - 1)
#include <stdio.h>

void uart_init(void);

int uart_putchar(char chr, FILE *stream);

char uart_getchar(void);

void initTimer0(void);

#endif
