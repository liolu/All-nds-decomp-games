#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0202be98(s32, s32, s32 *, s32 *);      /* extern */
s32 func_02053a7c(s32);                             /* extern */
s32 func_02055ab4(s32);                             /* extern */

s32 func_0204af9c(M2C_UNK arg0, s32 *arg1) {
    s32 sp4;
    s32 sp0;
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_02012a90(arg0, 1);
    temp_r4 = func_02012a90(arg0, 2);
    if (func_02055ab4(temp_r5) == 0xD) {
        return 0;
    }
    func_0202be98(func_02053a7c(temp_r5) + 0x38, temp_r4, &sp4, &sp0);
    if ((sp4 == 0) && (sp0 == 0)) {
        return 1;
    }
    *arg1 = 1;
    return 1;
}
