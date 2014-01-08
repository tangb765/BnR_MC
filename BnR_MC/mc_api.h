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

DESCRIPTION  :  API header for B&R motion control.

Revision     : $Revision$

Revision control header:
$Id$

Revision History:
$Log$


*******************************************************************************/



/*----------------------------------------------------------------------------*/
/*                            INCLUDE FILES                                   */
/*----------------------------------------------------------------------------*/



/*----------------------------------------------------------------------------*/
/*                                defines                                     */
/*----------------------------------------------------------------------------*/



/*----------------------------------------------------------------------------*/
/*                                types                                       */
/*----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------*/
/*                                data                                        */
/*----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------*/
/*                                functions                                   */
/*----------------------------------------------------------------------------*/


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
	int acceleration, int deceleration, int Direction);

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
int mc_move_additive(int distance, int velocity, 
	int acceleration, int deceleration);

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
	int deceleration, int Direction);

/*******************************************************************************
 * function: 
 *  mc_set_positive_end_position
 *
 * description: 
 *  This command sets the limit position in positive direction for movement. 
 *  If command is executed successfully, 0 is returned; otherwise, 
 *  corresponding error numberis returned.
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
int mc_set_positive_end_position(int position);

/*******************************************************************************
 * function: 
 *  mc_set_negative_end_position
 *
 * description: 
 *  This command sets the limit position in negative direction for movement. 
 *  If command is executed successfully, 0 is returned; otherwise, 
 *  corresponding error numberis returned.
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
int mc_set_negative_end_position(int position);

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
int mc_stop(int deceleration);

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
int mc_reset_error();

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
int mc_get_position();

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
int mc_get_velocity();

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

int mc_get_error_id();

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
int mc_power();

/*******************************************************************************
 * function: 
 *  mc_home
 *
 * description: 
 *  This command starts the homing movement of an axis according to the inputs 
 *  of the function block and the homing parameters included in the axis 
 *  structure. If command is executed successfully, 0 is returned; otherwise, 
 *  corresponding error numberis returned. 
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
int mc_home(int Position, int HomingMode);

/*******************************************************************************
 * function: 
 *  mc_init
 *
 * description: 
 *  This function initializes Ethernet Powerlink network and motor. If no 
 *  errors are present on the network, 0 is returned; otherwise, corresponding 
 *  error number (for details, see Appendix) is returned.
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
int mc_init(char* devName);


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

void PrintMCStatus();

/*******************************************************************************
 * function: 
 *  get_err_str
 *
 * description: 
 *  This function convert an error id to detailed error description. 
 *
 * input:
 *  err_id: error number. 
 *
 * output:
 *  err_str: error string    
 *
 * return:
 *  none 
 *
 ******************************************************************************/
void get_err_str(int err_id, char* err_str);



