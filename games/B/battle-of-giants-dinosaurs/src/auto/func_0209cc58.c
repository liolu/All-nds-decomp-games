/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0209cc58(void *arg0) {
    u32 temp_r1;

    temp_r1                   = M2C_FIELD(arg0, u32 *, 4) + 1;
    M2C_FIELD(arg0, u32 *, 4) = temp_r1;
    if (temp_r1 >= 0x1000U) {
        M2C_FIELD(arg0, u32 *, 4) = 0U;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
    }
}
