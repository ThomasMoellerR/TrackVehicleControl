
/******************************************************************************
*  File           :  uart3.h
*  Version        :  1
*  Last Changes   :  2019-05-12 10:53:25
******************************************************************************/

#ifndef __UART3_H
#define __UART3_H

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************
*  Include Files
******************************************************************************/

#include "typ.h"
#include "main.h"

/******************************************************************************
*  Global Constants
******************************************************************************/

/******************************************************************************
*  Global Type Definitions
******************************************************************************/

/******************************************************************************
*  Global Variables
******************************************************************************/

extern TUINT8 UART3_Temp;

/******************************************************************************
*  Global Function Prototypes
******************************************************************************/

extern void UART3_Ini (void);
extern void UART3_HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);

/******************************************************************************
*  Changes        :  
*                    
*                    
*                    
******************************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* __UART3_H */

/******************************************************************************
*  END OF FILE    :  uart3.h
******************************************************************************/
