#include "m2c.h"

M2C_UNK func_02067e98(void *, s32);                 /* extern */
s32 func_02070bf0(s32);                             /* extern */
s32 func_020ab4ec(M2C_UNK);                         /* extern */
M2C_UNK func_020aca1c(void *, s32, M2C_UNK *);      /* extern */
M2C_UNK func_020acaf0(void *, s32, s32, M2C_UNK *); /* extern */
M2C_UNK func_020acea4(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_020ad314(void *, M2C_UNK, M2C_UNK);        /* extern */

void func_020ac98c(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 sp0[256];
    s32 temp_r4;

    temp_r4 = func_02070bf0(M2C_FIELD(arg0, s32 *, 0));
    func_020acea4(arg0, arg1, arg2);
    M2C_FIELD(arg0, s8 *, 0x657) = (s8) (func_020ab4ec(2) + 1);
    func_02067e98(arg0 + 8, func_020ab4ec(2));
    func_020acaf0(arg0, func_020ad314(arg0, arg1, arg2), temp_r4, sp0);
    func_020aca1c(arg0, temp_r4, sp0);
}
