#include "m2c.h"

M2C_UNK func_02001af0(s32, s32);                    /* extern */
M2C_UNK func_0204da78(s32, M2C_UNK);                /* extern */
M2C_UNK func_ov000_02103f1c(s32, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_ov000_0212539c(M2C_UNK *);             /* extern */
extern s32 data_020e0ba0;

void func_02053560(s32 arg0) {
    u8 sp0[8];

    func_0204da78(arg0, 0);
    func_02001af0(data_020e0ba0 + 0xC, 0x2327BC75);
    func_ov000_0212539c(sp0);
    func_ov000_02103f1c(arg0 + 0xB0, 0x13, sp0, 0);
}
