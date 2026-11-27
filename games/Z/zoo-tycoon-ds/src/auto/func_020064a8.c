/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s16 func_02073d38(s32, M2C_UNK);                    /* extern */

void func_020064a8(void *arg0, s16 arg1, M2C_UNK arg2, s32 arg3, u16 arg4) {
    M2C_FIELD(arg0, s16 *, 0xC)  = (s16) (arg3 | (arg4 << 8));
    M2C_FIELD(arg0, s8 *, 0xA)   = 1;
    M2C_FIELD(arg0, s16 *, 0xE)  = func_02073d38((arg1 << 8) - M2C_FIELD(arg0, s16 *, 8), arg2);
    M2C_FIELD(arg0, s16 *, 0x12) = arg1;
}
