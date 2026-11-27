#include "m2c.h"

M2C_UNK func_020d4790(M2C_UNK, void *, M2C_UNK);    /* extern */
extern M2C_UNK func_020b9474;
extern M2C_UNK func_020b9588;
extern M2C_UNK func_020b960c;
extern M2C_UNK func_020b97f8;

void func_020b9fd8(void *arg0) {
    func_020d4790(0, arg0, 0x48);
    M2C_FIELD(arg0, s32 *, 0x10)      = 1;
    M2C_FIELD(arg0, s32 *, 0x14)      = 3;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_020b9474;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &func_020b9588;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &func_020b960c;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &func_020b97f8;
}
