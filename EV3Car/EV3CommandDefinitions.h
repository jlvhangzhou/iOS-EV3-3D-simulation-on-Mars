/****************************************************************************
 *
 * Copyright (c) 2016 BlowBMakers. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/
//
//  EV3CommandDefinitions.h
//
//  Created by BlowBMakers on 3/11/16.
//  Copyright (c) 2016 BlowBMakers. All rights reserved.
//
//  Description: this head file is to define ev3 command

#ifndef Ev3WifiFit_EV3CommandDefinitions_h
#define Ev3WifiFit_EV3CommandDefinitions_h



typedef enum {
    EV3ParameterSizeByte = 0x81,        // 1 byte
    EV3ParameterSizeInt16 = 0x82,       // 2 bytes
    EV3ParameterSizeInt32 = 0x83,      // 4 bytes
    EV3ParameterSizeString = 0x84      // null-terminated string
}EV3ParameterSize;

typedef enum {
    EV3ReplyTypeDirect = 0x82,
    EV3ReplyTypeSystem = 0x83,
    EV3ReplyTypeDirectError = 0x04,
    EV3ReplyTypeSystemError = 0x05
}EV3ReplyType;

typedef enum {
    EV3OperationUIReadGetFirmware = 0x810a,
    
    EV3OperationUIWriteLED = 0x821b,
    
    EV3OperationUIButtonPressed = 0x8309,
    
    EV3OperationUIDrawUpdate = 0x8400,
    EV3OperationUIDrawClean = 0x8401,
    EV3OperationUIDrawPixel = 0x8402,
    EV3OperationUIDrawLine = 0x8403,
    EV3OperationUIDrawCircle = 0x8404,
    EV3OperationUIDrawText = 0x8405,
    EV3OperationUIDrawFillRect = 0x8409,
    EV3OperationUIDrawRect = 0x8401,
    EV3OperationUIDrawInverseRect = 0x8410,
    EV3OperationUIDrawSelectFont = 0x8411,
    EV3OperationUIDrawTopline = 0x8412,
    EV3OperationUIDrawFillWindow = 0x8413,
    EV3OperationUIDrawDotLIne = 0x8415,
    EV3OperationUIDrawFillCircle = 0x8418,
    EV3OperationUIDrawBmpFile = 0x841c,
    
    EV3OperationSoundBreak = 0x9400,
    EV3OperationSoundTone = 0x9401,
    EV3OperationSoundPlay = 0x9402,
    EV3OperationSoundRepeat = 0x9403,
    EV3OperationSoundService = 0x9404,
    
    EV3OperationInputDeviceGetTypeMode = 0x9905,
    EV3OperationInputDeviceGetDeviceName = 0x9915,
    EV3OperationInputDeviceGetModeName = 0x9916,
    EV3OperationInputDeviceReadyPct = 0x991b,
    EV3OperationInputDeviceReadyRaw = 0x991c,
    EV3OperationInputDeviceReadySI = 0x991d,
    EV3OperationInputDeviceClearAll = 0x990a,
    EV3OperationInputDeviceClearChanges = 0x991a,
    
    EV3OperationInputRead = 0x9a,
    EV3OperationInputReadExt = 0x9e,
    EV3OperationInputReadSI = 0x9d,
    
    EV3OperationOutputStop = 0xa3,
    EV3OperationOutputPower = 0xa4,
    EV3OperationOutputSpeed = 0xa5,
    EV3OperationOutputStart = 0xa6,
    EV3OperationOutputPolarity = 0xa7,
    EV3OperationOutputStepPower = 0xac,
    EV3OperationOutputTimePower = 0xad,
    EV3OperationOutputStepSpeed = 0xae,
    EV3OperationOutputTimeSpeed = 0xaf,
    EV3OperationOutputStepSync = 0xb0,
    EV3OperationOutputTimeSync = 0xb1,
    
    EV3OperationTest = 0xff,
    
}EV3OperationCode;

typedef enum {
    EV3CommandTypeDirectReply = 0x00,  // Direct command with a reply expected
    EV3CommandTypeDirectNoReply = 0x80,
}EV3CommandType;

typedef enum {
    EV3SensorDataFormatPercent = 0x10,  // Percentage
    EV3SensorDataFormatRaw = 0x11,
    EV3SensorDataFormatSI = 0x12,  // International System of Units
}EV3SensorDataFormat;

typedef enum {
    EV3MotorPolarityBackward = -1,  // Turn backward
    EV3MotorPolarityOpposite = 0,  // Turn in the opposite direction
    EV3MotorPolarityForward = 1,   // Turn forward
}EV3MotorPolarity;  // Polarity/direction to turn the motor

typedef enum {
    EV3InputPort1 = 0x00,
    EV3InputPort2 = 0x01,
    EV3InputPort3 = 0x02,
    EV3InputPort4 = 0x03,
    
    EV3InputPortA = 0x10,
    EV3InputPortB = 0x11,
    EV3InputPortC = 0x12,
    EV3InputPortD = 0x13,
}EV3InputPort;

typedef enum {
    EV3OutputPortA = 0x01,
    EV3OutputPortB = 0x02,
    EV3OutputPortC = 0x04,
    EV3OutputPortD = 0x08,
    EV3OutputAll = 0x0f,  // Port A,B,C and D simultaneously
    EV3OutputPortBD = 0x0A,
}EV3OutputPort;

typedef enum {
    
    // Motors
    EV3SensorTypeLargeMotor = 0x07,
    EV3SensorTypeMediumMotor = 0x08,
    
    // Sensors
    
    EV3SensorTypeTouchSensor = 0x10,
    EV3SensorTypeColorSensor = 0x1d,
    EV3SensorTypeUltrasonicSensor = 0x1e,
    EV3SensorTypeGyroscopeSensor = 0x20,
    EV3SensorTypeInfraredSensor = 0x21,
    
    // Other
    
    EV3SensorTypeInitializing = 0x7d,  // Sensor is initializing
    EV3SensorTypeEmpty = 0x7e,  // Port is empty
    EV3SensorTypeWrongPort = 0x7f,  // Sensor is plugged into a motor port, or vice-versa
    EV3SensorTypeUnknown = 0xff, // Unknown sensor/status
}EV3SensorType;

typedef enum {
    EV3BrickButtonNone, // No button
    EV3BrickButtonUp,
    EV3BrickButtonEnter,
    EV3BrickButtonDown,
    EV3BrickButtonRight,
    EV3BrickButtonLeft,
    EV3BrickButtonBack,
    EV3BrickButtonAny,
}EV3BrickButton;

typedef enum {
    EV3LEDPatternBlack,  // LED Off
    EV3LEDPatternGreen,
    EV3LEDPatternRed,
    EV3LEDPatternOrange,
    EV3LEDPatternGreenFlash,
    EV3LEDPatternRedFlash,
    EV3LEDPatternOrangeFlash,
    EV3LEDPatternGreenPulse,
    EV3LEDPatternRedPulse,
    EV3LEDPatternOrangePulse,
}EV3LEDPattern;

typedef enum {
    EV3ScreenColorBackground, // Color of the background
    EV3ScreenColorForeground, // Color of the foreground
}EV3ScreenColor;

typedef enum {
    EV3FontTypeSmall,
    EV3FontTypeMedium,
    EV3FontTypeLarge,
}EV3FontType;


typedef enum {
    EV3TouchSensorModeTouch, // On when pressed, off when released
    EV3TouchSensorModeBumps, // Running counter of number of presses
}EV3TouchSensorMode;

typedef enum {
    EV3MotorModeDegrees, // Values in degrees
    EV3MotorModeRotations, // Values in rotations
}EV3MotorMode;

typedef enum {
    EV3ColorSensorModeReflective, // Reflected color
    EV3ColorSensorModeAmbient, // Ambient Color
    EV3ColorSensorModeColor,  // Specific Color
    EV3ColorSensorModeReflectiveRaw,  // Reflected color raw value
    EV3ColorSensorModeReflectiveRGB,  // Reflected color RGB value
    EV3ColorSensorModeCalibration,  // Calibration
}EV3ColorSensorMode;

typedef enum {
    EV3UltrasonicSensorModeCentimeters, // Values in centimeter units
    EV3UltrasonicSensorModeInches,  // Values in inch units
    EV3UltrasonicSensorModeListen, // Listen mode
}EV3UltrasonicSensorMode;

typedef enum {
    EV3GyroscopeSensorModeAngle,
    EV3GyroscopeSensorModeRate,
    EV3GyroscopeSensorModeGyroCalibration = 0x04,
}EV3GyroscopeSensorMode;

typedef enum {
    EV3InfraredSensorModeProximity,
    EV3InfraredSensorModeSeek,
    EV3InfraredSensorModeRemote,
    EV3InfraredSensorModeRemoteA,  // Unknown
    EV3InfraredSensorModeSAlt,  // Unknown
    EV3InfraredSensorModeInfrCalibration,
}EV3InfraredSensorMode;

typedef enum {
    EV3ColorSensorColorTransparent,
    EV3ColorSensorColorBlackColor,
    EV3ColorSensorColorBlueColor,
    EV3ColorSensorColorGreenColor,
    EV3ColorSensorColorYellowColor,
    EV3ColorSensorColorRedColor,
    EV3ColorSensorColorWhiteColor,
    EV3ColorSensorColorBrownColor,
}EV3ColorSensorColor;


#endif
