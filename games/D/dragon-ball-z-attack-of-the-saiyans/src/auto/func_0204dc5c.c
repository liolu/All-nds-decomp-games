/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020cc620;
extern M2C_UNK data_020cd14c;

u8 func_0204dc5c(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r3;

    temp_r0 = func_02012a90(arg0, 1);
    var_r3  = 0;
loop_1:
    if (temp_r0 != M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020cc620 + (var_r3 * 8))), u8 *, 0xB28)) {
        var_r3 += 1;
        if (var_r3 < 3) {
            goto loop_1;
        }
    }
    if (var_r3 == 3) {
        return 0U;
    }
    return *((u8 *) ((s8 *) &data_020cd14c + (var_r3 * 8)));
}
