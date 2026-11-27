/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(s32);                         /* extern */
M2C_UNK func_020c87dc(s32);                         /* extern */
extern s32 data_02129c24;
extern s32 data_02129c28;

void func_020c87fc(void) {
    s32 temp_r1;
    s32 temp_r4;

    temp_r1       = data_02129c24 - 1;
    data_02129c24 = temp_r1;
    if (temp_r1 != 0) {
        return;
    }
    temp_r4 = data_02129c28;
    if (temp_r4 == 0) {
        return;
    }
    if (temp_r4 != 0) {
        func_020c87dc(temp_r4);
        func_0200f2c4(temp_r4);
    }
    data_02129c28 = 0;
}
