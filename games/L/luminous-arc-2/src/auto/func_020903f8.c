#include "m2c.h"

void *func_02090a40();                              /* extern */

void func_020903f8(s32 arg0, s16 arg1) {
    M2C_FIELD(func_02090a40(), s32 *, 0x1C) = arg0;
    M2C_FIELD(func_02090a40(), s16 *, 0x1A) = arg1;
}
