#include "m2c.h"

M2C_UNK *func_02093494(s32);                        /* extern */
M2C_UNK func_020934bc(M2C_UNK *);                   /* extern */

void func_020a6308(void *arg0) {
    M2C_UNK *temp_r4;
    u32 temp_r0;
    u32 var_r1;
    u32 var_r1_2;
    u32 var_r5;

    temp_r0 = M2C_FIELD(arg0, u32 *, 8);
    if (temp_r0 == 1) {
        var_r5 = 8;
    } else {
        var_r5 = temp_r0 * 2;
    }
    temp_r4 = func_02093494(var_r5 * 4);
    if (M2C_FIELD(arg0, u32 *, 8) == 1) {
        *temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 0);
    } else {
        for (var_r1 = 0; var_r1 < (u32) M2C_FIELD(arg0, u32 *, 4); var_r1 += 1) {
            temp_r4[var_r1] = M2C_FIELD(arg0, M2C_UNK **, 0)[var_r1];
        }
        func_020934bc(M2C_FIELD(arg0, M2C_UNK **, 0));
    }
    var_r1_2 = M2C_FIELD(arg0, u32 *, 4);
    if (var_r1_2 < var_r5) {
        do {
            temp_r4[var_r1_2] = (M2C_UNK *) 0xBBBBBBBB;
            var_r1_2 += 1;
        } while (var_r1_2 < var_r5);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = temp_r4;
    M2C_FIELD(arg0, u32 *, 8)      = var_r5;
}
