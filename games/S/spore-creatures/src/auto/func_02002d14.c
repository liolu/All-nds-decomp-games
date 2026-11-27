#include "m2c.h"

M2C_UNK func_020029dc();                            /* extern */
M2C_UNK func_02003018(void *);                      /* extern */
M2C_UNK func_020030c4(void *);                      /* extern */

void func_02002d14(void *arg0, s32 arg1, s32 arg2) {
    u32 var_r6;
    u32 var_r6_2;
    void *var_r7;
    void *var_r7_2;

    if (arg1 != M2C_FIELD(arg0, s32 *, 0x358)) {
        func_020029dc(arg0);
        M2C_FIELD(arg0, s32 *, 0x358) = arg1;
        M2C_FIELD(arg0, s32 *, 0x35C) = arg2;
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x35C) == arg2) {
        return;
    }
    var_r7 = arg0 + 0x230;
    var_r6 = 0;
    do {
        func_020030c4(var_r7);
        var_r6 += 1;
        var_r7 += 0xC;
    } while (var_r6 < 0x14U);
    var_r7_2 = arg0;
    var_r6_2 = 0;
    do {
        func_02003018(var_r7_2);
        var_r6_2 += 1;
        var_r7_2 += 0x1C;
    } while (var_r6_2 < 0x14U);
    M2C_FIELD(arg0, s32 *, 0x35C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x364) = 0;
    M2C_FIELD(arg0, s32 *, 0x36C) = 0;
}
