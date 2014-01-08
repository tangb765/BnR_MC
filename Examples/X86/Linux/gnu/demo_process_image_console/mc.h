/*******************************************************************************
*                                                                              *
*   Copyright (C) 2013 Elekta AB (publ), all rights reserved.                  *
*                                                                              *
*   This software contains proprietary and confidential information of         *
*   Elekta AB (publ).                                                          *
*   It may not be reproduced, used, or disclosed to others for any purpose     *
*   without the written authorization of Elekta AB (publ).                     *
*                                                                              *
********************************************************************************

FILE NAME    : $RCSfile$

AUTHOR       : $Author$

DESCRIPTION  :   header for B&R motion control.

Revision     : $Revision$

Revision control header:
$Id$

Revision History:
$Log$


*******************************************************************************/

#ifndef _MC_H_
#define _MC_H_



/*----------------------------------------------------------------------------*/
/*                            INCLUDE FILES                                   */
/*----------------------------------------------------------------------------*/

#include "Epl.h"


/*----------------------------------------------------------------------------*/
/*                                defines                                     */
/*----------------------------------------------------------------------------*/

#define CW_SetSWEndSwitch   (1UL<<10)
#define CW_ErrorAcknowledge (1UL<<9)
#define CW_MoveJogNeg       (1UL<<8)
#define CW_MoveJogPos       (1UL<<7)
#define CW_Stop             (1UL<<6)
#define CW_Halt             (1UL<<5)
#define CW_MoveVelocity     (1UL<<4)
#define CW_MoveAdditive     (1UL<<3)
#define CW_MoveAbsolute     (1UL<<2)
#define CW_Home             (1UL<<1)
#define CW_Power            (1UL)

#define STATE_WAIT              0
#define STATE_POWER_ON          1
#define STATE_HOME              2

#define STATE_READY             10
#define STATE_HALT              11
#define STATE_STOP              12
#define STATE_MOVE_ABSOLUTE     15
#define STATE_MOVE_ADDITIVE     16
#define STATE_MOVE_VELOCITY     17
#define STATE_WTIRE_PARA        18

#define STATE_ERROR_AXIS        100
#define STATE_ERROR             101
#define STATE_ERROR_RESET       102

#define Status_HomeingOK                 (1UL<<8)
#define Status_ErrorStop                 (1UL<<7)
#define Status_SynchronizedMotion        (1UL<<6)
#define Status_ContinuousMotion          (1UL<<5)
#define Status_DiscreteMotion            (1UL<<4)
#define Status_Stopping                  (1UL<<3)
#define Status_Homing                    (1UL<<2)
#define Status_StandStill                (1UL<<1)
#define Status_Disabled                  (1UL)

#define MS_HALT_DONE                (1UL<<31)
#define MS_HALT_BUSY                (1UL<<30)
#define MS_HALT_CABORTED            (1UL<<29)
#define MS_HALT_ERROR               (1UL<<28)
#define MS_RESET_DONE               (1UL<<27)
#define MS_RESET_BUSY               (1UL<<26)
//#define MS_RESET_CABORTED             (1UL<<25)
#define MS_RESET_ERROR              (1UL<<24)
#define MS_STOP_DONE                (1UL<<23)
#define MS_STOP_BUSY                (1UL<<22)
#define MS_STOP_CABORTED            (1UL<<21)
#define MS_STOP_ERROR               (1UL<<20)
#define MS_VELOCITY_INVELOCITY      (1UL<<19)
#define MS_VELOCITY_BUSY            (1UL<<18)
#define MS_VELOCITY_CABORTED        (1UL<<17)
#define MS_VELOCITY_ERROR           (1UL<<16)
#define MS_ADDITIVE_DONE            (1UL<<15)
#define MS_ADDITIVE_BUSY            (1UL<<14)
#define MS_ADDITIVE_CABORTED        (1UL<<13)
#define MS_ADDITIVE_ERROR           (1UL<<12)
#define MS_ABSOLUTE_DONE            (1UL<<11)
#define MS_ABSOLUTE_BUSY            (1UL<<10)
#define MS_ABSOLUTE_CABORTED        (1UL<<9 )
#define MS_ABSOLUTE_ERROR           (1UL<<8 )
#define MS_HOME_DONE                (1UL<<7 )
#define MS_HOME_BUSY                (1UL<<6 )
#define MS_HOME_CABORTED            (1UL<<5 )
#define MS_HOME_ERROR               (1UL<<4 )
#define MS_POWER_STATUS             (1UL<<3 )
#define MS_POWER_BUSY               (1UL<<2 )
//#define MS_POWER_CABORTED             (1UL<<1 )
#define MS_POWER_ERROR              (1UL)

#define MS_WRITE_PAR_DONE           (1UL<<3 )
#define MS_WRITE_PAR_BUSY           (1UL<<2 )
//#define MS_WRITE_PAR_CABORTED           (1UL<<1 )
#define MS_WRITE_PAR_ERROR          (1UL)


#define ERROR_POWER_FAIL            7053
#define ERROR_HOME_FAIL             29205
#define ERROR_STATE_MACHINE         29202
#define ERROR_EPL_CN_NOT_READY      0x414E

#define ERROR_WR_PARA_TIMEOUT       32205



/*----------------------------------------------------------------------------*/
/*                                types                                       */
/*----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------*/
/*                                data                                        */
/*----------------------------------------------------------------------------*/

extern int pre_err_id;
extern int nmt_ok;
extern unsigned int uiCnt_g;
extern int AxisState;
/*----------------------------------------------------------------------------*/
/*                                functions                                   */
/*----------------------------------------------------------------------------*/

//---------------------------------------------------------------------------
//
// Function:    AppCbSync
//
// Description: sync event callback function called by event module within
//              kernel part (high priority).
//              This function sets the outputs, reads the inputs and runs
//              the control loop.
//
// Parameters:  void
//
// Returns:     tEplKernel      = error code,
//                                kEplSuccessful = no error
//                                otherwise = post error event to API layer
//
// State:
//
//---------------------------------------------------------------------------

tEplKernel PUBLIC AppCbSync(void);
//---------------------------------------------------------------------------
//
// Function:    AppInit
//
// Description: initialize application
//
// Parameters:  void
//
// Returns:     tEplKernel      = error code,
//                                kEplSuccessful = no error
//                                otherwise = post error event to API layer
//
// State:
//
//---------------------------------------------------------------------------

tEplKernel PUBLIC AppInit(void);

void get_err_str(int err_id, char* err_str);

#endif
