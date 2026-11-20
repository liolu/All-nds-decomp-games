#include "m2c.h"

M2C_UNK func_020934a8(s32);                         /* extern */
M2C_UNK func_020046f4(s32);                         /* extern */
extern s32 data_020e0bb4;

void func_02003fcc(void) {
    s32 temp_r4;

    temp_r4 = data_020e0bb4;
    if (temp_r4 != 0) {
        func_020046f4(temp_r4);
        func_020934a8(temp_r4);
    }
    data_020e0bb4 = 0;
}
