/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02098960(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_021067d8;

void *func_020a6aa0(void *arg0, s32 arg1) {
    func_02098960(arg0, 0x6A, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021067d8;
    M2C_FIELD(arg0, s32 *, 0xFC)   = 0;
    M2C_FIELD(arg0, s32 *, 0x100)  = arg1;
    M2C_FIELD(arg0, s32 *, 0x104)  = 0;
    M2C_FIELD(arg0, s32 *, 0x108)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x110)  = 0;
    M2C_FIELD(arg0, s32 *, 0x114)  = 1;
    M2C_FIELD(arg0, s32 *, 0xF4)   = 3;
    M2C_FIELD(arg0, s32 *, 0x48)   = 2;
    return arg0;
}
