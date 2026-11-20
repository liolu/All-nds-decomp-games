#include "m2c.h"

s32 func_020726b8(M2C_UNK, M2C_UNK);                /* extern */

void func_020add10(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s16 *, 0x1E) = 0x15;
    M2C_FIELD(arg0, s16 *, 4)    = 0x15;
    M2C_FIELD(arg0, s16 *, 0xA)  = (s16) (func_020726b8(arg1, 0xC0) + 0x20);
    M2C_FIELD(arg0, s16 *, 0xC)  = 0xC0;
    M2C_FIELD(arg0, s16 *, 8)    = -4;
    M2C_FIELD(arg0, s16 *, 6)    = (s16) (func_020726b8(arg1, 0xC) + 0x14);
    M2C_FIELD(arg0, s16 *, 0)    = 2;
}
