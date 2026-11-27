#include "m2c.h"

void func_020994a8(void *arg0) {
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r2;
    s32 var_r2_2;

    var_r2 = M2C_FIELD(arg0, s32 *, 0x24);
    var_r1 = 0 - M2C_FIELD(arg0, s32 *, 0x78);
    if (var_r2 >= var_r1) {
        if (var_r2 > 0x100) {
            var_r2 = 0x100;
        }
        var_r1 = var_r2;
    }
    M2C_FIELD(arg0, s32 *, 0x70) = var_r1;
    var_r2_2                     = M2C_FIELD(arg0, s32 *, 0x28);
    var_r1_2                     = 0 - M2C_FIELD(arg0, s32 *, 0x7C);
    if (var_r2_2 >= var_r1_2) {
        if (var_r2_2 > 0xC0) {
            var_r2_2 = 0xC0;
        }
        var_r1_2 = var_r2_2;
    }
    M2C_FIELD(arg0, s32 *, 0x74) = var_r1_2;
}
