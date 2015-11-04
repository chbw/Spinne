//====================================================================
//Project Lynxmotion Phoenix
//Description: 
//    This is the hardware configuration file for the Hex Robot.
//  
//    This version of the Configuration file is set up to run on the
//    Lynxmotion BotboardDuino board, which is similar  to the Arduino Duemilanove
//
//    This version of configuration file assumes that the servos will be controlled
//    by a Lynxmotion Servo controller SSC-32 and the user is using a Lynxmotion 
//    PS2 to control the robot.
//
//Date: March 18, 2012
//Programmer: Kurt (aka KurtE)
//
//
//NEW IN V1.0
//   - First Release
//
//====================================================================
#ifndef HEX_CFG_PHOENIX_H
#define HEX_CFG_PHOENIX_H

#define DEFINE_HEX_GLOBALS

// define the serial interface to use by the servo controller
// controller: SSC32 with Hardware Serial Port
#define SSCSerial         Serial
// SSC32 Baudrate
#define cSSC_BAUD    38400


//==================================================================================================================================
// Define which input classes we will use. If we wish to use more than one we need to define USEMULTI - This will define a forwarder
//    type implementation, that the Inputcontroller will need to call.  There will be some negotion for which one is in contol.
//
//  If this is not defined, The included Controller should simply implement the InputController Class...
//==================================================================================================================================
//#define USEMULTI
//#define USEXBEE            // only allow to be defined on Megas...
//#define USEPS2
//#define USECOMMANDER
//#define USESERIAL


// which output module to use
#define USE_SSC32
//#define	cSSC_BINARYMODE	1			// Define if your SSC-32 card supports binary mode.


//#define SOUND_PIN    5        // Botboarduino JR pin number
//#define PS2_DAT      6        
//#define PS2_CMD      7
//#define PS2_SEL      8
//#define PS2_CLK      9



// use hardware Serial so no port setting possible
#define cSSC_OUT     0      	//Output pin for (SSC32 RX) on BotBoard (Yellow)
#define cSSC_IN      0      	//Input pin for (SSC32 TX) on BotBoard (Blue)

// which pin is which servo
//====================================================================

#define cRRCoxaPin      1   //Rear Right leg Hip Horizontal
#define cRRFemurPin     0   //Rear Right leg Hip Vertical
#define cRRTibiaPin     6   //Rear Right leg Knee
#define cRRTarsPin      //3   // Tar

#define cRMCoxaPin      3   //Middle Right leg Hip Horizontal
#define cRMFemurPin     2   //Middle Right leg Hip Vertical
#define cRMTibiaPin     7   //Middle Right leg Knee
#define cRMTarsPin      //7   // Tar

#define cRFCoxaPin      5   //Front Right leg Hip Horizontal
#define cRFFemurPin     4   //Front Right leg Hip Vertical
#define cRFTibiaPin     8   //Front Right leg Knee
#define cRFTarsPin      //11   // Tar

#define cLRCoxaPin      17   //Rear Left leg Hip Horizontal
#define cLRFemurPin     16   //Rear Left leg Hip Vertical
#define cLRTibiaPin     22   //Rear Left leg Knee
#define cLRTarsPin      //19   // Tar

#define cLMCoxaPin      19   //Middle Left leg Hip Horizontal
#define cLMFemurPin     18   //Middle Left leg Hip Vertical
#define cLMTibiaPin     23   //Middle Left leg Knee
#define cLMTarsPin      //23   // Tar

#define cLFCoxaPin      21   //Front Left leg Hip Horizontal
#define cLFFemurPin     20   //Front Left leg Hip Vertical
#define cLFTibiaPin     24   //Front Left leg Knee
#define cLFTarsPin      //27   // Tar


//--------------------------------------------------------------------
//[MIN/MAX ANGLES]
#define CoxaMin         -600
#define CoxaMax         600
#define FemurMin        -900
#define FemurMax        450
#define TibiaMin        -900
#define TibiaMax        900

#define cRRCoxaMin1     CoxaMin      //Mechanical limits of the Right Rear Leg
#define cRRCoxaMax1     CoxaMax
#define cRRFemurMin1    FemurMin
#define cRRFemurMax1    FemurMax
#define cRRTibiaMin1    TibiaMin
#define cRRTibiaMax1    TibiaMax
#define cRRTarsMin1     -1300	//4DOF ONLY - In theory the kinematics can reach about -160 deg
#define cRRTarsMax1	500	//4DOF ONLY - The kinematics will never exceed 23 deg though..

#define cRMCoxaMin1     CoxaMin      //Mechanical limits of the Right Middle Leg
#define cRMCoxaMax1     CoxaMax
#define cRMFemurMin1    FemurMin
#define cRMFemurMax1    FemurMax
#define cRMTibiaMin1    TibiaMin
#define cRMTibiaMax1    TibiaMax
#define cRMTarsMin1     -1300	//4DOF ONLY - In theory the kinematics can reach about -160 deg
#define cRMTarsMax1	500	//4DOF ONLY - The kinematics will never exceed 23 deg though..

#define cRFCoxaMin1     CoxaMin      //Mechanical limits of the Right Front Leg
#define cRFCoxaMax1     CoxaMax
#define cRFFemurMin1    FemurMin
#define cRFFemurMax1    FemurMax
#define cRFTibiaMin1    TibiaMin
#define cRFTibiaMax1    TibiaMax
#define cRFTarsMin1     -1300	//4DOF ONLY - In theory the kinematics can reach about -160 deg
#define cRFTarsMax1	500	//4DOF ONLY - The kinematics will never exceed 23 deg though..

#define cLRCoxaMin1     CoxaMin      //Mechanical limits of the Left Rear Leg
#define cLRCoxaMax1     CoxaMax
#define cLRFemurMin1    FemurMin
#define cLRFemurMax1    FemurMax
#define cLRTibiaMin1    TibiaMin
#define cLRTibiaMax1    TibiaMax
#define cLRTarsMin1     -1300	//4DOF ONLY - In theory the kinematics can reach about -160 deg
#define cLRTarsMax1	500	//4DOF ONLY - The kinematics will never exceed 23 deg though..

#define cLMCoxaMin1     CoxaMin      //Mechanical limits of the Left Middle Leg
#define cLMCoxaMax1     CoxaMax
#define cLMFemurMin1    FemurMin
#define cLMFemurMax1    FemurMax
#define cLMTibiaMin1    TibiaMin
#define cLMTibiaMax1    TibiaMax
#define cLMTarsMin1     -1300	//4DOF ONLY - In theory the kinematics can reach about -160 deg
#define cLMTarsMax1	500	//4DOF ONLY - The kinematics will never exceed 23 deg though..

#define cLFCoxaMin1     CoxaMin      //Mechanical limits of the Left Front Leg
#define cLFCoxaMax1     CoxaMax
#define cLFFemurMin1    FemurMin
#define cLFFemurMax1    FemurMax
#define cLFTibiaMin1    TibiaMin
#define cLFTibiaMax1    TibiaMax
#define cLFTarsMin1     -1300	//4DOF ONLY - In theory the kinematics can reach about -160 deg
#define cLFTarsMax1	500	//4DOF ONLY - The kinematics will never exceed 23 deg though..

//--------------------------------------------------------------------
//[LEG DIMENSIONS]
//Universal dimensions for each leg in mm
#define cXXCoxaLength     29    // This is for Phoenix
#define cXXFemurLength    77
#define cXXTibiaLength    110
#define cXXTarsLength         // 4DOF only...

#define cRRCoxaLength     cXXCoxaLength	    //Right Rear leg
#define cRRFemurLength    cXXFemurLength
#define cRRTibiaLength    cXXTibiaLength
#define cRRTarsLength	  cXXTarsLength	    //4DOF ONLY

#define cRMCoxaLength     cXXCoxaLength	    //Right middle leg
#define cRMFemurLength    cXXFemurLength
#define cRMTibiaLength    cXXTibiaLength
#define cRMTarsLength	  cXXTarsLength	    //4DOF ONLY

#define cRFCoxaLength     cXXCoxaLength	    //Rigth front leg
#define cRFFemurLength    cXXFemurLength
#define cRFTibiaLength    cXXTibiaLength
#define cRFTarsLength	  cXXTarsLength    //4DOF ONLY

#define cLRCoxaLength     cXXCoxaLength	    //Left Rear leg
#define cLRFemurLength    cXXFemurLength
#define cLRTibiaLength    cXXTibiaLength
#define cLRTarsLength	  cXXTarsLength    //4DOF ONLY

#define cLMCoxaLength     cXXCoxaLength	    //Left middle leg
#define cLMFemurLength    cXXFemurLength
#define cLMTibiaLength    cXXTibiaLength
#define cLMTarsLength	  cXXTarsLength	    //4DOF ONLY

#define cLFCoxaLength     cXXCoxaLength	    //Left front leg
#define cLFFemurLength    cXXFemurLength
#define cLFTibiaLength    cXXTibiaLength
#define cLFTarsLength	  cXXTarsLength	    //4DOF ONLY


//--------------------------------------------------------------------
//[BODY DIMENSIONS]
#define cRRCoxaAngle1   -600   //Default Coxa setup angle, decimals = 1
#define cRMCoxaAngle1    0      //Default Coxa setup angle, decimals = 1
#define cRFCoxaAngle1    600      //Default Coxa setup angle, decimals = 1
#define cLRCoxaAngle1    -600   //Default Coxa setup angle, decimals = 1
#define cLMCoxaAngle1    0      //Default Coxa setup angle, decimals = 1
#define cLFCoxaAngle1    600      //Default Coxa setup angle, decimals = 1

#define cRROffsetX      -43     //Distance X from center of the body to the Right Rear coxa
#define cRROffsetZ      84     //Distance Z from center of the body to the Right Rear coxa
#define cRMOffsetX      -63    //Distance X from center of the body to the Right Middle coxa
#define cRMOffsetZ      0       //Distance Z from center of the body to the Right Middle coxa
#define cRFOffsetX      -43     //Distance X from center of the body to the Right Front coxa
#define cRFOffsetZ      -119    //Distance Z from center of the body to the Right Front coxa

#define cLROffsetX      43      //Distance X from center of the body to the Left Rear coxa
#define cLROffsetZ      119     //Distance Z from center of the body to the Left Rear coxa
#define cLMOffsetX      63     //Distance X from center of the body to the Left Middle coxa
#define cLMOffsetZ      0       //Distance Z from center of the body to the Left Middle coxa
#define cLFOffsetX      43      //Distance X from center of the body to the Left Front coxa
#define cLFOffsetZ      -119    //Distance Z from center of the body to the Left Front coxa

//--------------------------------------------------------------------
//[START POSITIONS FEET]
#define cHexInitXZ	 111 
#define CHexInitXZCos60  56        // COS(60) = .5
#define CHexInitXZSin60  96    // sin(60) = .866
#define CHexInitY        65 //30

// Lets try some multi leg positions depending on height settings.
#define CNT_HEX_INITS 3
#define MAX_BODY_Y  90
#ifdef DEFINE_HEX_GLOBALS
const byte g_abHexIntXZ[] PROGMEM = {cHexInitXZ, 99, 86};
const byte g_abHexMaxBodyY[] PROGMEM = { 20, 50, MAX_BODY_Y};
#else
extern const byte g_abHexIntXZ[] PROGMEM;
extern const byte g_abHexMaxBodyY[] PROGMEM;
#endif

#define cRRInitPosX     CHexInitXZCos60      //Start positions of the Right Rear leg
#define cRRInitPosY     CHexInitY
#define cRRInitPosZ     CHexInitXZSin60

#define cRMInitPosX     cHexInitXZ      //Start positions of the Right Middle leg
#define cRMInitPosY     CHexInitY
#define cRMInitPosZ     0

#define cRFInitPosX     CHexInitXZCos60      //Start positions of the Right Front leg
#define cRFInitPosY     CHexInitY
#define cRFInitPosZ     -CHexInitXZSin60

#define cLRInitPosX     CHexInitXZCos60      //Start positions of the Left Rear leg
#define cLRInitPosY     CHexInitY
#define cLRInitPosZ     CHexInitXZSin60

#define cLMInitPosX     cHexInitXZ      //Start positions of the Left Middle leg
#define cLMInitPosY     CHexInitY
#define cLMInitPosZ     0

#define cLFInitPosX     CHexInitXZCos60      //Start positions of the Left Front leg
#define cLFInitPosY     CHexInitY
#define cLFInitPosZ     -CHexInitXZSin60
//--------------------------------------------------------------------
//[Tars factors used in formula to calc Tarsus angle relative to the ground]
#define cTarsConst	720	//4DOF ONLY
#define cTarsMulti	2	//4DOF ONLY
#define cTarsFactorA	70	//4DOF ONLY
#define cTarsFactorB	60	//4DOF ONLY
#define cTarsFactorC	50	//4DOF ONLY

#endif //CFG_HEX_H
