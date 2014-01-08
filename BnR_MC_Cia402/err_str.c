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

DESCRIPTION  :  Error converter

Revision     : $Revision$

Revision control header:
$Id$

Revision History:
$Log$


*******************************************************************************/

/*----------------------------------------------------------------------------*/
/*                            INCLUDE FILES                                   */
/*----------------------------------------------------------------------------*/

#include <string.h>

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
void get_err_str(int err_id, char* err_str)
{
	switch(err_id)
	{
		case 0:
			strcpy(err_str, "MC_ERROR: no error/successful run");
			break;
		case 1:
			strcpy(err_str, "MC_ERROR: Invalid parameter ID");
			break;
		case 2:
			strcpy(err_str, "MC_ERROR: Data block for upload is not available");
			break;
		case 3:
			strcpy(err_str, "MC_ERROR: Write access for a read-only parameter");
			break;
		case 4:
			strcpy(err_str, "MC_ERROR: Read access for a write-only parameter");
			break;
		case 8:
			strcpy(err_str, "MC_ERROR: Data block read access already initialized");
			break;
		case 9:
			strcpy(err_str, "MC_ERROR: Data block write access already initialized");
			break;
		case 10:
			strcpy(err_str, "MC_ERROR: Data block read access not initialized");
			break;
		case 11:
			strcpy(err_str, "MC_ERROR: Data block write access not initialized");
			break;
		case 16:
			strcpy(err_str, "MC_ERROR: The data segment is already the last when reading the data block");
			break;
		case 17:
			strcpy(err_str, "MC_ERROR: The data segment is already the last when writing the data block");
			break;
		case 18:
			strcpy(err_str, "MC_ERROR: The data segment is not yet the last when reading the data block");
			break;
		case 19:
			strcpy(err_str, "MC_ERROR: The data segment is not yet the last when writing the data block");
			break;
		case 21:
			strcpy(err_str, "MC_ERROR: Checksum after data block write is invalid");
			break;
		case 23:
			strcpy(err_str, "MC_ERROR: Parameter ID in data block is invalid (data block write)");
			break;
		case 25:
			strcpy(err_str, "MC_ERROR: Burn system module only allowed immediately after download");
			break;
		case 27:
			strcpy(err_str, "MC_ERROR: Operating system not able to be started (operating system is not on the FPROM)");
			break;
		case 40:
			strcpy(err_str, "MC_ERROR: Value of parameter higher than maximum value");
			break;
		case 41:
			strcpy(err_str, "MC_ERROR: Value of parameter higher than maximum value");
			break;
		case 42:
			strcpy(err_str, "MC_ERROR: Value of parameter higher than maximum value");
			break;
		case 52:
			strcpy(err_str, "MC_ERROR: Value of parameter lower than minimum value");
			break;
		case 53:
			strcpy(err_str, "MC_ERROR: Value of parameter lower than minimum value");
			break;
		case 54:
			strcpy(err_str, "MC_ERROR: Value of parameter lower than minimum value");
			break;
		case 64:
			strcpy(err_str, "MC_ERROR: Hardware ID in BR module is invalid (data block write)");
			break;
		case 65:
			strcpy(err_str, "MC_ERROR: Hardware version in BR module is invalid (data block write)");
			break;
		case 66:
			strcpy(err_str, "MC_ERROR: The operating system on the drive is incompatible to the existing network");
			break;
		case 67:
			strcpy(err_str, "MC_ERROR: Necessary parameter is missing or is invalid");
			break;
		case 68:
			strcpy(err_str, "MC_ERROR: Data block length invalid");
			break;
		case 69:
			strcpy(err_str, "MC_ERROR: Command interface is occupied");
			break;
		case 70:
			strcpy(err_str, "MC_ERROR: Value of a necessary parameter too high");
			break;
		case 71:
			strcpy(err_str, "MC_ERROR: Value of a necessary parameter too low");
			break;
		case 1001:
			strcpy(err_str, "MC_ERROR: Error-FIFO overflow");
			break;
		case 1002:
			strcpy(err_str, "MC_ERROR: Parameter outside the valid range");
			break;
		case 1003:
			strcpy(err_str, "MC_ERROR: Parameter cannot be written while loop control is active");
			break;
		case 1004:
			strcpy(err_str, "MC_ERROR: Timeout in network life sign monitor");
			break;
		case 1005:
			strcpy(err_str, "MC_ERROR: Parameter cannot be written while a movement is active");
			break;
		case 1006:
			strcpy(err_str, "MC_ERROR: Invalid parameter for trigger event (digital input + edge)");
			break;
		case 1007:
			strcpy(err_str, "MC_ERROR: Master for network coupling deactivated - one master is already sending");
			break;
		case 1008:
			strcpy(err_str, "MC_ERROR: Master for network coupling deactivated - Encoder error");
			break;
		case 1009:
			strcpy(err_str, "MC_ERROR: Error during memory allocation");
			break;
		case 1011:
			strcpy(err_str, "MC_ERROR: Quickstop input active");
			break;
		case 1012:
			strcpy(err_str, "MC_ERROR: Breakdown of cyclic network communication");
			break;
		case 1013:
			strcpy(err_str, "MC_ERROR: Station is not available for network communication");
			break;
		case 1014:
			strcpy(err_str, "MC_ERROR: Network command interface is occupied");
			break;
		case 1016:
			strcpy(err_str, "MC_ERROR: Maximum cycle time exceeded - CPU load too high");
			break;
		case 1017:
			strcpy(err_str, "MC_ERROR: Invalid parameter ID for cyclic read access");
			break;
		case 1018:
			strcpy(err_str, "MC_ERROR: Invalid parameter ID for cyclic write access");
			break;
		case 1021:
			strcpy(err_str, "MC_ERROR: Parameter cannot be written: Function block active");
			break;
		case 1022:
			strcpy(err_str, "MC_ERROR: Timeout in life sign monitoring of cyclic data to drive");
			break;
		case 1023:
			strcpy(err_str, "MC_ERROR: Network coupling with the cyclic communication mode not allowed");
			break;
		case 1024:
			strcpy(err_str, "MC_ERROR: Cyclic communication mode with current network configuration not possible");
			break;
		case 1025:
			strcpy(err_str, "MC_ERROR: Value of parameter in connection with holding brake not allowed");
			break;
		case 2001:
			strcpy(err_str, "MC_ERROR: Upload of trace data not allowed: Recording active");
			break;
		case 2003:
			strcpy(err_str, "MC_ERROR: Trace start not allowed: Recording active");
			break;
		case 2006:
			strcpy(err_str, "MC_ERROR: Initialization of trace parameters not allowed: Recording active");
			break;
		case 4005:
			strcpy(err_str, "MC_ERROR: Controller cannot be switched on: Drive in error state");
			break;
		case 4007:
			strcpy(err_str, "MC_ERROR: Lag error stop limit exceeded");
			break;
		case 4008:
			strcpy(err_str, "MC_ERROR: Positive limit switch reached");
			break;
		case 4009:
			strcpy(err_str, "MC_ERROR: Negative limit switch reached");
			break;
		case 4010:
			strcpy(err_str, "MC_ERROR: Controller cannot be switched on: Both limit switches are closed");
			break;
		case 4011:
			strcpy(err_str, "MC_ERROR: Controller cannot be switched off: Movement active");
			break;
		case 4012:
			strcpy(err_str, "MC_ERROR: Controller cannot be switched on: Init parameters missing or not valid");
			break;
		case 4014:
			strcpy(err_str, "MC_ERROR: Two encoder control: Stop limit of positions difference exceeded");
			break;
		case 5001:
			strcpy(err_str, "MC_ERROR: Target position exceeds positive SW limit");
			break;
		case 5002:
			strcpy(err_str, "MC_ERROR: Target position exceeds negative SW limit");
			break;
		case 5003:
			strcpy(err_str, "MC_ERROR: Positive SW limit reached");
			break;
		case 5004:
			strcpy(err_str, "MC_ERROR: Negative SW limit reached");
			break;
		case 5005:
			strcpy(err_str, "MC_ERROR: Start of movement not possible: Position controller inactive");
			break;
		case 5006:
			strcpy(err_str, "MC_ERROR: Start of movement not possible: Axis not referenced");
			break;
		case 5010:
			strcpy(err_str, "MC_ERROR: Move in pos. direction not possible: Pos. limit switch is closed");
			break;
		case 5011:
			strcpy(err_str, "MC_ERROR: Move in neg. direction not possible: Neg. limit switch is closed");
			break;
		case 5012:
			strcpy(err_str, "MC_ERROR: Start of movement not possible: Stop ramp active");
			break;
		case 5013:
			strcpy(err_str, "MC_ERROR: Cyclic set value mode cannot be switched on: Movement active");
			break;
		case 5015:
			strcpy(err_str, "MC_ERROR: Start of movement not possible: Homing procedure active");
			break;
		case 5016:
			strcpy(err_str, "MC_ERROR: Parameter cannot be written: Homing procedure active");
			break;
		case 5017:
			strcpy(err_str, "MC_ERROR: Homing procedure mode not possible: Position controller inactive");
			break;
		case 5018:
			strcpy(err_str, "MC_ERROR: Homing procedure not possible: Movement active");
			break;
		case 5019:
			strcpy(err_str, "MC_ERROR: Homing parameter outside the valid range");
			break;
		case 5020:
			strcpy(err_str, "MC_ERROR: Homing procedure not possible: Both limit switches are closed");
			break;
		case 5021:
			strcpy(err_str, "MC_ERROR: Limit switch closed: No direction change for this homing mode");
			break;
		case 5022:
			strcpy(err_str, "MC_ERROR: Second limit switch signal received: Reference switch not found");
			break;
		case 5023:
			strcpy(err_str, "MC_ERROR: Incorrect limit switch signal received for current movement direction");
			break;
		case 5024:
			strcpy(err_str, "MC_ERROR: Cyclic set value mode aborted: Set positions missing");
			break;
		case 5025:
			strcpy(err_str, "MC_ERROR: Homing offset with counting range correction cannot be set");
			break;
		case 5026:
			strcpy(err_str, "MC_ERROR: Basis movement parameters (with override) exceed speed limit value");
			break;
		case 5027:
			strcpy(err_str, "MC_ERROR: Basis movement parameters (with override) exceed acceleration limit value");
			break;
		case 5028:
			strcpy(err_str, "MC_ERROR: Current movement is not a basis movement");
			break;
		case 5029:
			strcpy(err_str, "MC_ERROR: Trigger ignored - remaining distance exceeds SW limit");
			break;
		case 5030:
			strcpy(err_str, "MC_ERROR: Homing procedure mode not possible: Position controller active");
			break;
		case 5031:
			strcpy(err_str, "MC_ERROR: Homing procedure mode not possible: Cyclic set values mode is off");
			break;
		case 5032:
			strcpy(err_str, "MC_ERROR: Acceleration too low - braking distance exceeds positive SW limit");
			break;
		case 5033:
			strcpy(err_str, "MC_ERROR: Acceleration too low - braking distance exceeds negative SW limit");
			break;
		case 5034:
			strcpy(err_str, "MC_ERROR: Homing procedure not possible: Encoder error");
			break;
		case 5035:
			strcpy(err_str, "MC_ERROR: Reference marks not detected");
			break;
		case 5036:
			strcpy(err_str, "MC_ERROR: Acceleration stop limit exceeded");
			break;
		case 5101:
			strcpy(err_str, "MC_ERROR: Cam profile compensation gears: Limit values exceeded");
			break;
		case 5102:
			strcpy(err_str, "MC_ERROR: Too many changes of cam profile per cycle (master period too short)");
			break;
		case 5103:
			strcpy(err_str, "MC_ERROR: Slave trigger FIFO full");
			break;
		case 5104:
			strcpy(err_str, "MC_ERROR: Slave trigger FIFO empty");
			break;
		case 5105:
			strcpy(err_str, "MC_ERROR: Master trigger FIFO full");
			break;
		case 5106:
			strcpy(err_str, "MC_ERROR: Master trigger FIFO empty");
			break;
		case 5107:
			strcpy(err_str, "MC_ERROR: Cam coupling cannot be started: Parameter outside the valid range");
			break;
		case 5108:
			strcpy(err_str, "MC_ERROR: Master compensation trigger FIFO full");
			break;
		case 5109:
			strcpy(err_str, "MC_ERROR: Master compensation trigger FIFO empty");
			break;
		case 5110:
			strcpy(err_str, "MC_ERROR: Cam coupling aborted: Cyclic set positions missing");
			break;
		case 5111:
			strcpy(err_str, "MC_ERROR: Cam coupling aborted: Encoder error");
			break;
		case 5112:
			strcpy(err_str, "MC_ERROR: Command not allowed: Cam profile coupling not active");
			break;
		case 5113:
			strcpy(err_str, "MC_ERROR: Command not allowed: Controller is already active");
			break;
		case 5114:
			strcpy(err_str, "MC_ERROR: Parameter cannot be written: Cam coupling active");
			break;
		case 5115:
			strcpy(err_str, "MC_ERROR: Restart command not possible: The cam automat is not active");
			break;
		case 5201:
			strcpy(err_str, "MC_ERROR: Parameter cannot be written: Drumsequencer active");
			break;
		case 5202:
			strcpy(err_str, "MC_ERROR: Cam Control: Switch positions not in ascending order");
			break;
		case 5300:
			strcpy(err_str, "MC_ERROR: Data block for upload is not available");
			break;
		case 5301:
			strcpy(err_str, "MC_ERROR: Start cam automat linkage not possible: Parameter outside the valid range");
			break;
		case 5302:
			strcpy(err_str, "MC_ERROR: Parameter cannot be written: Cam automat active");
			break;
		case 5303:
			strcpy(err_str, "MC_ERROR: Cam profile data not available at index");
			break;
		case 5304:
			strcpy(err_str, "MC_ERROR: Format error in cam profile data");
			break;
		case 5311:
			strcpy(err_str, "MC_ERROR: Cam automat: Event leads to non initialized state");
			break;
		case 5315:
			strcpy(err_str, "MC_ERROR: Download error: Cam profile data in use by cam automat or function block");
			break;
		case 5316:
			strcpy(err_str, "MC_ERROR: Event type is not possible for entry in compensation gears");
			break;
		case 5319:
			strcpy(err_str, "MC_ERROR: Cam profile data not allowed for state 0");
			break;
		case 5329:
			strcpy(err_str, "MC_ERROR: No valid cam profile data or state deactivated");
			break;
		case 6000:
			strcpy(err_str, "MC_ERROR: Master sampling time is not a multiple of position controller sampling time");
			break;
		case 6001:
			strcpy(err_str, "MC_ERROR: Sync controller: Timeout for sync telegram occurred");
			break;
		case 6002:
			strcpy(err_str, "MC_ERROR: Sync controller: Error tolerance of system time difference exceeded");
			break;
		case 6008:
			strcpy(err_str, "MC_ERROR: Controller is already active");
			break;
		case 6011:
			strcpy(err_str, "MC_ERROR: Controller is not in speed mode");
			break;
		case 6014:
			strcpy(err_str, "MC_ERROR: Drive initialization active");
			break;
		case 6015:
			strcpy(err_str, "MC_ERROR: CAN controller: CAN bus disturbance (receive error counter greater 96)");
			break;
		case 6016:
			strcpy(err_str, "MC_ERROR: CAN controller: CAN bus disturbance (transmit error counter greater 96)");
			break;
		case 6017:
			strcpy(err_str, "MC_ERROR: Software: Watchdog active");
			break;
		case 6018:
			strcpy(err_str, "MC_ERROR: Hardware: 15V power supply fail");
			break;
		case 6019:
			strcpy(err_str, "MC_ERROR: ACOPOS: Overcurrent");
			break;
		case 6020:
			strcpy(err_str, "MC_ERROR: Hardware: 24V power supply fail");
			break;
		case 6021:
			strcpy(err_str, "MC_ERROR: Low level at controller enable input");
			break;
		case 6023:
			strcpy(err_str, "MC_ERROR: Voltage sag at controller enable input");
			break;
		case 6024:
			strcpy(err_str, "MC_ERROR: Current was latched before conversion (OpSys error in ABLS)");
			break;
		case 6025:
			strcpy(err_str, "MC_ERROR: Temperature was latched before conversion (OpSys error in ABLS)");
			break;
		case 6026:
			strcpy(err_str, "MC_ERROR: Holding brake: Stator current limit exceeded during release");
			break;
		case 6027:
			strcpy(err_str, "MC_ERROR: Holding brake: Manual operation not permitted");
			break;
		case 6028:
			strcpy(err_str, "MC_ERROR: Holding brake: Undervoltage/-current (wire breakage, check 24V supply)");
			break;
		case 6029:
			strcpy(err_str, "MC_ERROR: Holding brake: Control signal on and output status off");
			break;
		case 6030:
			strcpy(err_str, "MC_ERROR: Holding brake: Brake output is active, but no brake entered in motor data");
			break;
		case 6031:
			strcpy(err_str, "MC_ERROR: System module already deleted");
			break;
		case 6032:
			strcpy(err_str, "MC_ERROR: Interface: FPGA configuration error");
			break;
		case 6033:
			strcpy(err_str, "MC_ERROR: Type of servo amplifier is not supported by ACOPOS-firmware");
			break;
		case 6034:
			strcpy(err_str, "MC_ERROR: Cyclic set value mode aborted: Set speeds missing");
			break;
		case 6036:
			strcpy(err_str, "MC_ERROR: Motor parameters missing or invalid");
			break;
		case 6038:
			strcpy(err_str, "MC_ERROR: Torque limit higher than peak motor torque");
			break;
		case 6040:
			strcpy(err_str, "MC_ERROR: Operating system version is less than allowed minimum version");
			break;
		case 6041:
			strcpy(err_str, "MC_ERROR: Operating system version is greater than allowed maximum version");
			break;
		case 6042:
			strcpy(err_str, "MC_ERROR: Operating system version is not in the allowed range");
			break;
		case 6043:
			strcpy(err_str, "MC_ERROR: PHASING_MODE is not valid");
			break;
		case 6044:
			strcpy(err_str, "MC_ERROR: Phasing: Rotational direction or position not valid");
			break;
		case 6045:
			strcpy(err_str, "MC_ERROR: Power stage: Connection X5: No current flow");
			break;
		case 6046:
			strcpy(err_str, "MC_ERROR: Phasing: No rotor movement");
			break;
		case 6047:
			strcpy(err_str, "MC_ERROR: Holding brake: Control signal off and output status on");
			break;
		case 6048:
			strcpy(err_str, "MC_ERROR: Motor holding brake movement monitor: Position error too large");
			break;
		case 6049:
			strcpy(err_str, "MC_ERROR: Power stage: Connection X5: Current measurement faulty");
			break;
		case 6050:
			strcpy(err_str, "MC_ERROR: Write parameter not allowed: Set current filter or notch filter active");
			break;
		case 6051:
			strcpy(err_str, "MC_ERROR: Phasing: Speed to high");
			break;
		case 6052:
			strcpy(err_str, "MC_ERROR: Power stage: High-side: Overcurrent");
			break;
		case 6053:
			strcpy(err_str, "MC_ERROR: Power stage: Low-side: Overcurrent");
			break;
		case 6054:
			strcpy(err_str, "MC_ERROR: Power stage: Overcurrent");
			break;
		case 6055:
			strcpy(err_str, "MC_ERROR: Holding brake: Low voltage");
			break;
		case 6056:
			strcpy(err_str, "MC_ERROR: Holding brake: Low current");
			break;
		case 6057:
			strcpy(err_str, "MC_ERROR: Position loop controller: Load encoder error");
			break;
		case 6058:
			strcpy(err_str, "MC_ERROR: Enable1: Voltage sag");
			break;
		case 6059:
			strcpy(err_str, "MC_ERROR: Enable2: Voltage sag");
			break;
		case 6060:
			strcpy(err_str, "MC_ERROR: Power stage: Limit speed exceeded");
			break;
		case 6061:
			strcpy(err_str, "MC_ERROR: CTRL Speed controller: Limit speed exceeded");
			break;
		case 6062:
			strcpy(err_str, "MC_ERROR: CTRL Speed controller: Speed error stop limit exceeded");
			break;
		case 6063:
			strcpy(err_str, "MC_ERROR: Holding brake: External voltage on output over 24V");
			break;
		case 7012:
			strcpy(err_str, "MC_ERROR: Encoder: Hiperface error bit");
			break;
		case 7013:
			strcpy(err_str, "MC_ERROR: Encoder: Status message");
			break;
		case 7014:
			strcpy(err_str, "MC_ERROR: Encoder: CRC error during parameter transfer");
			break;
		case 7015:
			strcpy(err_str, "MC_ERROR: Encoder: Timeout error during parameter transfer");
			break;
		case 7016:
			strcpy(err_str, "MC_ERROR: Encoder: Busy error during parameter transfer");
			break;
		case 7017:
			strcpy(err_str, "MC_ERROR: Encoder: Error while reading encoder parameter");
			break;
		case 7020:
			strcpy(err_str, "MC_ERROR: OEM data: Data write error");
			break;
		case 7021:
			strcpy(err_str, "MC_ERROR: Encoder: Timeout error while reading absolute position");
			break;
		case 7022:
			strcpy(err_str, "MC_ERROR: Encoder: Initialization is active");
			break;
		case 7023:
			strcpy(err_str, "MC_ERROR: Encoder: Parameter transfer is active");
			break;
		case 7029:
			strcpy(err_str, "MC_ERROR: Encoder: Incremental signal amplitude too small");
			break;
		case 7030:
			strcpy(err_str, "MC_ERROR: Encoder: Incremental signal amplitude too large");
			break;
		case 7031:
			strcpy(err_str, "MC_ERROR: Encoder: Incremental signal amplitude too large (Disturbance)");
			break;
		case 7032:
			strcpy(err_str, "MC_ERROR: Encoder: Incremental signal amplitude too small (Disturbance, no connection)");
			break;
		case 7033:
			strcpy(err_str, "MC_ERROR: Encoder: Incremental position step too large");
			break;
		case 7036:
			strcpy(err_str, "MC_ERROR: Encoder: Interface ID invalid (Check slot and Interface EEPROM data)");
			break;
		case 7038:
			strcpy(err_str, "MC_ERROR: Encoder: Position value not synchronous with absolute value");
			break;
		case 7039:
			strcpy(err_str, "MC_ERROR: Incremental encoder: Cable disturbance track A");
			break;
		case 7040:
			strcpy(err_str, "MC_ERROR: Incremental encoder: Cable disturbance track B");
			break;
		case 7041:
			strcpy(err_str, "MC_ERROR: Incremental encoder: Cable disturbance track R");
			break;
		case 7042:
			strcpy(err_str, "MC_ERROR: Incremental encoder: Edge distance of quadrature signal too small");
			break;
		case 7043:
			strcpy(err_str, "MC_ERROR: Encoder: Cable disturbance track D");
			break;
		case 7044:
			strcpy(err_str, "MC_ERROR: Encoder: Parity");
			break;
		case 7045:
			strcpy(err_str, "MC_ERROR: Resolver: Signal disturbance (plausibility check)");
			break;
		case 7046:
			strcpy(err_str, "MC_ERROR: Resolver: Cable disturbance");
			break;
		case 7047:
			strcpy(err_str, "MC_ERROR: Invalid distance of reference marks");
			break;
		case 7048:
			strcpy(err_str, "MC_ERROR: Error during the reading of encoder memory");
			break;
		case 7049:
			strcpy(err_str, "MC_ERROR: Abnormal encoder current consumption");
			break;
		case 7050:
			strcpy(err_str, "MC_ERROR: Incremental encoder: Illegal AB signal change");
			break;
		case 7051:
			strcpy(err_str, "MC_ERROR: Encoder: Acceleration too large (Disturbance)");
			break;
		case 7052:
			strcpy(err_str, "MC_ERROR: Encoder: Encoder is not Supported");
			break;
		case 7053:
			strcpy(err_str, "MC_ERROR: Encoder: Power failure");
			break;
		case 7054:
			strcpy(err_str, "MC_ERROR: Encoder: Position in channel already defined");
			break;
		case 7055:
			strcpy(err_str, "MC_ERROR: Encoder: Invalid content type 'frame end'");
			break;
		case 7056:
			strcpy(err_str, "MC_ERROR: Encoder: Register read forbidden or not implemented");
			break;
		case 7057:
			strcpy(err_str, "MC_ERROR: Encoder: Register write forbidden or not implemented");
			break;
		case 7058:
			strcpy(err_str, "MC_ERROR: Encoder: Alarm bit is set");
			break;
		case 7059:
			strcpy(err_str, "MC_ERROR: Virtual Encoder: Error state");
			break;
		case 7100:
			strcpy(err_str, "MC_ERROR: Parameter function not supported. (Module ?)");
			break;
		case 7200:
			strcpy(err_str, "MC_ERROR: DC bus: Overvoltage");
			break;
		case 7210:
			strcpy(err_str, "MC_ERROR: DC bus: Charging: Voltage unstable");
			break;
		case 7211:
			strcpy(err_str, "MC_ERROR: DC bus: Voltage drop");
			break;
		case 7212:
			strcpy(err_str, "MC_ERROR: DC bus: High voltage drop");
			break;
		case 7214:
			strcpy(err_str, "MC_ERROR: DC bus: Charging resistor hot (too many power line fails)");
			break;
		case 7215:
			strcpy(err_str, "MC_ERROR: Power mains: At least one phase of the power line failed");
			break;
		case 7217:
			strcpy(err_str, "MC_ERROR: DC bus: Nominal voltage detection: Voltage too high");
			break;
		case 7218:
			strcpy(err_str, "MC_ERROR: DC bus: Nominal voltage detection: Voltage too low");
			break;
		case 7219:
			strcpy(err_str, "MC_ERROR: DC bus: Charging: Voltage too low");
			break;
		case 7220:
			strcpy(err_str, "MC_ERROR: DC bus: Nominal voltage detection: Voltage not allowed");
			break;
		case 7221:
			strcpy(err_str, "MC_ERROR: Mains: Failure");
			break;
		case 7222:
			strcpy(err_str, "MC_ERROR: Power stage: Summation current connection X5: Overcurrent (Ground fault)");
			break;
		case 7223:
			strcpy(err_str, "MC_ERROR: DC bus: Overvoltage DC-GND");
			break;
		case 7224:
			strcpy(err_str, "MC_ERROR: Connector to back plane: 24V-GND contact monitoring: Voltage too low");
			break;
		case 7225:
			strcpy(err_str, "MC_ERROR: DC bus: Overvoltage");
			break;
		case 7226:
			strcpy(err_str, "MC_ERROR: DC bus: Overcurrent");
			break;
		case 7227:
			strcpy(err_str, "MC_ERROR: Bleeder: Overcurrent");
			break;
		case 7300:
			strcpy(err_str, "MC_ERROR: Digital IO: IO Configuration invalid");
			break;
		case 7401:
			strcpy(err_str, "MC_ERROR: Parameter position exceeds maximum data length");
			break;
		case 7402:
			strcpy(err_str, "MC_ERROR: Processing of parameter sequence aborted: Write error");
			break;
		case 7403:
			strcpy(err_str, "MC_ERROR: Processing of parameter sequence is still active");
			break;
		case 7404:
			strcpy(err_str, "MC_ERROR: Parameter sequence not available at index");
			break;
		case 8001:
			strcpy(err_str, "MC_ERROR: EEPROM select not valid");
			break;
		case 8003:
			strcpy(err_str, "MC_ERROR: Table index not valid");
			break;
		case 8004:
			strcpy(err_str, "MC_ERROR: EEPROM variable type not valid");
			break;
		case 8005:
			strcpy(err_str, "MC_ERROR: EEPROM type not valid");
			break;
		case 8006:
			strcpy(err_str, "MC_ERROR: Value of EEPROM parameter is zero");
			break;
		case 8007:
			strcpy(err_str, "MC_ERROR: Value of EEPROM parameter is not valid");
			break;
		case 8011:
			strcpy(err_str, "MC_ERROR: EPROM: Data not valid");
			break;
		case 8020:
			strcpy(err_str, "MC_ERROR: Invalid switch frequency");
			break;
		case 9000:
			strcpy(err_str, "MC_ERROR: Heatsink temperature sensor: Overtemperature - Movement stopped");
			break;
		case 9001:
			strcpy(err_str, "MC_ERROR: Heatsink temperature sensor: Overtemperature - Limiter active");
			break;
		case 9002:
			strcpy(err_str, "MC_ERROR: Heatsink temperature sensor: Not connected or destroyed");
			break;
		case 9003:
			strcpy(err_str, "MC_ERROR: Heatsink temperature sensor: Not connected or destroyed");
			break;
		case 9010:
			strcpy(err_str, "MC_ERROR: Temperature sensor (Motor|Choke|External): Overtemperature");
			break;
		case 9011:
			strcpy(err_str, "MC_ERROR: Temperature sensor (Motor|Choke|External): Overtemperature - Limiter active");
			break;
		case 9012:
			strcpy(err_str, "MC_ERROR: Temperature sensor (Motor|Choke|External): Not connected or destroyed");
			break;
		case 9013:
			strcpy(err_str, "MC_ERROR: Temperature sensor (Motor|Choke|External): Short circuit");
			break;
		case 9030:
			strcpy(err_str, "MC_ERROR: Junction temperature model: Overtemperature - Movement stopped");
			break;
		case 9031:
			strcpy(err_str, "MC_ERROR: Junction temperature model: Overtemperature - Limiter active");
			break;
		case 9040:
			strcpy(err_str, "MC_ERROR: Bleeder temperature model: Overtemperature - Movement stopped");
			break;
		case 9041:
			strcpy(err_str, "MC_ERROR: Bleeder temperature model: Overtemperature - Limiter active");
			break;
		case 9050:
			strcpy(err_str, "MC_ERROR: ACOPOS peak current: Overload - Movement stopped");
			break;
		case 9051:
			strcpy(err_str, "MC_ERROR: ACOPOS peak current: Overload - Limiter active");
			break;
		case 9060:
			strcpy(err_str, "MC_ERROR: ACOPOS continuous current: Overload - Movement stopped");
			break;
		case 9061:
			strcpy(err_str, "MC_ERROR: ACOPOS continuous current: Overload - Limiter active");
			break;
		case 9070:
			strcpy(err_str, "MC_ERROR: Motor temperature model: Overload - Movement stopped");
			break;
		case 9071:
			strcpy(err_str, "MC_ERROR: Motor temperature model: Overload - Limiter active");
			break;
		case 9075:
			strcpy(err_str, "MC_ERROR: ACOPOS continuous power: Overload - Movement stopped");
			break;
		case 9076:
			strcpy(err_str, "MC_ERROR: ACOPOS continuous power: Overload - Limiter active");
			break;
		case 9078:
			strcpy(err_str, "MC_ERROR: ACOPOS temperature sensor: Overtemperature - Movement stopped");
			break;
		case 9079:
			strcpy(err_str, "MC_ERROR: ACOPOS temperature sensor: Overtemperature - Limiter active");
			break;
		case 9300:
			strcpy(err_str, "MC_ERROR: Current controller: Overcurrent");
			break;
		case 10000:
			strcpy(err_str, "MC_ERROR: Identification parameter(s) missing");
			break;
		case 10001:
			strcpy(err_str, "MC_ERROR: Parameter identification: Invalid sub-mode");
			break;
		case 10100:
			strcpy(err_str, "MC_ERROR: Parameter identification: Quality factor not fulfilled");
			break;
		case 10101:
			strcpy(err_str, "MC_ERROR: No ISQ-filter free");
			break;
		case 10102:
			strcpy(err_str, "MC_ERROR: No resonance-frequency for ISQ-filter (band-stop) found");
			break;
		case 10103:
			strcpy(err_str, "MC_ERROR: Autotuning: Maximum lag error exceeded");
			break;
        case 10500:
            strcpy(err_str, "MC_ERROR: Induction stop was terminated");
            break;
		case 0x4000:
			strcpy(err_str, "EPL_ERROR: no error/successful run");
			break;
		case 0x4001:
			strcpy(err_str, "EPL_ERROR: the called Instanz does not exist");
			break;
		case 0x4002:
			strcpy(err_str, "EPL_ERROR: Invalid Parameter");
			break;
		case 0x4003:
			strcpy(err_str, "EPL_ERROR: XxxAddInstance was called but no free instance is available");
			break;
		case 0x4004:
			strcpy(err_str, "EPL_ERROR: wrong signature while writing to object 0x1010 or 0x1011");
			break;
		case 0x4005:
			strcpy(err_str, "EPL_ERROR: operation not allowed in this situation");
			break;
		case 0x4007:
			strcpy(err_str, "EPL_ERROR: invalid NodeId was specified");
			break;
		case 0x4008:
			strcpy(err_str, "EPL_ERROR: resource could not be created (Windows, PxROS, ...)");
			break;
		case 0x4009:
			strcpy(err_str, "EPL_ERROR: stack is shutting down");
			break;
		case 0x400A:
			strcpy(err_str, "EPL_ERROR: reject the subsequent command");
			break;
		case 0x400B:
			strcpy(err_str, "EPL_ERROR: retry this command");
			break;
		case 0x400C:
			strcpy(err_str, "EPL_ERROR: invalid event was posted to process function");
			break;
		case 0x4011:
			strcpy(err_str, "EPL_ERROR: no free Tx descriptor available");
			break;
		case 0x4012:
			strcpy(err_str, "EPL_ERROR: invalid cycle length (e.g. 0)");
			break;
		case 0x4013:
			strcpy(err_str, "EPL_ERROR: initialisation error");
			break;
		case 0x4014:
			strcpy(err_str, "EPL_ERROR: no free entry in internal buffer table for Tx frames");
			break;
		case 0x4015:
			strcpy(err_str, "EPL_ERROR: specified Tx buffer does not exist");
			break;
		case 0x4016:
			strcpy(err_str, "EPL_ERROR: specified Rx buffer is invalid");
			break;
		case 0x401C:
			strcpy(err_str, "EPL_ERROR: invalid parameter in function call");
			break;
		case 0x401D:
			strcpy(err_str, "EPL_ERROR: next Tx buffer list is not empty, i.e. still in use");
			break;
		case 0x401E:
			strcpy(err_str, "EPL_ERROR: current Tx buffer list is empty, i.e. DLL didn't provide one");
			break;
		case 0x401F:
			strcpy(err_str, "EPL_ERROR: current Tx buffer list has not been finished yet, but new cycle has started");
			break;
		case 0x4021:
			strcpy(err_str, "EPL_ERROR: out of memory");
			break;
		case 0x4022:
			strcpy(err_str, "EPL_ERROR: illegal handle for a TxFrame was passed");
			break;
		case 0x4023:
			strcpy(err_str, "EPL_ERROR: handler for non-EPL frames was already registered before");
			break;
		case 0x4024:
			strcpy(err_str, "EPL_ERROR: buffer for SyncRequests is full");
			break;
		case 0x4025:
			strcpy(err_str, "EPL_ERROR: transmit buffer for asynchronous frames is empty");
			break;
		case 0x4026:
			strcpy(err_str, "EPL_ERROR: transmit buffer for asynchronous frames is full");
			break;
		case 0x4027:
			strcpy(err_str, "EPL_ERROR: MN: too less space in the internal node info structure");
			break;
		case 0x4028:
			strcpy(err_str, "EPL_ERROR: invalid parameters passed to function");
			break;
		case 0x4029:
			strcpy(err_str, "EPL_ERROR: invalid AsndServiceId specified");
			break;
		case 0x402E:
			strcpy(err_str, "EPL_ERROR: TxBuffer (e.g. for PReq) is not ready yet");
			break;
		case 0x402F:
			strcpy(err_str, "EPL_ERROR: TxFrame (e.g. for PReq) is invalid or does not exist");
			break;
		case 0x4030:
			strcpy(err_str, "EPL_ERROR: unknown OD part");
			break;
		case 0x4031:
			strcpy(err_str, "EPL_ERROR: object index does not exist in OD");
			break;
		case 0x4032:
			strcpy(err_str, "EPL_ERROR: subindex does not exist in object index");
			break;
		case 0x4033:
			strcpy(err_str, "EPL_ERROR: read access to a write-only object");
			break;
		case 0x4034:
			strcpy(err_str, "EPL_ERROR: write access to a read-only object");
			break;
		case 0x4035:
			strcpy(err_str, "EPL_ERROR: access not allowed");
			break;
		case 0x4036:
			strcpy(err_str, "EPL_ERROR: object type not defined/known");
			break;
		case 0x4037:
			strcpy(err_str, "EPL_ERROR: object does not contain VarEntry structure");
			break;
		case 0x4038:
			strcpy(err_str, "EPL_ERROR: value to write to an object is too low");
			break;
		case 0x4039:
			strcpy(err_str, "EPL_ERROR: value to write to an object is too high");
			break;
		case 0x403A:
			strcpy(err_str, "EPL_ERROR: value to write is to long or to short");
			break;
		case 0x403B:
			strcpy(err_str, "EPL_ERROR: file I/O error occurred and errno is set");
			break;
		case 0x403C:
			strcpy(err_str, "EPL_ERROR: device configuration file (CDC) is not valid");
			break;
		case 0x403D:
			strcpy(err_str, "EPL_ERROR: out of memory");
			break;
		case 0x403E:
			strcpy(err_str, "EPL_ERROR: no configuration data present (CDC is empty)");
			break;
		case 0x4040:
			strcpy(err_str, "EPL_ERROR: unknown NMT command");
			break;
		case 0x4041:
			strcpy(err_str, "EPL_ERROR: pointer to the frame is not valid");
			break;
		case 0x4042:
			strcpy(err_str, "EPL_ERROR: invalid event send to NMT-modul");
			break;
		case 0x4043:
			strcpy(err_str, "EPL_ERROR: unknown state in NMT-State-Maschine");
			break;
		case 0x4044:
			strcpy(err_str, "EPL_ERROR: invalid parameters specified");
			break;
		case 0x4045:
			strcpy(err_str, "EPL_ERROR: SyncReq could not be issued");
			break;
		case 0x4050:
			strcpy(err_str, "EPL_ERROR: missing callback-function pointer during inti of module");
			break;
		case 0x4051:
			strcpy(err_str, "EPL_ERROR: error during init of socket");
			break;
		case 0x4052:
			strcpy(err_str, "EPL_ERROR: error during usage of socket");
			break;
		case 0x4053:
			strcpy(err_str, "EPL_ERROR: error during start of listen thread");
			break;
		case 0x4054:
			strcpy(err_str, "EPL_ERROR: no free connection handle for Udp");
			break;
		case 0x4055:
			strcpy(err_str, "EPL_ERROR: Error during send of frame");
			break;
		case 0x4056:
			strcpy(err_str, "EPL_ERROR: the connection handle is invalid");
			break;
		case 0x4060:
			strcpy(err_str, "EPL_ERROR: no callback-function assign");
			break;
		case 0x4061:
			strcpy(err_str, "EPL_ERROR: no free handle for connection");
			break;
		case 0x4062:
			strcpy(err_str, "EPL_ERROR: invalid handle in SDO sequence layer");
			break;
		case 0x4063:
			strcpy(err_str, "EPL_ERROR: unsupported Protocol selected");
			break;
		case 0x4064:
			strcpy(err_str, "EPL_ERROR: no free entry in history");
			break;
		case 0x4065:
			strcpy(err_str, "EPL_ERROR: the size of the frames is not correct");
			break;
		case 0x4066:
			strcpy(err_str, "EPL_ERROR: indeicates that the history buffer is full and a ack request is needed");
			break;
		case 0x4067:
			strcpy(err_str, "EPL_ERROR: frame not valid");
			break;
		case 0x4068:
			strcpy(err_str, "EPL_ERROR: connection is busy -> retry later");
			break;
		case 0x4069:
			strcpy(err_str, "EPL_ERROR: invalid event received");
			break;
		case 0x4070:
			strcpy(err_str, "EPL_ERROR: unsupported Protocol selected");
			break;
		case 0x4071:
			strcpy(err_str, "EPL_ERROR: no free handle for connection");
			break;
		case 0x4072:
			strcpy(err_str, "EPL_ERROR: invalid SDO service type specified");
			break;
		case 0x4073:
			strcpy(err_str, "EPL_ERROR: handle invalid");
			break;
		case 0x4074:
			strcpy(err_str, "EPL_ERROR: the stated to of frame to send is not possible");
			break;
		case 0x4075:
			strcpy(err_str, "EPL_ERROR: internal error: command layer handle is not responsible for this event from sequence layer");
			break;
		case 0x4076:
			strcpy(err_str, "EPL_ERROR: handle to same node already exists");
			break;
		case 0x4077:
			strcpy(err_str, "EPL_ERROR: transfer via this handle is already running");
			break;
		case 0x4078:
			strcpy(err_str, "EPL_ERROR: invalid parameters passed to function");
			break;
		case 0x4080:
			strcpy(err_str, "EPL_ERROR: unknown sink for event");
			break;
		case 0x4081:
			strcpy(err_str, "EPL_ERROR: error during post of event");
			break;
		case 0x4082:
			strcpy(err_str, "EPL_ERROR: error during reading of event from queue");
			break;
		case 0x4083:
			strcpy(err_str, "EPL_ERROR: event arg has wrong size");
			break;
		case 0x4090:
			strcpy(err_str, "EPL_ERROR: invalid handle for timer");
			break;
		case 0x4091:
			strcpy(err_str, "EPL_ERROR: no timer was created caused by an error");
			break;
		case 0x4092:
			strcpy(err_str, "EPL_ERROR: process thread could not be created");
			break;
		case 0x40A0:
			strcpy(err_str, "EPL_ERROR: node-ID is invalid");
			break;
		case 0x40A1:
			strcpy(err_str, "EPL_ERROR: no free handle for connection");
			break;
		case 0x40A2:
			strcpy(err_str, "EPL_ERROR: handle for connection is invalid");
			break;
		case 0x40B0:
			strcpy(err_str, "EPL_ERROR: selected PDO does not exist");
			break;
		case 0x40B1:
			strcpy(err_str, "EPL_ERROR: length of PDO mapping exceeds the current payload limit");
			break;
		case 0x40B2:
			strcpy(err_str, "EPL_ERROR: configured PDO granularity is not equal to supported granularity");
			break;
		case 0x40B3:
			strcpy(err_str, "EPL_ERROR: error during initialisation of PDO module");
			break;
		case 0x40B7:
			strcpy(err_str, "EPL_ERROR: PDO configuration cannot be changed while it is enabled");
			break;
		case 0x40B8:
			strcpy(err_str, "EPL_ERROR: invalid PDO mapping");
			break;
		case 0x40B9:
			strcpy(err_str, "EPL_ERROR: the referenced object in a PDO mapping does not exist");
			break;
		case 0x40BA:
			strcpy(err_str, "EPL_ERROR: the referenced object in a PDO mapping is not mappable");
			break;
		case 0x40BC:
			strcpy(err_str, "EPL_ERROR: bit size of object mapping is larger than the object size");
			break;
		case 0x40BD:
			strcpy(err_str, "EPL_ERROR: there exits more than one TPDO on CN");
			break;
		case 0x40BE:
			strcpy(err_str, "EPL_ERROR: invalid object index used for PDO mapping or communication parameter");
			break;
		case 0x40BF:
			strcpy(err_str, "EPL_ERROR: there exist too many PDOs");
			break;
		case 0x40C0:
			strcpy(err_str, "EPL_ERROR: error in configuration manager");
			break;
		case 0x40C1:
			strcpy(err_str, "EPL_ERROR: error in configuration manager, Sdo timeout");
			break;
		case 0x40C2:
			strcpy(err_str, "EPL_ERROR: device configuration file (CDC) is not valid");
			break;
		case 0x40C3:
			strcpy(err_str, "EPL_ERROR: unsupported Dcf format");
			break;
		case 0x40C4:
			strcpy(err_str, "EPL_ERROR: configuration finished with errors");
			break;
		case 0x40C5:
			strcpy(err_str, "EPL_ERROR: no free configuration entry");
			break;
		case 0x40C6:
			strcpy(err_str, "EPL_ERROR: no configuration data present");
			break;
		case 0x40C7:
			strcpy(err_str, "EPL_ERROR: unsupported datatype found in dcf -> this entry was not configured");
			break;
		case 0x4140:
			strcpy(err_str, "EPL_ERROR: EPL performs task in background and informs the application (or vice-versa), when it is finished");
			break;
		case 0x4142:
			strcpy(err_str, "EPL_ERROR: passed invalid parameters to a function (e.g. invalid node id)");
			break;
		case 0x4143:
			strcpy(err_str, "EPL_ERROR: no function pointer for ObdInitRam supplied");
			break;
		case 0x4144:
			strcpy(err_str, "EPL_ERROR: the SDO channel to this node is internally used by the stack (e.g. the CFM) and currently not available for the application.");
			break;
		case 0x4145:
			strcpy(err_str, "EPL_ERROR: process image is already allocated");
			break;
		case 0x4146:
			strcpy(err_str, "EPL_ERROR: process image: out of memory");
			break;
		case 0x4147:
			strcpy(err_str, "EPL_ERROR: process image: variable linking or copy job exceeds the size of the PI");
			break;
		case 0x4148:
			strcpy(err_str, "EPL_ERROR: process image is not allocated");
			break;
		case 0x4149:
			strcpy(err_str, "EPL_ERROR: process image: job queue is full");
			break;
		case 0x414A:
			strcpy(err_str, "EPL_ERROR: process image: job queue is empty");
			break;
		case 0x414B:
			strcpy(err_str, "EPL_ERROR: process image: invalid job size");
			break;
		case 0x414C:
			strcpy(err_str, "EPL_ERROR: process image: pointer to application's process image is invalid");
			break;
		case 0x414D:
			strcpy(err_str, "EPL_ERROR: process image: non-blocking copy jobs are not supported on this target");
			break;            
        case 0x414E:
            strcpy(err_str, "EPL_ERROR: controlled node is not ready for operation");
            break;            
		case 29200:
			strcpy(err_str, "MC_ERROR: The axis object is invalid");
			break;
        case 29202:
            strcpy(err_str, "MC_ERROR: The state machine is not ready for this operation");
            break;
		case 29203:
			strcpy(err_str, "MC_ERROR: Drive is not ready");
			break;
		case 29204:
			strcpy(err_str, "MC_ERROR: Invalid parameter number");
			break;
		case 29205:
			strcpy(err_str, "MC_ERROR: The axis is not homed");
			break;
		case 29206:
			strcpy(err_str, "MC_ERROR: The controller is off");
			break;
		case 29207:
			strcpy(err_str, "MC_ERROR: This movement type is currently not allowed");
			break;
		case 29208:
			strcpy(err_str, "MC_ERROR: The axis object was changed since last FB call");
			break;
		case 29209:
			strcpy(err_str, "MC_ERROR: The drive is in error state");
			break;
		case 29210:
			strcpy(err_str, "MC_ERROR: Parameter initialization (Global-init) failed");
			break;
		case 29211:
			strcpy(err_str, "MC_ERROR: Switching the motor holding brake not possible. Controller is on");
			break;
		case 29214:
			strcpy(err_str, "MC_ERROR: Homing not possible");
			break;
		case 29215:
			strcpy(err_str, "MC_ERROR: Discrete movement not possible");
			break;
		case 29216:
			strcpy(err_str, "MC_ERROR: Continuous movement not possible");
			break;
		case 29217:
			strcpy(err_str, "MC_ERROR: Invalid input parameter");
			break;
		case 29218:
			strcpy(err_str, "MC_ERROR: Unknown PLCopen axis state");
			break;
		case 29219:
			strcpy(err_str, "MC_ERROR: Invalid PLCopen parameter value");
			break;
		case 29221:
			strcpy(err_str, "MC_ERROR: No cam name");
			break;
		case 29222:
			strcpy(err_str, "MC_ERROR: Error at cam download");
			break;
		case 29225:
			strcpy(err_str, "MC_ERROR: The target position is outside the axis period");
			break;
		case 29226:
			strcpy(err_str, "MC_ERROR: Error on drive. Use MC_ReadAxisError for details");
			break;
		case 29227:
			strcpy(err_str, "MC_ERROR: No further master position can be sent on the network from this drive");
			break;
		case 29228:
			strcpy(err_str, "MC_ERROR: No further master position can be read from the network by this drive");
			break;
		case 29229:
			strcpy(err_str, "MC_ERROR: Synchronized movement not possible");
			break;
		case 29230:
			strcpy(err_str, "MC_ERROR: Internal error: Error at parameter list transfer");
			break;
		case 29231:
			strcpy(err_str, "MC_ERROR: The master velocity is invalid, 0 or negative");
			break;
		case 29232:
			strcpy(err_str, "MC_ERROR: Internal error: Invalid SPT resource type");
			break;
		case 29233:
			strcpy(err_str, "MC_ERROR: SPT resource of required type not available");
			break;
		case 29234:
			strcpy(err_str, "MC_ERROR: Internal error: Number of requested SPT resources is not available");
			break;
		case 29235:
			strcpy(err_str, "MC_ERROR: The functionality is not available for the current axis type");
			break;
		case 29237:
			strcpy(err_str, "MC_ERROR: Error in TriggerInput parameters");
			break;
		case 29238:
			strcpy(err_str, "MC_ERROR: The FB cannot be used in the current state");
			break;
		case 29239:
			strcpy(err_str, "MC_ERROR: This functionality is not available on CAN-Bus");
			break;
		case 29240:
			strcpy(err_str, "MC_ERROR: The specified ParID can't be used because of the data type size");
			break;
		case 29241:
			strcpy(err_str, "MC_ERROR: Wrong data type for specific ParID");
			break;
		case 29242:
			strcpy(err_str, "MC_ERROR: Cyclic read data full");
			break;
		case 29244:
			strcpy(err_str, "MC_ERROR: Internal error during configuration of cyclic data");
			break;
		case 29246:
			strcpy(err_str, "MC_ERROR: TouchProbe window invalid");
			break;
		case 29247:
			strcpy(err_str, "MC_ERROR: Master sync position cannot be reached");
			break;
		case 29250:
			strcpy(err_str, "MC_ERROR: CamTableID is invalid");
			break;
		case 29251:
			strcpy(err_str, "MC_ERROR: Error at parameter table download");
			break;
		case 29252:
			strcpy(err_str, "MC_ERROR: Error at parameter list initialization");
			break;
		case 29253:
			strcpy(err_str, "MC_ERROR: Error at parameter sequence download");
			break;
		case 29254:
			strcpy(err_str, "MC_ERROR: Error at parameter sequence initialization");
			break;
		case 29255:
			strcpy(err_str, "MC_ERROR: Initialization not possible, axis coupling is active");
			break;
		case 29256:
			strcpy(err_str, "MC_ERROR: Multiple commands not possible at the same time");
			break;
		case 29257:
			strcpy(err_str, "MC_ERROR: The specified data address is invalid");
			break;
		case 29260:
			strcpy(err_str, "MC_ERROR: No data object name specified");
			break;
		case 29261:
			strcpy(err_str, "MC_ERROR: Invalid data object index");
			break;
		case 29262:
			strcpy(err_str, "MC_ERROR: Send channel already in use");
			break;
		case 29263:
			strcpy(err_str, "MC_ERROR: Slave channel already in use");
			break;
		case 29264:
			strcpy(err_str, "MC_ERROR: Cyclic write data full");
			break;
		case 29265:
			strcpy(err_str, "MC_ERROR: Communication to drive failed");
			break;
		case 29266:
			strcpy(err_str, "MC_ERROR: The MasterParID was changed since last FB call");
			break;
		case 29267:
			strcpy(err_str, "MC_ERROR: Invalid number of cam profile polynomials");
			break;
		case 29268:
			strcpy(err_str, "MC_ERROR: FB aborted by another one");
			break;
		case 29269:
			strcpy(err_str, "MC_ERROR: Error during saving of the NC-INIT parameter module");
			break;
		case 29270:
			strcpy(err_str, "MC_ERROR: Error during loading of the NC-INIT parameter module");
			break;
		case 29271:
			strcpy(err_str, "MC_ERROR: Selected MC_TouchProbe function block is not active");
			break;
		case 29272:
			strcpy(err_str, "MC_ERROR: Error at initialization of Automat");
			break;
		case 29273:
			strcpy(err_str, "MC_ERROR: The given \"Subject\" is invalid");
			break;
		case 29274:
			strcpy(err_str, "MC_ERROR: Error at initialization of parameters. Use MC_ReadAxisError for details");
			break;
		case 29275:
			strcpy(err_str, "MC_ERROR: At least one input value was changed while \"Enable = TRUE\"");
			break;
		case 29276:
			strcpy(err_str, "MC_ERROR: A phase shift is already in progress");
			break;
		case 29277:
			strcpy(err_str, "MC_ERROR: A offset shift is already in progress");
			break;
		case 29278:
			strcpy(err_str, "MC_ERROR: Selected mode not supported without entry of a period");
			break;
		case 29279:
			strcpy(err_str, "MC_ERROR: Output value cannot be calculated");
			break;
		case 29280:
			strcpy(err_str, "MC_ERROR: No valid master defined");
			break;
		case 29281:
			strcpy(err_str, "MC_ERROR: This functionality is not available for ACOPOSmulti drives");
			break;
		case 29282:
			strcpy(err_str, "MC_ERROR: Command currently cannot be executed");
			break;
		case 29283:
			strcpy(err_str, "MC_ERROR: Master or slave position of the first cam profile point not equal to 0");
			break;
		case 29284:
			strcpy(err_str, "MC_ERROR: Too few curve points");
			break;
		case 29285:
			strcpy(err_str, "MC_ERROR: Invalid cam profile section type");
			break;
		case 29286:
			strcpy(err_str, "MC_ERROR: Invalid mode for the last cam profile point");
			break;
		case 29287:
			strcpy(err_str, "MC_ERROR: Invalid master or slave position for last cam profile point");
			break;
		case 29288:
			strcpy(err_str, "MC_ERROR: Master positions are not strictly monotonic increasing");
			break;
		case 29289:
			strcpy(err_str, "MC_ERROR: Invalid boundary parameters");
			break;
		case 29290:
			strcpy(err_str, "MC_ERROR: Too many cam profile polynomials");
			break;
		case 29291:
			strcpy(err_str, "MC_ERROR: Turning point outside of cam profile section");
			break;
		case 29292:
			strcpy(err_str, "MC_ERROR: Identical slave positions not permitted");
			break;
		case 29293:
			strcpy(err_str, "MC_ERROR: Specified data length is 0 or too low");
			break;
		case 29294:
			strcpy(err_str, "MC_ERROR: Not able to determine error text. See error text string for details");
			break;
		case 29295:
			strcpy(err_str, "MC_ERROR: An error has occurred. See \"ErrorRecord\" output for details");
			break;
		case 29296:
			strcpy(err_str, "MC_ERROR: Not enough space in Broadcast channel");
			break;
		case 29297:
			strcpy(err_str, "MC_ERROR: Problem with variable in permanent memory");
			break;
		case 29298:
			strcpy(err_str, "MC_ERROR: Error in network configuration");
			break;
		case 29299:
			strcpy(err_str, "MC_ERROR: Error occurred during the setup operation");
			break;
		case 29300:
			strcpy(err_str, "MC_ERROR: Invalid number of polynomials in the cam");
			break;
		case 29301:
			strcpy(err_str, "MC_ERROR: No cam value can be calculated");
			break;
		case 29302:
			strcpy(err_str, "MC_ERROR: One instance of the function block is already active");
			break;
		case 29303:
			strcpy(err_str, "MC_ERROR: Specified IntervalTime too small.");
			break;
		case 29304:
			strcpy(err_str, "MC_ERROR: This functionality is not available for ACOPOS");
			break;
		case 29305:
			strcpy(err_str, "MC_ERROR: ParID cannot be read in this mode");
			break;
		case 29306:
			strcpy(err_str, "MC_ERROR: Invalid interpolator mode");
			break;
		case 29307:
			strcpy(err_str, "MC_ERROR: Master period is zero");
			break;
		case 29308:
			strcpy(err_str, "MC_ERROR: Internal calculation error");
			break;
		case 29309:
			strcpy(err_str, "MC_ERROR: General internal error");
			break;
		case 29310:
			strcpy(err_str, "MC_ERROR: Calculated Compensation exceeds limit values");
			break;
		case 29311:
			strcpy(err_str, "MC_ERROR: Maximum time expired");
			break;
		case 29312:
			strcpy(err_str, "MC_ERROR: An error occurred during the holding brake test");
			break;
		case 29489:
			strcpy(err_str, "MC_ERROR: Internal values of the axis structure are invalid");
			break;
		case 29490:
			strcpy(err_str, "MC_ERROR: Error at internal initialization (global init)");
			break;
		case 29491:
			strcpy(err_str, "MC_ERROR: Error at internal initialization (software limits)");
			break;
		case 29492:
			strcpy(err_str, "MC_ERROR: Error at internal initialization (homing of virtual axis)");
			break;
		case 29498:
			strcpy(err_str, "MC_ERROR: ACP10_MC library: Initialization aborted");
			break;
		case 29499:
			strcpy(err_str, "MC_ERROR: ACP10_MC library: Error with details in \"ASCII Data\"");
			break;
		case 31201:
			strcpy(err_str, "MC_ERROR: Di/Do Interface: Drive not ready");
			break;
		case 31220:
			strcpy(err_str, "MC_ERROR: Encoder error: Encoder not configured");
			break;
		case 31221:
			strcpy(err_str, "MC_ERROR: Encoder error: Cable disturbance or signal disturbance");
			break;
		case 31224:
			strcpy(err_str, "MC_ERROR: Encoder Interface: HW Module not OK");
			break;
		case 31240:
			strcpy(err_str, "MC_ERROR: Homing procedure mode not allowed with current HW Type");
			break;
		case 31247:
			strcpy(err_str, "MC_ERROR: Drive Interface: DrvOK not set from HW Module");
			break;
		case 31248:
			strcpy(err_str, "MC_ERROR: Trigger Interface: HW Module not OK");
			break;
		case 31249:
			strcpy(err_str, "MC_ERROR: Drive Interface: HW Module not OK");
			break;
		case 31250:
			strcpy(err_str, "MC_ERROR: Di/Do Interface: HW Module not OK");
			break;
		case 31260:
			strcpy(err_str, "MC_ERROR: Current axis configuration only possible in simulation mode");
			break;
		case 31261:
			strcpy(err_str, "MC_ERROR: Change mode for servo drive adjustment not allowed");
			break;
		case 32001:
			strcpy(err_str, "MC_ERROR: Error calling CAN_xopen()");
			break;
		case 32002:
			strcpy(err_str, "MC_ERROR: Error defining Write COB for Broadcast Command");
			break;
		case 32003:
			strcpy(err_str, "MC_ERROR: Error defining Write COB for Parameter Read Request");
			break;
		case 32004:
			strcpy(err_str, "MC_ERROR: Error defining Write COB for Parameter Write Request");
			break;
		case 32005:
			strcpy(err_str, "MC_ERROR: Error defining Read COB for Parameter Read Response");
			break;
		case 32006:
			strcpy(err_str, "MC_ERROR: Error defining Read COB for Parameter Write Response");
			break;
		case 32007:
			strcpy(err_str, "MC_ERROR: Error defining Read COB for Monitor Data from the drive");
			break;
		case 32008:
			strcpy(err_str, "MC_ERROR: Error sending Read Request (network error ?)");
			break;
		case 32009:
			strcpy(err_str, "MC_ERROR: Error sending Write Request (network error ?)");
			break;
		case 32010:
			strcpy(err_str, "MC_ERROR: Drive not responding to Read Request (is the drive in the network ?)");
			break;
		case 32011:
			strcpy(err_str, "MC_ERROR: Drive not responding to Write Request (is the drive in the network ?)");
			break;
		case 32012:
			strcpy(err_str, "MC_ERROR: Error reading module description of system module");
			break;
		case 32013:
			strcpy(err_str, "MC_ERROR: No operating system present on the drive");
			break;
		case 32014:
			strcpy(err_str, "MC_ERROR: Operating system version on the drive not compatible with NC manager version");
			break;
		case 32015:
			strcpy(err_str, "MC_ERROR: Error creating message queue");
			break;
		case 32016:
			strcpy(err_str, "MC_ERROR: Error sending an idle time command to the NC Manager Task");
			break;
		case 32017:
			strcpy(err_str, "MC_ERROR: Wrong boot state after start of operating system");
			break;
		case 32018:
			strcpy(err_str, "MC_ERROR: Invalid Parameter ID in system module");
			break;
		case 32019:
			strcpy(err_str, "MC_ERROR: Download of NC system module not allowed (the module is on the PLC)");
			break;
		case 32020:
			strcpy(err_str, "MC_ERROR: System module data could not be read from the drive during NC manager INIT");
			break;
		case 32021:
			strcpy(err_str, "MC_ERROR: System module data could not be read from the drive after download");
			break;
		case 32022:
			strcpy(err_str, "MC_ERROR: Error aborting data block access before download");
			break;
		case 32023:
			strcpy(err_str, "MC_ERROR: Error reading boot state before download");
			break;
		case 32025:
			strcpy(err_str, "MC_ERROR: Wrong boot state after SW Reset before download");
			break;
		case 32026:
			strcpy(err_str, "MC_ERROR: Error during INIT of data block write access for download");
			break;
		case 32027:
			strcpy(err_str, "MC_ERROR: Error sending data segment for download");
			break;
		case 32029:
			strcpy(err_str, "MC_ERROR: Response error after sending data segment for download");
			break;
		case 32030:
			strcpy(err_str, "MC_ERROR: Error at command for system module burn after download");
			break;
		case 32031:
			strcpy(err_str, "MC_ERROR: Error reading status for system module burn after download");
			break;
		case 32032:
			strcpy(err_str, "MC_ERROR: Error while burning system module after download");
			break;
		case 32033:
			strcpy(err_str, "MC_ERROR: Timeout while burning system module after download");
			break;
		case 32034:
			strcpy(err_str, "MC_ERROR: Error at SW Reset before download");
			break;
		case 32035:
			strcpy(err_str, "MC_ERROR: Error at SW Reset after download");
			break;
		case 32036:
			strcpy(err_str, "MC_ERROR: Different system module data after download");
			break;
		case 32037:
			strcpy(err_str, "MC_ERROR: Error message(s) lost because of FIFO overflow (acknowledge errors)");
			break;
		case 32038:
			strcpy(err_str, "MC_ERROR: Error searching for INIT parameter module");
			break;
		case 32039:
			strcpy(err_str, "MC_ERROR: Error reading INIT parameter module");
			break;
		case 32040:
			strcpy(err_str, "MC_ERROR: Version of INIT parameter module is not compatible to NC manager");
			break;
		case 32041:
			strcpy(err_str, "MC_ERROR: The module acp10cfg does not exist");
			break;
		case 32042:
			strcpy(err_str, "MC_ERROR: The module acp10cfg is not an NC data module");
			break;
		case 32043:
			strcpy(err_str, "MC_ERROR: The NC module type of the module acp10cfg is invalid");
			break;
		case 32044:
			strcpy(err_str, "MC_ERROR: The NC module type of the module acp10cfg cannot be read");
			break;
		case 32045:
			strcpy(err_str, "MC_ERROR: The data address in module acp10cfg cannot be read");
			break;
		case 32046:
			strcpy(err_str, "MC_ERROR: The data section of module acp10cfg is empty");
			break;
		case 32047:
			strcpy(err_str, "MC_ERROR: A CAN node number in module acp10cfg is invalid");
			break;
		case 32048:
			strcpy(err_str, "MC_ERROR: A CAN node number in module acp10cfg is used repeatedly");
			break;
		case 32049:
			strcpy(err_str, "MC_ERROR: This NC action is not allowed during Trace is active");
			break;
		case 32050:
			strcpy(err_str, "MC_ERROR: A Trace Data Upload is already active");
			break;
		case 32051:
			strcpy(err_str, "MC_ERROR: Invalid Trace Status for Trace Data Upload");
			break;
		case 32053:
			strcpy(err_str, "MC_ERROR: Error defining Write COB for Parameter Read Request 2");
			break;
		case 32054:
			strcpy(err_str, "MC_ERROR: Error defining Write COB for Parameter Write Request 2");
			break;
		case 32055:
			strcpy(err_str, "MC_ERROR: Error defining Read COB for Parameter Read Response 2");
			break;
		case 32056:
			strcpy(err_str, "MC_ERROR: Error defining Read COB for Parameter Write Response 2");
			break;
		case 32057:
			strcpy(err_str, "MC_ERROR: Error accessing HS task class table");
			break;
		case 32058:
			strcpy(err_str, "MC_ERROR: Error accessing task class table");
			break;
		case 32059:
			strcpy(err_str, "MC_ERROR: Parameter tk_no invalid for access to task class table");
			break;
		case 32060:
			strcpy(err_str, "MC_ERROR: Timeout for cyclic data from drive - Indications invalid (network error ?)");
			break;
		case 32061:
			strcpy(err_str, "MC_ERROR: Timeout sending a Read Request telegram (network error ?)");
			break;
		case 32062:
			strcpy(err_str, "MC_ERROR: Timeout sending a Write Request telegram (network error ?)");
			break;
		case 32063:
			strcpy(err_str, "MC_ERROR: Data address zero (set/read parameter via service interface)");
			break;
		case 32064:
			strcpy(err_str, "MC_ERROR: Convert text into binary data is not possible for this parameter data type");
			break;
		case 32065:
			strcpy(err_str, "MC_ERROR: Convert binary data into text is not possible for this parameter data type");
			break;
		case 32066:
			strcpy(err_str, "MC_ERROR: Parameter ID zero (set/read parameter via service interface)");
			break;
		case 32067:
			strcpy(err_str, "MC_ERROR: Parameter ID invalid (set/read parameter with option ncDATA_TEXT)");
			break;
		case 32069:
			strcpy(err_str, "MC_ERROR: The data address of the ACOPOS parameters in module acp10cfg cannot be read");
			break;
		case 32070:
			strcpy(err_str, "MC_ERROR: Drive for ACOPOS parameters in module acp10cfg not found");
			break;
		case 32071:
			strcpy(err_str, "MC_ERROR: The ACOPOS parameters are invalid (an update of AutomationStudio is necessary)");
			break;
		case 32072:
			strcpy(err_str, "MC_ERROR: Wrong boot state after SW Reset");
			break;
		case 32073:
			strcpy(err_str, "MC_ERROR: Download of NC system module: Error reading NC hardware version of BsLoader");
			break;
		case 32074:
			strcpy(err_str, "MC_ERROR: Incompatible NC hardware version: Download of BsLoader not possible");
			break;
		case 32075:
			strcpy(err_str, "MC_ERROR: Incompatible NC hardware version: Download of operating system not possible");
			break;
		case 32076:
			strcpy(err_str, "MC_ERROR: FIFO for messages with high priority to NC Manager Task is full");
			break;
		case 32077:
			strcpy(err_str, "MC_ERROR: A POWERLINK node number in module acp10cfg is invalid");
			break;
		case 32078:
			strcpy(err_str, "MC_ERROR: A POWERLINK node number in module acp10cfg is used repeatedly");
			break;
		case 32079:
			strcpy(err_str, "MC_ERROR: With this version one CAN interface must be in module acp10cfg");
			break;
		case 32080:
			strcpy(err_str, "MC_ERROR: With this version one POWERLINK interface must be in module acp10cfg");
			break;
		case 32081:
			strcpy(err_str, "MC_ERROR: With this version only one POWERLINK interface is allowed in module acp10cfg");
			break;
		case 32082:
			strcpy(err_str, "MC_ERROR: Module acp10cfg contains a CAN interface without any drive node");
			break;
		case 32083:
			strcpy(err_str, "MC_ERROR: Module acp10cfg contains a POWERLINK interface without any drive node");
			break;
		case 32084:
			strcpy(err_str, "MC_ERROR: The NC configuration does not contain any ACOPOS module");
			break;
		case 32085:
			strcpy(err_str, "MC_ERROR: Module acp10cfg invalid (AutomationStudio V2.2 or higher necessary)");
			break;
		case 32086:
			strcpy(err_str, "MC_ERROR: With this version no CAN interface is allowed in module acp10cfg");
			break;
		case 32087:
			strcpy(err_str, "MC_ERROR: With this version no POWERLINK interface is allowed in module acp10cfg");
			break;
		case 32088:
			strcpy(err_str, "MC_ERROR: The INIT parameter module specified in the NC Mapping Table does not exist");
			break;
		case 32089:
			strcpy(err_str, "MC_ERROR: NC-HW-ID of INIT parameter module is not compatible to NC manager");
			break;
		case 32090:
			strcpy(err_str, "MC_ERROR: NC object type of INIT parameter module is not equal to NC object");
			break;
		case 32091:
			strcpy(err_str, "MC_ERROR: Invalid block data in INIT parameter module (data range exceeded)");
			break;
		case 32092:
			strcpy(err_str, "MC_ERROR: Error sending a command to the NC Idle Task");
			break;
		case 32093:
			strcpy(err_str, "MC_ERROR: NcManCtrl is defined repeatedly with different values");
			break;
		case 32094:
			strcpy(err_str, "MC_ERROR: NetworkInit is defined repeatedly for ncMANAGER with different values");
			break;
		case 32095:
			strcpy(err_str, "MC_ERROR: Value of drive group in CAN-CFG-Module higher than maximum value");
			break;
		case 32096:
			strcpy(err_str, "MC_ERROR: Size of data buffer for trace data upload in module acp10cfg too small");
			break;
		case 32097:
			strcpy(err_str, "MC_ERROR: All counts of used network interfaces in module acp10cfg are zero");
			break;
		case 32098:
			strcpy(err_str, "MC_ERROR: Version of the module acp10cfg is not compatible with NC manager");
			break;
		case 32099:
			strcpy(err_str, "MC_ERROR: Length of data section of module acp10cfg is too small");
			break;
		case 32100:
			strcpy(err_str, "MC_ERROR: Memory for NC error text management cannot be allocated");
			break;
		case 32101:
			strcpy(err_str, "MC_ERROR: Error accessing NC error text module in BR module table");
			break;
		case 32102:
			strcpy(err_str, "MC_ERROR: Version ID of error text module not equal to that of NC manager");
			break;
		case 32103:
			strcpy(err_str, "MC_ERROR: Data section of error text module cannot be read");
			break;
		case 32104:
			strcpy(err_str, "MC_ERROR: Data section of error text module is empty");
			break;
		case 32105:
			strcpy(err_str, "MC_ERROR: Length of data section of error text module is too small");
			break;
		case 32106:
			strcpy(err_str, "MC_ERROR: Error list of error text module not equal with that of NC manager");
			break;
		case 32107:
			strcpy(err_str, "MC_ERROR: Parameter list of error text module not equal with that of NC manager");
			break;
		case 32108:
			strcpy(err_str, "MC_ERROR: The last error number of error text module is not equal to 65535");
			break;
		case 32109:
			strcpy(err_str, "MC_ERROR: The last parameter ID of error text module is not equal to 65535");
			break;
		case 32110:
			strcpy(err_str, "MC_ERROR: Length of data section of CAN-CFG-Module cannot be read");
			break;
		case 32111:
			strcpy(err_str, "MC_ERROR: Length of data section of CAN-CFG-Module is too small");
			break;
		case 32112:
			strcpy(err_str, "MC_ERROR: The data address in the CAN-CFG-Module cannot be read");
			break;
		case 32113:
			strcpy(err_str, "MC_ERROR: The enable code in the CAN-CFG-Module is invalid");
			break;
		case 32114:
			strcpy(err_str, "MC_ERROR: Values not equal to zero in reserved area of CAN-CFG-Module");
			break;
		case 32115:
			strcpy(err_str, "MC_ERROR: The basis CAN ID for WR/RD channel1 in the CAN-CFG-Module is invalid");
			break;
		case 32116:
			strcpy(err_str, "MC_ERROR: The basis CAN ID for WR/RD channel2 in the CAN-CFG-Module is invalid");
			break;
		case 32117:
			strcpy(err_str, "MC_ERROR: The basis CAN ID for WR/RD channel3 in the CAN-CFG-Module is invalid");
			break;
		case 32118:
			strcpy(err_str, "MC_ERROR: The basis CAN ID for monitor data in the CAN-CFG-Module is invalid");
			break;
		case 32119:
			strcpy(err_str, "MC_ERROR: Invalid basis CAN ID for cyclic data to the drive in CAN-CFG-Module");
			break;
		case 32120:
			strcpy(err_str, "MC_ERROR: Invalid basis CAN ID for cyclic data from the drive in CAN-CFG-Module");
			break;
		case 32121:
			strcpy(err_str, "MC_ERROR: The CAN ID for the SYNC telegram in the CAN-CFG-Module is invalid");
			break;
		case 32122:
			strcpy(err_str, "MC_ERROR: The CAN ID for the broadcast command in the CAN-CFG-Module is invalid");
			break;
		case 32123:
			strcpy(err_str, "MC_ERROR: Error defining Read COB for WR2 Request (external set position mode)");
			break;
		case 32124:
			strcpy(err_str, "MC_ERROR: Error defining Read COB for WR2 Response (external set position mode)");
			break;
		case 32125:
			strcpy(err_str, "MC_ERROR: Error defining Read COB for RD2 Request (external set position mode)");
			break;
		case 32126:
			strcpy(err_str, "MC_ERROR: Error defining Read COB for RD2 Response (external set position mode)");
			break;
		case 32127:
			strcpy(err_str, "MC_ERROR: Error deleting Write COB for Broadcast Command (external set position mode)");
			break;
		case 32128:
			strcpy(err_str, "MC_ERROR: Error defining Read COB for Broadcast Command (external set position mode)");
			break;
		case 32129:
			strcpy(err_str, "MC_ERROR: Error defining Read COB for cyclic user data from drive (ext. set pos. mode)");
			break;
		case 32130:
			strcpy(err_str, "MC_ERROR: This external set position mode is only allowed with one CAN interface");
			break;
		case 32131:
			strcpy(err_str, "MC_ERROR: The specified NC data module does not exist");
			break;
		case 32132:
			strcpy(err_str, "MC_ERROR: The specified module is not an NC data module");
			break;
		case 32133:
			strcpy(err_str, "MC_ERROR: The NC module type of the specified NC data module is invalid");
			break;
		case 32134:
			strcpy(err_str, "MC_ERROR: The NC module type of the specified NC data module cannot be read");
			break;
		case 32135:
			strcpy(err_str, "MC_ERROR: The data address of the specified NC data module cannot be read");
			break;
		case 32136:
			strcpy(err_str, "MC_ERROR: The Data section of the specified NC data module is empty");
			break;
		case 32137:
			strcpy(err_str, "MC_ERROR: Data address of structure for a data block operation is zero");
			break;
		case 32138:
			strcpy(err_str, "MC_ERROR: Data address zero (user data for data block operation)");
			break;
		case 32139:
			strcpy(err_str, "MC_ERROR: Data length zero (user data for data block operation)");
			break;
		case 32140:
			strcpy(err_str, "MC_ERROR: Data block operation: Data module name or data address must be zero");
			break;
		case 32141:
			strcpy(err_str, "MC_ERROR: Invalid data format in a parameter sequence");
			break;
		case 32142:
			strcpy(err_str, "MC_ERROR: ID or type of a parameter invalid in parameter sequence with text format");
			break;
		case 32143:
			strcpy(err_str, "MC_ERROR: Data of a parameter in a parameter sequence longer than 6 bytes");
			break;
		case 32144:
			strcpy(err_str, "MC_ERROR: Error for an ACOPOS Parameter Table specified in the NC Mapping Table");
			break;
		case 32145:
			strcpy(err_str, "MC_ERROR: The ACOPOS Parameter Table does not exist");
			break;
		case 32146:
			strcpy(err_str, "MC_ERROR: The ACOPOS Parameter Table is not an NC data module");
			break;
		case 32147:
			strcpy(err_str, "MC_ERROR: The NC module type of the ACOPOS Parameter Table is invalid");
			break;
		case 32148:
			strcpy(err_str, "MC_ERROR: The NC module type of the ACOPOS Parameter Table cannot be read");
			break;
		case 32149:
			strcpy(err_str, "MC_ERROR: The data address in the ACOPOS Parameter Table cannot be read");
			break;
		case 32150:
			strcpy(err_str, "MC_ERROR: The data section of the ACOPOS Parameter Table is empty");
			break;
		case 32151:
			strcpy(err_str, "MC_ERROR: Error initializing memory buffer for XML parser");
			break;
		case 32152:
			strcpy(err_str, "MC_ERROR: No XML elements present in an ACOPOS Parameter Table");
			break;
		case 32153:
			strcpy(err_str, "MC_ERROR: The first XML element is invalid in the ACOPOS Parameter Table");
			break;
		case 32154:
			strcpy(err_str, "MC_ERROR: The ACOPOS Parameter Table does not contain any ACOPOS parameters");
			break;
		case 32155:
			strcpy(err_str, "MC_ERROR: Nesting depth for ACOPOS parameter groups exceeded");
			break;
		case 32156:
			strcpy(err_str, "MC_ERROR: ID or type of an ACOPOS parameter invalid for text conversion");
			break;
		case 32157:
			strcpy(err_str, "MC_ERROR: Length of parameter data too large for ACOPOS parameter in XML data");
			break;
		case 32158:
			strcpy(err_str, "MC_ERROR: ACOPOS parameter: An attribute is not defined (ID)");
			break;
		case 32159:
			strcpy(err_str, "MC_ERROR: ACOPOS parameter: An attribute is not defined (Value)");
			break;
		case 32160:
			strcpy(err_str, "MC_ERROR: Basis movements with mode ncTRG_STOP are not allowed for ncV_AXIS");
			break;
		case 32161:
			strcpy(err_str, "MC_ERROR: ncNC_SYS_RESTART,ncACKNOWLEDGE is not allowed (network.init=ncFALSE)");
			break;
		case 32162:
			strcpy(err_str, "MC_ERROR: Internal task class number wrong (from now on operation is blocked !!!)");
			break;
		case 32163:
			strcpy(err_str, "MC_ERROR: A system module download to all drives is not possible with SwNodeSelect");
			break;
		case 32164:
			strcpy(err_str, "MC_ERROR: The text defined with NetworkInit (global) is invalid");
			break;
		case 32165:
			strcpy(err_str, "MC_ERROR: A CAN node number is equal to NodeNr_SwNodeSelect");
			break;
		case 32166:
			strcpy(err_str, "MC_ERROR: Network initialization during active network initialization not allowed");
			break;
		case 32167:
			strcpy(err_str, "MC_ERROR: The text defined with NetworkInit is invalid");
			break;
		case 32168:
			strcpy(err_str, "MC_ERROR: NodeNr_SwNodeSelect is defined repeatedly with different values");
			break;
		case 32169:
			strcpy(err_str, "MC_ERROR: The node number defined with NodeNr_SwNodeSelect is invalid");
			break;
		case 32170:
			strcpy(err_str, "MC_ERROR: A data module name has to be entered for this data block operation");
			break;
		case 32171:
			strcpy(err_str, "MC_ERROR: Index zero is not allowed (user data for data block operation)");
			break;
		case 32172:
			strcpy(err_str, "MC_ERROR: The specified data module name is not valid for a BR module");
			break;
		case 32173:
			strcpy(err_str, "MC_ERROR: Memory for data module creation cannot be allocated");
			break;
		case 32174:
			strcpy(err_str, "MC_ERROR: Error with installation of data module into BR module table");
			break;
		case 32175:
			strcpy(err_str, "MC_ERROR: Error with installation of data module into BR module table");
			break;
		case 32176:
			strcpy(err_str, "MC_ERROR: Text for parameter data too large for parameter sequence with text format");
			break;
		case 32177:
			strcpy(err_str, "MC_ERROR: Text for parameter data too large for parameter list with text format");
			break;
		case 32178:
			strcpy(err_str, "MC_ERROR: This NC object is not enabled for this ACOPOS (channel number too high)");
			break;
		case 32179:
			strcpy(err_str, "MC_ERROR: ID or type of a parameter invalid in parameter list with text format");
			break;
		case 32180:
			strcpy(err_str, "MC_ERROR: Data address of structure for a parameter list operation is zero");
			break;
		case 32181:
			strcpy(err_str, "MC_ERROR: Data address zero (user data for parameter list operation)");
			break;
		case 32182:
			strcpy(err_str, "MC_ERROR: Data length zero (user data for parameter list operation)");
			break;
		case 32183:
			strcpy(err_str, "MC_ERROR: Data length invalid (user data for parameter list operation)");
			break;
		case 32184:
			strcpy(err_str, "MC_ERROR: Invalid data format in a parameter list");
			break;
		case 32185:
			strcpy(err_str, "MC_ERROR: Data of a parameter in a parameter list longer than 6 bytes");
			break;
		case 32186:
			strcpy(err_str, "MC_ERROR: NetBasisInitNr is defined repeatedly for ncMANAGER with different values");
			break;
		case 32187:
			strcpy(err_str, "MC_ERROR: Error for synchronization of network initialization (details in Logger)");
			break;
		case 32188:
			strcpy(err_str, "MC_ERROR: This NC object is defined in hardware configuration and NC Mapping Table");
			break;
		case 32189:
			strcpy(err_str, "MC_ERROR: Timeout for cyclic data from drive - Indications invalid (network error ?)");
			break;
		case 32190:
			strcpy(err_str, "MC_ERROR: Error defining Write COB for selection of node number via software");
			break;
		case 32191:
			strcpy(err_str, "MC_ERROR: This parameter ID is reserved for the PLCopen MC library");
			break;
		case 32192:
			strcpy(err_str, "MC_ERROR: The specified data module is not an INIT Parameter module");
			break;
		case 32193:
			strcpy(err_str, "MC_ERROR: For this NC object type no INIT parameter module is present");
			break;
		case 32194:
			strcpy(err_str, "MC_ERROR: This function is not implemented for this NC object type");
			break;
		case 32195:
			strcpy(err_str, "MC_ERROR: Error downloading BsLoader to ACOPOS");
			break;
		case 32196:
			strcpy(err_str, "MC_ERROR: Error downloading operating system to ACOPOS");
			break;
		case 32197:
			strcpy(err_str, "MC_ERROR: Error downloading BsLoader to ACOPOS (additional info in Logger)");
			break;
		case 32198:
			strcpy(err_str, "MC_ERROR: Error downloading operating system to ACOPOS (additional info in Logger)");
			break;
		case 32200:
			strcpy(err_str, "MC_ERROR: Error calling plAcycWrite() (read parameter)");
			break;
		case 32201:
			strcpy(err_str, "MC_ERROR: Error calling plAcycWrite() (write parameter)");
			break;
		case 32202:
			strcpy(err_str, "MC_ERROR: Error calling plAcycRead() (read parameter)");
			break;
		case 32203:
			strcpy(err_str, "MC_ERROR: Error calling plAcycRead() (write parameter)");
			break;
		case 32204:
			strcpy(err_str, "MC_ERROR: Timeout while reading par. via acyclic channel (is the drive in the network ?)");
			break;
		case 32205:
			strcpy(err_str, "MC_ERROR: Timeout while writing par. via acyclic channel (is the drive in the network ?)");
			break;
		case 32206:
			strcpy(err_str, "MC_ERROR: Cyclic channel: Read Request in spite of Wait for Response");
			break;
		case 32207:
			strcpy(err_str, "MC_ERROR: Cyclic channel: Write Request in spite of Wait for Response");
			break;
		case 32208:
			strcpy(err_str, "MC_ERROR: Error using plAction(DEVICE_TO_BUS_NR) (additional info in Logger)");
			break;
		case 32209:
			strcpy(err_str, "MC_ERROR: Error using plAction(GET_IDENT) (additional info in Logger)");
			break;
		case 32210:
			strcpy(err_str, "MC_ERROR: Wrong interface ident when calling plState() (additional info in Logger)");
			break;
		case 32211:
			strcpy(err_str, "MC_ERROR: Interface not available when calling plState() (additional info in Logger)");
			break;
		case 32212:
			strcpy(err_str, "MC_ERROR: Fatal interface error when calling plState() (additional info in Logger)");
			break;
		case 32213:
			strcpy(err_str, "MC_ERROR: Timeout for POWERLINK interface (additional info in Logger)");
			break;
		case 32214:
			strcpy(err_str, "MC_ERROR: Error calling plAcycOpen() (additional info in Logger)");
			break;
		case 32215:
			strcpy(err_str, "MC_ERROR: Error calling plCECreate() (additional info in Logger)");
			break;
		case 32216:
			strcpy(err_str, "MC_ERROR: Error using plAction(GET_IF_PAR) (additional info in Logger)");
			break;
		case 32217:
			strcpy(err_str, "MC_ERROR: Broadcast channel: Error calling plAcycWrite() (read parameter)");
			break;
		case 32218:
			strcpy(err_str, "MC_ERROR: Broadcast channel: Error calling plAcycWrite() (write parameter)");
			break;
		case 32219:
			strcpy(err_str, "MC_ERROR: Error using plAction(GET_IF_MUXPRESCALE) (additional info in Logger)");
			break;
		case 32220:
			strcpy(err_str, "MC_ERROR: Error using plAction(GET_IF_CYCLE_TIME) (additional info in Logger)");
			break;
		case 32221:
			strcpy(err_str, "MC_ERROR: Error using plAction(GET_IF_PRESCALE) (additional info in Logger)");
			break;
		case 32222:
			strcpy(err_str, "MC_ERROR: Error using plAction(GET_STATIONFLAG) (additional info in Logger)");
			break;
		case 32223:
			strcpy(err_str, "MC_ERROR: Error calling plGetNodeInfo() (additional info in Logger)");
			break;
		case 32224:
			strcpy(err_str, "MC_ERROR: Error calling plAction(GET_PROTOCOL_VERSION) (additional info in Logger)");
			break;
		case 32225:
			strcpy(err_str, "MC_ERROR: This ACOPOS POWERLINK node does not exist in the AR Configuration");
			break;
		case 32226:
			strcpy(err_str, "MC_ERROR: A SDC node number in module acp10cfg is invalid");
			break;
		case 32227:
			strcpy(err_str, "MC_ERROR: A SDC node number in module acp10cfg is used repeatedly");
			break;
		case 32228:
			strcpy(err_str, "MC_ERROR: There is no network interface (POWERLINK or SDC) contained in acp10cfg");
			break;
		case 32229:
			strcpy(err_str, "MC_ERROR: The object acp10sdc does not exist (necessary for SDC NC objects)");
			break;
		case 32230:
			strcpy(err_str, "MC_ERROR: Error at initialization of ACP10SDC or ACP10SIM (see Logger)");
			break;
		case 32231:
			strcpy(err_str, "MC_ERROR: Error at SDC configuration (see Logger)");
			break;
		case 32232:
			strcpy(err_str, "MC_ERROR: The object acp10sim does not exist (necessary for ACOPOS simulation)");
			break;
		case 32233:
			strcpy(err_str, "MC_ERROR: The object acp10bsl contains no NC system module");
			break;
		case 32234:
			strcpy(err_str, "MC_ERROR: The object acp10sys contains no NC system module");
			break;
		case 32235:
			strcpy(err_str, "MC_ERROR: Data address zero for parameter in parameter sequence");
			break;
		case 32236:
			strcpy(err_str, "MC_ERROR: Data address zero for parameter in parameter list");
			break;
		case 32237:
			strcpy(err_str, "MC_ERROR: Channel index for ACOPOS parameters in module acp10cfg is invalid");
			break;
		case 32238:
			strcpy(err_str, "MC_ERROR: This function is not implemented at this time");
			break;
		case 32239:
			strcpy(err_str, "MC_ERROR: Basic memory for INIT parameter modules could not be allocated");
			break;
		case 32240:
			strcpy(err_str, "MC_ERROR: NC object data invalid (PV with INIT value in variable declaration ?)");
			break;
		case 32241:
			strcpy(err_str, "MC_ERROR: Data block operation: Data module name must be zero");
			break;
		case 32242:
			strcpy(err_str, "MC_ERROR: Conditions for cam profile transfer via Systick-Task are not fullfilled");
			break;
		case 32243:
			strcpy(err_str, "MC_ERROR: Error using plAction(GET_PDO_INFO) (additional info in Logger)");
			break;
		case 32244:
			strcpy(err_str, "MC_ERROR: No PDO defined in the cyclic frame for this channel: NC object is disabled");
			break;
		case 32245:
			strcpy(err_str, "MC_ERROR: The Memory for operating the broadcast channel cannot be allocated");
			break;
		case 32246:
			strcpy(err_str, "MC_ERROR: 'Direction' of the POWERLINK broadcast channel is not 'Output'");
			break;
		case 32251:
			strcpy(err_str, "MC_ERROR: NcNetCyc: Response timeout");
			break;
		case 32252:
			strcpy(err_str, "MC_ERROR: NcNetCyc: Unexpected Response (invalid counter value)");
			break;
		case 32253:
			strcpy(err_str, "MC_ERROR: The task class for POWERLINK output cycle trigger is invalid");
			break;
		case 32260:
			strcpy(err_str, "MC_ERROR: Trace: No valid test data point is defined");
			break;
		case 32261:
			strcpy(err_str, "MC_ERROR: Trace trigger: The NC object is invalid");
			break;
		case 32262:
			strcpy(err_str, "MC_ERROR: Trace test data point: The NC object is invalid");
			break;
		case 32263:
			strcpy(err_str, "MC_ERROR: Trace trigger: The NC object is not enabled for this ACOPOS");
			break;
		case 32264:
			strcpy(err_str, "MC_ERROR: Trace test data point: The NC object is not enabled for this ACOPOS");
			break;
		case 32265:
			strcpy(err_str, "MC_ERROR: Trace trigger: Trace for this NC object already active at trace start");
			break;
		case 32266:
			strcpy(err_str, "MC_ERROR: Trace test data point: Trace for this NC object already active at trace start");
			break;
		case 32267:
			strcpy(err_str, "MC_ERROR: Trace trigger: The NC object is not enabled for trace commands");
			break;
		case 32268:
			strcpy(err_str, "MC_ERROR: Trace test data point: The NC object is not enabled for trace commands");
			break;
		case 32269:
			strcpy(err_str, "MC_ERROR: Trace: Too many test data points defined for one trace channel");
			break;
		case 32270:
			strcpy(err_str, "MC_ERROR: ACOPOS coupling: The channel number of send data is invalid");
			break;
		case 32271:
			strcpy(err_str, "MC_ERROR: ACOPOS coupling: The channel number of receive data is invalid");
			break;
		case 32272:
			strcpy(err_str, "MC_ERROR: ACOPOS coupling: Send data with this channel number are not configured");
			break;
		case 32273:
			strcpy(err_str, "MC_ERROR: ACOPOS coupling: The NC object of send data is invalid");
			break;
		case 32274:
			strcpy(err_str, "MC_ERROR: Network coupling: The broadcast channel was not configured");
			break;
		case 32275:
			strcpy(err_str, "MC_ERROR: Network coupling: The broadcast channel was not successfully initialized");
			break;
		case 32276:
			strcpy(err_str, "MC_ERROR: Network coupling: Cycle times not equal (network interfaces, NC task class)");
			break;
		case 32277:
			strcpy(err_str, "MC_ERROR: Network coupling: In the broadcast channel no more data record has place");
			break;
		case 32278:
			strcpy(err_str, "MC_ERROR: ACOPOS coupling: Zero as Parameter ID of send data is not allowed");
			break;
		case 32279:
			strcpy(err_str, "MC_ERROR: Service interface: Data address zero");
			break;
		case 32280:
			strcpy(err_str, "MC_ERROR: Timeout for enable of acyclic network communication");
			break;
		case 32281:
			strcpy(err_str, "MC_ERROR: Version of SafeMC lower than minimum version (see Logger)");
			break;
		case 32282:
			strcpy(err_str, "MC_ERROR: Network coupling: Incompatible cycle times (network interfaces, NC task class)");
			break;
		case 32294:
			strcpy(err_str, "MC_ERROR: NC Manager error: Pointer of function nctune_sequ() is zero");
			break;
		case 32295:
			strcpy(err_str, "MC_ERROR: NC Manager error: Data structure address zero when calling nctune_sequ()");
			break;
		case 32296:
			strcpy(err_str, "MC_ERROR: NC Manager error: Data structure size invalid when calling nctune_sequ()");
			break;
		case 32297:
			strcpy(err_str, "MC_ERROR: NC Manager error: NC object address zero when calling nctune_sequ()");
			break;
		case 32298:
			strcpy(err_str, "MC_ERROR: NC Manager error: Unknown error number when calling nctune_sequ()");
			break;
		case 32300:
			strcpy(err_str, "MC_ERROR: For controller setup the library acp10tun must be transferred to the target");
			break;
		case 32301:
			strcpy(err_str, "MC_ERROR: Setup start not allowed: 'count.error' is greater than zero");
			break;
		case 32302:
			strcpy(err_str, "MC_ERROR: Start setup not possible: A setup operation is already active");
			break;
		case 32303:
			strcpy(err_str, "MC_ERROR: Setup start not possible: The axis is not global initialized");
			break;
		case 32304:
			strcpy(err_str, "MC_ERROR: Setup start not possible: The controller is not switched off");
			break;
		case 32305:
			strcpy(err_str, "MC_ERROR: Setup start not possible: The controller is not ready");
			break;
		case 32306:
			strcpy(err_str, "MC_ERROR: Setup start not possible: The trace is already active");
			break;
		case 32307:
			strcpy(err_str, "MC_ERROR: Setup for controller: Percentage for rated current higher than maximum value");
			break;
		case 32308:
			strcpy(err_str, "MC_ERROR: Setup for controller: Percentage for rated current lower than minimum value");
			break;
		case 32309:
			strcpy(err_str, "MC_ERROR: Setup for controller: Percentage for speed higher than maximum value");
			break;
		case 32310:
			strcpy(err_str, "MC_ERROR: Setup for controller: Percentage for speed lower than minimum value");
			break;
		case 32311:
			strcpy(err_str, "MC_ERROR: Setup for controller: Move distance higher than maximum value");
			break;
		case 32312:
			strcpy(err_str, "MC_ERROR: Setup for controller: Move distance lower than minimum value");
			break;
		case 32313:
			strcpy(err_str, "MC_ERROR: Setup start not possible with this mode: The axis is not referenced");
			break;
		case 32314:
			strcpy(err_str, "MC_ERROR: Setup for controller: Mode invalid");
			break;
		case 32315:
			strcpy(err_str, "MC_ERROR: Setup for controller: Mode invalid (Library)");
			break;
		case 32316:
			strcpy(err_str, "MC_ERROR: Setup for controller: The calculated inertia is zero");
			break;
		case 32317:
			strcpy(err_str, "MC_ERROR: Setup for controller: SCTRL_KV is zero");
			break;
		case 32318:
			strcpy(err_str, "MC_ERROR: Setup for controller: POS_CTRL_KV is zero");
			break;
		case 32319:
			strcpy(err_str, "MC_ERROR: Setup for controller: Calculation of result parameters was not possible");
			break;
		case 32320:
			strcpy(err_str, "MC_ERROR: Setup for controller: Speed limit values too high for MOTOR_SPEED_RATED");
			break;
		case 32321:
			strcpy(err_str, "MC_ERROR: Setup for controller: Coefficient a0 is zero ('+ ncISQ_F1_NOTCH' not possible)");
			break;
		case 32400:
			strcpy(err_str, "MC_ERROR: Memory cannot be allocated");
			break;
		case 32401:
			strcpy(err_str, "MC_ERROR: No file name specified");
			break;
		case 32402:
			strcpy(err_str, "MC_ERROR: The specified file cannot be opened");
			break;
		case 32403:
			strcpy(err_str, "MC_ERROR: The specified file cannot be created");
			break;
		case 32404:
			strcpy(err_str, "MC_ERROR: Error at writing into a file");
			break;
		case 32405:
			strcpy(err_str, "MC_ERROR: Error at reading from a file");
			break;
		case 32406:
			strcpy(err_str, "MC_ERROR: The specified file cannot be created");
			break;
		case 32407:
			strcpy(err_str, "MC_ERROR: Error at writing into a file");
			break;
		case 32408:
			strcpy(err_str, "MC_ERROR: Error at closing a file");
			break;
		case 32409:
			strcpy(err_str, "MC_ERROR: The specified file cannot be deleted");
			break;
		case 32410:
			strcpy(err_str, "MC_ERROR: The data object type is invalid");
			break;
		case 32411:
			strcpy(err_str, "MC_ERROR: The address of the data object structure is zero");
			break;
		case 32412:
			strcpy(err_str, "MC_ERROR: The name in the data object structure is zero");
			break;
		case 32413:
			strcpy(err_str, "MC_ERROR: The data address in the data object structure is zero");
			break;
		case 32414:
			strcpy(err_str, "MC_ERROR: The data length in the data object structure is zero");
			break;
		case 32415:
			strcpy(err_str, "MC_ERROR: No File Device specified");
			break;
		case 32416:
			strcpy(err_str, "MC_ERROR: The FileIO functions do not exist (is library FileIO existing ?)");
			break;
		case 32417:
			strcpy(err_str, "MC_ERROR: Error at writing into an NC data module");
			break;
		case 32418:
			strcpy(err_str, "MC_ERROR: No XML elements present in MTC data");
			break;
		case 32419:
			strcpy(err_str, "MC_ERROR: MTC data: XML elements invalid or in wrong order");
			break;
		case 32420:
			strcpy(err_str, "MC_ERROR: The MTC data contain an invalid configuration");
			break;
		case 32421:
			strcpy(err_str, "MC_ERROR: The MTC data contain noconfiguration for Multi Axes Trace");
			break;
		case 32422:
			strcpy(err_str, "MC_ERROR: The MTC data contain more than one configuration for Multi Axes Trace");
			break;
		case 32423:
			strcpy(err_str, "MC_ERROR: MTC-Daten: Trigger.NcObject ist invalid");
			break;
		case 32424:
			strcpy(err_str, "MC_ERROR: MTC-Daten: Trigger.Condition ist invalid");
			break;
		case 32425:
			strcpy(err_str, "MC_ERROR: MTC-Daten: Channel.NcObject ist invalid");
			break;
		case 32426:
			strcpy(err_str, "MC_ERROR: Trace trigger: The event is invalid");
			break;
		case 32427:
			strcpy(err_str, "MC_ERROR: Trace trigger: Parameter ID zero not allowed if event unequal to OFF");
			break;
		case 32492:
			strcpy(err_str, "MC_ERROR: ACOPOS Simulation: TC for cyclic PLCopen data not equal to NC Manager TC");
			break;
		case 32494:
			strcpy(err_str, "MC_ERROR: AcoposSimulation=Off for one channel although activated for the other channel");
			break;
		case 32495:
			strcpy(err_str, "MC_ERROR: AcoposSimulation: Different values defined for real and virtual axis");
			break;
		case 32496:
			strcpy(err_str, "MC_ERROR: Error creating cyclic task for PLCopen MC (details in Logger)");
			break;
		case 32497:
			strcpy(err_str, "MC_ERROR: Task class for handling of cyclic data with PLCopen in acp10cfg is invalid");
			break;
		case 32498:
			strcpy(err_str, "MC_ERROR: PLCopen_CyclicData_TaskClass is lower than zero or higher than maximum value");
			break;
		case 32499:
			strcpy(err_str, "MC_ERROR: PLCopen_CyclicData_TaskClass: Values for real and virtual axis are not equal");
			break;
		case 32500:
			strcpy(err_str, "MC_ERROR: The Message FIFO already exists");
			break;
		case 32501:
			strcpy(err_str, "MC_ERROR: Error creating Message FIFO");
			break;
		case 32502:
			strcpy(err_str, "MC_ERROR: The Critical Section for Command Semaphore already exists");
			break;
		case 32503:
			strcpy(err_str, "MC_ERROR: Error creating Critical Section for Command Semaphore");
			break;
		case 32504:
			strcpy(err_str, "MC_ERROR: The NC Manager Idle Task already exists");
			break;
		case 32505:
			strcpy(err_str, "MC_ERROR: Error creating NC Manager Idle Task");
			break;
		case 32506:
			strcpy(err_str, "MC_ERROR: Error reading Taskclass Cycle Time");
			break;
		case 32507:
			strcpy(err_str, "MC_ERROR: Error reading Taskclass Tolerance");
			break;
		case 32508:
			strcpy(err_str, "MC_ERROR: Error sending an idle time command to the NC Manager Task");
			break;
		case 32509:
			strcpy(err_str, "MC_ERROR: The Critical Section for Network Command Trace already exists");
			break;
		case 32510:
			strcpy(err_str, "MC_ERROR: Error creating Critical Section for Network Command Trace");
			break;
		case 32511:
			strcpy(err_str, "MC_ERROR: The Critical Section for messages with high priority already exists");
			break;
		case 32512:
			strcpy(err_str, "MC_ERROR: Error creating Critical Section for messages with high priority");
			break;
		case 32513:
			strcpy(err_str, "MC_ERROR: The Critical Section for global variables already exists");
			break;
		case 32514:
			strcpy(err_str, "MC_ERROR: Error creating Critical Section for global variables");
			break;
		case 32738:
			strcpy(err_str, "MC_ERROR: Error writing into SDM Motion FIFO");
			break;
		case 32739:
			strcpy(err_str, "MC_ERROR: Error creating SDM Motion FIFO (see Logger)");
			break;
		case 32740:
			strcpy(err_str, "MC_ERROR: Error deleting SDM Motion FIFO (see Logger)");
			break;
		case 32741:
			strcpy(err_str, "MC_ERROR: Error creating SDM Motion task (see Logger)");
			break;
		case 32742:
			strcpy(err_str, "MC_ERROR: Error deleting SDM Motion task (see Logger)");
			break;
		case 32743:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action: ncaction() did not return with ncOK");
			break;
		case 32744:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action not allowed (still no Trace configuration loaded)");
			break;
		case 32745:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action not allowed (Motion Trace already started by application)");
			break;
		case 32746:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action not allowed (Motion Trace already started by SDM)");
			break;
		case 32747:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action: DataAddress is zero or defined");
			break;
		case 32748:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action: DataLen is zero or defined");
			break;
		case 32749:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action: BrModName is too long");
			break;
		case 32750:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action: BrModName is not defined");
			break;
		case 32751:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action: FileName is not defined");
			break;
		case 32752:
			strcpy(err_str, "MC_ERROR: SDM_Motion Action not possible: AR function does not exist (see Logger)");
			break;
		case 32753:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action: CREATE_NCOBJ_LIST must be called before this action");
			break;
		case 32754:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action: The NC object type is invalid for this action");
			break;
		case 32755:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action: Memory free error");
			break;
		case 32756:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action: Memory alloc error");
			break;
		case 32757:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action: This action is not yet implemented");
			break;
		case 32758:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action: The NC object ident is invalid for this action");
			break;
		case 32759:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action: The NC object ident must be zero for this action");
			break;
		case 32760:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action: Pointer of exit function arguments is zero or not defined");
			break;
		case 32761:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action: Pointer of exit function is zero or not defined");
			break;
		case 32762:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action: The first XML element in input data is invalid");
			break;
		case 32763:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action: No XML element in input data");
			break;
		case 32764:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action: Error initializing memory buffer for XML parser");
			break;
		case 32765:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action: Length of XML input data is zero");
			break;
		case 32766:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action: Pointer of XML input data is zero");
			break;
		case 32767:
			strcpy(err_str, "MC_ERROR: SDM_Motion_Action: Invalid actionID");
			break;
		case 33000:
			strcpy(err_str, "MC_ERROR: Master cycle time is not a multiple of communication cycle time");
			break;
		case 33002:
			strcpy(err_str, "MC_ERROR: Floating-Point exception");
			break;
		case 33003:
			strcpy(err_str, "MC_ERROR: Address error exception");
			break;
		case 33004:
			strcpy(err_str, "MC_ERROR: Bus error exception");
			break;
		case 33005:
			strcpy(err_str, "MC_ERROR: Exception");
			break;
		case 33006:
			strcpy(err_str, "MC_ERROR: Access violation Exception");
			break;
		case 33007:
			strcpy(err_str, "MC_ERROR: Violation address");
			break;
		case 36001:
			strcpy(err_str, "MC_ERROR: Parameter limited to valid range");
			break;
		case 36002:
			strcpy(err_str, "MC_ERROR: Total time for the position loop controller limited to prediction time");
			break;
		case 37101:
			strcpy(err_str, "MC_ERROR: Calculated compensation distance on slave axis limited to maximum");
			break;
		case 37102:
			strcpy(err_str, "MC_ERROR: Calculated compensation distance on slave axis limited to minimum");
			break;
		case 37103:
			strcpy(err_str, "MC_ERROR: Slave trigger outside of window");
			break;
		case 37104:
			strcpy(err_str, "MC_ERROR: Slave trigger missing");
			break;
		case 37105:
			strcpy(err_str, "MC_ERROR: Master compensation trigger outside of window");
			break;
		case 37107:
			strcpy(err_str, "MC_ERROR: Displacement actual/set position too high during 'controller switch on'");
			break;
		case 37108:
			strcpy(err_str, "MC_ERROR: Calculated compensation distance of master axis limited to minimum");
			break;
		case 37109:
			strcpy(err_str, "MC_ERROR: Master trigger outside of window");
			break;
		case 37110:
			strcpy(err_str, "MC_ERROR: Master position at start higher than first trigger position");
			break;
		case 37111:
			strcpy(err_str, "MC_ERROR: Cam profile data: Difference between polynomial value y(xn) and slave period");
			break;
		case 37112:
			strcpy(err_str, "MC_ERROR: Polynomial within cam profile data exceeds limit value");
			break;
		case 37113:
			strcpy(err_str, "MC_ERROR: Cam profile compensation gears: Limit values exceeded");
			break;
		case 38000:
			strcpy(err_str, "MC_ERROR: Current controller: Motor speed is too high during switching on");
			break;
		case 38001:
			strcpy(err_str, "MC_ERROR: Torque limiter: Limit value too high");
			break;
		case 38003:
			strcpy(err_str, "MC_ERROR: Motor holding brake: Test torque was limited");
			break;
		case 38004:
			strcpy(err_str, "MC_ERROR: Motor holding brake: Test torque less than load torque");
			break;
		case 38005:
			strcpy(err_str, "MC_ERROR: Motor test: Speed is too high during switch on");
			break;
		case 38006:
			strcpy(err_str, "MC_ERROR: Current controller: Permissible current offset values exceeded");
			break;
		case 38007:
			strcpy(err_str, "MC_ERROR: System administration: BsLoader activ: Jumper plugged");
			break;
		case 38008:
			strcpy(err_str, "MC_ERROR: Bleeder: No current flow");
			break;
		case 39001:
			strcpy(err_str, "MC_ERROR: Encoder: Position correction active");
			break;
		case 39002:
			strcpy(err_str, "MC_ERROR: Resolver: Speed limit for 14 bit resolution exceeded");
			break;
		case 39003:
			strcpy(err_str, "MC_ERROR: EnDat encoder: Alarm bit is set");
			break;
		case 39004:
			strcpy(err_str, "MC_ERROR: EnDat encoder: Alarm bit - Lighting failure");
			break;
		case 39005:
			strcpy(err_str, "MC_ERROR: EnDat encoder: Alarm bit - Signal amplitude too small");
			break;
		case 39006:
			strcpy(err_str, "MC_ERROR: EnDat encoder: Alarm bit - Position value contains an error");
			break;
		case 39007:
			strcpy(err_str, "MC_ERROR: EnDat encoder: Alarm bit - Overvoltage");
			break;
		case 39008:
			strcpy(err_str, "MC_ERROR: EnDat encoder: Alarm bit - Undervoltage");
			break;
		case 39009:
			strcpy(err_str, "MC_ERROR: EnDat encoder: Alarm bit - Overcurrent");
			break;
		case 39010:
			strcpy(err_str, "MC_ERROR: EnDat encoder: Alarm bit - Battery change required");
			break;
		case 39011:
			strcpy(err_str, "MC_ERROR: EnDat encoder: Warning bit - Frequency too high");
			break;
		case 39012:
			strcpy(err_str, "MC_ERROR: EnDat encoder: Warning bit - Temperature too high");
			break;
		case 39013:
			strcpy(err_str, "MC_ERROR: EnDat encoder: Warning bit - Lighting reserve reached");
			break;
		case 39014:
			strcpy(err_str, "MC_ERROR: EnDat encoder: Warning bit - Battery charge too low");
			break;
		case 39016:
			strcpy(err_str, "MC_ERROR: Incremental encoder emulation: Frequency too high");
			break;
		case 39017:
			strcpy(err_str, "MC_ERROR: Encoder: CRC error while reading position");
			break;
		case 39018:
			strcpy(err_str, "MC_ERROR: Reference pulse monitoring: Faulty position, resolution, or reference pulse");
			break;
		case 39019:
			strcpy(err_str, "MC_ERROR: Serial encoder interface: Stop bit error");
			break;
		case 39020:
			strcpy(err_str, "MC_ERROR: Serial encoder interface: Receive data overrun");
			break;
		case 39021:
			strcpy(err_str, "MC_ERROR: Serial encoder interface: Send data error");
			break;
		case 39022:
			strcpy(err_str, "MC_ERROR: EnDat encoder: Warning bit is set");
			break;
		case 39023:
			strcpy(err_str, "MC_ERROR: EnDat encoder: CRC error while reading EnDat2.2 additional information");
			break;
		case 39024:
			strcpy(err_str, "MC_ERROR: EnDat encoder: Alarm bit - Power failure");
			break;
		case 39025:
			strcpy(err_str, "MC_ERROR: EnDat encoder: Alarm bit - multiturn overflow");
			break;
		case 39026:
			strcpy(err_str, "MC_ERROR: EnDat encoder: Type 3 error while reading EnDat2.2 additional information");
			break;
		case 39027:
			strcpy(err_str, "MC_ERROR: Encoder Emulation: 5V power supply fail");
			break;
		case 39028:
			strcpy(err_str, "MC_ERROR: Encoder: Multiturn failure");
			break;
		case 39301:
			strcpy(err_str, "MC_ERROR: Digital IO: 24V power supply fail");
			break;
		case 39302:
			strcpy(err_str, "MC_ERROR: Digital IO 1-4: Diagnose bit active (current, 24V supply)");
			break;
		case 39303:
			strcpy(err_str, "MC_ERROR: Digital IO 5-8: Diagnose bit active (current, 24V supply)");
			break;
		case 39305:
			strcpy(err_str, "MC_ERROR: Digital IO 10: Diagnose bit active (current, temperature)");
			break;
		case 39306:
			strcpy(err_str, "MC_ERROR: Digital IO 9: Diagnose bit active (current, temperature)");
			break;
		case 39307:
			strcpy(err_str, "MC_ERROR: Digital IO: outputs deactivated by output mask after network error");
			break;
		case 41001:
			strcpy(err_str, "MC_ERROR: Heatsink temperature sensor: Overtemperature");
			break;
		case 41011:
			strcpy(err_str, "MC_ERROR: Temperature sensor (Motor|Choke|External): Overtemperature");
			break;
		case 41031:
			strcpy(err_str, "MC_ERROR: Junction temperature model: Overtemperature");
			break;
		case 41041:
			strcpy(err_str, "MC_ERROR: Bleeder temperature model: Overtemperature");
			break;
		case 41051:
			strcpy(err_str, "MC_ERROR: ACOPOS peak current: Overload");
			break;
		case 41061:
			strcpy(err_str, "MC_ERROR: ACOPOS continuous current: Overload");
			break;
		case 41070:
			strcpy(err_str, "MC_ERROR: Motor temperature model: Overtemperature");
			break;
		case 41075:
			strcpy(err_str, "MC_ERROR: ACOPOS continuous power: Overload");
			break;
		case 41078:
			strcpy(err_str, "MC_ERROR: ACOPOS temperature sensor: Overtemperature");
			break;
		case 64002:
			strcpy(err_str, "MC_ERROR: Delay before SW Reset (network with ascending node numbers ?)");
			break;
		case 64003:
			strcpy(err_str, "MC_ERROR: Delay before NC System Start (network with ascending node numbers ?)");
			break;
		case 64004:
			strcpy(err_str, "MC_ERROR: The following boot error could be entered here with a delay");
			break;
		case 64005:
			strcpy(err_str, "MC_ERROR: Timeout for parameter enable after start of operating system");
			break;
		case 64006:
			strcpy(err_str, "MC_ERROR: Drive did not become synchronous with network master");
			break;
		case 64007:
			strcpy(err_str, "MC_ERROR: Timeout for enable of acyclic network communication");
			break;
		case 64008:
			strcpy(err_str, "MC_ERROR: Timeout for enable of cyclic network communication");
			break;
		case 64009:
			strcpy(err_str, "MC_ERROR: Acp10cfg contains a POWERLINK interface, for which no axis is defined");
			break;
		case 64010:
			strcpy(err_str, "MC_ERROR: NC software test version (validity period in Logger)");
			break;
		case 64500:
			strcpy(err_str, "MC_ERROR: Positive speed limiter active");
			break;
		case 64501:
			strcpy(err_str, "MC_ERROR: Negative speed limiter active");
			break;
		case 64502:
			strcpy(err_str, "MC_ERROR: Positive direction acceleration torque limiter active");
			break;
		case 64503:
			strcpy(err_str, "MC_ERROR: Negative direction acceleration torque limiter active");
			break;
		case 64504:
			strcpy(err_str, "MC_ERROR: Positive direction deceleration torque limiter active");
			break;
		case 64505:
			strcpy(err_str, "MC_ERROR: Negative direction deceleration torque limiter active");
			break;
		case 64506:
			strcpy(err_str, "MC_ERROR: Recovery power limiter active (deceleration too high)");
			break;
		case 65535:
			strcpy(err_str, "MC_ERROR: Response error");
			break;
		default:
			strcpy(err_str, "MC_ERROR: no error happened");
			break;
	}
}

