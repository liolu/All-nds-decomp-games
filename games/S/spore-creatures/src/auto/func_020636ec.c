#include "m2c.h"

M2C_UNK func_020934a8(s32);                         /* extern */
M2C_UNK func_02063810(s32);                         /* extern */
extern s32 data_020e0f34;

void func_020636ec(void) {
    s32 temp_r4;

    temp_r4 = data_020e0f34;
    if (temp_r4 != 0) {
        func_02063810(temp_r4);
        func_020934a8(temp_r4);
    }
    data_020e0f34 = 0;
}
