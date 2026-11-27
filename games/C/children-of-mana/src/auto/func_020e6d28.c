/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(s32);                         /* extern */
M2C_UNK func_020e668c(s32);                         /* extern */

void *func_020e6d28(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r4 != 0) {
        if (temp_r4 != 0) {
            func_020e668c(temp_r4);
            func_0200f2c4(temp_r4);
        }
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    return arg0;
}
