#include "m2c.h"

void func_02006ef0(s32 *arg0, s32 arg1, s32 arg2) {
    s32 var_r1;

    if (arg2 >= 2) {
        var_r1 = 0;
    } else {
        var_r1 = M2C_FIELD(((arg2 * 0x18) + arg1), s32 *, 0xC);
    }
    *arg0 = var_r1;
}
