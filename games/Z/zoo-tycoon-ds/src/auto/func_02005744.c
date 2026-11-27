/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_0217fb3c;

s32 func_02005744(void *arg0, s32 arg1) {
    s32 var_r0;
    u16 temp_r3;

    if (data_0217fb3c != 0) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, u16 *, 0xC);
    if ((u32) temp_r3 > 0x14U) {
        if ((s32) (temp_r3 - 0x14) < arg1) {
            M2C_FIELD(arg0, u16 *, 0xC) = (u16) (temp_r3 + 1);
            var_r0                      = 0;
        } else {
            M2C_FIELD(arg0, u16 *, 0xC) = 0x15U;
            var_r0                      = 1;
        }
        return var_r0;
    }
    return 0;
}
