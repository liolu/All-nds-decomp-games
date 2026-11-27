/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e578(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_0210e2b8;
extern M2C_UNK func_020e30f8;
extern M2C_UNK func_020e3124;

void *func_020e2558(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210e2b8;
    func_0200e578(arg0 + 0xC, 6, 0x254, &func_020e3124, &func_020e30f8);
    M2C_FIELD(arg0, s32 *, 0xE04) = 0;
    return arg0;
}
