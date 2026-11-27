#include "m2c.h"

void func_020527b8(void *arg0) {
    s32 var_r1;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA0), s32 *, 0x40) != 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x418) = 0xA5;
    }
}
