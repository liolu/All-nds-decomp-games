/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f21c(s32, M2C_UNK);                    /* extern */

void func_0202fa24(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 0x1A) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 0x1C) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 0x20) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, s32 *, 0x10) = func_0200f21c(M2C_FIELD(arg1, s16 *, 0) * M2C_FIELD(arg1, s16 *, 2) * 2, 0);
}
