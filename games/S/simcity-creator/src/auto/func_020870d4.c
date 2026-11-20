#include "m2c.h"

s32 func_02034904(s32);                             /* extern */

void func_020870d4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = func_02034904(arg1 * 0x10);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
