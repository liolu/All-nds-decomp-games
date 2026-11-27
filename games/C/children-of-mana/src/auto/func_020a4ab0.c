/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a4894(void *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_02106230;

void *func_020a4ab0(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_020a4894(arg0, arg1, 0, arg5);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02106230;
    M2C_FIELD(arg0, s32 *, 0x44)   = arg2;
    M2C_FIELD(arg0, s32 *, 0x48)   = arg3;
    M2C_FIELD(arg0, s32 *, 0x4C)   = arg4;
    M2C_FIELD(arg0, s32 *, 4)      = 3;
    return arg0;
}
