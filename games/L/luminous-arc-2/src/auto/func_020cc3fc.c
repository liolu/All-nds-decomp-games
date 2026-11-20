/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_020074fc(M2C_UNK, void *, M2C_UNK);    /* extern */
extern M2C_UNK data_02154024;
extern M2C_UNK data_02156024;

void func_020cc3fc(s32 arg0, u32 arg1, s32 arg2) {
    s32 var_r10;
    u32 var_r6;

    var_r10 = arg0;
    var_r6  = 0;
    if (arg1 == 0) {
        return;
    }
    do {
        if (arg2 & 1) {
            func_020074fc(0, (M2C_UNK *) ((s8 *) &data_02154024 + (var_r10 << 6)), 0x40);
        }
        if (arg2 & 2) {
            func_020074fc(0, (M2C_UNK *) ((s8 *) &data_02156024 + (var_r10 << 6)), 0x40);
        }
        var_r6 += 1;
        var_r10 += 1;
    } while (var_r6 < arg1);
}
