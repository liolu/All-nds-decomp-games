#include "m2c.h"

void *func_020294b0(s32);                           /* extern */
M2C_UNK func_0203d93c(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020451c0(M2C_UNK, M2C_UNK, s16);       /* extern */
extern void *data_020ab2d8;

void func_02045b3c(s32 arg0) {
    s32 var_r0;
    void *temp_r5;

    temp_r5 = data_020ab2d8;
    if (temp_r5 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r5, s32 *, 0x40) != 0) {
        return;
    }
    if (arg0 == 0) {
        func_0203d93c(M2C_FIELD(func_020294b0(0x113), s32 *, 0x30), 0xD, 6);
    } else {
        func_020451c0(0x80, 0x60, (s16) (M2C_FIELD(temp_r5, s16 *, 0x3C) - 0x17));
    }
    var_r0                          = 1;
    M2C_FIELD(temp_r5, s32 *, 0x40) = 1;
    if (arg0 != 0) {
        var_r0 = 0;
    }
    M2C_FIELD(temp_r5, s32 *, 0x50) = var_r0;
}
