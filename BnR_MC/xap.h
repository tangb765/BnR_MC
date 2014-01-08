# define COMPUTED_PI_OUT_SIZE 20
typedef struct 
{
	unsigned CN2_M00_MC_Status1_AxisStatusWord:16;
	unsigned CN2_M00_MC_Status1_ErrorCode:16;
	unsigned CN2_MC0_MC_Status2_ActualVelocity:32;
	unsigned CN2_MC0_MC_Status2_ActualPosition:32;
	unsigned CN2_M00_MC_Status3_MovementStatusWord:32;
	unsigned CN2_M00_MC_Status3_ControlStatusWord:32;
} PI_OUT;

# define COMPUTED_PI_IN_SIZE 48
typedef struct 
{
	unsigned CN2_M80_MC_Control_CommandWord:16;
	unsigned PADDING_VAR_1:16;
	unsigned CN2_M40_MC_Parameter_ParameterPosition:32;
	unsigned CN2_M40_MC_Parameter_ParameterVelocity:32;
	unsigned CN2_M40_MC_Parameter_ParameterDirection:32;
	unsigned CN2_M40_MC_Parameter_ParameterDistance:32;
	unsigned CN2_M40_MC_Parameter_ParameterAcceleration:32;
	unsigned CN2_M40_MC_Parameter_ParameterDeceleration:32;
	unsigned CN2_M40_MC_Parameter_ParameterHomePosition:32;
	unsigned CN2_M40_MC_Parameter_ParameterHomeMode:32;
	unsigned CN2_M40_MC_Parameter_ParameterJogVelocity:32;
	unsigned CN2_M80_MC_Control_ParaID:16;
	unsigned PADDING_VAR_2:16;
	unsigned CN2_M40_MC_Parameter_ParaValue:32;
} PI_IN;
