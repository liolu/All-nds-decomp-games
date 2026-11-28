#include "m2c.h"

M2C_UNK func_02021194(M2C_UNK, void *, M2C_UNK);    /* extern */
extern M2C_UNK func_0200995c;
extern M2C_UNK func_020098c4;
extern M2C_UNK func_020096bc;
extern M2C_UNK func_0200960c;

void func_02008e90(void *arg0) {
    func_02021194(0, arg0, 0x48);
    M2C_FIELD(arg0, s32 *, 0x10)      = 1;
    M2C_FIELD(arg0, s32 *, 0x14)      = 3;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_0200995c;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &func_020098c4;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &func_020096bc;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &func_0200960c;
}
