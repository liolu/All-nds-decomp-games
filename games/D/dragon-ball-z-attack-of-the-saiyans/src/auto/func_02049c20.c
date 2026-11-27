#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0204934c(s32);                         /* extern */
void *func_02053a7c();                              /* extern */

s32 func_02049c20(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;
    void *temp_r0;

    temp_r5 = func_02012a90(arg0, 1);
    temp_r4 = func_02012a90(arg0, 2);
    func_0204934c(temp_r5);
    temp_r0 = func_02053a7c();
    if (temp_r0 == NULL) {
        return -1;
    }
    M2C_FIELD(temp_r0, s32 *, 0xAC) = temp_r4;
    return 1;
}
