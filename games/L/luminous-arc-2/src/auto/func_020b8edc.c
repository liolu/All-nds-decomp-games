#include "m2c.h"

s32 func_02050f7c(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020b8e38(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_020b9260(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_0212eb30;
extern M2C_UNK data_0212eb38;

void func_020b8edc(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    u8 sp10[64];
    M2C_UNK spC;
    M2C_UNK sp8;
    M2C_UNK sp4;

    if (func_020b9260(arg3, &data_0212eb30, sp10, 0x40) == 0) {
        return;
    }
    if (func_02050f7c(sp10, &data_0212eb38, &sp4, &sp8, &spC) != 3) {
        return;
    }
    func_020b8e38(arg0, &sp4, arg1, 2, 0);
}
