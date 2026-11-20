/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

M2C_UNK func_02057be0(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020b0084;

void func_02057674(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 var_r5;

    var_r5 = 0;
    do {
        temp_r0 = (var_r5 * 0x44) + (s32) &data_020b0084;
        if (M2C_FIELD(temp_r0, u8 *, 0x2C) != 0) {
            if ((M2C_FIELD(temp_r0, u16 *, 0x34) == 2) && (M2C_FIELD(temp_r0, u16 *, 0x38) == arg0) &&
                (M2C_FIELD(temp_r0, u16 *, 0x3A) == arg1)) {
                func_02057be0(temp_r0, arg2);
            }
        }
        var_r5 += 1;
    } while (var_r5 < 0x10);
}
