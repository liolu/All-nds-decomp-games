#include "m2c.h"

void *func_020294a0();                              /* extern */

void *func_020294b0(s32 arg0) {
    void *temp_r2;
    void *var_r0;

    var_r0 = func_020294a0();
loop_1:
    temp_r2 = M2C_FIELD(var_r0, void **, 8);
    if (temp_r2 == NULL) {
        return NULL;
    }
    if (M2C_FIELD(var_r0, u16 *, 0x18) != arg0) {
        var_r0 = temp_r2;
        goto loop_1;
    }
    return var_r0;
}
