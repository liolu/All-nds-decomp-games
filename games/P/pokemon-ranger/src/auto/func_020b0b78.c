/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020b0b78(void *arg0, s32 arg1) {
    s32 temp_r1;
    s32 temp_r3;

    temp_r3 = ((arg1 + 1) * 0x28) + (M2C_FIELD(arg0, s32 *, 0) + 0x80);
    temp_r1 = M2C_FIELD(temp_r3, s32 *, 0x28);
    if (temp_r1 == 0) {
        return (M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(temp_r3, s32 *, 0)) - 0x80;
    }
    return temp_r1 - M2C_FIELD(temp_r3, s32 *, 0);
}
