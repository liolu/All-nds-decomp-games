#include "m2c.h"

void func_0202be98(void *arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    void *temp_ip;

    temp_ip = arg0 + (arg1 * 4);
    *arg2   = (s32) M2C_FIELD(temp_ip, s16 *, 0x20);
    *arg3   = (s32) M2C_FIELD(temp_ip, s16 *, 0x22);
    if (M2C_FIELD(arg0, s32 *, 0x14) & 0x100000) {
        *arg2 = 0 - *arg2;
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) & 0x200000) {
        *arg3 = 0 - *arg3;
    }
}
