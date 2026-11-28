#include "m2c.h"

s32 *func_02060d74(void *, s32);                    /* extern */

void func_02060a10(void *arg0, s32 arg1, s32 arg2) {
    *func_02060d74(arg0 + 0x118, M2C_FIELD(arg0, s32 *, 0x124))                     = arg1;
    M2C_FIELD(func_02060d74(arg0 + 0x118, M2C_FIELD(arg0, s32 *, 0x124)), s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 0x124) = (s32) (M2C_FIELD(arg0, s32 *, 0x124) + 1);
}
