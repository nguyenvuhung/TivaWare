/*******************************************************************************
*
* External declarations for the interrupt handlers used by the application.
*
******************************************************************************/

extern void UARTStdioIntHandler(void);
extern void UART0_IRQHandler(void);
void UART0_IRQHandler(void)
{
  UARTStdioIntHandler();
}
