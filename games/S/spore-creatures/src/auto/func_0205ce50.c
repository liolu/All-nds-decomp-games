#include "m2c.h"

void func_0205ce50(s32 arg0) {
    s32 var_r3;
    u8 temp_r1;
    void *temp_r2;

    var_r3 = 0;
    do {
        temp_r2 = arg0 + var_r3;
        temp_r1 = M2C_FIELD(temp_r2, u8 *, 372);
        var_r3 += 1;
        if (temp_r1 != 0) {
            M2C_FIELD(temp_r2, s8 *, 372) = (s8) (temp_r1 - 1);
        }
    } while (var_r3 < 6);
}
