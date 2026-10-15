#ifndef UART_H
#define UART_H

#include <stdint.h>

int uart_init(uint32_t baud);
void uart_send_byte(uint8_t data);
uint8_t uart_recv_byte(void);

#endif /* UART_H */
