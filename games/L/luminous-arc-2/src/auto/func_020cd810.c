#include "m2c.h"

M2C_UNK func_0200a0e4(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0200a4b0();                            /* extern */
s32 func_0200aea4(s32, s32);                        /* extern */
M2C_UNK func_02029698(s32, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_020cd8a8();                                /* extern */
extern M2C_UNK data_02134f2c;
extern s32 data_0215146c;
extern s32 data_021514e8;
extern M2C_UNK func_020cd89c;

void func_020cd810(void) {
    s32 temp_r0;
    s32 temp_r4;

    if (data_021514e8 != 0) {
        func_0200a0e4(&data_02134f2c, 3);
        func_0200a4b0();
        data_021514e8 = 0;
    }
    func_02029698(data_0215146c, &func_020cd89c, 0);
    if (data_021514e8 != 0) {
        return;
    }
    temp_r4       = func_0200aea4(0, 0);
    temp_r0       = func_020cd8a8();
    data_021514e8 = temp_r0;
    func_0200aea4(temp_r0, temp_r4);
}
