
/******************************************************************************
*  File           :  tim4.h
*  Version        :  1
*  Last Changes   :  2019-05-12 12:52:46
******************************************************************************/

#ifndef __TIM4_H
#define __TIM4_H

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

extern TUINT8 TIM4_Temp;

/******************************************************************************
*  Global Function Prototypes
******************************************************************************/

extern void TIM4_Ini (void);
extern void TIM4_HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);

/******************************************************************************
*  Changes        :  
*                    
*                    
*                    
******************************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* __TIM4_H */

/******************************************************************************
*  END OF FILE    :  tim4.h
******************************************************************************/
