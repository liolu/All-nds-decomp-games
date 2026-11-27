/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020114e4();                            /* extern */
s32 func_02013d0c();                                /* extern */
extern M2C_UNK data_0210cb94;

void *func_020db8c8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210cb94;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    M2C_FIELD(arg0, s32 *, 0x20)   = 0;
    M2C_FIELD(arg0, s32 *, 0x38)   = 0;
    M2C_FIELD(arg0, s32 *, 0x3C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x40)   = 0;
    M2C_FIELD(arg0, s32 *, 0x48)   = 0;
    M2C_FIELD(arg0, s8 *, 0x4C)    = 0;
    M2C_FIELD(arg0, s8 *, 0x4D)    = 0;
    func_020114e4();
    M2C_FIELD(arg0, s32 *, 0x34) = func_02013d0c();
    return arg0;
}
