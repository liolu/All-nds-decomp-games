#include "m2c.h"

M2C_UNK func_0209a400(s32);                         /* extern */
M2C_UNK func_0209bd80(s32);                         /* extern */
M2C_UNK func_0209e8c8(s32, s32);                    /* extern */
extern M2C_UNK data_020d3cc4;

void func_0209bca0(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xA8);
    temp_r5 = M2C_FIELD(&data_020d3cc4, s32 *, 0xC);
    if (temp_r4 == 0) {
        return;
    }
    func_0209bd80(temp_r4 + 0xC4);
    func_0209a400(temp_r4);
    func_0209e8c8(temp_r5, temp_r4);
}
