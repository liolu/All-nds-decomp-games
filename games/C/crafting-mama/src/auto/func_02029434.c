#include "m2c.h"

void *func_020294a0();                              /* extern */

void func_02029434(u32 arg0, u32 arg1) {
    void *var_r2;

    var_r2 = M2C_FIELD(func_020294a0(), void **, 8);
loop_1:
    if ((u32) M2C_FIELD(var_r2, u16 *, 0x18) < arg0) {
        var_r2 = M2C_FIELD(var_r2, void **, 8);
        goto loop_1;
    }
loop_4:
    if ((u32) M2C_FIELD(var_r2, u16 *, 0x18) > arg1) {
        return;
    }
    if (M2C_FIELD(var_r2, void **, 8) != NULL) {
        M2C_FIELD(var_r2, s32 *, 0x10) = 1;
        var_r2                         = M2C_FIELD(var_r2, void **, 8);
        goto loop_4;
    }
}
