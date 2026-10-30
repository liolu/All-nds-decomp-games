#include "m2c.h"

s32 func_0201c650(s32);                             /* extern */
s32 func_020536c8(M2C_UNK);                         /* extern */
s32 func_020536d8(M2C_UNK);                         /* extern */
s32 func_020b11e8(s32);                             /* extern */
s32 func_020b11f0(s32);                             /* extern */
s32 func_020b1200(s32);                             /* extern */
s32 func_020b1210(s32);                             /* extern */

void func_02047f7c(void *arg0, M2C_UNK arg1) {
    s32 temp_r5;
    s32 temp_r6;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r2;
    s32 var_r2_2;

    temp_r6 = func_020536d8(arg1);
    temp_r5 = func_020536c8(arg1);
    if ((func_020b1200(temp_r6) != 0) || (func_0201c650(temp_r5) != 0)) {
        if (func_020b11e8(temp_r6) >= 0x68) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x38) = var_r1;
        if (func_020b11e8(temp_r6) < 0x98) {
            var_r2 = 1;
        } else {
            var_r2 = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & var_r2);
        if (func_020b11f0(temp_r6) >= 0x78) {
            var_r2_2 = 1;
        } else {
            var_r2_2 = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & var_r2_2);
        if (func_020b11f0(temp_r6) < 0x88) {
            var_r1_2 = 1;
        } else {
            var_r1_2 = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & var_r1_2);
        return;
    }
    if (func_020b1210(temp_r6) != 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
}
