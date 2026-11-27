#include "m2c.h"

void func_020cf8a0(s32 arg0, void *arg1, void *arg2) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_ip;
    s32 var_ip_2;

    var_ip  = M2C_FIELD(arg2, s32 *, 0);
    temp_r3 = M2C_FIELD(arg1, s32 *, 0);
    if (temp_r3 >= var_ip) {
        var_ip += M2C_FIELD(arg2, s32 *, 0x10);
        if (temp_r3 <= var_ip) {
            var_ip = temp_r3;
        }
    }
    M2C_FIELD(arg1, s32 *, 0) = var_ip;
    var_ip_2                  = M2C_FIELD(arg2, s32 *, 4);
    temp_r3_2                 = M2C_FIELD(arg1, s32 *, 4);
    if (temp_r3_2 >= var_ip_2) {
        var_ip_2 += M2C_FIELD(arg2, s32 *, 0x14);
        if (temp_r3_2 <= var_ip_2) {
            var_ip_2 = temp_r3_2;
        }
    }
    M2C_FIELD(arg1, s32 *, 4) = var_ip_2;
}
