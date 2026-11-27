/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010be4(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_0210391c;

void *func_020962f0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210391c;
    func_02010be4(arg0 + 0x10, 0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s8 *, 0x28)  = 1;
    M2C_FIELD(arg0, s8 *, 0x29)  = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = arg1;
    return arg0;
}
