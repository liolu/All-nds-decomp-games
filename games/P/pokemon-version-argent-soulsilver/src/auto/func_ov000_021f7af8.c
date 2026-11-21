#include "m2c.h"

M2C_UNK func_020d47ec(M2C_UNK, M2C_UNK *, s32);    /* extern */
M2C_UNK func_ov000_021ec30c(M2C_UNK, s32, M2C_UNK); /* extern */
extern M2C_UNK data_ov000_0221a968;

void func_ov000_021f7af8(void) {
    s32 var_r7;
    u8 *var_r6;
    s32 temp_r1;

    var_r6 = (u8 *) &data_ov000_0221a968;
    var_r7 = 0;
    do {
        temp_r1 = *(s32 *) (var_r6 + 4);
        if (temp_r1 != 0) {
            func_ov000_021ec30c(4, temp_r1, 0);
        }
        var_r7 += 1;
        var_r6 += 12;
    } while (var_r7 < 0x9A);
    func_020d47ec(0, &data_ov000_0221a968, 0x738);
}
