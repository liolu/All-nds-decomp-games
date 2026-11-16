#include "m2c.h"

M2C_UNK func_0208e130(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020df20c;

void func_0208dfa4(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r6;

    var_r6 = 0;
    do {
        temp_r0 = (var_r6 * 0x174) + (s32) &data_020df20c;
        if (((s32) (M2C_FIELD(temp_r0, s32 *, 0x110) << 0x1F) >> 0x1F) != 0) {
            func_0208e130(temp_r0, arg0);
        }
        var_r6 += 1;
    } while (var_r6 < 4);
}
