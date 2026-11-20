#include "m2c.h"

M2C_UNK func_02006ee8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02098d80();                            /* extern */

void func_02096bb4(void *arg0, s32 arg1, s32 arg2) {
    void *spC;
    void *sp8;
    s32 sp4;
    s32 sp0;

    M2C_FIELD(arg0, s16 *, 0x17A6)   = 0;
    M2C_FIELD(arg0, s16 *, 0x17A8)   = 0;
    M2C_FIELD(arg0, s16 *, 0x1B18)   = 0;
    M2C_FIELD(arg0, s16 *, 0x1B1A)   = 0;
    M2C_FIELD(arg0, s16 *, 0x1B1C)   = 0;
    M2C_FIELD(arg0, s16 *, 0x17AA)   = 0;
    M2C_FIELD(arg0, s32 *, 0x17AC)   = 0;
    M2C_FIELD(arg0, s32 *, 0x17B0)   = -1;
    M2C_FIELD(arg0, s32 *, 0x17B4)   = 0;
    M2C_FIELD(arg0, s8 *, 0x17B8)    = 0;
    M2C_FIELD(arg0, s32 *, 0x17BC)   = 0;
    M2C_FIELD(arg0, s32 *, 0x17C0)   = 0;
    M2C_FIELD(arg0, s8 *, 0x1AF0)    = 0;
    M2C_FIELD(arg0, s32 *, 0x1AF4)   = 0;
    M2C_FIELD(arg0, s32 *, 0x1AF8)   = 0;
    M2C_FIELD(arg0, s8 *, 0x1AFC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x1B00)   = 0;
    sp0                              = arg1;
    M2C_FIELD(arg0, s8 *, 0x1B14)    = 0;
    M2C_FIELD(arg0, s8 *, 0x1B15)    = 1;
    M2C_FIELD(arg0, s8 *, 0x1B17)    = 0;
    sp8                              = arg0 + 0x338;
    M2C_FIELD(arg0, s32 *, 0x1764)   = 0;
    M2C_FIELD(arg0, void **, 0x177C) = (void *) (arg0 + 4);
    spC                              = arg0 + 0x52C;
    M2C_FIELD(arg0, void **, 0x1768) = (void *) (arg0 + 0x298);
    M2C_FIELD(arg0, void **, 0x176C) = spC;
    M2C_FIELD(arg0, void **, 0x1770) = (void *) (arg0 + 0x7C0);
    M2C_FIELD(arg0, void **, 0x1778) = (void *) (arg0 + 0xA54);
    M2C_FIELD(arg0, void **, 0x1774) = (void *) (arg0 + 0xCE8);
    M2C_FIELD(arg0, void **, 0x1780) = (void *) (arg0 + 0xF7C);
    M2C_FIELD(arg0, void **, 0x1784) = (void *) (arg0 + 0x1210);
    M2C_FIELD(arg0, void **, 0x1788) = (void *) (arg0 + 0x14A4);
    M2C_FIELD(arg0, void **, 0x178C) = (void *) (sp8 + 0x1400);
    M2C_FIELD(arg0, s16 *, 0x17A2)   = 0;
    M2C_FIELD(arg0, s8 *, 0x17A4)    = 0;
    M2C_FIELD(arg0, s32 *, 0x17C4)   = 0;
    sp4                              = arg2;
    M2C_FIELD(arg0, s32 *, 0x1AE4)   = 0;
    func_02098d80(arg0);
    func_02006ee8(arg0 + 4, 0, 0x294);
    func_02006ee8(arg0 + 0x298, 0, 0x294);
    func_02006ee8(arg0 + 0x52C, 0, 0x294);
    func_02006ee8(arg0 + 0x7C0, 0, 0x294);
    func_02006ee8(arg0 + 0xA54, 0, 0x294);
    func_02006ee8(arg0 + 0xCE8, 0, 0x294);
    func_02006ee8(arg0 + 0xF7C, 0, 0x294);
    func_02006ee8(arg0 + 0x1210, 0, 0x294);
    func_02006ee8(arg0 + 0x14A4, 0, 0x294);
    func_02006ee8(arg0 + 0x1738, 0, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x1B04) = sp4;
    M2C_FIELD(arg0, s32 *, 0x1B08) = sp0;
    M2C_FIELD(arg0, s8 *, 0x1B0C)  = 0;
}
