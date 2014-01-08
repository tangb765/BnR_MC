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
    return 0;
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
    return 0;
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
    return 0;
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
    //printf("epl_init ok line %d\n", __LINE__);

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
    	//printf("epl_nmt_state failure line %d\n", __LINE__);
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
#if 0
	AppProcessImageIn_g.CN2_M40_InputChannel_REC_DisableOperationCode			= 1;
	AppProcessImageIn_g.CN2_M40_InputChannel_REC_HaltCode						= 1;
	AppProcessImageIn_g.CN2_M40_InputChannel_REC_FaultReactionCode				= 2;
	AppProcessImageIn_g.CN2_M40_InputChannel_REC_AbortOptionCode				= 3;
	AppProcessImageIn_g.CN2_M40_InputChannel_REC_QuickStopCode					= 2;
	AppProcessImageIn_g.CN2_M40_InputChannel_REC_ShutDownCode = 0;
	
	AppProcessImageIn_g.CN2_M80_InputChannel_REC_HomingSwitchVelocity			= 1000;
	AppProcessImageIn_g.CN2_M80_InputChannel_REC_HomingZeroVelocity				= 1000;
	AppProcessImageIn_g.CN2_M80_InputChannel_REC_HomeAcceleration				= 1000;
#endif
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


int AutoHome = 0;
int wait = 0;
int test = 1;
int test2;

typedef struct 
{
	int bit_0;

} statusword;

tEplKernel PUBLIC AppCbSync(void)
{
    tEplKernel          EplRet;

    EplRet = EplApiProcessImageExchange(&AppProcessImageCopyJob_g);
    if (EplRet != kEplSuccessful)
    {
        return EplRet;
    }

    uiCnt_g++;

#if 0
	static UINT uiDigitalModData = 1;
	int ch1;
	int ch2 = 0;
	static UINT uiCount = 0;
	static const UINT uiWait = 10;




	uiDigitalModData++;
	
	switch (AutoHome)
	{

		case 0:	//wait connection
		{	
			AppProcessImageIn_g.CN2_M80_InputChannel_REC_ControlWord = 0;

			if	(AppProcessImageOut_g.CN2_M00_OutChannel_REC_StatusWord != 0)
			{
				if ( ++uiCount > uiWait )
				{
					uiCount = 0;
					AutoHome = 1;
					printf("Connection complete\n");
				}
			}
		}
		break;

		case 1:	//auto error acknowledge
		{
			if	(AppProcessImageOut_g.CN2_M00_OutChannel_REC_ErrorCode != 0)	//check if error
			{
				if ( ++uiCount > uiWait )
				{
					uiCount = 0;

					AppProcessImageIn_g.CN2_M80_InputChannel_REC_ControlWord = 128;
					AutoHome = 0;
					printf("clear errors not complete\n");
				}
			}
			else	//no error
			{
				if ( ++uiCount > uiWait )
				{
					uiCount = 0;

					AutoHome = 2;
					printf("No errors complete\n");
				}
			}
		}
		break;

		case 2:	//shutdown
		{
			AppProcessImageIn_g.CN2_M80_InputChannel_REC_ControlWord = 6;

			if(AppProcessImageOut_g.CN2_M00_OutChannel_REC_StatusWord & 0x0001) // 0000000000000001 check ready to switch on
			{
				if ( ++uiCount > uiWait )
				{
					uiCount = 0;

					AutoHome = 3;
					printf("Shutdown complete\n");
				}
			}
		}
		break;

		case 3:	//switch on
		{
			AppProcessImageIn_g.CN2_M80_InputChannel_REC_ControlWord = 7;

			if(AppProcessImageOut_g.CN2_M00_OutChannel_REC_StatusWord & 0x0002) // 0000000000000010 check bit switched on
			{
				if ( ++uiCount > uiWait )
				{
					uiCount = 0;

					AutoHome = 4;
					printf("Switch on complete\n");
				}
			}
		}
		break;

		case 4:	//enable homing
		{
			AppProcessImageIn_g.CN2_M80_InputChannel_REC_ModesOfOperation = 6;
			AppProcessImageIn_g.CN2_M80_InputChannel_REC_HomingMethod = -128;
			AppProcessImageIn_g.CN2_M80_InputChannel_REC_ControlWord = 15;

			if(AppProcessImageOut_g.CN2_M00_OutChannel_REC_StatusWord & 0x0004) // 0000000000000100 check mode bit enabled
			{
				if ( ++uiCount > uiWait )
				{
					uiCount = 0;

					AutoHome = 5;
					printf("Enable homing complete\n");
				}
			}
		}
		break;

		case 5:	//start homing
		{
			AppProcessImageIn_g.CN2_M80_InputChannel_REC_ControlWord = 31;

			if(AppProcessImageOut_g.CN2_M00_OutChannel_REC_StatusWord & 0x3000) // 0011000000000000 check homing done
			{
				if ( ++uiCount > uiWait )
				{
					uiCount = 0;

					AutoHome = 6;
					printf("Start homing complete\n");
				}
			}
		}
		break;

		case 6:	//disable operation
		{
			AppProcessImageIn_g.CN2_M80_InputChannel_REC_ControlWord = 7;

			if(AppProcessImageOut_g.CN2_M00_OutChannel_REC_StatusWord & 0x0002) // 0000000000000010 check switched on
			{
				if ( ++uiCount > uiWait )
				{
					uiCount = 0;

					AutoHome = 10;
					printf("Auto homing complete\n");
				}
			}
		}
		break;

		case 10: //auto homing done
		{
			if (_kbhit())
			{
				ch1 = getchar();
				printf("%c", ch1);

				switch (ch1)
				{
					case '1':	//shutdown
					{
						AppProcessImageIn_g.CN2_M80_InputChannel_REC_ControlWord = 6;
						break;
					}
					case '2':	//switch on
					{
						AppProcessImageIn_g.CN2_M80_InputChannel_REC_ControlWord = 7;
						break;
					}
					case '3':	//enable homing operation
					{
						AppProcessImageIn_g.CN2_M80_InputChannel_REC_ModesOfOperation = 6;
						AppProcessImageIn_g.CN2_M80_InputChannel_REC_HomingMethod = -128;
						AppProcessImageIn_g.CN2_M80_InputChannel_REC_ControlWord = 15;
						break;
					}
					case '4':	//home
					{
						AppProcessImageIn_g.CN2_M80_InputChannel_REC_ControlWord = 31;
						break;
					}
					case '5':	//disable operation
					{
						AppProcessImageIn_g.CN2_M80_InputChannel_REC_ControlWord = 7;
						break;
					}
					case '6':	//enable position move operation
					{
						AppProcessImageIn_g.CN2_M80_InputChannel_REC_ModesOfOperation = 1;
						AppProcessImageIn_g.CN2_M80_InputChannel_REC_ControlWord = 15;
						break;
					}
					case '7':	//new set point
					{
						AppProcessImageIn_g.CN2_M80_InputChannel_REC_ControlWord = 31;
						  AppProcessImageIn_g.CN2_M40_InputChannel_REC_TargetPosition = AppProcessImageIn_g.CN2_M40_InputChannel_REC_TargetPosition + 1000;
						  AppProcessImageIn_g.CN2_M80_InputChannel_REC_ProfileAcceleration = 5000;
						  AppProcessImageIn_g.CN2_M80_InputChannel_REC_ProfileDeceleration = 5000;
						  AppProcessImageIn_g.CN2_M80_InputChannel_REC_ProfileVelocity		= 1000;
						break;
					}
					case '8':	//new set point
					{
						AppProcessImageIn_g.CN2_M80_InputChannel_REC_ControlWord = 31;
						  AppProcessImageIn_g.CN2_M40_InputChannel_REC_TargetPosition = AppProcessImageIn_g.CN2_M40_InputChannel_REC_TargetPosition - 1000;
						  AppProcessImageIn_g.CN2_M80_InputChannel_REC_ProfileAcceleration = 5000;
						  AppProcessImageIn_g.CN2_M80_InputChannel_REC_ProfileDeceleration = 5000;
						  AppProcessImageIn_g.CN2_M80_InputChannel_REC_ProfileVelocity		= 1000;
						break;
					}

					case '9':	//enable profile velocity move operation
					{
						AppProcessImageIn_g.CN2_MC0_InputChannel_REC_Polarity = 0;
						AppProcessImageIn_g.CN2_M80_InputChannel_REC_ProfileAcceleration = 5000;
						AppProcessImageIn_g.CN2_M80_InputChannel_REC_ProfileDeceleration = 5000;
						AppProcessImageIn_g.CN2_M40_InputChannel_REC_TargetVelocity	= 5000;
						AppProcessImageIn_g.CN2_M80_InputChannel_REC_ModesOfOperation = 3;
						AppProcessImageIn_g.CN2_M80_InputChannel_REC_ControlWord = 15;
						break;
					}

					case '0':	//enable profile velocity move operation
					{
						AppProcessImageIn_g.CN2_MC0_InputChannel_REC_Polarity = 64;
						AppProcessImageIn_g.CN2_M80_InputChannel_REC_ProfileAcceleration = 5000;
						AppProcessImageIn_g.CN2_M80_InputChannel_REC_ProfileDeceleration = 5000;
						AppProcessImageIn_g.CN2_M40_InputChannel_REC_TargetVelocity	= 5000;
						AppProcessImageIn_g.CN2_M80_InputChannel_REC_ModesOfOperation = 3;
						AppProcessImageIn_g.CN2_M80_InputChannel_REC_ControlWord = 15;
						break;
					}

					case 'a':	//error reset
					{
						AppProcessImageIn_g.CN2_M80_InputChannel_REC_ControlWord = 128;
						break;
					}
					case 'b':	//error reset
					{
						AppProcessImageIn_g.CN2_M80_InputChannel_REC_ControlWord = 0;
						
						break;
					}
				}
			}
		}
		break;
	}

#endif

    return EplRet;
}

static void print_menu(void);

/*******************************************************************************
 * main()
 *
 * description: Send alarm message to alarm manager
 *
 ******************************************************************************/
int main(int argc, char *argv[])
{
    int position = 500;
    //print_menu();


    //printf("> \n");

    mc_init("eth1");
    #if 0
    while (1)
    {
        char cmd;

        scanf("%c", &cmd);
        switch(cmd)
        {
            case 'a':
            {
                epl_init("eth1");
                break;
            }
            case 'b':
            {
                epl_reset();
                break;
            }
            case 'c':
            {
                mc_init("eth1");
                break;
            }
            case 'd':
            {
                mc_reset_error();
                break;
            }
            case 'e':
            {
                int edge;
                scanf("%d", &edge);
                int ret = mc_set_positive_end_position(edge);
                printf("ret = %d\n", ret);
                break;
            }
            case 'f':
            {
                int edge;
                scanf("%d", &edge);
                int ret = mc_set_negative_end_position(edge);
                printf("ret = %d\n", ret);
                break;
            }
            case 'g':
            {
            	int cnt = 0;
            	while(cnt++<100)
            	{
                int ret = mc_move_absolute(1800,40,20,20,0);
                if(ret != 0)
                {
                	printf("ret = %d\n", ret);
                	PrintMCStatus();
                	break;
                }
                ret = mc_stop(10000);
                if(ret != 0)
                {
                	printf("ret = %d\n", ret);   
                	PrintMCStatus();   
                	break;
                }
                ret = mc_move_absolute(-1700,40,20,20,0);
                if(ret != 0)
                {
                	printf("ret = %d\n", ret);
                	PrintMCStatus();
                	break;
                }
                ret = mc_stop(10000);
                if(ret != 0)
                {
                	printf("ret = %d\n", ret);   
                	PrintMCStatus();   
                	break;
                }   
                }       	
                break;
            }            
            case '1':
            {
                mc_power();
                break;
            }
            case '2':
            {
                mc_home(0, 0);
                break;
            }
            case '3':
            {
                int pos, velocity;
                scanf("%d %d", &pos, &velocity);
                printf("pos is %d, velocity is %d\n", pos,velocity);
                mc_move_absolute(pos,velocity,20,20,0);
                position += 500;
                break;
            }
            case '4':
            {
                mc_move_additive(50,100,20,20);
                break;
            }
            case '5':
            {
            	int velocity, direction;
                scanf("%d %d", &velocity, &direction);
                mc_move_velocity(50,100,20,direction);
                break;
            }
            case '6':
            {
                PrintMCStatus();

                break;
            }
            case '7':
            {
                int ret = mc_stop(0);
                
                printf("ret =  %d\n", ret);
                break;
            }
            case '8':
            {
                printf("position is  %d\n", mc_get_position());
                break;
            }
            case '9':
            {
                printf("velocity is  %d\n", mc_get_velocity());
                break;
            }
            case '0':
            {
                unsigned short id;
                char str_err[256];
                id = mc_get_error_id();
                get_err_str(id, str_err);
                printf("error id is  %d\n", id);
                printf("error id is  %s\n", str_err);

                break;
            }
            case 'x':
            case 'X':
            {
                return 0;
            }
            case 'h':
            case 'H':
            {
                print_menu();
                break;
            }
            default:
            {
                printf("> ");
                break;
            }
        }
    }
    #else
    while(1)
        sleep(5);
    #endif

    return 0;
}

static void print_menu(void)
{
    printf("\n-------------------------------------------------\n");
    printf("Select from following:\n");
    printf("\ta                         -- init ethernet powerlink\n");
    printf("\tb                         -- reset ethernet powerlink\n");
    printf("\tc                         -- init b&r motor\n");
    printf("\td                         -- reset b&r motor\n");
    printf("\te <edge>                  -- set positive end position\n");
    printf("\tf <edge>                  -- set negative end position\n");
    printf("\t1                         -- power on motor\n");
    printf("\t2                         -- set home position\n");
    printf("\t3 <pos> <velocity>        -- absolute movement\n");
    printf("\t4                         -- additive movement\n");
    printf("\t5 <velocity> <dir>        -- movement in velocity\n");
    printf("\t6                         -- print axis status\n");
    printf("\t7                         -- stop movement\n");
    printf("\t8                         -- get actual position\n");
    printf("\t9                         -- get actual velocity\n");
    printf("\t0                         -- get actual error id\n");
    printf("\tx                         -- exit\n");
    printf("\th                         -- print Help list\n");
    printf("-------------------------------------------------\n\n");

}

