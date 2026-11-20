#include "m2c.h"

s32 func_020066e0();                                /* extern */
M2C_UNK func_020066f4(s32);                         /* extern */
M2C_UNK func_0200848c(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0200ed54();                                /* extern */
s32 func_0200edb8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0200f1f8();                            /* extern */
extern M2C_UNK data_020d3660;

s32 func_0200eb48(void) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_020066e0();
    if (func_0200ed54() != 0) {
        func_020066f4(temp_r4);
        return 3;
    }
    temp_r0 = func_0200edb8(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0200f1f8();
    func_0200848c(0xA, 0);
    M2C_FIELD(&data_020d3660, s32 *, 4) = 0;
    M2C_FIELD(&data_020d3660, s16 *, 0) = 0;
    func_020066f4(temp_r4);
    return 0;
}
