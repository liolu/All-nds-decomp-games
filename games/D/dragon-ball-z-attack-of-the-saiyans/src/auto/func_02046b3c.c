/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020cc370;

s32 func_02046b3c(M2C_UNK arg0) {
    s32 var_ip;
    s32 var_lr;
    s32 var_r0;
    u16 temp_r4;
    u16 var_r1;

    var_r0 = func_02012a90(arg0, 1);
    var_lr = 0;
    if (var_r0 > 0x30) {
        var_r0 -= 0x100;
    }
    var_ip = 0;
loop_3:
    temp_r4 = M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020cc370 + (var_ip * 2))), u16 *, 0x2A8);
    var_r1  = temp_r4 & 0x7FFF;
    if (var_r1 != 0) {
        var_r1 -= 0x100;
    }
    if (var_r1 == var_r0) {
        var_lr = 1;
        if (temp_r4 & 0x8000) {
            var_lr = 2;
        }
    } else {
        var_ip += 1;
        if (var_ip < 4) {
            goto loop_3;
        }
    }
    return var_lr;
}
