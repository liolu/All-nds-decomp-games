#include "m2c.h"

M2C_UNK func_020a68a4();                            /* extern */
M2C_UNK func_020a68d0(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_020a6930();                            /* extern */
M2C_UNK func_020a6964();                            /* extern */
s32 func_020a7a3c(s32);                             /* extern */
s32 func_020a7b44(s32, s32);                        /* extern */
extern M2C_UNK data_021d4640;

s32 func_020a7eec(u32 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r7;
    u32 temp_r1;

    func_020a6930();
    func_020a68a4();
    if (arg1 == 1) {
        func_020a68d0(0x44, 0x43, M2C_FIELD(&data_021d4640, s32 *, 0x20));
    } else {
        func_020a68d0(0x44, 0x43, -1);
    }
    var_r7 = 0;
loop_4:
    temp_r0 = func_020a7b44(func_020a7a3c(arg1), var_r7);
    if (temp_r0 == 0) {
        var_r7 += 1;
        if (var_r7 < 4) {
            goto loop_4;
        }
    }
    func_020a6964();
    if (temp_r0 == 2) {
        *arg0                                  = (u32) M2C_FIELD(&data_021d4640, u32 *, 0x4C) >> 1;
        M2C_FIELD(&data_021d4640, u32 *, 0x38) = (u32) ((u32) (M2C_FIELD(&data_021d4640, u32 *, 0x4C) * 3) >> 3);
        return 1;
    }
    temp_r1                                = (u32) M2C_FIELD(&data_021d4640, u32 *, 0x38) >> 1;
    M2C_FIELD(&data_021d4640, u32 *, 0x38) = temp_r1;
    *arg0                                  = temp_r1;
    switch (arg1) {                                 /* irregular */
        case 1:
            if (temp_r1 < 0x3CU) {
                *arg0                                  = 1;
                M2C_FIELD(&data_021d4640, u32 *, 0x38) = (u32) ((u32) M2C_FIELD(&data_021d4640, u32 *, 0x4C) >> 3);
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
