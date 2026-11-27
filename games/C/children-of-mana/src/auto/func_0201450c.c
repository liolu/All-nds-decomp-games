/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0201450c(void *arg0) {
    s32 temp_r2;

    if (M2C_FIELD(arg0, u8 *, 0x24) == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + M2C_FIELD(arg0, s32 *, 0x1C));
    temp_r2                     = M2C_FIELD(arg0, s32 *, 0x1C);
    if (((temp_r2 > 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xC) > temp_r2)) ||
        ((temp_r2 < 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xC) < temp_r2))) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
        M2C_FIELD(arg0, u8 *, 0x24) = 0U;
    }
    M2C_FIELD(arg0, s8 *, 0x18) = 1;
}
