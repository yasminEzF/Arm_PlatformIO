#ifndef UART_H_
#define UART_H_

/*****************************************************************************/
/*                              Includes                                     */
/*****************************************************************************/
#include <stdint.h>

/*****************************************************************************/
/*                              Defines                                      */
/*****************************************************************************/
#define USART6     ((void* const)0x40011400)
#define USART1     ((void* const)0x40011000)
#define USART2     ((void* const)0x40014400)



/*****************************************************************************/
/*                              Types                                        */
/*****************************************************************************/



/*****************************************************************************/
/*                          Function Prototypes                              */
/*****************************************************************************/
void uart_sendByte(uint8_t byte);
void uart_recByte(uint8_t* byte);

void uart_txBuffAsync(uint32_t* buff, uint16_t len);
void uart_txBuff();

void uart_rxBuffAsync();
void uart_rxBuff();

#endif /* UART_H_ */