#include "m2c.h"

s32 func_0201b47c(void *);                          /* extern */
M2C_UNK func_0201b498(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020c0760(M2C_UNK *, s32, void *);      /* extern */
M2C_UNK func_020c0824(s32, s32, M2C_UNK *, s32);    /* extern */

void func_020c0998(s32 arg0, void *arg1, s32 arg2, s32 arg3) {
    u8 sp0[68];

    if (arg3 < 1) {
        return;
    }
    if (arg3 > 0x41) {
        return;
    }
    if (*(s8 *) (arg2 + (arg3 - 1)) != 0) {
        return;
    }
    func_0201b498(sp0, arg2);
    func_020c0824(arg0 + 0x44, func_0201b47c(arg0 + 0x44), sp0, arg3 - 1);
    func_020c0760(sp0, arg3 - 1, arg1 + M2C_FIELD(arg1, s32 *, 0x578));
    M2C_FIELD(arg1, s32 *, 0x578) =
        (s32) (M2C_FIELD(arg1, s32 *, 0x578) + (func_0201b47c(arg1 + M2C_FIELD(arg1, s32 *, 0x578)) + 1));
}