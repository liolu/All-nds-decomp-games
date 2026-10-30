#include "m2c.h"

void func_0207e994(void *arg0, u32 arg1) {
    u32 var_r1;

    var_r1 = arg1;
    if (var_r1 > 0x64U) {
        var_r1 = 0x64;
    }
    M2C_FIELD(arg0, s8 *, 0x34) = (s8) var_r1;
}
