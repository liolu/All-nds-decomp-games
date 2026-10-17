/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002760(void *);                      /* extern */
M2C_UNK func_020323d0(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_020bf1e0;

void *func_02023908(void *arg0, s32 arg1, s8 arg2) {
    func_020323d0(arg0, 0x3C);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf1e0;
    M2C_FIELD(arg0, s32 *, 0x4C)   = arg1;
    M2C_FIELD(arg0, s8 *, 0x50)    = arg2;
    M2C_FIELD(arg0, s32 *, 0x54)   = 0;
    M2C_FIELD(arg0, s32 *, 0x58)   = 0;
    M2C_FIELD(arg0, s32 *, 0x5C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x60)   = 0;
    M2C_FIELD(arg0, s32 *, 0x64)   = 0;
    M2C_FIELD(arg0, s32 *, 0x68)   = 0;
    M2C_FIELD(arg0, s32 *, 0x6C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x70)   = 0;
    func_02002760(arg0);
    return arg0;
}
