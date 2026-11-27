/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a3b60(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_02106210;

void *func_020a4854(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    func_020a3b60(arg0, arg3);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02106210;
    M2C_FIELD(arg0, s32 *, 0x3C)   = arg1;
    M2C_FIELD(arg0, s32 *, 0x40)   = arg2;
    M2C_FIELD(arg0, s32 *, 4)      = 1;
    return arg0;
}
