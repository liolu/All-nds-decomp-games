#include "m2c.h"

s8 func_02073814(s32);                              /* extern */

void func_02020f1c(void *arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s8 *, 0x342DA) = func_02073814(M2C_FIELD(arg0, s32 *, 0x34E8));
}
