/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02097ca0(void *arg0, s32 arg1) {
    s32 temp_r1;
    s32 var_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x28);
    if (arg1 != 0) {
        var_r1 = (temp_r1 & ~0xC00) | 0x400;
    } else {
        var_r1 = temp_r1 & ~0xC00;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = var_r1;
}
