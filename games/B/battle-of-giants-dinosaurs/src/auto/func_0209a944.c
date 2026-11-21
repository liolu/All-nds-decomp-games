/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

void func_0209a944(void *arg0) {
    s32 var_r3;
    void *temp_r1;

    M2C_FIELD(arg0, s32 *, 0xEC) = -1;
    M2C_FIELD(arg0, s32 *, 0xE8) = -1;
    var_r3                       = 0;
    do {
        temp_r1 = arg0 + (var_r3 * 4);
        var_r3 += 1;
        M2C_FIELD(temp_r1, s32 *, 0x90) = -1;
    } while (var_r3 < 0x16);
}
