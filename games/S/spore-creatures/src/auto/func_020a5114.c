#include "m2c.h"

M2C_UNK func_020a4b0c();                            /* extern */
extern M2C_UNK data_020e0070;

void *func_020a5114(void *arg0) {
    func_020a4b0c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e0070;
    M2C_FIELD(arg0, s32 *, 0x110)  = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x114)  = -0x400000;
    M2C_FIELD(arg0, s32 *, 0x158)  = 0;
    return arg0;
}
