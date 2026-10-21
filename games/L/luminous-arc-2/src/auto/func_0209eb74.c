#include "m2c.h"

M2C_UNK func_0200766c(void *, void *, M2C_UNK);     /* extern */
s32 func_02018ef8(s32, M2C_UNK *, M2C_UNK);         /* extern */
M2C_UNK func_0209e9bc(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_0209ea98(void *, M2C_UNK *, M2C_UNK);  /* extern */

void func_0209eb74(void *arg0, s32 arg1) {
    u8 sp0[20];

    func_0200766c(arg0 + 0x3A4, arg0 + 0x3FC, 0x58);
    func_0209e9bc(arg0, sp0, 1);
    func_0200766c(arg0 + 0x3FC, arg0 + 0x3A4, 0x58);
    if (func_02018ef8(arg1, sp0, 0x10) != 0) {
        M2C_FIELD(arg0, s8 *, 0x455) = 9;
        return;
    }
    func_0200766c(arg0 + 0x2EC, arg0 + 0x348, 0x5C);
    func_0209ea98(arg0, sp0, 1);
    func_0200766c(arg0 + 0x348, arg0 + 0x2EC, 0x5C);
    if (func_02018ef8(arg1 + 0x10, sp0, 0x14) != 0) {
        M2C_FIELD(arg0, s8 *, 0x455) = 9;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x455) = 6;
}
