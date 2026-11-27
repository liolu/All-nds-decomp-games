/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a37c8(void *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_02106140;

void *func_020a3944(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    func_020a37c8(arg0, arg2, arg3, arg4);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02106140;
    M2C_FIELD(arg0, s32 *, 0x58)   = arg1;
    M2C_FIELD(arg0, s32 *, 0x5C)   = -1;
    return arg0;
}
