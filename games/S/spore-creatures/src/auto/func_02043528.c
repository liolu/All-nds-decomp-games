#include "m2c.h"

M2C_UNK func_0208aa4c(M2C_UNK *, void *, void **);  /* extern */

void func_02043528(void *arg0, s32 arg1) {
    M2C_UNK sp4;
    void *sp0;
    s32 var_r0;
    void *temp_r2;
    void *var_r3;

    var_r3  = M2C_FIELD(arg0, void **, 0x10);
    temp_r2 = arg0 + 0x10;
    if (var_r3 == temp_r2) {
        return;
    }
loop_2:
    var_r0 = M2C_FIELD(var_r3, s32 *, 4);
    if (var_r0 != 0) {
        var_r0 -= 4;
    }
    if (var_r0 == arg1) {
        sp0 = var_r3;
        func_0208aa4c(&sp4, arg0, &sp0);
        return;
    }
    var_r3 = M2C_FIELD(var_r3, void **, 0);
    if (var_r3 == temp_r2) {
        return;
    }
    goto loop_2;
}
