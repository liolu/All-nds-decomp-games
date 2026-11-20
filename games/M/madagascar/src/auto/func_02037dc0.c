/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02037bfc(s32);                         /* extern */
M2C_UNK func_0207b040(s32);                         /* extern */
extern s32 data_020d879c;

void func_02037dc0(void) {
    s32 temp_r4;

    temp_r4 = data_020d879c;
    if (temp_r4 != 0) {
        func_02037bfc(temp_r4);
        func_0207b040(temp_r4);
    }
    data_020d879c = 0;
}
