#include "m2c.h"

M2C_UNK func_02096268(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020962a8(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020962f4();                                /* extern */

s32 func_02096348(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0_2 = func_020962f4();
    if (temp_r0_2 != 0xFF) {
        return temp_r0_2;
    }
    temp_r0 = func_020962a8(arg0, arg1);
    if (temp_r0 != 0xFF) {
        return temp_r0;
    }
    func_02096268(arg0, arg1);
    return 2;
}
