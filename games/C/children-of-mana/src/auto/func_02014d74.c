/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f978(s16);                             /* extern */
s16 func_0200f998(s32);                             /* extern */
s32 func_02089890(s32, M2C_UNK);                    /* extern */

void func_02014d74(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x6C) != 0) {
        return;
    }
    M2C_FIELD(arg0, s16 *, 8)   = func_0200f998(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0xC) = func_02089890(func_0200f978(M2C_FIELD(arg0, s16 *, 8)), 0);
    M2C_FIELD(arg0, u8 *, 0x6C) = 1U;
}
