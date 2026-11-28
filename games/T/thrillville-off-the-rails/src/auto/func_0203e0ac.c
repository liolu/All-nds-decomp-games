#include "m2c.h"

s32 func_02074300(s32);                             /* extern */
M2C_UNK func_0207432c();                            /* extern */

void func_0203e0ac(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (arg1 + 1);
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        func_0207432c();
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = func_02074300(M2C_FIELD(arg0, s32 *, 0x20) * 8);
}
