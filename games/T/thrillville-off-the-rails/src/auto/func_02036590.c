#include "m2c.h"

M2C_UNK func_0202e100(M2C_UNK *);                   /* extern */
M2C_UNK func_02036614(M2C_UNK *, void *);           /* extern */
s32 func_020643b4(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_0206fa14(s32, M2C_UNK *, void *);          /* extern */
extern M2C_UNK data_020f027c;

void func_02036590(s32 arg0, void *arg1) {
    M2C_UNK sp0;
    s32 var_r4;
    s32 var_r5;

    if ((M2C_FIELD(arg1, s32 *, 8) == 3) && (M2C_FIELD(arg1, s32 *, 0x10) == 0)) {
        var_r4 = 0;
        var_r5 = func_020643b4(&data_020f027c, 0x148, 0x148);
        if (var_r5 != 0) {
            func_02036614(&sp0, arg1);
            var_r4 = 1;
            var_r5 = func_0206fa14(var_r5, &sp0, arg1);
        }
        if (var_r4 != 0) {
            func_0202e100(&sp0);
        }
        M2C_FIELD(arg1, s32 *, 0x10) = var_r5;
    }
}
