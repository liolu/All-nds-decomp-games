/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02074cb8(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    u8 temp_r1;
    u8 var_ip;
    u8 var_r2;

    temp_r1 = M2C_FIELD(arg0, u8 *, 0);
    var_ip  = M2C_FIELD(arg0, u8 *, 1);
    var_r2  = temp_r1;
    if ((u32) temp_r1 > (u32) var_ip) {
        var_r2 = var_ip;
        var_ip = temp_r1;
    }
    M2C_FIELD(arg3, u8 *, 0xE) = var_r2;
    M2C_FIELD(arg3, u8 *, 0xF) = var_ip;
    return arg0 + 2;
}
