/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020290c8(s32);                         /* extern */
M2C_UNK func_0207b040(s32);                         /* extern */
extern s32 data_020d0280;

void func_02028fa4(void) {
    s32 temp_r4;

    temp_r4 = data_020d0280;
    if (temp_r4 != 0) {
        func_020290c8(temp_r4);
        func_0207b040(temp_r4);
    }
    data_020d0280 = 0;
}
