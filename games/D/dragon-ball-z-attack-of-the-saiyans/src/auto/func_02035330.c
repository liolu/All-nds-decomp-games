/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_020082c0(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK data_020939d4;
extern s32 data_020d1d24;

void func_02035330(void) {
    s32 var_r4;
    s32 var_r5;

    var_r4 = 1;
    var_r5 = 0x40;
    do {
        if ((s32) M2C_FIELD((data_020d1d24 + (var_r4 << 6)), s8 *, 0x130) > 0x20) {
            func_020082c0(data_020d1d24 + 0x130 + var_r5, *((M2C_UNK *) ((s8 *) &data_020939d4 + (var_r4 * 4))), -1);
        }
        var_r4 += 1;
        var_r5 += 0x40;
    } while (var_r4 < 0x10);
}
