/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_02007848[];
extern u8 func_0200784c[];
extern u8 func_02007c10[];
extern u8 func_02007c14[];
extern u8 func_02131908[];
extern u8 func_021319a0[];
extern u8 func_02132200[];
extern u8 func_02132214[];

u32 data_02153f28[3]  = {0x00000001, 0x00000000, 0x00000000};
u32 data_02153f34[4]  = {(u32) &func_02131908, (u32) &func_021319a0, 0x00000000, 0x00000000};
u32 data_02153f44[22] = {(u32) &func_02132200, (u32) &func_02132214,
                         0x020C98C0,           0x020C98D0,
                         0x020C98E0,           0x020C9998,
                         0x020C99CC,           0x020C99FC,
                         0x020C8398,           0x020C9A30,
                         0x020C9A60,           0x020C9A90,
                         0x020C9AC0,           0x00000000,
                         0x00000000,           (u32) &func_02007c10,
                         (u32) &func_02007c14, 0x00000000,
                         0x00000000,           (u32) &func_02007848,
                         (u32) &func_0200784c, 0x00000000};
