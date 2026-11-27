/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

void func_02096430(s32 arg0, s32 arg1) {
    s32 var_ip;
    void *temp_r3;

    var_ip = 0;
loop_1:
    temp_r3 = arg0 + (var_ip * 4);
    if (M2C_FIELD(temp_r3, s32 *, 4) == 0) {
        M2C_FIELD(temp_r3, s32 *, 4) = arg1;
        return;
    }
    var_ip += 1;
    if (var_ip >= 0x55) {
        return;
    }
    goto loop_1;
}
