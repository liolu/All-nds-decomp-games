#include "m2c.h"

M2C_UNK func_0201943c(void *, void *, s32, u8, s32); /* extern */

void func_02019604(void *arg0, s32 arg1) {
    s32 var_r1;
    s32 var_r2;
    s8 *var_r3;
    s8 temp_r0;

    var_r1 = arg1;
    if (M2C_FIELD(arg0, s32 *, 0x20) == 0) {
        var_r3 = M2C_FIELD(arg0, s8 **, 0x1C);
        var_r2 = 0;
        if (*var_r3 != 0) {
        loop_2:
            temp_r0 = *var_r3;
            var_r3 += 1;
            if (temp_r0 != 0) {
            block_5:
                goto loop_2;
            }
            var_r2 += 1;
            if (*var_r3 != 0) {
                goto block_5;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r2;
        var_r1 |= 8;
    }
    func_0201943c(arg0 + 0x24, arg0 + 0x28, M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, u8 *, 5), var_r1);
    M2C_FIELD(arg0, s8 *, 6) = (s8) M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(arg0, s8 *, 7) = (s8) M2C_FIELD(arg0, s32 *, 0x28);
}
