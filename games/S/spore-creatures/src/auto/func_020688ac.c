#include "m2c.h"

M2C_UNK func_020688f8();                            /* extern */
extern M2C_UNK data_020e10ac;

void func_020688ac(s32 arg0) {
    M2C_FIELD(&data_020e10ac, s32 *, 0x344) = arg0;
    if (M2C_FIELD(&data_020e10ac, u8 *, 0x34C) == 0) {
        return;
    }
    func_020688f8();
}
