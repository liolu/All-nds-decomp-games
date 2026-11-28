#include "m2c.h"

M2C_UNK func_02046174();                            /* extern */
M2C_UNK func_02064538(M2C_UNK *, s32, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020efe48;

s32 func_02047150(s32 arg0) {
    func_02046174();
    func_02064538(&data_020efe48, arg0, 0x64, 0x64);
    return arg0;
}
