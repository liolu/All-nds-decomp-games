#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
void *func_02053a7c(s32);                           /* extern */
s32 func_02053d3c();                                /* extern */

u8 func_0204e310(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02012a90(arg0, 1);
    if (func_02053d3c() == 0) {
        return 0U;
    }
    return M2C_FIELD(func_02053a7c(temp_r4), u8 *, 0x31);
}
