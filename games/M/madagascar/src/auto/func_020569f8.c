/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020569f8(void *arg0, s32 arg1, s32 arg2) {
    s32 var_ip;
    u32 temp_r3;

    var_ip  = 1;
    temp_r3 = (arg2 * M2C_FIELD(arg0, u16 *, 6)) + arg1;
    if (!((1 << (temp_r3 & 0x1F)) & M2C_FIELD((arg0 + ((temp_r3 >> 5) * 4)), s32 *, 0xC))) {
        var_ip = 0;
    }
    return var_ip;
}
