#include "m2c.h"

M2C_UNK func_020bee38(s32, M2C_UNK);                /* extern */
extern s32 data_02101b8c;

u32 func_020ca394(void *arg0) {
    u32 temp_r0;
    u32 temp_r0_2;

    temp_r0_2 = (u32) (M2C_FIELD(arg0, u32 *, 0x20) << 0x11) >> 0x1F;
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    func_020bee38(data_02101b8c, 1);
    temp_r0                      = M2C_FIELD(arg0, u32 *, 0x20) | 0x4000;
    M2C_FIELD(arg0, u32 *, 0x20) = temp_r0;
    return temp_r0;
}
