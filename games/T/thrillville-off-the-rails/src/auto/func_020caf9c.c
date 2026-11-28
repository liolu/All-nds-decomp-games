#include "m2c.h"

M2C_UNK func_020ca3d0(M2C_UNK, M2C_UNK *, s32 *);   /* extern */
extern M2C_UNK func_020cafc0;

void func_020caf9c(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp0;

    sp0 = arg2 | (arg1 * 2) | (arg3 * 4);
    func_020ca3d0(arg0, &func_020cafc0, &sp0);
}
