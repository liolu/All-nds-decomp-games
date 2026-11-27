#include "m2c.h"

s32 func_01ff80a0();                                /* extern */
M2C_UNK func_0203f3d8(M2C_UNK *, void *, s32, void *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_02044470(void *, M2C_UNK, M2C_UNK *);  /* extern */
M2C_UNK func_02044570(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_0209d86c(M2C_UNK *, void *);           /* extern */
s32 func_020a29bc(void *);                          /* extern */

void func_02044328(void *arg0, M2C_UNK arg1, void *arg2, M2C_UNK *arg3) {
    u8 sp14[24];
    u8 sp8[12];
    M2C_UNK var_r4;

    if ((M2C_FIELD(arg3, s32 *, 0) == 0) && (M2C_FIELD(arg3, s32 *, 4) == 0) && (M2C_FIELD(arg3, s32 *, 8) == 0)) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2A) == 0) {
        func_02044470(arg0, arg1, arg3);
        return;
    }
    func_0209d86c(sp14, arg0 + 8);
    func_0203f3d8(sp8, arg2, func_01ff80a0(), arg0, sp14, arg3);
    if ((s32) M2C_FIELD(arg2, s32 *, 0xC) > 0) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_02044570(arg0, var_r4, func_020a29bc(arg2));
    func_02044470(arg0, arg1, sp8);
}
