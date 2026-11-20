#include "m2c.h"

M2C_UNK func_02083a64(M2C_UNK, s32);                /* extern */
s32 func_02085550();                                /* extern */
s32 func_02090b00();                                /* extern */
s32 func_02090bf4(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_020bbab8(s32, M2C_UNK, M2C_UNK, s32);      /* extern */

void func_02091390(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = func_02085550();
    temp_r4 = temp_r0;
    if (arg3 != 0) {
        if ((func_02090b00() != 0) && (func_020bbab8(temp_r4, arg1, arg2, arg3) == 0)) {
            return;
        }
        if (func_02090bf4(temp_r4, arg1, arg2) != 0) {
            return;
        }
        func_02083a64(6, 0xFFFE82A2);
        return;
    }
    func_020bbab8(temp_r0, arg1, arg2, arg3);
}
