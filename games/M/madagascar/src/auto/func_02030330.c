/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02034e28(s32, void *, M2C_UNK);            /* extern */
M2C_UNK func_020374c0(s32, s32);                    /* extern */

void func_02030330(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1F0);
    if (temp_r0 == 0) {
        return;
    }
    temp_r0_2 = func_02034e28(temp_r0, arg0 + 0x174, 0);
    if (temp_r0_2 != 0) {
        func_020374c0(temp_r0_2, M2C_FIELD(arg0, s32 *, 0x1F0));
    }
    M2C_FIELD(arg0, s32 *, 0x1F0) = 0;
}
