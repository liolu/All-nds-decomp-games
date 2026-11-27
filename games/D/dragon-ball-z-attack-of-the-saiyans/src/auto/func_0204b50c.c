#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02037608(u16, s32, s32, M2C_UNK);      /* extern */
void *func_02053a7c(s32);                           /* extern */

s32 func_0204b50c(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    void *temp_r0;

    temp_r6 = func_02012a90(arg0, 1);
    temp_r5 = func_02012a90(arg0, 2);
    temp_r4 = func_02012b7c(arg0, 3, 0);
    temp_r0 = func_02053a7c(temp_r6);
    if (temp_r0 == NULL) {
        return 0;
    }
    func_02037608(M2C_FIELD(temp_r0, u16 *, 0x28), temp_r5, temp_r4, 0);
    return 1;
}
