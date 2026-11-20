#include "m2c.h"

M2C_UNK func_020934a8(s32);                         /* extern */
M2C_UNK func_0203707c(s32);                         /* extern */
extern s32 data_020e0d54;

void func_02037594(void) {
    s32 temp_r4;

    temp_r4 = data_020e0d54;
    if (temp_r4 == 0) {
        return;
    }
    if (temp_r4 != 0) {
        func_0203707c(temp_r4);
        func_020934a8(temp_r4);
    }
    data_020e0d54 = 0;
}
