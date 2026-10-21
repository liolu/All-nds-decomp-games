#include "m2c.h"

M2C_UNK func_020052bc(s32, u32);                    /* extern */
s32 func_02005364(s32);                             /* extern */
extern M2C_UNK data_0211d850;
extern M2C_UNK data_02147904;

s32 func_0209d554(void) {
    s32 temp_r4;
    s32 temp_r5;

    if ((u32) M2C_FIELD(&data_0211d850, u32 *, 4) >= 0x20U) {
        return -1;
    }
    temp_r5 = M2C_FIELD(&data_02147904, s32 *, 4);
    temp_r4 = func_02005364(temp_r5);
    func_020052bc(temp_r5, M2C_FIELD(&data_0211d850, u32 *, 4));
    return temp_r4;
}
