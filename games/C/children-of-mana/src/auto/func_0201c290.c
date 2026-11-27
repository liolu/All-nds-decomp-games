#include "m2c.h"

void func_0201c290(void *arg0) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r2;
    s32 var_r2_2;

    var_r2  = M2C_FIELD(arg0, s32 *, 0x138);
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x40);
    if (temp_r1 >= var_r2) {
        var_r2 = M2C_FIELD(arg0, s32 *, 0x140);
        if (temp_r1 <= var_r2) {
            var_r2 = temp_r1;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x40) = var_r2;
    var_r2_2                     = M2C_FIELD(arg0, s32 *, 0x13C);
    temp_r1_2                    = M2C_FIELD(arg0, s32 *, 0x44);
    if (temp_r1_2 >= var_r2_2) {
        var_r2_2 = M2C_FIELD(arg0, s32 *, 0x144);
        if (temp_r1_2 <= var_r2_2) {
            var_r2_2 = temp_r1_2;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x44) = var_r2_2;
}
