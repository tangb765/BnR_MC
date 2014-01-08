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

DESCRIPTION  :

Revision     : $Revision$

Revision control header:
$Id$

Revision History:
$Log$


*******************************************************************************/



/*----------------------------------------------------------------------------*/
/*                            INCLUDE FILES                                   */
/*----------------------------------------------------------------------------*/

/* includes */
#include <stdio.h>
#include <unistd.h>
#include "Epl.h"
#include "mc_epl.h"
#include "mc.h"

/*----------------------------------------------------------------------------*/
/*                                defines                                     */
/*----------------------------------------------------------------------------*/



/*----------------------------------------------------------------------------*/
/*                                types                                       */
/*----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------*/
/*                                data                                        */
/*----------------------------------------------------------------------------*/
int pre_err_id = 0;
unsigned int uiCnt_g;
int AxisState = STATE_WAIT;


/*----------------------------------------------------------------------------*/
/*                                functions                                   */
/*----------------------------------------------------------------------------*/

void get_err_str(int err_id, char* err_str);


/*******************************************************************************
 * function:
 *  mc_move_absolute
 *
 * description:
 *  This function commands a controlled motion at a specific absolute position.
 *  If command is executed successfully, 0 is returned; otherwise, corresponding
 *  error number is returned.
 *
 * input:
 *  Position: Target position for the motion [Units].
 *  velocity: Value of maximum velocity [Units/sec] (not necessarily reached).
 *  acceleration: Value of maximum acceleration [Units/sec2] (not necessarily
 *					reached).
 *  deceleration: Value of maximum deceleration [Units/sec2] (not necessarily
 *					reached).
 *  Direction: Movement direction:
 *					mcPOSITIVE_DIR ... 0
 *					mcNEGATIVE_DIR ... 1
 *					mcCURRENT_DIR .... 2
 *					mcSHORTEST_WAY ... 3
 *					mcEXCEED_PERIOD .. 8
 *					mcAUTOMAT_POS .. 100
 *
 * output:
 *  none
 *
 * return:
 *  errid: error number
 *
 ******************************************************************************/

int mc_move_absolute(int Position, int velocity,
	int acceleration, int deceleration, int Direction)
{
	unsigned int old_epl_cnt = uiCnt_g;

	printf("function %s line %d\n", __FUNCTION__, __LINE__);
    if(AppProcessImageOut_g.CN2_M00_MC_Status1_ErrorCode != 0)
        return AppProcessImageOut_g.CN2_M00_MC_Status1_ErrorCode;

    if(AxisState != STATE_READY && AxisState != STATE_MOVE_ABSOLUTE)
		return ERROR_STATE_MACHINE;

    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterPosition = Position;
    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterVelocity = velocity;
    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterAcceleration = acceleration;
    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterDeceleration = deceleration;
    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterDirection = Direction;

    AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord |= CW_MoveAbsolute;

    while((uiCnt_g - old_epl_cnt) < 200)
    {
        if((AppProcessImageOut_g.CN2_M00_MC_Status3_MovementStatusWord & MS_ABSOLUTE_BUSY) != 0)
        {
         	printf("time costs %d*10 ms for mc_move_absolute\n", uiCnt_g - old_epl_cnt);
            return 0;
        }
        usleep(5000);
    }

    return ERROR_WR_PARA_TIMEOUT;
}
/*******************************************************************************
 * function:
 *  mc_move_additive
 *
 * description:
 *  This function commands a controlled motion of a specific relative distance
 *  that is added to the last commanded position. If command is executed
 *  successfully, 0 is returned; otherwise, corresponding error number is
 *  returned.
 *
 * input:
 *  distance: Relative distance for the motion [Units].
 *  velocity: Value of maximum velocity [Units/sec] (not necessarily reached).
 *  acceleration: Value of maximum acceleration [Units/sec2] (not necessarily
 *					reached).
 *  deceleration: Value of maximum deceleration [Units/sec2] (not necessarily
 *					reached).
 *
 * output:
 *  none
 *
 * return:
 *  errid: error number
 *
 ******************************************************************************/
int mc_move_additive(int distance, int velocity,
	int acceleration, int deceleration)
{
    if(AppProcessImageOut_g.CN2_M00_MC_Status1_ErrorCode != 0)
        return AppProcessImageOut_g.CN2_M00_MC_Status1_ErrorCode;

	if(AxisState != STATE_READY)
		return ERROR_STATE_MACHINE;

    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterDistance = distance;
    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterVelocity = velocity;
    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterAcceleration = acceleration;
    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterDeceleration = deceleration;

    AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord |= CW_MoveAdditive;

    return 0;

}
/*******************************************************************************
 * function:
 *  mc_move_velocity
 *
 * description:
 *  This function commands an "Axis" to move a specified velocity in a specific
 *  direction. If command is executed successfully, 0 is returned; otherwise,
 *  corresponding error number is returned.
 *
 *  To stop motion, the function block has to be interrupted by another
 *  function block issuing a new command.
 *
 * input:
 *  velocity: Value of maximum velocity [Units/sec] (not necessarily reached).
 *  acceleration: Value of maximum acceleration [Units/sec2] (not necessarily
 *					reached).
 *  deceleration: Value of maximum deceleration [Units/sec2] (not necessarily
 *					reached).
 *  Direction: Movement direction:
 *					mcPOSITIVE_DIR ... 0
 *					mcNEGATIVE_DIR ... 1
 *					mcCURRENT_DIR .... 2
 *
 * output:
 *  none
 *
 * return:
 *  errid: error number
 *
 ******************************************************************************/
int mc_move_velocity(int velocity, int acceleration,
	int deceleration, int Direction)
{
    unsigned int old_epl_cnt = uiCnt_g;

    printf("function %s line %d\n", __FUNCTION__, __LINE__);

    if(AppProcessImageOut_g.CN2_M00_MC_Status1_ErrorCode != 0)
        return AppProcessImageOut_g.CN2_M00_MC_Status1_ErrorCode;

	if(AxisState != STATE_READY && AxisState != STATE_MOVE_VELOCITY)
		return ERROR_STATE_MACHINE;

    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterVelocity = velocity;
    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterAcceleration = acceleration;
    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterDeceleration = deceleration;
    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterDirection = Direction;

    AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord |= CW_MoveVelocity;

    while((uiCnt_g - old_epl_cnt) < 200)
    {
        if((AppProcessImageOut_g.CN2_M00_MC_Status3_MovementStatusWord & MS_VELOCITY_BUSY) != 0)
        {
         	printf("time costs %d*10 ms for mc_move_velocity\n", uiCnt_g - old_epl_cnt);
            return 0;
        }
        usleep(5000);
    }
    return 0;

}
/*******************************************************************************
 * function:
 *  mc_set_positive_end_position
 *
 * description:
 *  This command sets the limit position in positive direction for movement.
 *  If command is executed successfully, 0 is returned; otherwise,
 *  corresponding error number is returned.
 *
 * input:
 *  position: Absolute limited position in positive direction for
 *  movement [Units].
 *
 * output:
 *  none
 *
 * return:
 *  errid: error number
 *
 ******************************************************************************/
int mc_set_positive_end_position(int position)
{

    unsigned int old_epl_cnt = uiCnt_g;

    if(AppProcessImageOut_g.CN2_M00_MC_Status1_ErrorCode != 0)
        return AppProcessImageOut_g.CN2_M00_MC_Status1_ErrorCode;

	if(AxisState != STATE_READY && AxisState != STATE_WTIRE_PARA)
		return ERROR_STATE_MACHINE;

    AppProcessImageIn_g.CN2_M80_MC_Control_ParaID = 126;
    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParaValue = position;

    AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord |= CW_SetSWEndSwitch;

    while((uiCnt_g - old_epl_cnt) < 20)
    {
        if((AppProcessImageOut_g.CN2_M00_MC_Status3_ControlStatusWord & MS_WRITE_PAR_DONE) != 0)
            return 0;
        usleep(5000);
    }

    return ERROR_WR_PARA_TIMEOUT;
}
/*******************************************************************************
 * function:
 *  mc_set_negative_end_position
 *
 * description:
 *  This command sets the limit position in negative direction for movement.
 *  If command is executed successfully, 0 is returned; otherwise,
 *  corresponding error number is returned.
 *
 * input:
 *  position: Absolute limited position in negative direction for
 *  movement [Units].
 *
 * output:
 *  none
 *
 * return:
 *  errid: error number
 *
 ******************************************************************************/
int mc_set_negative_end_position(int position)
{
    unsigned int old_epl_cnt = uiCnt_g;

    if(AppProcessImageOut_g.CN2_M00_MC_Status1_ErrorCode != 0)
        return AppProcessImageOut_g.CN2_M00_MC_Status1_ErrorCode;

	if(AxisState != STATE_READY && AxisState != STATE_WTIRE_PARA)
		return ERROR_STATE_MACHINE;

    AppProcessImageIn_g.CN2_M80_MC_Control_ParaID = 127;
    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParaValue = position;

    AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord |= CW_SetSWEndSwitch;

    while((uiCnt_g - old_epl_cnt) < 20)
    {
        if((AppProcessImageOut_g.CN2_M00_MC_Status3_ControlStatusWord & MS_WRITE_PAR_DONE) != 0)
            return 0;
        usleep(5000);
    }

    return ERROR_WR_PARA_TIMEOUT;
}
/*******************************************************************************
 * function:
 *  mc_stop
 *
 * description:
 *  This function commands a controlled motion stop and transfers the axis to
 *  the state stopping. If command is executed successfully, 0 is returned;
 *  otherwise, corresponding error number is returned.
 *
 * input:
 *  deceleration: Value of maximum deceleration [Units/sec2] (not necessarily
 *					reached).
 *
 * output:
 *  none
 *
 * return:
 *  errid: error number
 *
 ******************************************************************************/
int mc_stop(int deceleration)
{
	unsigned int old_epl_cnt = uiCnt_g;

	printf("function %s line %d\n", __FUNCTION__, __LINE__);
    if(AppProcessImageOut_g.CN2_M00_MC_Status1_ErrorCode != 0)
    {
		printf("line %d error id %d\n", AppProcessImageOut_g.CN2_M00_MC_Status1_ErrorCode);
        return AppProcessImageOut_g.CN2_M00_MC_Status1_ErrorCode;
	}

    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterDeceleration = deceleration;
    AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord |= CW_Stop;

    while((uiCnt_g - old_epl_cnt) < 200)
    {
        if((AppProcessImageOut_g.CN2_M00_MC_Status3_MovementStatusWord & MS_STOP_DONE) != 0)
        {
         	printf("time costs %d*10 ms for mc_stop\n", uiCnt_g - old_epl_cnt);
       		usleep(5000);
            return 0;
        }
        usleep(5000);
    }

    return ERROR_WR_PARA_TIMEOUT;
}
/*******************************************************************************
 * function:
 *  mc_reset_error
 *
 * description:
 *  This function resets all internal axis related errors. If command is
 *  executed successfully, 0 is returned; otherwise, corresponding error number
 *  is returned.
 *
 * input:
 *  none
 *
 * output:
 *  none
 *
 * return:
 *  errid: error number
 *
 ******************************************************************************/
int mc_reset_error()
{
    pre_err_id = AppProcessImageOut_g.CN2_M00_MC_Status1_ErrorCode;
    AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord |= CW_ErrorAcknowledge;
    return 0;
}
/*******************************************************************************
 * function:
 *  mc_get_position
 *
 * description:
 *  This function retrieves actual position of the axis.
 *
 * input:
 *  none
 *
 * output:
 *  none
 *
 * return:
 *  Position: Actual position of the axis
 *
 ******************************************************************************/
int mc_get_position()
{
    return AppProcessImageOut_g.CN2_MC0_MC_Status2_ActualPosition;
}
/*******************************************************************************
 * function:
 *  mc_get_velocity
 *
 * description:
 *  This function retrieves actual velocity of the axis.
 *
 * input:
 *  none
 *
 * output:
 *  none
 *
 * return:
 *  Velocity: Actual velocity of the axis
 *
 ******************************************************************************/
int mc_get_velocity()
{
    return AppProcessImageOut_g.CN2_MC0_MC_Status2_ActualVelocity;
}
/*******************************************************************************
 * function:
 *  mc_get_error_id
 *
 * description:
 *  This function retrieves error number of the axis.
 *
 * input:
 *  none
 *
 * output:
 *  none
 *
 * return:
 *  error_id: error number
 *
 ******************************************************************************/

int mc_get_error_id()
{
    return AppProcessImageOut_g.CN2_M00_MC_Status1_ErrorCode;
}
/*******************************************************************************
 * function:
 *  mc_power
 *
 * description:
 *  This function switches on the controller of the axis. If command is executed
 *  successfully, 0 is returned; otherwise, corresponding error number  is
 *  returned.
 *
 * input:
 *  none
 *
 * output:
 *  none
 *
 * return:
 *  errid: error number
 *
 ******************************************************************************/
int mc_power()
{

    unsigned int old_epl_cnt;

    old_epl_cnt = uiCnt_g;

    if((AppProcessImageOut_g.CN2_M00_MC_Status1_AxisStatusWord & Status_Disabled) == 0)
    	return 0;

    AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord |= CW_Power;

    while((uiCnt_g - old_epl_cnt) < 20)
    {
        if((AppProcessImageOut_g.CN2_M00_MC_Status3_MovementStatusWord & MS_POWER_STATUS) != 0)
            return 0;
        usleep(10000);
    }

    return ERROR_POWER_FAIL;
}
/*******************************************************************************
 * function:
 *  mc_home
 *
 * description:
 *  This command starts the homing movement of an axis according to the inputs
 *  of the function block and the homing parameters included in the axis
 *  structure. If command is executed successfully, 0 is returned; otherwise,
 *  corresponding error number is returned.
 *
 * input:
 *  Position: Absolute position when the reference signal is detected [Units].
 *   Note:
 *     The position is not used with modes mcHOME_AXIS_REF and
 *     mcHOME_RESTORE_POS
 *
 *  Direction: Movement direction:
 *  Homing Modes:
 *   	mcHOME_DEFAULT .. 0(use Parameter from Axis-INIT-Module)
 *   	mcHOME_DIRECT .. 1
 *   	mcHOME_ABS_SWITCH .. 2
 *   	mcHOME_LIMIT_SWITCH .. 3
 *   	mcHOME_ABSOLUTE .. 4(offset for Absolute Encoder)
 *   	mcHOME_REF_PULSE .. 5
 *   	mcHOME_ABSOLUTE_CORR .. 6(offset for Absolute Encoder with counter
 *			range correction)
 *   	mcHOME_SET_PHASE .. 7
 *   	mcHOME_SWITCH_GATE .. 8
 *   	mcHOME_DCM .. 9(distance coded reference marks)
 *   	mcHOME_DCM_CORR .. 10 (distance coded reference marks with counting
 *			range correction)
 *   	mcHOME_RESTORE_POS .. 11(Restore position from permanent memory,
 *			see BR_InitEndlessPosition)
 *   	mcHOME_AXIS_REF .. 12(all parameter of the axis structure are used)
 *
 * output:
 *  none
 *
 * return:
 *  errid: error number
 *
 ******************************************************************************/
int mc_home(int Position, int HomingMode)
{
    unsigned int old_epl_cnt;

    if((AppProcessImageOut_g.CN2_M00_MC_Status1_AxisStatusWord & Status_HomeingOK) != 0)
    	return 0;

    AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord |= CW_Home;

    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterHomePosition = Position;
    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterHomeMode = HomingMode;

    old_epl_cnt = uiCnt_g;

    while((uiCnt_g - old_epl_cnt) < 20)
    {
        if((AppProcessImageOut_g.CN2_M00_MC_Status1_AxisStatusWord & Status_HomeingOK) != 0
    		|| (AppProcessImageOut_g.CN2_M00_MC_Status3_MovementStatusWord & MS_HOME_DONE) != 0)
        {
            return 0;
        }
        usleep(10000);
    }

    return ERROR_HOME_FAIL;

}
/*******************************************************************************
 * function:
 *  mc_init
 *
 * description:
 *  This function initializes Ethernet Powerlink network and motor. If no
 *  errors are present on the network, 0 is returned; otherwise, corresponding
 *  error number is returned.
 *
 * input:
 *  devName: The Ethernet device name for powerlink network
 *
 * output:
 *  none
 *
 * return:
 *  ret: error number
 *
 ******************************************************************************/
int mc_init(char* devName)
{

    int ret;
    int try_cnt = 0;

    try_cnt = 0;
    while(try_cnt < 3)
    {
        ret = epl_init(devName);
        if(ret==kEplSuccessful)
            break;
        try_cnt++;
    }
    if(try_cnt==3)
    {
    	printf("epl_init failure line %d\n", __LINE__);
        return ret+0x4000;
    }
    printf("epl_init ok line %d\n", __LINE__);

    try_cnt = 0;
    while(try_cnt < 80)
    {
    	if(nmt_ok != 0)
    	{
    	    printf("try_cnt is %d @line %d\n", try_cnt, __LINE__);
    		break;
    	}
		usleep(100000);
        try_cnt++;
    }
    if(try_cnt>=80)
    {
    	printf("epl_nmt_state failure line %d\n", __LINE__);
        return ERROR_EPL_CN_NOT_READY;
    }
    printf("epl_nmt_state ok line %d\n", __LINE__);

	try_cnt = 0;
    while(try_cnt < 3)
    {
        ret = mc_power();
        if(ret==0)
            break;
        try_cnt++;
    }
    if(try_cnt==3)
    {
        return ret;
    }

	printf("power ok line %d\n", __LINE__);

	try_cnt = 0;
    while(try_cnt < 3)
    {
        ret = mc_home(0,0);
        if(ret==0)
            break;
        try_cnt++;

    }
    if(try_cnt==3)
    {
        return ret;
    }
	printf("home ok line %d\n", __LINE__);

    return 0;

}

/*******************************************************************************
 * function:
 *  PrintMCStatus
 *
 * description:
 *  This function prints status of movement for debugging
 *
 * input:
 *  none
 *
 * output:
 *  none
 *
 * return:
 *  none
 *
 ******************************************************************************/

void PrintMCStatus()
{
    printf("axisstate is %03d\n",AxisState);
    printf("setting commandword is 0x%04x\n", AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord);
    printf("actual statusword is 0x%04x\n", AppProcessImageOut_g.CN2_M00_MC_Status1_AxisStatusWord);
    printf("movement status is 0x%08x\n", AppProcessImageOut_g.CN2_M00_MC_Status3_MovementStatusWord);
    printf("control status is 0x%08x\n", AppProcessImageOut_g.CN2_M00_MC_Status3_ControlStatusWord);
    printf("actual errid is %d\n", AppProcessImageOut_g.CN2_M00_MC_Status1_ErrorCode);
    printf("actual velocity is %d\n", AppProcessImageOut_g.CN2_MC0_MC_Status2_ActualVelocity);
    printf("actual position is %d\n", AppProcessImageOut_g.CN2_MC0_MC_Status2_ActualPosition);
}


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
tEplKernel PUBLIC AppInit(void)
{
    tEplKernel EplRet = kEplSuccessful;

    uiCnt_g = 0;

    AxisState = STATE_WAIT;
    AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord = 0;

    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterVelocity = 200;
    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterAcceleration = 50;
    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterDeceleration = 50;
    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterJogVelocity = 5;
    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterJogVelocity = 5;
    AppProcessImageIn_g.CN2_M40_MC_Parameter_ParameterHomeMode = 0;
    return EplRet;
}




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

int err_output_switch = 1;
char err_string[256];
tEplKernel PUBLIC AppCbSync(void)
{
    tEplKernel          EplRet;

    EplRet = EplApiProcessImageExchange(&AppProcessImageCopyJob_g);
    if (EplRet != kEplSuccessful)
    {
        return EplRet;
    }

    uiCnt_g++;

    if(AppProcessImageOut_g.CN2_M00_MC_Status1_ErrorCode != 0 && err_output_switch)
    {

        printf("actual statusword is 0x%04x\n", AppProcessImageOut_g.CN2_M00_MC_Status1_AxisStatusWord);
        get_err_str(AppProcessImageOut_g.CN2_M00_MC_Status1_ErrorCode, err_string);
    	printf("actual errid is \n\t%s\n", err_string);
    	err_output_switch = 0;
    }

	switch(AxisState)
	{
	/******************** WAIT *************************/
	    case STATE_WAIT:  /* STATE: Wait */
	        if ((AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord & CW_Power) != 0)
	        {
	            AxisState = STATE_POWER_ON;
	        }
            else if((AppProcessImageOut_g.CN2_M00_MC_Status3_MovementStatusWord & MS_POWER_STATUS) != 0)
	        {
                AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord |= CW_Power;
	            AxisState = STATE_READY;
	        }
	        /* reset user commands */
            AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_Home;
            AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_Stop;
            AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_MoveAbsolute;
            AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_MoveAdditive;
            AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_MoveJogNeg;
            AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_MoveAdditive;
            AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_MoveVelocity;
            AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_Halt;

	    break;

	/******************** POWER ON **********************/
	    case STATE_POWER_ON:  /* STATE: Power on */
	        if((AppProcessImageOut_g.CN2_M00_MC_Status3_MovementStatusWord & MS_POWER_STATUS) != 0)
	        {
	            AxisState = STATE_READY;
	        }
	        /* if a power error occured go to error state */
	        if (AppProcessImageOut_g.CN2_M00_MC_Status1_ErrorCode != 0)
	        {
	            AxisState = STATE_ERROR;
	        }
	    break;

	/******************** READY **********************/
	    case STATE_READY:  /* STATE: Waiting for commands */
	    	//printf("line %d\n", __LINE__);
	        if ((AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord & CW_Home) != 0)
	        {
	    	    printf("line %d\n", __LINE__);
                AxisState = STATE_HOME;
	        }
	        else if ((AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord & CW_Stop) != 0)
	        {
	            AxisState = STATE_STOP;
	        }
	        else if ((AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord & CW_MoveAbsolute) != 0)
	        {
	            AxisState = STATE_MOVE_ABSOLUTE;
	        }
	        else if ((AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord & CW_MoveAdditive) != 0)
	        {
	            AxisState = STATE_MOVE_ADDITIVE;
	        }
	        else if ((AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord & CW_MoveVelocity) != 0)
	        {
	            AxisState = STATE_MOVE_VELOCITY;
	        }
	        else if ((AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord & CW_ErrorAcknowledge) != 0)
	        {
	            AxisState = STATE_ERROR_RESET;
	        }
	        else if ((AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord & CW_SetSWEndSwitch) != 0)
	        {
	            AxisState = STATE_WTIRE_PARA;
	        }
	    break;

	/******************** HOME **********************/
	    case STATE_HOME:  /* STATE: start homing process */
	    	//printf("line %d\n", __LINE__);
	        if((AppProcessImageOut_g.CN2_M00_MC_Status1_AxisStatusWord & Status_HomeingOK) != 0
	        		|| (AppProcessImageOut_g.CN2_M00_MC_Status3_MovementStatusWord & MS_HOME_DONE) != 0)
            {
	        	printf("home ok\n");
                AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_Home;
                AxisState = STATE_READY;
            }
	        /* if a homing error occured go to error state */
	        if ((AppProcessImageOut_g.CN2_M00_MC_Status3_MovementStatusWord & MS_HOME_ERROR) != 0)
	        {
                AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_Home;
	            AxisState = STATE_ERROR;
	        }
	    break;

	/******************** write parameter **********************/
	    case STATE_WTIRE_PARA:  /* STATE: start parameter writing process */
	        if((AppProcessImageOut_g.CN2_M00_MC_Status3_ControlStatusWord & MS_WRITE_PAR_DONE) != 0)
            {
	        	printf("SWEndSwitch ok\n");
                AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_SetSWEndSwitch;
                AxisState = STATE_READY;
            }
	        /* if a parameter writing error occured go to error state */
	        if ((AppProcessImageOut_g.CN2_M00_MC_Status3_ControlStatusWord & MS_WRITE_PAR_ERROR) != 0)
	        {
                AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_SetSWEndSwitch;
	            AxisState = STATE_ERROR;
	        }
	    break;

	/*********************** STOP MOVEMENT *************************/
	    case STATE_STOP: /* STATE: Stop movement as long as command is set */
	        /* if axis is stopped go to ready state */
	        if ((AppProcessImageOut_g.CN2_M00_MC_Status3_MovementStatusWord & MS_STOP_DONE) != 0)
	        {
	            AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_Stop;
	            AxisState = STATE_READY;
	        	printf("mc_stop ok\n");
	        }
	        /* check if error occured */
	        if ((AppProcessImageOut_g.CN2_M00_MC_Status3_MovementStatusWord & MS_STOP_ERROR) != 0)
	        {
	            AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_Stop;
	            AxisState = STATE_ERROR;
	        }
	    break;

	/******************** START ABSOLUTE MOVEMENT **********************/
	    case STATE_MOVE_ABSOLUTE:  /* STATE: Start absolute movement */
	        /* check if commanded position is reached */
	        if ((AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord & CW_Stop)!= 0)
	        {
                AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_MoveAbsolute;
                printf("absolute aborted\n");
	            AxisState = STATE_STOP;
	        }
	        else if ((AppProcessImageOut_g.CN2_M00_MC_Status3_MovementStatusWord & MS_ABSOLUTE_DONE) != 0)
	        {
                AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_MoveAbsolute;
                printf("absolute ok\n");
                AxisState = STATE_READY;
	        }
	        /* check if error occured */
	        if ((AppProcessImageOut_g.CN2_M00_MC_Status3_MovementStatusWord & MS_ABSOLUTE_ERROR) != 0)
	        {
	            AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_MoveAbsolute;
	            AxisState = STATE_ERROR;
	        }
	    break;

	/******************** START ADDITIVE MOVEMENT **********************/
	    case STATE_MOVE_ADDITIVE:  /* STATE: Start additive movement */
	        /* check if commanded distance is reached */
	        if ((AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord & CW_Stop) != 0)
	        {
                AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_MoveAdditive;
                printf("additive aborted\n");
	            AxisState = STATE_STOP;
	        }
	        else if ((AppProcessImageOut_g.CN2_M00_MC_Status3_MovementStatusWord & MS_ADDITIVE_DONE) != 0)
	        {
                AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_MoveAdditive;
                printf("additive ok\n");
	            AxisState = STATE_READY;
	        }
	        /* check if error occured */
	        if ((AppProcessImageOut_g.CN2_M00_MC_Status3_MovementStatusWord & MS_ADDITIVE_ERROR) != 0)
	        {
	            AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_MoveAdditive;
	            AxisState = STATE_ERROR;
	        }

	    break;

	/******************** START VELOCITY MOVEMENT **********************/
	    case STATE_MOVE_VELOCITY:  /* STATE: Start velocity movement */
	        /* check if commanded velocity is reached */
	        if ((AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord & CW_Stop)!= 0)
	        {
                AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_MoveVelocity;
                printf("velocity aborted\n");
	            AxisState = STATE_STOP;
	        }
	        else if ((AppProcessImageOut_g.CN2_M00_MC_Status3_MovementStatusWord & MS_VELOCITY_INVELOCITY) != 0)
	        {
                AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_MoveVelocity;
                printf("velocity ok\n");
	            AxisState = STATE_READY;
	        }
	        /* check if error occured */
	        if ((AppProcessImageOut_g.CN2_M00_MC_Status3_MovementStatusWord & MS_VELOCITY_ERROR) != 0)
	        {
	            AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_MoveVelocity;
	            AxisState = STATE_ERROR;
	        }
	    break;

	/******************** FB-ERROR OCCURED *************************/
	    case STATE_ERROR:  /* STATE: Error */
	        /* check if FB indicates an axis error */
            if ((AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord & CW_ErrorAcknowledge) != 0)
            {
                AxisState = STATE_ERROR_RESET;
            }
	    break;

	/******************** RESET DONE *************************/
	    case STATE_ERROR_RESET:  /* STATE: Wait for reset done */
	        /* reset MC_Power.Enable if this FB is in Error*/
	        if((AppProcessImageOut_g.CN2_M00_MC_Status3_MovementStatusWord & MS_RESET_DONE) != 0
	        	|| AppProcessImageOut_g.CN2_M00_MC_Status1_ErrorCode != pre_err_id
	        	|| AppProcessImageOut_g.CN2_M00_MC_Status1_ErrorCode == 0)
	        {
	        	err_output_switch = 1;
	            AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_ErrorAcknowledge;
	            AxisState = STATE_WAIT;
	        }
	        else if ((AppProcessImageOut_g.CN2_M00_MC_Status3_MovementStatusWord & MS_RESET_ERROR) != 0)
	        {
	            AppProcessImageIn_g.CN2_M80_MC_Control_CommandWord &= ~CW_ErrorAcknowledge;
	            AxisState = STATE_ERROR;
	        }
	    break;
	    default:
	    	break;
	/******************** SEQUENCE END *************************/
	}

    return EplRet;
}



