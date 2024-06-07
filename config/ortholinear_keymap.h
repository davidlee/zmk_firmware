/* KEY CLUSTERS FOR COLUMN STAGGER / ORTHOLINEAR LAYOUTS */

// FIXME !! 
// make these work for Glove80
//

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4 
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4 
#define THUMBS LH3 LH2 LH1 RH1 RH2 RH3      

#define GAL_TOP L_GAL_U NONE NONE R_GAL_U
#define GAL_MID L_GAL_H NONE NONE R_GAL_H
#define GAL_LOW L_GAL_D NONE NONE R_GAL_D
#define GAL_BOT EXIT TO_CMK  CMD_TAB SPC_NUM ESC_PTR  NONE NONE  NAV_KEY SFT_BSP &kp ENTER  TO_CMK TO_CMK

#define CMK_TOP L_CMK_U NONE NONE R_CMK_U
#define CMK_MID L_CMK_H NONE NONE R_CMK_H
#define CMK_LOW L_CMK_D NONE NONE R_CMK_D
#define CMK_BOT EXIT TO_GAL  CMD_TAB SPC_NUM ESC_PTR  NONE NONE  NAV_KEY SFT_BSP &kp ENTER  TO_GAL TO_GAL

#define NUM_TOP L_NUM_U NONE NONE R_NUM_U
#define NUM_MID L_NUM_H NONE NONE R_NUM_H
#define NUM_LOW L_NUM_D NONE NONE R_NUM_D
#define NUM_BOT ___ ___ &kp DOT ___ ___  ___ ___  &kp DOT ___ ___  ___ ___     

#define NAV_TOP L_NAV_U NONE NONE R_NAV_U
#define NAV_MID L_NAV_H NONE NONE R_NAV_H
#define NAV_LOW L_NAV_D NONE NONE R_NAV_D
#define NAV_BOT ___ ___  &kp TAB &kp SPACE ___  NONE NONE  ___ APPLE_FN DICTATION  ___ ___      

#define PTR_TOP L_PTR_U NONE NONE R_PTR_U
#define PTR_MID L_PTR_H NONE NONE R_PTR_H
#define PTR_LOW L_PTR_D NONE NONE R_PTR_D
#define PTR_BOT ___ ___  EXIT EXIT EXIT  U_MS_B1 NONE  NONE U_MS_B2 U_MS_B3  ___ ___    
