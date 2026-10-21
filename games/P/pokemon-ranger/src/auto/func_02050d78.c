#include "m2c.h"

M2C_UNK func_02058ebc(s32, void *, M2C_UNK);        /* extern */
extern void *data_020f44bc;

s32 func_02050d78(void *arg0) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4                                   = M2C_FIELD(data_020f44bc, void **, 0x6F2C);
    M2C_FIELD(data_020f44bc, void **, 0x6F2C) = arg0;
    temp_r0                                   = M2C_FIELD(arg0, s32 *, 0x19E4);
    if (temp_r0 != 0) {
        func_02058ebc(temp_r0, arg0, 0);
    }
    M2C_FIELD(data_020f44bc, void **, 0x6F2C) = temp_r4;
    return 0;
}
