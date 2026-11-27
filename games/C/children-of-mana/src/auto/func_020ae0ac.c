/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203fe68();                            /* extern */
void *func_020aac90();                              /* extern */
s32 func_020d5cec(s32);                             /* extern */
M2C_UNK func_020d5d78(s32, M2C_UNK);                /* extern */
M2C_UNK func_020d5e18(s32, M2C_UNK);                /* extern */
M2C_UNK func_020d5e48(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_020d6990(s32, M2C_UNK);                /* extern */

void func_020ae0ac(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK var_r1;
    M2C_UNK var_r1_2;
    M2C_UNK var_r2;
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1D4);
    if (temp_r0 == 0) {
        return;
    }
    if (arg1 == 0) {
        if ((M2C_FIELD(func_020aac90(), s8 *, 0x413) == 0) || (M2C_FIELD(func_020aac90(), s8 *, 0x413) == 3)) {
            if (arg2 != 0) {
                var_r1 = 1;
            } else {
                var_r1 = 0;
            }
            func_020d5e18(M2C_FIELD(arg0, s32 *, 0x1D4), var_r1);
        } else {
            if (arg2 != 0) {
                var_r1_2 = 1;
            } else {
                var_r1_2 = 0;
            }
            func_020d5d78(M2C_FIELD(arg0, s32 *, 0x1D4), var_r1_2);
        }
    } else {
        if (arg2 != 0) {
            var_r2 = 1;
        } else {
            var_r2 = 0;
        }
        func_020d5e48(temp_r0, arg1 - 1, var_r2);
    }
    if (arg2 != 0) {
        return;
    }
    func_0203fe68();
    if (func_020d5cec(M2C_FIELD(arg0, s32 *, 0x1D4)) != 0) {
        return;
    }
    do {
        func_020d6990(M2C_FIELD(arg0, s32 *, 0x1D4), 0);
    } while (func_020d5cec(M2C_FIELD(arg0, s32 *, 0x1D4)) == 0);
}
