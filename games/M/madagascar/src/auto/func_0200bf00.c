/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200bf00(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r3;
    s32 var_ip;

    temp_r2                      = M2C_FIELD(arg0, s32 *, 8);
    var_ip                       = 0;
    temp_r3                      = arg1 ^ temp_r2;
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) (temp_r2 & temp_r3);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (arg1 & temp_r3);
    M2C_FIELD(arg0, s32 *, 8)    = arg1;
    temp_r2_2                    = M2C_FIELD(arg0, s32 *, 4);
    if ((temp_r2_2 == (temp_r2_2 & M2C_FIELD(arg0, s32 *, 8))) && (M2C_FIELD(arg0, s32 *, 0x10) & temp_r2_2)) {
        var_ip = 1;
    }
    if (var_ip == 0) {
        return 1;
    }
    return 0;
}
