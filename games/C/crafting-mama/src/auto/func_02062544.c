#include "m2c.h"

M2C_UNK func_020624e4(M2C_UNK, s32, M2C_UNK *, u16 *, u16 *, s32); /* extern */
extern M2C_UNK data_020c93a4;

void func_02062544(M2C_UNK arg0, s32 arg1, s32 arg2) {
    M2C_UNK spC;
    u16 spA;
    u16 sp8;

    if (arg1 >= 0x300) {
        return;
    }
    func_020624e4(arg0, arg1, &spC, &spA, &sp8, arg2);
    *((u16 *) ((s8 *) &data_020c93a4 + (arg1 * 2))) = sp8 | spA;
}
