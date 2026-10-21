#include "m2c.h"

s32 func_020098cc(s32, s32);                        /* extern */
M2C_UNK func_02016c40(s32);                         /* extern */

s32 func_0200b270(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 var_r0;
    void *temp_r3;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0);
    temp_r3 = M2C_FIELD(temp_r5, void **, 0x20);
    if (M2C_FIELD(temp_r3, s32 *, 0x1C) != 0) {
        func_02016c40(M2C_FIELD(arg0, s32 *, 4));
        var_r0 = 0;
    } else {
        var_r0 = func_020098cc(M2C_FIELD(temp_r5, s32 *, 8), M2C_FIELD(temp_r3, s32(**)(void *, M2C_UNK, s32, s32),
                                                                       0x20)(temp_r5, arg1, M2C_FIELD(arg0, s32 *, 4), arg2));
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + arg2);
    return var_r0;
}
