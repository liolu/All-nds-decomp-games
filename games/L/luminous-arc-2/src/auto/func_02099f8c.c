#include "m2c.h"

M2C_UNK func_02098a0c();                            /* extern */
M2C_UNK func_02098a38(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_02098a98();                            /* extern */
M2C_UNK func_02098acc();                            /* extern */
s32 func_02099adc(s32);                             /* extern */
s32 func_02099be4(s32, s32);                        /* extern */
extern M2C_UNK data_02170d04;

s32 func_02099f8c(u32 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r7;
    u32 temp_r1;

    func_02098a98();
    func_02098a0c();
    if (arg1 == 1) {
        func_02098a38(0x44, 0x43, M2C_FIELD(&data_02170d04, s32 *, 0x20));
    } else {
        func_02098a38(0x44, 0x43, -1);
    }
    var_r7 = 0;
loop_4:
    temp_r0 = func_02099be4(func_02099adc(arg1), var_r7);
    if (temp_r0 == 0) {
        var_r7 += 1;
        if (var_r7 < 4) {
            goto loop_4;
        }
    }
    func_02098acc();
    if (temp_r0 == 2) {
        *arg0                                  = (u32) M2C_FIELD(&data_02170d04, u32 *, 0x4C) >> 1;
        M2C_FIELD(&data_02170d04, u32 *, 0x38) = (u32) ((u32) (M2C_FIELD(&data_02170d04, u32 *, 0x4C) * 3) >> 3);
        return 1;
    }
    temp_r1                                = (u32) M2C_FIELD(&data_02170d04, u32 *, 0x38) >> 1;
    M2C_FIELD(&data_02170d04, u32 *, 0x38) = temp_r1;
    *arg0                                  = temp_r1;
    switch (arg1) {                                 /* irregular */
        case 1:
            if (temp_r1 < 0x3CU) {
                *arg0                                  = 1;
                M2C_FIELD(&data_02170d04, u32 *, 0x38) = (u32) ((u32) M2C_FIELD(&data_02170d04, u32 *, 0x4C) >> 3);
            }
            break;
        case 2:
            if (temp_r1 < 0x3CU) {
                *arg0 = 1;
            }
            break;
    }
    return 0;
}
