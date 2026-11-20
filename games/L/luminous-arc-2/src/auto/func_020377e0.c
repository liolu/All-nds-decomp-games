#include "m2c.h"

M2C_UNK func_020075b0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0200a714(s32);                         /* extern */
s32 func_0200a9f4(s32, s32);                        /* extern */
M2C_UNK func_0200ae54(M2C_UNK);                     /* extern */
s32 func_0201b5e0();                                /* extern */
M2C_UNK func_02037edc();                            /* extern */
s32 func_020cd8a8(M2C_UNK);                         /* extern */
extern M2C_UNK data_0216bc50;

s32 func_020377e0(s32 arg0, s32 arg1) {
    s32 temp_r0;

    if ((arg0 != 0) && (arg1 != 0)) {
        if (func_0201b5e0() == 0) {
            M2C_FIELD(&data_0216bc50, u8 *, 0xA) = 4U;
            return 0;
        }
        goto block_6;
    }
block_6:
    func_0200ae54(2);
    if ((arg0 == 0) && (M2C_FIELD(&data_0216bc50, u8 *, 8) == 0)) {
        M2C_FIELD(&data_0216bc50, u8 *, 8) = 1U;
    } else if ((arg1 == 0) && (M2C_FIELD(&data_0216bc50, u8 *, 8) == 1)) {
        M2C_FIELD(&data_0216bc50, u8 *, 8) = 0U;
    }
    temp_r0                             = func_020cd8a8(0x120);
    M2C_FIELD(&data_0216bc50, s32 *, 0) = temp_r0;
    func_020075b0(temp_r0, 0, 0x120);
    M2C_FIELD(&data_0216bc50, u8 *, 4) = 0U;
    if (arg0 != 0) {
        M2C_FIELD(&data_0216bc50, u8 *, 4) = (u8) (M2C_FIELD(&data_0216bc50, u8 *, 4) | 1);
        func_0200a714(M2C_FIELD(&data_0216bc50, s32 *, 0) + 0x30);
        if (func_0200a9f4(M2C_FIELD(&data_0216bc50, s32 *, 0) + 0x30, arg0) == 0) {
            M2C_FIELD(&data_0216bc50, u8 *, 0xA) = 4U;
            return 0;
        }
    }
    if (arg1 != 0) {
        M2C_FIELD(&data_0216bc50, u8 *, 4) = (u8) (M2C_FIELD(&data_0216bc50, u8 *, 4) | 2);
        func_0200a714(M2C_FIELD(&data_0216bc50, s32 *, 0) + 0x78);
        if (func_0200a9f4(M2C_FIELD(&data_0216bc50, s32 *, 0) + 0x78, arg1) == 0) {
            M2C_FIELD(&data_0216bc50, u8 *, 0xA) = 4U;
            return 0;
        }
    }
    func_02037edc();
    M2C_FIELD(&data_0216bc50, s8 *, 9)   = 1;
    M2C_FIELD(&data_0216bc50, u8 *, 0xA) = (u8) (M2C_FIELD(&data_0216bc50, u8 *, 0xA) + 1);
    return 0;
}
