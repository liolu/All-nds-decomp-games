#include "m2c.h"

void func_0209f494(void *arg0) {
    u32 temp_r1;
    u32 var_r2;

    temp_r1 = M2C_FIELD(arg0, u32 *, 0x14);
    var_r2  = M2C_FIELD(arg0, u32 *, 0x10);
    if (var_r2 <= temp_r1) {
        var_r2 = temp_r1;
    }
    M2C_FIELD(arg0, u32 *, 0x10) = var_r2;
}
