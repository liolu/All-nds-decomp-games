#include "m2c.h"

void func_0209d578(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_ip;
    s32 temp_r3;
    s32 var_lr;
    void *temp_ip_2;

    temp_ip = (arg2 + 8) & 7;
    if (temp_ip == 0) {
        var_lr = 0;
    } else {
        var_lr = (8 - temp_ip) & 7;
    }
    temp_ip_2                                  = arg2 + var_lr;
    temp_r3                                    = arg3 - var_lr;
    M2C_FIELD(arg1, void **, 0x18)             = temp_ip_2;
    M2C_FIELD(arg1, s32 *, 0xC)                = temp_r3;
    M2C_FIELD(temp_ip_2, s32 *, 4)             = (s32) (temp_r3 | 1);
    M2C_FIELD((temp_ip_2 + temp_r3), s32 *, 4) = 0x10;
    M2C_FIELD(arg1, s32 *, 0x1C)               = (s32) M2C_FIELD(arg0, s32 *, 0x20);
}
