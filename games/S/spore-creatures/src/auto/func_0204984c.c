#include "m2c.h"

M2C_UNK func_02067fa4(s32 *);                       /* extern */
M2C_UNK func_02067fb8(s32 *);                       /* extern */

void func_0204984c(s32 *arg0, void *arg1) {
    s32 sp4;
    s32 sp0;
    s32 *var_r0;

    if (M2C_FIELD(arg1, u8 *, 0xD0) != 0) {
        func_02067fb8(&sp4);
        var_r0 = &sp4;
    } else {
        func_02067fa4(&sp0);
        var_r0 = &sp0;
    }
    *arg0 = *var_r0;
}
