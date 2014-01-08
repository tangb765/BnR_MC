using System;
using System.Runtime.InteropServices;

namespace openPOWERLINK
{

	/// <summary>
	/// Struct : ProcessImage Out
	/// </summary>
	[StructLayout(LayoutKind.Explicit, Pack = 1, Size = 80)]
	public struct AppProcessImageOut
	{
		[FieldOffset(0)]
		public UInt16 CN2_M00_OutChannel_REC_StatusWord;
		[FieldOffset(2)]
		public UInt16 CN2_M00_OutChannel_REC_ErrorCode;
		[FieldOffset(4)]
		public Int32 CN2_MC0_OutChannel_REC_ActualVelocity;
		[FieldOffset(8)]
		public Int32 CN2_MC0_OutChannel_REC_ActualPosition;
		[FieldOffset(12)]
		public UInt32 CN2_M00_OutChannel_REC_MaxProfileVelocity;
		[FieldOffset(16)]
		public UInt32 CN2_M00_OutChannel_REC_MaxProfileAcceleration;
		[FieldOffset(20)]
		public UInt32 CN2_M00_OutChannel_REC_MaxProfileDeceleration;
		[FieldOffset(24)]
		public UInt32 CN2_M00_OutChannel_REC_FollowingErrorWindow;
		[FieldOffset(28)]
		public UInt16 CN2_M00_OutChannel_REC_FollowingErrorTimeout;
		[FieldOffset(30)]
		public byte PADDING_VAR_1;
		[FieldOffset(31)]
		public byte PADDING_VAR_2;
		[FieldOffset(32)]
		public UInt32 CN2_M00_OutChannel_REC_PositionWindow;
		[FieldOffset(36)]
		public UInt16 CN2_M00_OutChannel_REC_PositionWindowTime;
		[FieldOffset(38)]
		public byte PADDING_VAR_3;
		[FieldOffset(39)]
		public byte PADDING_VAR_4;
		[FieldOffset(40)]
		public UInt32 CN2_M00_OutChannel_REC_EncoderIncrements;
		[FieldOffset(44)]
		public UInt32 CN2_M00_OutChannel_REC_MotorRevolutions;
		[FieldOffset(48)]
		public Int32 CN2_MC0_OutChannel_REC_MinSoftwarePositionLimit;
		[FieldOffset(52)]
		public Int32 CN2_MC0_OutChannel_REC_MaxSoftwarePositionLimit;
		[FieldOffset(56)]
		public UInt32 CN2_M00_OutChannel_REC_SupportedDriveModes;
		[FieldOffset(60)]
		public Int16 CN2_MC0_OutChannel_REC_ActualTorque;
		[FieldOffset(62)]
		public Int16 CN2_MC0_OutChannel_REC_ActualCurrent;
		[FieldOffset(64)]
		public UInt16 CN2_M00_OutChannel_REC_MaxTorque;
		[FieldOffset(66)]
		public UInt16 CN2_M00_OutChannel_REC_MaxCurrent;
		[FieldOffset(68)]
		public UInt32 CN2_M00_OutChannel_REC_MotorRatedTorque;
		[FieldOffset(72)]
		public UInt32 CN2_M00_OutChannel_REC_MotorRatedCurrent;
		[FieldOffset(76)]
		public sbyte CN2_M00_OutChannel_REC_DisplayModeOfOperation;
		[FieldOffset(77)]
		public byte PADDING_VAR_5;
		[FieldOffset(78)]
		public byte PADDING_VAR_6;
		[FieldOffset(79)]
		public byte PADDING_VAR_7;
	}

	/// <summary>
	/// Struct : ProcessImage In
	/// </summary>
	[StructLayout(LayoutKind.Explicit, Pack = 1, Size = 92)]
	public struct AppProcessImageIn
	{
		[FieldOffset(0)]
		public UInt16 CN2_M80_InputChannel_REC_ControlWord;
		[FieldOffset(2)]
		public byte PADDING_VAR_1;
		[FieldOffset(3)]
		public byte PADDING_VAR_2;
		[FieldOffset(4)]
		public Int32 CN2_M40_InputChannel_REC_TargetPosition;
		[FieldOffset(8)]
		public Int32 CN2_M40_InputChannel_REC_TargetVelocity;
		[FieldOffset(12)]
		public UInt32 CN2_M80_InputChannel_REC_ProfileVelocity;
		[FieldOffset(16)]
		public UInt32 CN2_M80_InputChannel_REC_ProfileAcceleration;
		[FieldOffset(20)]
		public UInt32 CN2_M80_InputChannel_REC_ProfileDeceleration;
		[FieldOffset(24)]
		public Int32 CN2_M40_InputChannel_REC_HomeOffset;
		[FieldOffset(28)]
		public UInt32 CN2_M80_InputChannel_REC_HomingSwitchVelocity;
		[FieldOffset(32)]
		public UInt32 CN2_M80_InputChannel_REC_HomingZeroVelocity;
		[FieldOffset(36)]
		public UInt32 CN2_M80_InputChannel_REC_HomeAcceleration;
		[FieldOffset(40)]
		public Int16 CN2_M40_InputChannel_REC_HaltCode;
		[FieldOffset(42)]
		public Int16 CN2_M40_InputChannel_REC_FaultReactionCode;
		[FieldOffset(44)]
		public Int16 CN2_M40_InputChannel_REC_AbortOptionCode;
		[FieldOffset(46)]
		public Int16 CN2_M40_InputChannel_REC_QuickStopCode;
		[FieldOffset(48)]
		public Int16 CN2_M40_InputChannel_REC_ShutDownCode;
		[FieldOffset(50)]
		public Int16 CN2_M40_InputChannel_REC_DisableOperationCode;
		[FieldOffset(52)]
		public UInt32 CN2_M80_InputChannel_REC_SetMaxProfileVelocity;
		[FieldOffset(56)]
		public UInt32 CN2_M80_InputChannel_REC_SetMaxProfileAcceleration;
		[FieldOffset(60)]
		public UInt32 CN2_M80_InputChannel_REC_SetMaxProfileDeceleration;
		[FieldOffset(64)]
		public UInt32 CN2_M80_InputChannel_REC_SetFollowingErrorWindow;
		[FieldOffset(68)]
		public UInt16 CN2_M80_InputChannel_REC_SetPositionWindowTime;
		[FieldOffset(70)]
		public byte PADDING_VAR_3;
		[FieldOffset(71)]
		public byte PADDING_VAR_4;
		[FieldOffset(72)]
		public UInt32 CN2_M80_InputChannel_REC_SetEncoderIncrements;
		[FieldOffset(76)]
		public UInt32 CN2_M80_InputChannel_REC_SetMotorRevolutions;
		[FieldOffset(80)]
		public Int32 CN2_M40_InputChannel_REC_SetMinSoftwareLimit;
		[FieldOffset(84)]
		public Int32 CN2_M40_InputChannel_REC_SetMaxSoftwareLimit;
		[FieldOffset(88)]
		public sbyte CN2_M80_InputChannel_REC_ModesOfOperation;
		[FieldOffset(89)]
		public sbyte CN2_M80_InputChannel_REC_HomingMethod;
		[FieldOffset(90)]
		public byte CN2_MC0_InputChannel_REC_Polarity;
		[FieldOffset(91)]
		public byte PADDING_VAR_5;
	}
}
