/**
 * uart.c - 串口驱动骨架
 * 目标平台: STM32F103 (示例)
 *
 * 固件版本号与仓库 tag 保持一致:
 *   编译时通过 -DFW_VERSION=\"$(cat VERSION)\" 注入
 */
#include "uart.h"

/* USART1 BRR 寄存器值: 72MHz / (16 * 115200) = 39.06 -> 0x0271 */
#define UART_BRR_115200  0x0271U

int uart_init(uint32_t baud)
{
    (void)baud;
    /* TODO: 使能 GPIOA/USART1 时钟, 配置 PA9/PA10 复用推挽 */
    return 0;
}

void uart_send_byte(uint8_t data)
{
    (void)data;
    /* TODO: 等待 TXE 后写入 DR */
}

uint8_t uart_recv_byte(void)
{
    /* TODO: 等待 RXNE 后读取 DR */
    return 0;
}
