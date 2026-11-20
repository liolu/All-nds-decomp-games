#include "m2c.h"

u32 func_0200766c();      /* extern */
s32 func_02078f24();                             /* extern */
void *func_020791dc();                              /* extern */
void *func_020791f8();                           /* extern */
s32 func_02085394();                                /* extern */
extern M2C_UNK data_02172960;
extern M2C_UNK data_02173910;

u32 func_020a4f5c(u32 arg0, M2C_UNK *arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 temp_r4_2;
    u32 temp_r0;
    u32 temp_r0_4;
    void *temp_r0_2;
    void *temp_r0_3;

    if (M2C_FIELD(&data_02172960, u8 *, 1) == 0) {
        if (((u32) (M2C_FIELD(arg1, u8 *, 4) << 0x1D) >> 0x1D) != 1) {
            return arg0;
        }
        temp_r0_2                     = func_020791f8();
        M2C_FIELD(temp_r0_2, u8 *, 4) = (u8) ((M2C_FIELD(temp_r0_2, u8 *, 4) & ~7) | 1);
        temp_r0                       = (u32) (M2C_FIELD(func_020791f8(arg0), u8 *, 4) << 0x1D) >> 0x1D;
        if (temp_r0 == 0) {
            return temp_r0;
        }
        temp_r4                                                    = func_02078f24();
        M2C_FIELD((temp_r4 + (func_02085394() * 4)), s32 *, 0x718) = 1;
        func_02085394();
        return func_0200766c(&data_02173910, func_020791f8(), 0x100);
    }
    func_0200766c(arg1, func_020791f8(), arg2);
    M2C_FIELD((func_02078f24() + (arg0 * 4)), s32 *, 0x718) = 1;
    temp_r0_3                                               = func_020791dc();
    M2C_FIELD(temp_r0_3, u8 *, 4)                           = (u8) ((M2C_FIELD(temp_r0_3, u8 *, 4) & ~7) | 1);
    temp_r0_4                                               = (u32) (M2C_FIELD(func_020791f8(arg0), u8 *, 4) << 0x1D) >> 0x1D;
    if (temp_r0_4 != 0) {
        temp_r4_2                                                    = func_02078f24(temp_r0_4);
        M2C_FIELD((temp_r4_2 + (func_02085394() * 4)), s32 *, 0x718) = 1;
        func_02085394();
        func_0200766c(&data_02173910, func_020791f8(), 0x100);
    }
    M2C_FIELD(&data_02172960, u8 *, 1) = 0U;
    return (u32) &data_02172960;
}
