#include "m2c.h"

extern M2C_UNK data_020d01b4;

void func_020b0468(void *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d01b4;
    M2C_FIELD(arg0, s32 *, 0x258)  = 2;
    M2C_FIELD(arg0, s32 *, 0x248)  = arg1;
    M2C_FIELD(arg0, s32 *, 0x24C)  = arg2;
    M2C_FIELD(arg0, s32 *, 0x250)  = arg3;
    M2C_FIELD(arg0, u8 *, 0x254)   = arg4;
    M2C_FIELD(arg0, u8 *, 0x255)   = arg5;
}
