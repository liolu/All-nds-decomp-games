/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020645ec(void *, u32, u32);            /* extern */
M2C_UNK func_020648e8(u32 *, u32);                  /* extern */
M2C_UNK func_0206497c(u32 *, u32);                  /* extern */
M2C_UNK func_02064a54(u32 *, u32);                  /* extern */
M2C_UNK func_02064b2c(u32 *, u32);                  /* extern */
M2C_UNK func_02064b98(u32 *, u32);                  /* extern */

void func_0202e26c(u32 arg0, u32 *arg1) {
    s32 temp_r0;
    s32 var_r3;
    u32 temp_r2;

    temp_r2 = *arg1;
    temp_r0 = temp_r2 & 0xF0;
    if (arg0 >= 0x03800000U) {
        var_r3 = 1;
    } else {
        var_r3 = 0;
    }
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_020645ec(((s8 *) arg1 + 4), arg0, temp_r2 >> 8);
            return;
        case 16:
            if (var_r3 != 0) {
                func_0206497c(arg1, arg0);
                return;
            }
            func_020648e8(arg1, arg0);
            return;
        case 32:
            func_02064a54(arg1, arg0);
            return;
        case 48:
            if (var_r3 != 0) {
                func_02064b98(arg1, arg0);
                return;
            }
            func_02064b2c(arg1, arg0);
            return;
    }
}
