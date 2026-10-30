#include "m2c.h"

M2C_UNK func_02061c28(M2C_UNK *);                   /* extern */
M2C_UNK func_02061c34(M2C_UNK *);                   /* extern */
M2C_UNK func_02067ed0(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020cd778;

s32 func_02069250(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    u8 sp0[12];

    func_02061c28(sp0);
    func_02067ed0((arg1 * 0x1AC) + (arg0 + 0xD0), &data_020cd778, arg2, arg3);
    func_02061c34(sp0);
    return 0;
}
