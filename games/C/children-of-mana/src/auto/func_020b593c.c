/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_021072f0;
extern M2C_UNK data_02107a00;

void func_020b593c(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02107a00;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021072f0;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    M2C_FIELD(arg0, s32 *, 8)      = arg2;
    M2C_FIELD(arg0, s32 *, 0xC)    = arg3;
}
