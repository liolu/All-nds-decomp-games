#include "m2c.h"

M2C_UNK func_020934a8(s32);                         /* extern */
M2C_UNK func_02065ee4(s32);                         /* extern */

void *func_ov003_0213eb10(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r4 != 0) {
        func_02065ee4(temp_r4);
        func_020934a8(temp_r4);
    }
    return arg0;
}
