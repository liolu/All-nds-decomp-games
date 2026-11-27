/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

void func_02016e1c(s32 arg0) {
    s32 var_r4;
    void **temp_r0;

    var_r4 = 0;
    do {
        temp_r0 = M2C_FIELD((arg0 + (var_r4 * 4)), void ***, 4);
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x240)(temp_r0);
        }
        var_r4 += 1;
    } while (var_r4 < 0x40);
}
