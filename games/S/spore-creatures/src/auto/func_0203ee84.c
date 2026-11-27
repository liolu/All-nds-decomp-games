#include "m2c.h"

s32 func_0203ec34(void *, void *);                  /* extern */
s32 func_0203ee0c(void *, void *, M2C_UNK);         /* extern */

s32 func_0203ee84(void *arg0, void *arg1) {
    s32 var_r2;
    s32 var_r6;
    void *var_r4;
    void *var_r5;
    void *var_r7;
    void *var_r8;

    var_r5 = arg0;
    var_r4 = arg1;
    if (M2C_FIELD(var_r5, u8 *, 0xCD) != M2C_FIELD(var_r4, u8 *, 0xCD)) {
        return 0;
    }
    if (func_0203ee0c(var_r5 + 0xB8, var_r4 + 0xB8, 0xA) == 0) {
        return 0;
    }
    if (func_0203ee0c(var_r5 + 0xA4, var_r4 + 0xA4, 0xA) == 0) {
        return 0;
    }
    if (M2C_FIELD(var_r5, u8 *, 0xCC) != M2C_FIELD(var_r4, u8 *, 0xCC)) {
        return 0;
    }
    var_r6 = 0;
    if ((s32) M2C_FIELD(var_r5, u8 *, 0xCD) > 0) {
        var_r7 = var_r4;
        var_r8 = var_r5;
    loop_10:
        if (func_0203ec34(var_r8, var_r7) == 0) {
            return 0;
        }
        var_r6 += 1;
        var_r7 += 0xC;
        var_r8 += 0xC;
        if (var_r6 >= (s32) M2C_FIELD(var_r5, u8 *, 0xCD)) {
            goto block_13;
        }
        goto loop_10;
    }
block_13:
    var_r2 = 0;
loop_14:
    if (M2C_FIELD(var_r5, u8 *, 0x91) != M2C_FIELD(var_r4, u8 *, 0x91)) {
        return 0;
    }
    if (M2C_FIELD(var_r5, u8 *, 0x90) != M2C_FIELD(var_r4, u8 *, 0x90)) {
        return 0;
    }
    if (M2C_FIELD(var_r5, u8 *, 0x92) != M2C_FIELD(var_r4, u8 *, 0x92)) {
        return 0;
    }
    var_r2 += 1;
    var_r4 += 3;
    var_r5 += 3;
    if (var_r2 >= 5) {
        return 1;
    }
    goto loop_14;
}
