/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010538(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_021060f0;

void *func_020a37c8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021060f0;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = -1;
    M2C_FIELD(arg0, s32 *, 0xC)    = arg1;
    M2C_FIELD(arg0, s32 *, 0x10)   = arg2;
    M2C_FIELD(arg0, s32 *, 0x14)   = arg3;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    func_02010538(arg0 + 0x20, 0, 0);
    func_02010538(arg0 + 0x30, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = -1;
    M2C_FIELD(arg0, s32 *, 0x48) = -1;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = -1;
    M2C_FIELD(arg0, s8 *, 0x54)  = 0;
    return arg0;
}
