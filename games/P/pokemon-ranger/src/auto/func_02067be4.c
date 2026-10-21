#include "m2c.h"

M2C_UNK func_0200752c();                            /* extern */
extern M2C_UNK data_020e83dc;

void *func_02067be4(void *arg0) {
    func_0200752c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e83dc;
    M2C_FIELD(arg0, s32 *, 0x30)   = 0;
    M2C_FIELD(arg0, s8 *, 0x34)    = 0;
    M2C_FIELD(arg0, s8 *, 0x35)    = 0;
    M2C_FIELD(arg0, s32 *, 0x130)  = 0;
    M2C_FIELD(arg0, s32 *, 0x134)  = 0;
    M2C_FIELD(arg0, s32 *, 0x138)  = 0;
    return arg0;
}
