#include "m2c.h"

M2C_UNK func_020619ac(void *, s32);                 /* extern */

void func_02061a64(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
    func_020619ac(arg0, M2C_FIELD(arg0, s32 *, 0x68));
}
