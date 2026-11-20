#include "m2c.h"

void func_0207cdb4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void *temp_ip;

    if (arg1 > 0x59) {
        return;
    }
    temp_ip                          = arg0 + (arg1 * 4);
    M2C_FIELD(temp_ip, s32 *, 0x20)  = arg2;
    M2C_FIELD(temp_ip, s32 *, 0x188) = arg3;
    M2C_FIELD(temp_ip, s32 *, 0x2F0) = arg4;
    M2C_FIELD(temp_ip, s32 *, 0x458) = arg5;
}
