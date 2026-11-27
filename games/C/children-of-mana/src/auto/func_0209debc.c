/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a4030(void *);                      /* extern */
M2C_UNK func_020a5eb4(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_021047b0;

void *func_0209debc(void *arg0, M2C_UNK arg1) {
    func_020a5eb4(arg0, arg1, 0x21);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021047b0;
    M2C_FIELD(arg0, s32 *, 0x110)  = -1;
    M2C_FIELD(arg0, s32 *, 0x114)  = 0;
    M2C_FIELD(arg0, s32 *, 0x118)  = 0;
    M2C_FIELD(arg0, s32 *, 0x11C)  = 0;
    func_020a4030(arg0 + 0x120);
    M2C_FIELD(arg0, s8 *, 0x25C) = 0;
    M2C_FIELD(arg0, s8 *, 0x90)  = 0xC;
    return arg0;
}
