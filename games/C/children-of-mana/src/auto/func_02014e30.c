/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001cc8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_020fb044;

void *func_02014e30(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fb044;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    M2C_FIELD(arg0, s8 *, 0x6C)    = 0;
    func_02001cc8(arg0 + 0x10, 0, 0x5C);
    M2C_FIELD(arg0, s32 *, 0x10) = 3;
    M2C_FIELD(arg0, s32 *, 0x14) = 5;
    M2C_FIELD(arg0, s32 *, 0x18) = 5;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s16 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    return arg0;
}
