/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f21c(s32, M2C_UNK);                    /* extern */

void func_0202f5b8(void *arg0, void *arg1) {
    u32 temp_r0;

    M2C_FIELD(arg0, u16 *, 4)    = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(arg0, u16 *, 6)    = (u16) M2C_FIELD(arg1, u16 *, 2);
    temp_r0                      = M2C_FIELD(arg0, u16 *, 4) * M2C_FIELD(arg0, u16 *, 6);
    M2C_FIELD(arg0, s32 *, 0x28) = func_0200f21c((s32) (temp_r0 + (temp_r0 >> 0x1F)) >> 1, 0);
}
