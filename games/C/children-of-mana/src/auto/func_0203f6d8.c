/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020290ec(s32, M2C_UNK);                    /* extern */

void func_0203f6d8(void *arg0) {
    M2C_UNK var_r1;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r1_2;
    void *temp_r1;
    void *temp_r2;

    temp_r1 = M2C_FIELD(arg0, void **, 8);
    temp_r0 = M2C_FIELD(temp_r1, s32 *, 0xC);
    if (temp_r0 == 0) {
        return;
    }
    if (M2C_FIELD(temp_r1, s32 *, 4) != 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    temp_r0_2 = func_020290ec(temp_r0, var_r1);
    temp_r2   = M2C_FIELD(arg0, void **, 8);
    if (M2C_FIELD(temp_r2, s32 *, 4) != 0) {
        var_r1_2 = 0x200;
    } else {
        var_r1_2 = 0x20;
    }
    M2C_FIELD(temp_r2, s32 *, 8) = (s32) (temp_r0_2 * var_r1_2);
}
