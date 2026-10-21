/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020b6750(void *arg0, s32 arg1) {
    M2C_FIELD(((M2C_FIELD(arg0, u32 *, 4) * 0x18) + (s32) arg0), s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, u32 *, 4)                                                = (u32) (M2C_FIELD(arg0, u32 *, 4) + 1);
    if ((u32) M2C_FIELD(arg0, u32 *, 4) >= 0x200U) {
        M2C_FIELD(arg0, u32 *, 4) = 0U;
    }
}
