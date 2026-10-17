/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_020d8794;

void func_0202ea60(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(data_020d8794, s32 *, 0x20) = arg0;
    M2C_FIELD(data_020d8794, s32 *, 0x24) = arg1;
    M2C_FIELD(data_020d8794, s32 *, 0x28) = arg2;
    M2C_FIELD(data_020d8794, s32 *, 0x2C) = 0;
    M2C_FIELD(data_020d8794, s32 *, 0x30) = 2;
}
