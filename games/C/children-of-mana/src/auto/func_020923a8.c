/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(s32);                         /* extern */
M2C_UNK func_020924a8(s32);                         /* extern */
extern s32 data_02126c90;

void func_020923a8(void) {
    s32 temp_r4;

    temp_r4 = data_02126c90;
    if (temp_r4 == 0) {
        return;
    }
    if (temp_r4 != 0) {
        func_020924a8(temp_r4);
        func_0200f2c4(temp_r4);
    }
    data_02126c90 = 0;
}
