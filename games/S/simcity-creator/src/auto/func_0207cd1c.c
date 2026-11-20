#include "m2c.h"

M2C_UNK func_020197c4();                            /* extern */
M2C_UNK func_0207cc74(s32, M2C_UNK, M2C_UNK, s32);  /* extern */

void func_0207cd1c(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0207cc74(arg0, arg1, arg2, arg0 + 0x458);
    func_020197c4();
}
