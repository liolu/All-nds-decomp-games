/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_0201b7c4(M2C_UNK *, M2C_UNK *, s32);       /* extern */
extern M2C_UNK data_0209ef7c;
extern M2C_UNK data_0209ef84;
extern M2C_UNK data_0209efa0;
extern M2C_UNK data_020cc370;
extern M2C_UNK data_020cc620;

s32 func_0205267c(s32 arg0) {
    s32 temp_r3;
    s32 var_lr;
    s32 var_r4;
    u16 temp_r1;

    if (M2C_FIELD(&data_020cc620, u8 *, 0x138) == 1) {
        return 0;
    }
    var_r4 = 0;
    var_lr = 0;
loop_3:
    temp_r1 = M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020cc370 + (var_lr * 2))), u16 *, 0x2A8);
    temp_r3 = temp_r1 & 0x7FFF;
    if (temp_r3 == arg0) {
        if (temp_r1 & 0x8000) {
            var_r4 = func_0201b7c4(&data_0209efa0, &data_0209ef7c, temp_r3 - 0x100);
        } else {
            var_r4 = func_0201b7c4(&data_0209efa0, &data_0209ef84, temp_r3 - 0x100);
        }
    } else {
        var_lr += 1;
        if (var_lr < 4) {
            goto loop_3;
        }
    }
    return var_r4;
}
