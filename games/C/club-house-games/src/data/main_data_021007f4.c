/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020babb8[];
extern u8 data_020bc418[];
extern u8 data_020bc698[];
extern u8 data_020d15b0[];
extern u8 data_020d15e8[];
extern u8 data_020d1818[];
extern u8 data_020d2324[];
extern u8 data_020d5a60[];
extern u8 data_020d6294[];
extern u8 data_020d989c[];
extern u8 data_020dc360[];
extern u8 data_020dd908[];

u32 data_021007f4[15] = {0x00010001, 0x00000000, 0x002E0000, 0x004A0042, 0x0001004F, 0x0046002E, 0x0056004F, 0x002E0000,
                         0x004F0046, 0x00010056, 0x00530451, 0x004F004A, 0x004A0044, 0x00420451, 0x0000004D};
u32 data_02100830[21] = {0x0046002E, 0x0056004F, 0x04510001, 0x004A0053, 0x0044004F, 0x0451004A, 0x004D0042,
                         0x00000046, 0x00420029, 0x04510056, 0x004E0055, 0x004F0046, 0x0000AC55, 0x0026002E,
                         0x9035002F, 0x00310001, 0x002A0033, 0x0024002F, 0x0031002A, 0x002D0022, 0x00000000};
u32 data_02100884[36] = {0xFFFFFFFE, 0x00200040, 0x00000000,           (u32) &data_020d5a60,
                         0xFFFFFFFE, 0x00200040, 0x00000000,           (u32) &data_020d6294,
                         0xFFFFFFFE, 0x00200040, 0x00000000,           (u32) &data_020d989c,
                         0xFFFFFFFE, 0x00200040, 0x00000000,           (u32) &data_020dd908,
                         0xFFFFFFFE, 0x00200040, 0x00000000,           (u32) &data_020d2324,
                         0xFFFFFFFE, 0x00000000, 0x00000000,           (u32) &data_020dc360,
                         0x03060B18, 0x00200004, (u32) &data_020bc418, (u32) &data_020d1818,
                         0x03060B18, 0x00200008, (u32) &data_020babb8, (u32) &data_020d15b0,
                         0x03060B18, 0x00200008, (u32) &data_020bc698, (u32) &data_020d15e8};
