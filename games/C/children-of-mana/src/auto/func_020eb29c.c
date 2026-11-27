/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020114e4();                            /* extern */
s32 func_02013d0c();                                /* extern */
extern M2C_UNK data_0210ee4c;

void *func_020eb29c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210ee4c;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    M2C_FIELD(arg0, s32 *, 0x28)   = 0;
    M2C_FIELD(arg0, s32 *, 0x2C)   = -1;
    M2C_FIELD(arg0, s32 *, 0x30)   = 0;
    func_020114e4();
    M2C_FIELD(arg0, s32 *, 0x20) = func_02013d0c();
    return arg0;
}
