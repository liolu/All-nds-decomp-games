#include "m2c.h"

M2C_UNK func_0200c51c();                            /* extern */
extern M2C_UNK data_020d2cac;

void func_0200c504(s32 arg0) {
    M2C_FIELD(&data_020d2cac, s32 *, 0x14) = arg0;
    func_0200c51c();
}
