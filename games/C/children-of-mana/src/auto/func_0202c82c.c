/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001cc8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02001d2c(void *, s32, s32);            /* extern */
M2C_UNK func_0200fa5c(s32);                         /* extern */
s32 func_0200ff08(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_0200ffb0(s32);                             /* extern */
M2C_UNK func_0200ffe8(s32);                         /* extern */
s32 func_0201381c();                                /* extern */
M2C_UNK func_020593cc(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0205bba4(s32, s32);                    /* extern */
s32 func_020651d8(s32, void **);                    /* extern */
s32 func_020d78f4(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void func_0202c82c(void *arg0, M2C_UNK arg1) {
    void *sp4;
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x2F0);
    if (temp_r0 != 0) {
        var_r4 = func_020d78f4(temp_r0, arg1, 1, 1, 0);
    } else {
        var_r4 = func_0200ff08(arg1, 1, 1, 0);
    }
    if (func_0200ffb0(var_r4) == 0) {
        return;
    }
    func_0200fa5c(var_r4);
    if (func_020651d8(func_0201381c(), &sp4) != 0) {
        func_0205bba4(M2C_FIELD(sp4, s32 *, 0xC), M2C_FIELD(sp4, s32 *, 8));
        func_020593cc(M2C_FIELD(sp4, s32 *, 0xC), 0, M2C_FIELD(sp4, s32 *, 8));
        func_02001cc8(arg0 + 0x384, 0, 0x200);
        func_02001d2c(arg0 + 0x384, M2C_FIELD(sp4, s32 *, 0xC), M2C_FIELD(sp4, s32 *, 8));
    }
    func_0200ffe8(var_r4);
}
