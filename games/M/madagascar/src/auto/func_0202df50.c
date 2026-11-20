/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202ddc4(s32);                         /* extern */
M2C_UNK func_0207b040(s32);                         /* extern */
extern s32 data_020d14c8;

void func_0202df50(void) {
    s32 temp_r4;

    temp_r4 = data_020d14c8;
    if (temp_r4 != 0) {
        func_0202ddc4(temp_r4);
        func_0207b040(temp_r4);
    }
    data_020d14c8 = 0;
}
