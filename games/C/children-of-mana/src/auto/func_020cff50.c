/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020cff50(void *arg0) {
    s32 temp_r1;
    s32 temp_r1_2;

    if (M2C_FIELD(arg0, u8 *, 0xC08) != 0) {
        temp_r1 = M2C_FIELD(arg0, s32 *, 0xC04);
        if (temp_r1 <= 0) {
            M2C_FIELD(arg0, u8 *, 0xC08) = 0U;
        } else {
            M2C_FIELD(arg0, s32 *, 0xC04) = (s32) (temp_r1 - 1);
        }
        return;
    }
    temp_r1_2 = M2C_FIELD(arg0, s32 *, 0xC04);
    if (temp_r1_2 >= 7) {
        M2C_FIELD(arg0, u8 *, 0xC08) = 1U;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xC04) = (s32) (temp_r1_2 + 1);
}
