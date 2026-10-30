/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_020425d0[];
extern u8 func_020425d4[];
extern u8 func_020425d8[];
extern u8 func_020425dc[];
extern u8 func_020425e0[];
extern u8 func_020425e4[];
extern u8 func_020425e8[];
extern u8 func_02042e50[];
extern u8 func_020430a4[];
extern u8 func_02043658[];
extern u8 func_0204366c[];
extern u8 func_020436c8[];
extern u8 func_02043740[];
extern u8 func_020437d4[];
extern u8 func_02043940[];
extern u8 func_0204395c[];
extern u8 func_02043974[];
extern u8 func_0204397c[];
extern u8 func_02043c24[];
extern u8 func_02043c40[];
extern u8 func_02043c44[];
extern u8 func_02043c48[];
extern u8 func_02043c90[];
extern u8 func_02043cd8[];
extern u8 func_02043cdc[];
extern u8 func_02043ce0[];
extern u8 func_02043cec[];
extern u8 func_02043d14[];
extern u8 func_02043d1c[];
extern u8 func_02043d34[];
extern u8 func_02043ddc[];
extern u8 func_02043de0[];
extern u8 func_02043f38[];
extern u8 func_02043f3c[];
extern u8 func_02043f40[];
extern u8 func_02043f84[];
extern u8 func_02043fac[];
extern u8 func_0204408c[];
extern u8 func_02044090[];
extern u8 func_02044250[];
extern u8 func_02044254[];
extern u8 func_02044258[];
extern u8 func_0204429c[];
extern u8 func_020442a0[];
extern u8 func_020442a4[];
extern u8 func_02044354[];
extern u8 func_02044898[];
extern u8 func_020448c4[];
extern u8 func_020448cc[];
extern u8 func_020448d4[];
extern u8 func_02044b80[];
extern u8 func_02044b84[];
extern u8 func_02044b98[];
extern u8 func_02044b9c[];
extern u8 func_02044c20[];
extern u8 func_02044c24[];
extern u8 func_02044c80[];
extern u8 func_02044c84[];
extern u8 func_02044cb4[];
extern u8 func_02044cf8[];
extern u8 func_02044d14[];
extern u8 func_02044d34[];
extern u8 func_02044d5c[];
extern u8 func_02044f10[];
extern u8 func_02045654[];
extern u8 func_02045690[];
extern u8 func_02045784[];
extern u8 func_020457c4[];
extern u8 func_020457c8[];
extern u8 func_0204593c[];
extern u8 func_020460a0[];
extern u8 func_020460ac[];
extern u8 func_02046298[];
extern u8 func_0204629c[];
extern u8 func_020462a0[];
extern u8 func_020462a4[];
extern u8 func_020462a8[];
extern u8 func_020462b0[];
extern u8 func_020462cc[];
extern u8 func_020462d0[];
extern u8 func_020462d4[];
extern u8 func_02046528[];
extern u8 func_02046560[];
extern u8 func_02046568[];
extern u8 func_02046698[];
extern u8 func_020466c8[];
extern u8 func_020466dc[];
extern u8 func_02046734[];
extern u8 func_02046794[];
extern u8 func_020467a4[];
extern u8 func_02046804[];
extern u8 func_02046814[];
extern u8 func_0204684c[];
extern u8 func_02046858[];
extern u8 func_02046874[];
extern u8 func_02046b48[];
extern u8 func_02046d30[];

u32 data_020e1e14[99] = {(u32) &func_020425e4, (u32) &func_020425e8, (u32) &func_020425e0,
                         (u32) &func_020425dc, (u32) &func_020425d8, (u32) &func_020425d4,
                         (u32) &func_020425d0, (u32) &func_02044f10, (u32) &func_02043f40,
                         (u32) &func_02043fac, (u32) &func_02043f84, (u32) &func_02044b98,
                         (u32) &func_02044d5c, (u32) &func_02044c24, (u32) &func_02044b9c,
                         (u32) &func_02044c20, (u32) &func_02044c84, (u32) &func_02042e50,
                         (u32) &func_020430a4, (u32) &func_020462b0, (u32) &func_020462d0,
                         (u32) &func_02043f38, (u32) &func_020457c4, (u32) &func_02044c80,
                         (u32) &func_02043ddc, (u32) &func_02043de0, (u32) &func_0204366c,
                         (u32) &func_0204629c, (u32) &func_02044254, (u32) &func_02044258,
                         (u32) &func_0204429c, (u32) &func_020442a0, (u32) &func_02044250,
                         (u32) &func_020442a4, (u32) &func_02043ce0, (u32) &func_02043cec,
                         (u32) &func_02043d14, (u32) &func_02043d1c, (u32) &func_02043f3c,
                         (u32) &func_020460a0, (u32) &func_020460ac, (u32) &func_02046298,
                         (u32) &func_02044354, (u32) &func_02046528, (u32) &func_020457c8,
                         (u32) &func_020462d4, (u32) &func_020462a0, (u32) &func_020462a4,
                         (u32) &func_020462a8, (u32) &func_02046568, (u32) &func_02046698,
                         (u32) &func_0204684c, (u32) &func_02046794, (u32) &func_02046804,
                         (u32) &func_020466c8, (u32) &func_02046858, (u32) &func_020467a4,
                         (u32) &func_02046814, (u32) &func_020466dc, (u32) &func_02046734,
                         (u32) &func_02043d34, (u32) &func_02046560, (u32) &func_02046874,
                         (u32) &func_02046b48, (u32) &func_02044d14, (u32) &func_02044cf8,
                         (u32) &func_02044cb4, (u32) &func_02044d34, (u32) &func_020436c8,
                         (u32) &func_02043740, (u32) &func_0204397c, (u32) &func_02043c24,
                         (u32) &func_020437d4, (u32) &func_02043940, (u32) &func_0204395c,
                         (u32) &func_02043974, (u32) &func_02043c40, (u32) &func_02043c44,
                         (u32) &func_02043c48, (u32) &func_02043c90, (u32) &func_02043cd8,
                         (u32) &func_02043cdc, (u32) &func_02044898, (u32) &func_020448c4,
                         (u32) &func_020448cc, (u32) &func_020448d4, (u32) &func_02044b80,
                         (u32) &func_02044b84, (u32) &func_0204593c, (u32) &func_02044090,
                         (u32) &func_0204408c, (u32) &func_020462cc, (u32) &func_02045654,
                         (u32) &func_02045690, (u32) &func_02045784, (u32) &func_02043658,
                         (u32) &func_02046d30, 0x00000000,           0x00000000};
