#include "m2c.h"

M2C_UNK func_02025294();                            /* extern */
M2C_UNK func_02025518(void *, M2C_UNK, M2C_UNK, s8, s32); /* extern */
extern M2C_UNK data_020de720;

void *func_02025ae8(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s8 arg3, u8 arg4, u8 arg5, u8 arg6) {
    func_02025294(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020de720;
    M2C_FIELD(arg0, s8 *, 0xBE)    = arg3;
    M2C_FIELD(arg0, u8 *, 0xBF)    = arg4;
    M2C_FIELD(arg0, u8 *, 0xC0)    = arg5;
    func_02025518(arg0, arg2, arg1, arg3, (s32) arg6);
    return arg0;
}
