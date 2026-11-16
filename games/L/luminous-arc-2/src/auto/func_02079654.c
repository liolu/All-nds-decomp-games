/* compiler: 2.0/sp1p5 -pid */
#include "m2c.h"

M2C_UNK func_02012c84(M2C_UNK, M2C_UNK);            /* extern */
void *func_020791dc();                              /* extern */
M2C_UNK func_020799c8(void *);                      /* extern */
s32 func_020d350c();                                /* extern */

void func_02079654(void *arg0) {
    s32 temp_r0;
    s32 var_ip;
    u8 temp_r1;
    u8 var_r4;
    void *temp_r0_2;

    var_r4  = 0;
    temp_r0 = func_020d350c();
    var_ip  = 0;
loop_1:
    if (temp_r0 & (1 << var_ip)) {
        temp_r1 = M2C_FIELD(arg0, u8 *, 0x77D);
        if (var_ip == 0) {
            if (temp_r1 == 0) {
                M2C_FIELD(arg0, u8 *, 0x77D) = 1U;
                return;
            }
            goto block_8;
        }
        if (temp_r1 == 1) {
            var_r4 += 1;
            if (var_r4 == (M2C_FIELD(arg0, u8 *, 0x76A) - 1)) {
                temp_r0_2                     = func_020791dc();
                M2C_FIELD(temp_r0_2, u8 *, 4) = (u8) (M2C_FIELD(temp_r0_2, u8 *, 4) & ~7);
                M2C_FIELD(arg0, s32 *, 4)     = (s32) (M2C_FIELD(arg0, s32 *, 4) & ~2);
                M2C_FIELD(arg0, s8 *, 0x77A)  = 6;
                func_02012c84(0, 0);
                return;
            }
        }
        goto block_8;
    }
block_8:
    var_ip += 1;
    if (var_ip >= 2) {
        func_020799c8(arg0);
        return;
    }
    goto loop_1;
}
