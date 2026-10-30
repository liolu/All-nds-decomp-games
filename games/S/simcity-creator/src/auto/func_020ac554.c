#include "m2c.h"

M2C_UNK func_02006ee8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020ac688(void *, s32);                 /* extern */

void func_020ac554(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s32 *, 4)    = arg2;
    M2C_FIELD(arg0, s8 *, 0x644) = 0;
    M2C_FIELD(arg0, s8 *, 0x657) = 0;
    func_02006ee8(arg0 + 0x5DA, 0, 0x64);
    func_02006ee8(arg0 + 0x5BC, 0, 0x1E);
    func_02006ee8(arg0 + 0x4F4, 0, 0xC8);
    func_020ac688(arg0, arg2);
}
