#include "m2c.h"

M2C_UNK func_02084614(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b7e44(s32, s32);                    /* extern */
s32 func_020b8d10(s32, s32);                        /* extern */
M2C_UNK func_020b8cdc(s32, s32, M2C_UNK);           /* extern */

void func_02083e04(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg1, s32 *, 8);
    if ((temp_r3 != 0) && (arg2 != 0)) {
        M2C_FIELD(arg0, s32 *, 0x1AC) = (s32) (M2C_FIELD(arg0, s32 *, 0x1AC) - temp_r3);
        if (arg2 == func_020b8d10(M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4))) {
            func_020b8cdc(M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4), 0);
        }
        func_020b7e44(arg2, arg2 + M2C_FIELD(arg1, s32 *, 8));
        func_02084614(2, arg2);
    }
}
