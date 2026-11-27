/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_020891a4();                            /* extern */
M2C_UNK func_020b0594(s32, s32);                    /* extern */

void func_020b03ac(s32 arg0) {
    s32 var_r4;
    s32 var_r4_2;
    void **temp_r0;

    var_r4 = 0;
    do {
        temp_r0 = M2C_FIELD((arg0 + (var_r4 * 4)), void ***, 0x30);
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x34)(temp_r0);
        }
        var_r4 += 1;
    } while (var_r4 < 4);
    var_r4_2 = 4;
    do {
        func_020b0594(arg0, var_r4_2);
        var_r4_2 += 1;
    } while (var_r4_2 < 0x20);
    func_020891a4();
}
