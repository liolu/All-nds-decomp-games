#include "m2c.h"

s32 func_020aa068(s32);                             /* extern */
void *func_020ab6e8();                              /* extern */

s32 func_020ac654(void) {
    void *temp_r0;

    temp_r0 = func_020ab6e8();
    if (M2C_FIELD(temp_r0, s32 *, 0xC) == 0) {
        return 1;
    }
    if (func_020aa068(M2C_FIELD(temp_r0, s32 *, 8)) == 0) {
        return 1;
    }
    return 0;
}
