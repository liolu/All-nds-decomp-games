#include "m2c.h"

s32 func_02073860(s32);                             /* extern */

void func_020210ec(void *arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0x34368) = func_02073860(M2C_FIELD(arg0, s32 *, 0x34E8));
}
