#include "m2c.h"

void func_02061ac8(void *arg0, s32 arg1) {
    s32 var_r1;
    s32 var_r2;

    var_r1 = arg1;
    var_r2 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (var_r1 <= 0) {
        var_r1 = 0;
    }
    if (var_r2 >= var_r1) {
        var_r2 = var_r1;
    }
    M2C_FIELD(arg0, s32 *, 0x74) = var_r2;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
}
