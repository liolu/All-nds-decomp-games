#include "m2c.h"

M2C_UNK func_0200a6ec(M2C_UNK);                     /* extern */
s32 func_0200aea4(s32, s32);                        /* extern */
s32 func_020299cc(M2C_UNK *, s32);                  /* extern */
extern s32 data_021514e8;
extern M2C_UNK data_02151548;

void func_02024e68(void) {
    s32 temp_r0;
    s32 temp_r0_2;

    func_0200a6ec(-1);
    temp_r0       = func_0200aea4(0, 0);
    temp_r0_2     = func_020299cc(&data_02151548, temp_r0);
    data_021514e8 = temp_r0_2;
    func_0200aea4(temp_r0_2, temp_r0);
}
