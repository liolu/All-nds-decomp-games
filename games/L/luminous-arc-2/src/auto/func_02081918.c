#include "m2c.h"

s32 func_020049b8(s32, s32, M2C_UNK *, M2C_UNK);    /* extern */
s32 func_0201b47c(M2C_UNK);                         /* extern */
s32 func_02081a44(s32, void *, s32);                /* extern */
extern M2C_UNK data_0211c4fc;

s32 func_02081918(s32 arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r1;
    void *temp_r5;

    temp_r5 = arg0 + 0x19F8;
    temp_r0 = func_0201b47c(arg1);
    var_r1  = M2C_FIELD(temp_r5, s32 *, 8) - M2C_FIELD(temp_r5, s32 *, 4);
    if (temp_r0 > var_r1) {
        if (func_02081a44(arg0, temp_r5, (temp_r0 - var_r1) + 1) == 0) {
            return 1;
        }
        var_r1 = M2C_FIELD(temp_r5, s32 *, 8) - M2C_FIELD(temp_r5, s32 *, 4);
        goto block_4;
    }
block_4:
    temp_r0_2 = func_020049b8(M2C_FIELD(temp_r5, s32 *, 4), var_r1, &data_0211c4fc, arg1);
    if (temp_r0_2 != temp_r0) {
        return 1;
    }
    M2C_FIELD(temp_r5, s32 *, 4) = (s32) (M2C_FIELD(temp_r5, s32 *, 4) + temp_r0_2);
    return 0;
}
