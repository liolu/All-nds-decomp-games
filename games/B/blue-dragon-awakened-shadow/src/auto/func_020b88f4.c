/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_020b60e8();                                /* extern */

s32 func_020b88f4(void *arg0) {
    s16 temp_r2;
    s32 temp_r0;
    s32 var_ip;
    void *temp_r3;

    temp_r0 = func_020b60e8();
    if (temp_r0 == 0) {
        return 0;
    }
    var_ip = 0;
    do {
        temp_r3 = temp_r0 + (var_ip * 2);
        temp_r2 = M2C_FIELD(temp_r3, s16 *, 0x28);
        var_ip += 1;
        M2C_FIELD(temp_r3, s16 *, 0x28) = (s16) (temp_r2 + M2C_FIELD(arg0, s16 *, 0x14));
    } while (var_ip < 6);
    return 1;
}
