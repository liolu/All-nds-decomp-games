#include "m2c.h"

M2C_UNK func_02006e04(M2C_UNK, void *, M2C_UNK);    /* extern */
extern M2C_UNK func_0202b6f0;
extern M2C_UNK func_0202b804;
extern M2C_UNK func_0202b888;
extern M2C_UNK func_0202ba74;

void func_0202c180(void *arg0) {
    func_02006e04(0, arg0, 0x48);
    M2C_FIELD(arg0, s32 *, 0x10)      = 1;
    M2C_FIELD(arg0, s32 *, 0x14)      = 3;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_0202b6f0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &func_0202b804;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &func_0202b888;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &func_0202ba74;
}
