#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02066590(s32, s32, s32, s32, s32, s32); /* extern */

s32 func_02049804(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;

    temp_r8 = func_02012a90(arg0, 1);
    temp_r7 = func_02012a90(arg0, 2);
    temp_r6 = func_02012b7c(arg0, 3, 0);
    temp_r5 = func_02012b7c(arg0, 4, 0);
    temp_r4 = func_02012b7c(arg0, 5, 0);
    func_02066590(temp_r8, temp_r7, temp_r6, temp_r5, temp_r4, func_02012b7c(arg0, 6, 0));
    return 1;
}
