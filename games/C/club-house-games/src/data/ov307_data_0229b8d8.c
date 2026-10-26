/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov307_02298610[];
extern u8 data_ov307_02298628[];
extern u8 data_ov307_02298d74[];
extern u8 data_ov307_02298d90[];
extern u8 data_ov307_02298dac[];
extern u8 data_ov307_02298dc8[];
extern u8 data_ov307_02298e70[];
extern u8 data_ov307_0229958c[];
extern u8 data_ov307_022995fc[];
extern u8 data_ov307_02299b04[];

u32 data_ov307_0229b8d8[10] = {0x00000000, 0x00000000, 0x00B00070, 0x00000000, 0x009001C0,
                               0x012001F0, 0x00000000, 0x000001C0, 0x009001F0, 0x00000000};
u32 data_ov307_0229b900[32] = {0x0001FFFC, 0x002C0038, (u32) &data_ov307_02298628, (u32) &data_ov307_022995fc,
                               0x0001FFFC, 0x002C0038, (u32) &data_ov307_02298628, (u32) &data_ov307_02298d74,
                               0x0001FFFC, 0x002C0038, (u32) &data_ov307_02298628, (u32) &data_ov307_02299b04,
                               0x0001FFFC, 0x002C0038, (u32) &data_ov307_02298628, (u32) &data_ov307_02298dac,
                               0x0001FFFC, 0x002C0038, (u32) &data_ov307_02298628, (u32) &data_ov307_0229958c,
                               0x0001FFFC, 0x002C0038, (u32) &data_ov307_02298628, (u32) &data_ov307_02298e70,
                               0x0100FFFC, 0x00050034, (u32) &data_ov307_02298610, (u32) &data_ov307_02298d90,
                               0x0100FFFC, 0x00050034, (u32) &data_ov307_02298610, (u32) &data_ov307_02298dc8};
