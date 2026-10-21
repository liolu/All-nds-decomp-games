#include "m2c.h"

M2C_UNK func_020398d0(M2C_UNK, void *, M2C_UNK);    /* extern */
extern M2C_UNK func_02021d08;
extern M2C_UNK func_02021e1c;
extern M2C_UNK func_02021ea0;
extern M2C_UNK func_0202208c;

void func_02022788(void *arg0) {
    func_020398d0(0, arg0, 0x48);
    M2C_FIELD(arg0, s32 *, 0x10)      = 1;
    M2C_FIELD(arg0, s32 *, 0x14)      = 3;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_02021d08;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &func_02021e1c;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &func_02021ea0;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &func_0202208c;
}
