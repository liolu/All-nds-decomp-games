/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020114e4();                            /* extern */
s32 func_02013d0c();                                /* extern */
extern M2C_UNK data_0210bd20;

void *func_020d43b8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210bd20;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, s8 *, 0x3C)    = 0;
    M2C_FIELD(arg0, s8 *, 0x44)    = 1;
    M2C_FIELD(arg0, s8 *, 0x45)    = 1;
    M2C_FIELD(arg0, s8 *, 0x46)    = 0;
    M2C_FIELD(arg0, s8 *, 0x47)    = 1;
    M2C_FIELD(arg0, s8 *, 0x48)    = 0;
    func_020114e4();
    M2C_FIELD(arg0, s32 *, 0x38) = func_02013d0c();
    return arg0;
}
