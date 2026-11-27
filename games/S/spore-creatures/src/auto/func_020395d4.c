#include "m2c.h"

M2C_UNK func_020934a8(s32);                         /* extern */
M2C_UNK func_020cfb60(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_020394d4;

void *func_020395d4(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r4 != 0) {
        func_020cfb60(temp_r4, 2, 0x30, &func_020394d4);
        func_020934a8(temp_r4);
    }
    return arg0;
}
