/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(s32);                         /* extern */
M2C_UNK func_0207b218(s32);                         /* extern */

void func_02099878(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x104);
    if (temp_r4 == 0) {
        return;
    }
    if (temp_r4 != 0) {
        func_0207b218(temp_r4);
        func_0200f2c4(temp_r4);
    }
    M2C_FIELD(arg0, s32 *, 0x104) = 0;
}
