/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a4030(void *);                      /* extern */
extern M2C_UNK data_0210a5a8;

void *func_020c7194(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210a5a8;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    func_020a4030(arg0 + 0x14);
    M2C_FIELD(arg0, s32 *, 0x150) = 0;
    M2C_FIELD(arg0, s32 *, 0x154) = 0;
    M2C_FIELD(arg0, s32 *, 0x158) = 0;
    M2C_FIELD(arg0, s32 *, 0x15C) = 0;
    M2C_FIELD(arg0, s32 *, 0x160) = -1;
    M2C_FIELD(arg0, s8 *, 0x164)  = 0;
    return arg0;
}
