#include "m2c.h"

extern M2C_UNK data_027e00c4;

void func_0201398c(u8 arg0, u8 arg1) {
    M2C_UNK *var_r2;
    s32 var_r3;
    u8 temp_ip;
    u8 temp_lr;

    var_r2 = &data_027e00c4;
    var_r3 = 0;
loop_1:
    temp_lr = M2C_FIELD(var_r2, u8 *, 0);
    temp_ip = M2C_FIELD(var_r2, u8 *, 1);
    if ((temp_lr == 0) && (temp_ip == 0)) {
        M2C_FIELD(var_r2, u8 *, 0) = arg0;
        M2C_FIELD(var_r2, u8 *, 1) = arg1;
        M2C_FIELD(var_r2, s8 *, 2) = 0;
        M2C_FIELD(var_r2, s8 *, 3) = 0;
        return;
    }
    if (((s32) temp_lr <= (s32) arg0) && ((s32) arg0 <= (s32) temp_ip)) {
        if ((s32) temp_ip < (s32) arg1) {
            M2C_FIELD(var_r2, u8 *, 1) = arg1;
        }
        return;
    }
    if (((s32) temp_lr <= (s32) arg1) && ((s32) arg1 <= (s32) temp_ip)) {
        if ((s32) arg0 < (s32) temp_lr) {
            M2C_FIELD(var_r2, u8 *, 0) = arg0;
        }
        return;
    }
    if (((s32) arg0 < (s32) temp_lr) && ((s32) temp_ip < (s32) arg1)) {
        M2C_FIELD(var_r2, u8 *, 0) = arg0;
        M2C_FIELD(var_r2, u8 *, 1) = arg1;
        return;
    }
    var_r3 += 1;
    var_r2 = (M2C_UNK *) ((s8 *) var_r2 + 2);
    if (var_r3 >= 0x1F) {
        return;
    }
    goto loop_1;
}
