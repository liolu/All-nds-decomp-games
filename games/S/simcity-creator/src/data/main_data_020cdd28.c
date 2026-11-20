/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020cdd4c[];
extern u8 data_020cdd5c[];

u32 data_020cdd28[2] = {0x01000101, 0x00000000};
u32 data_020cdd30[5] = {0x00000000, (u32) &data_020cdd4c, (u32) &data_020cdd5c, 0x00000000, 0x00000000};
