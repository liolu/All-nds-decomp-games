#include "m2c.h"

M2C_UNK func_0205668c();                            /* extern */
M2C_UNK func_020cfa20(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_020df384;
extern M2C_UNK func_020a2ea8;
extern M2C_UNK func_020a2ec4;

void *func_02055a64(void *arg0) {
    func_0205668c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020df384;
    func_020cfa20(arg0 + 0x24, 2, 8, &func_020a2ea8, &func_020a2ec4);
    M2C_FIELD(arg0, s32 *, 0x34) = 0x1000;
    return arg0;
}
