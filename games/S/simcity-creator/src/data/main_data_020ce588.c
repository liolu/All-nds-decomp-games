/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020c2fac[];
extern u8 data_020c2fcc[];
extern u8 data_020c2fec[];
extern u8 data_020c300c[];
extern u8 data_020c307c[];
extern u8 data_020c30ec[];
extern u8 data_020c310c[];
extern u8 data_020c314c[];
extern u8 data_020c318c[];
extern u8 data_020c31cc[];

u32 data_020ce588[1]  = {0x00000100};
u32 data_020ce58c[18] = {0x00000000,           (u32) &data_020c2fac, (u32) &data_020c2fcc,
                         (u32) &data_020c2fec, (u32) &data_020c300c, (u32) &data_020c307c,
                         (u32) &data_020c307c, 0x00000000,           0x00000000,
                         0x00000000,           0x00000000,           0x00000000,
                         (u32) &data_020c30ec, (u32) &data_020c310c, (u32) &data_020c314c,
                         (u32) &data_020c318c, (u32) &data_020c31cc, 0x00000000};
