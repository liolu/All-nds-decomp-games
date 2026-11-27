/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_020b6200(void *);                          /* extern */

s32 func_020b7ed0(s32 arg0, s32 arg1) {
    s32 var_ip;
    void *temp_r3;

    var_ip = 0;
loop_1:
    temp_r3 = M2C_FIELD((arg0 + (var_ip * 4)), void **, 0x14);
    if ((temp_r3 != NULL) && (M2C_FIELD(temp_r3, s16 *, 0x10) != 0)) {
        if (arg1 == M2C_FIELD(temp_r3, s16 *, 0x12)) {
            return func_020b6200(temp_r3);
        }
        goto block_7;
    }
block_7:
    var_ip += 1;
    if (var_ip >= 6) {
        return 0;
    }
    goto loop_1;
}
