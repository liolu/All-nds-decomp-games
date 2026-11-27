/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_020b65cc(s32 arg0) {
    s32 var_r2;
    s32 var_r3;
    void *temp_r1;

    var_r2 = 0;
    var_r3 = 0;
    do {
        temp_r1 = M2C_FIELD((arg0 + (var_r3 * 4)), void **, 0x14);
        var_r3 += 1;
        if ((temp_r1 != NULL) && (M2C_FIELD(temp_r1, s16 *, 0x10) != 0)) {
            var_r2 += 1;
        }
    } while (var_r3 < 6);
    return var_r2;
}
