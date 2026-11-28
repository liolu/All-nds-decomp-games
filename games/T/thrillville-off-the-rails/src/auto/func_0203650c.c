#include "m2c.h"

M2C_UNK func_0202e100(M2C_UNK *);                   /* extern */
M2C_UNK func_02034a1c(M2C_UNK *, void *);           /* extern */
s32 func_020643b4(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_02069eb4(s32, M2C_UNK *, void *);          /* extern */
extern M2C_UNK data_020f022c;

void func_0203650c(s32 arg0, void *arg1) {
    M2C_UNK sp0;
    s32 var_r4;
    s32 var_r5;

    if ((M2C_FIELD(arg1, s32 *, 8) == 2) && (M2C_FIELD(arg1, s32 *, 0x10) == 0)) {
        var_r4 = 0;
        var_r5 = func_020643b4(&data_020f022c, 0x134, 0x134);
        if (var_r5 != 0) {
            func_02034a1c(&sp0, arg1);
            var_r4 = 1;
            var_r5 = func_02069eb4(var_r5, &sp0, arg1);
        }
        if (var_r4 != 0) {
            func_0202e100(&sp0);
        }
        M2C_FIELD(arg1, s32 *, 0x10) = var_r5;
    }
}
