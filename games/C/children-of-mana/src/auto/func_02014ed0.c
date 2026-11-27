#include "m2c.h"

M2C_UNK func_02014594();                            /* extern */

void func_02014ed0(void *arg0) {
    s32 var_r1;

    if (M2C_FIELD(arg0, s32 *, 0x88) != 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 == 0) {
        M2C_FIELD(arg0, s8 *, 0x30) = 0;
    }
    func_02014594();
}
