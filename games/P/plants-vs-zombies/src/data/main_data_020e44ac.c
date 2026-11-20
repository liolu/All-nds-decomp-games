/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_02042590[];
extern u8 func_02042598[];
extern u8 func_020425bc[];
extern u8 func_020425d0[];
extern u8 func_020425d4[];
extern u8 func_020425d8[];
extern u8 func_020425dc[];
extern u8 func_020425e8[];
extern u8 func_02043658[];
extern u8 func_02043740[];
extern u8 func_020437d4[];
extern u8 func_0204395c[];
extern u8 func_02043974[];
extern u8 func_0204397c[];
extern u8 func_02043c24[];
extern u8 func_02043c48[];
extern u8 func_02043c90[];
extern u8 func_02043d1c[];
extern u8 func_02043d34[];
extern u8 func_02043f38[];
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
extern u8 func_020448cc[];
extern u8 func_02044b80[];
extern u8 func_02044b84[];
extern u8 func_02044b98[];
extern u8 func_02044b9c[];
extern u8 func_02044c20[];
extern u8 func_02044c24[];
extern u8 func_02044cf8[];
extern u8 func_02044d14[];
extern u8 func_02044d34[];
extern u8 func_02044f10[];
extern u8 func_02045654[];
extern u8 func_02045690[];
extern u8 func_020460a0[];
extern u8 func_020460ac[];
extern u8 func_020462a0[];
extern u8 func_020462a4[];
extern u8 func_020462b0[];
extern u8 func_02046528[];
extern u8 func_02046560[];
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
extern u8 func_0206bab8[];
extern u8 func_0206bc4c[];
extern u8 func_0206bde8[];
extern u8 func_0206bfac[];
extern u8 func_0206c030[];
extern u8 func_0206c05c[];
extern u8 func_0206c080[];
extern u8 func_0206cd84[];
extern u8 func_0206cf6c[];
extern u8 func_0206d0e4[];
extern u8 func_0206d114[];
extern u8 func_0206d118[];
extern u8 func_0206d190[];
extern u8 func_0206d404[];
extern u8 func_0206d40c[];
extern u8 func_0206d424[];
extern u8 func_0206d430[];
extern u8 func_0206dcf4[];
extern u8 func_0206de64[];
extern u8 func_0206e048[];
extern u8 func_0206e04c[];
extern u8 func_0206e15c[];
extern u8 func_0206e180[];
extern u8 func_0206e240[];
extern u8 func_0206e24c[];
extern u8 func_0206eb10[];
extern u8 func_0206eb3c[];
extern u8 func_02070388[];
extern u8 func_020704d8[];
extern u8 func_02070760[];
extern u8 func_02070778[];

u32 data_020e44ac[8]  = {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0x00000000};
u32 data_020e44cc[99] = {(u32) &func_0206e24c, (u32) &func_020425e8, 0x0206E250,
                         (u32) &func_020425dc, (u32) &func_020425d8, (u32) &func_020425d4,
                         (u32) &func_020425d0, (u32) &func_02044f10, (u32) &func_0206dcf4,
                         (u32) &func_02043fac, (u32) &func_02043f84, (u32) &func_02044b98,
                         (u32) &func_02070388, (u32) &func_02044c24, (u32) &func_02044b9c,
                         (u32) &func_02044c20, (u32) &func_0206e048, (u32) &func_0206bab8,
                         (u32) &func_0206bc4c, (u32) &func_020462b0, (u32) &func_020704d8,
                         (u32) &func_02043f38, (u32) &func_02042598, (u32) &func_0206de64,
                         (u32) &func_0206c05c, (u32) &func_0206c080, (u32) &func_0206cf6c,
                         (u32) &func_0206e240, (u32) &func_02044254, (u32) &func_02044258,
                         (u32) &func_0204429c, (u32) &func_020442a0, (u32) &func_02044250,
                         (u32) &func_020442a4, (u32) &func_0206e04c, (u32) &func_0206e15c,
                         (u32) &func_0206e180, (u32) &func_02043d1c, (u32) &func_0206bde8,
                         (u32) &func_020460a0, (u32) &func_020460ac, (u32) &func_0206d430,
                         (u32) &func_02044354, (u32) &func_02046528, (u32) &func_0206d40c,
                         (u32) &func_0206d190, (u32) &func_020462a0, (u32) &func_020462a4,
                         (u32) &func_0206d404, (u32) &func_02070760, (u32) &func_02046698,
                         (u32) &func_0204684c, (u32) &func_02046794, (u32) &func_02046804,
                         (u32) &func_020466c8, (u32) &func_02046858, (u32) &func_020467a4,
                         (u32) &func_02046814, (u32) &func_020466dc, (u32) &func_02046734,
                         (u32) &func_02043d34, (u32) &func_02046560, (u32) &func_02046874,
                         (u32) &func_02046b48, (u32) &func_02044d14, (u32) &func_02044cf8,
                         (u32) &func_02070778, (u32) &func_02044d34, (u32) &func_0206cd84,
                         (u32) &func_02043740, (u32) &func_0204397c, (u32) &func_02043c24,
                         (u32) &func_020437d4, (u32) &func_0206d118, (u32) &func_0204395c,
                         (u32) &func_02043974, (u32) &func_0206d0e4, (u32) &func_0206d114,
                         (u32) &func_02043c48, (u32) &func_02043c90, (u32) &func_0206bfac,
                         (u32) &func_0206c030, (u32) &func_02044898, (u32) &func_0206d424,
                         (u32) &func_020448cc, (u32) &func_0206eb3c, (u32) &func_02044b80,
                         (u32) &func_02044b84, (u32) &func_02042590, (u32) &func_02044090,
                         (u32) &func_0204408c, (u32) &func_020425bc, (u32) &func_02045654,
                         (u32) &func_02045690, (u32) &func_0206eb10, (u32) &func_02043658,
                         (u32) &func_02046d30, 0x00000000,           0x00000000};
