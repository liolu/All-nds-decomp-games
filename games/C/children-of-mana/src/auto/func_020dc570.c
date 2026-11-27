/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020114e4();                            /* extern */
s32 func_02013d0c();                                /* extern */
M2C_UNK func_020dcaf8(void *);                      /* extern */
extern M2C_UNK data_0210cc8c;

void *func_020dc570(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210cc8c;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s8 *, 0x10)    = 0;
    func_020dcaf8(arg0 + 0x14);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    func_020114e4();
    M2C_FIELD(arg0, s32 *, 0x44) = func_02013d0c();
    return arg0;
}
