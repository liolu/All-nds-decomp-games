#include "m2c.h"

M2C_UNK func_020ca3d0(M2C_UNK, M2C_UNK *, s32 *);   /* extern */
extern M2C_UNK func_020cb1a8;

void func_020cb188(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 sp0;

    sp0 = arg2 | (arg1 * 0x10);
    func_020ca3d0(arg0, &func_020cb1a8, &sp0);
}
