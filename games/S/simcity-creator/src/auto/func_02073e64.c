#include "m2c.h"

void func_02073e64(s32 arg0, s32 arg1, s8 arg2, s16 arg3) {
    s32 temp_ip;

    temp_ip                            = (arg1 * 0xA) + arg0;
    M2C_FIELD(temp_ip, s8 *, 0x5A590)  = arg2;
    M2C_FIELD(temp_ip, s16 *, 0x5A598) = arg3;
}
