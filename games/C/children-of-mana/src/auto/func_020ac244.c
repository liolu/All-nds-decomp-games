/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209feac(s32, s32);                    /* extern */
M2C_UNK func_0209fed0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020a3b60(void *, s32);                 /* extern */
extern M2C_UNK data_02107288;

void *func_020ac244(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    func_020a3b60(arg0, arg5);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02107288;
    M2C_FIELD(arg0, s32 *, 0x3C)   = arg1;
    M2C_FIELD(arg0, s32 *, 4)      = 4;
    func_0209fed0(M2C_FIELD(arg0, s32 *, 0x3C), arg2, arg3);
    func_0209feac(M2C_FIELD(arg0, s32 *, 0x3C), arg4);
    return arg0;
}
