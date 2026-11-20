/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bf504;

void func_02025dfc(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf504;
    M2C_FIELD(arg0, s8 *, 0x10)    = 1;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 8)      = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0xC)    = (s32) M2C_FIELD(arg1, s32 *, 8);
}
