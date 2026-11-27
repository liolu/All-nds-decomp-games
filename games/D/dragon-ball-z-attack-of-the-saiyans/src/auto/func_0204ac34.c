#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0202bd94(s32, s32);                    /* extern */
s32 func_02053a7c(s32);                             /* extern */
s32 func_02055ab4(s32);                             /* extern */
s32 func_02055c54(s32, M2C_UNK);                    /* extern */

s32 func_0204ac34(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r5;
    s32 temp_r6;

    temp_r6 = func_02012a90(arg0, 1);
    temp_r5 = func_02012b7c(arg0, 2, 0);
    func_02012b7c(arg0, 3, 0);
    if (func_02055ab4(temp_r6) == 0xD) {
        return 0;
    }
    temp_r0 = func_02053a7c(temp_r6);
    func_0202bd94(temp_r0 + 0x38, temp_r5);
    if (func_02055c54(temp_r6, 8) == 0xC) {
        func_0202bd94(temp_r0 + 0x1CC, temp_r5);
    }
    return 1;
}
