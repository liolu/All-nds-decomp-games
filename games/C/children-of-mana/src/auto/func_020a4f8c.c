/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010538(void *, s32, s32);            /* extern */
s32 func_02079030(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020a1494(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_02106258;

void *func_020a4f8c(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, u8 arg4, s32 arg5, s32 arg6) {
    func_020a1494(arg0, arg1, arg3);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02106258;
    M2C_FIELD(arg0, s32 *, 0xC0)   = 0;
    func_02010538(arg0 + 0xD0, arg5, arg6);
    M2C_FIELD(arg0, u8 *, 0xE0)  = arg4;
    M2C_FIELD(arg0, s8 *, 0xE1)  = 1;
    M2C_FIELD(arg0, s32 *, 0xC0) = func_02079030(arg2, arg3);
    return arg0;
}
