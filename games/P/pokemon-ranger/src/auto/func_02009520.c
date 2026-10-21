/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02009520(void *arg0, void *arg1) {
    u8 temp_r2;

    temp_r2 = M2C_FIELD(arg0, u8 *, 0x55A);
    if (temp_r2 == 0) {
        return 0;
    }
    M2C_FIELD(arg0, u8 *, 0x55A) = (u8) (temp_r2 - 1);
    M2C_FIELD(arg1, s32 *, 0)    = (s32) M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0x55A) * 8)), s32 *, 0x55C);
    M2C_FIELD(arg1, s32 *, 8)    = (s32) M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0x55A) * 8)), s32 *, 0x560);
    M2C_FIELD(arg1, s32 *, 4)    = 0;
    return 1;
}
