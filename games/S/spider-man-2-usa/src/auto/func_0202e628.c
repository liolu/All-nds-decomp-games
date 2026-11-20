/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_0211ca5c;

void func_0202e628(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffeb4;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211ca5c;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = arg1;
    M2C_FIELD(arg0, s32 *, 0xC)    = arg1;
    M2C_FIELD(arg0, s32 *, 0x10)   = arg2;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
}
