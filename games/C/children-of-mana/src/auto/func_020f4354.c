/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e578(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_0210fca8;
extern M2C_UNK func_020e30f8;
extern M2C_UNK func_020e3124;

void *func_020f4354(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210fca8;
    M2C_FIELD(arg0, s32 *, 4)      = -1;
    M2C_FIELD(arg0, s32 *, 8)      = -1;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    func_0200e578(arg0 + 0x10, 7, 0x254, &func_020e3124, &func_020e30f8);
    M2C_FIELD(arg0, s32 *, 0x1060) = 0;
    M2C_FIELD(arg0, s32 *, 0x1064) = 0;
    M2C_FIELD(arg0, s8 *, 0x1069)  = 1;
    M2C_FIELD(arg0, s8 *, 0x106A)  = 0;
    return arg0;
}
