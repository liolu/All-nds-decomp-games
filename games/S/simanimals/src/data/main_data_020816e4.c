/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02081704[];
extern u8 data_0208e324[];
extern u8 func_0201e498[];
extern u8 func_0201e4ac[];

u32 data_020816e4[2] = {(u32) &func_0201e4ac, (u32) &func_0201e498};
u32 data_020816ec[4] = {(u32) &data_0208e324, (u32) &data_02081704, 0x00000000, (u32) &data_020816ec};
