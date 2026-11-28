#include "m2c.h"

extern u8 data_ov123_020e4790;
extern u8 data_ov123_020e47bc;

void MIi_CpuCopy32(void *, void *, s32);
s32 func_ov123_020cdb24(void);
s32 func_ov123_020cdb44(void *, s32);

s32 func_ov123_020ce7c4(void) {
    u8 *P;
    s32 r4;
    s32 r5;
    s32 r2;
    s32 base;

    P  = *(u8 **) &data_ov123_020e4790;
    r5 = *(s32 *) (P + 0xE5C);
    r4 = *(s32 *) (P + 0xE58) - r5;
    if ((u32) r4 > 0x20) {
        r4 = 0x20;
    }
    r2                                               = r4 << 2;
    base                                             = *(s32 *) (P + 0xE54);
    *(s32 *) (*(u8 **) &data_ov123_020e47bc)         = r2 + 0x10;
    *(s32 *) ((*(u8 **) &data_ov123_020e47bc) + 0x4) = 0x44535359;
    *(s32 *) ((*(u8 **) &data_ov123_020e47bc) + 0x8) = 0xD5;
    *(s32 *) ((*(u8 **) &data_ov123_020e47bc) + 0xC) = r4;
    MIi_CpuCopy32((void *) (base + r5 * 4), (*(u8 **) &data_ov123_020e47bc) + 0x10, r2);
    if (func_ov123_020cdb24() != 0) {
        return 0;
    }
    return func_ov123_020cdb44(*(u8 **) &data_ov123_020e47bc, 0);
}
