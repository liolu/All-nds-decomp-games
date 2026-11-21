#include "m2c.h"

s32 func_020d168c(s32, s32, M2C_UNK *, M2C_UNK);    /* extern */
s32 func_020e9580(M2C_UNK);                         /* extern */
s32 func_ov000_021e9bfc(s32, void *, s32);          /* extern */
extern M2C_UNK data_ov000_022167d4;

s32 func_ov000_021e9ad0(s32 arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r1;
    void *temp_r4;

    temp_r4 = arg0 + 0x19F8;
    temp_r0 = func_020e9580(arg1);
    var_r1  = M2C_FIELD(temp_r4, s32 *, 8) - M2C_FIELD(temp_r4, s32 *, 4);
    if (temp_r0 > var_r1) {
        if (func_ov000_021e9bfc(arg0, temp_r4, (temp_r0 - var_r1) + 1) == 0) {
            return 1;
        }
        var_r1 = M2C_FIELD(temp_r4, s32 *, 8) - M2C_FIELD(temp_r4, s32 *, 4);
        goto block_4;
    }
block_4:
    temp_r0_2 = func_020d168c(M2C_FIELD(temp_r4, s32 *, 4), var_r1, &data_ov000_022167d4, arg1);
    if (temp_r0_2 == temp_r0) {
        M2C_FIELD(temp_r4, s32 *, 4) = (s32) (M2C_FIELD(temp_r4, s32 *, 4) + temp_r0_2);
        return 0;
    }
    return 1;
}
