/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

void func_02071f78(void *arg0) {
    s32 var_ip;
    void *temp_r1;

    var_ip                          = 0;
    M2C_FIELD(arg0, s32 *, 0x5A1E4) = 0;
    do {
        temp_r1                            = arg0 + (var_ip * 0x10);
        M2C_FIELD(temp_r1, s32 *, 0x5A164) = 0;
        var_ip += 1;
        M2C_FIELD(temp_r1, s32 *, 0x5A168) = -1;
    } while (var_ip < 8);
}
