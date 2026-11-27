#include "m2c.h"

M2C_UNK func_020a68a4();                            /* extern */
M2C_UNK func_020a68d0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020a6930();                            /* extern */
M2C_UNK func_020a6964();                            /* extern */
s32 func_020a7978();                                /* extern */
s32 func_020a7b44(s32, s32);                        /* extern */

s32 func_020a7e94(void) {
    s32 temp_r0;
    s32 var_r5;

    func_020a6930();
    func_020a68a4();
    func_020a68d0(0x44, 0x43, -1);
    var_r5 = 0;
loop_1:
    temp_r0 = func_020a7b44(func_020a7978(), var_r5);
    if (temp_r0 != 1) {
        var_r5 += 1;
        if (var_r5 < 4) {
            goto loop_1;
        }
    }
    func_020a6964();
    if (temp_r0 == 1) {
        return 1;
    }
    return 0;
}
