#include "m2c.h"

s32 func_01ff8498();                                /* extern */
M2C_UNK func_0200b5e8();                            /* extern */
s32 func_020148a4();                                /* extern */

s32 func_01ff8668(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;

    var_r7 = 0;
    if (arg0 == NULL) {
        return 0;
    }
    var_r4 = M2C_FIELD(arg0, s32 *, 0);
    var_r5 = M2C_FIELD(arg0, s32 *, 4);
    var_r6 = M2C_FIELD(arg0, s32 *, 8);
    if ((var_r4 == 0) && (var_r5 == 0) && (var_r6 == 0)) {
        return 0;
    }
    func_0200b5e8();
    temp_r0_2 = func_01ff8498();
    if (temp_r0_2 < 0x12) {
        var_r7 = 0x12 - temp_r0_2;
        var_r4 = var_r4 >> var_r7;
        var_r5 = var_r5 >> var_r7;
        var_r6 = var_r6 >> var_r7;
    } else if (temp_r0_2 > 0x12) {
        temp_r0_3 = temp_r0_2 - 0x12;
        var_r4 <<= temp_r0_3;
        var_r5 <<= temp_r0_3;
        var_r6 <<= temp_r0_3;
        var_r7 = 0 - temp_r0_3;
    }
    temp_r0 = (var_r6 * var_r6) + ((var_r4 * var_r4) + (var_r5 * var_r5));
    if (temp_r0 == 0) {
        return temp_r0;
    }
    if (var_r7 >= 6) {
        return func_020148a4() << (var_r7 - 6);
    }
    return func_020148a4() >> (6 - var_r7);
}
