#include "m2c.h"

M2C_UNK func_0209d128(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_021000e4;
extern M2C_UNK data_021002b0;

void func_020b5430(u32 arg0) {
    if (arg0 <= (u32) M2C_FIELD(&data_021000e4, u32 *, 0x1E4)) {
        return;
    }
    func_0209d128(&data_021002b0, arg0 - M2C_FIELD(&data_021000e4, u32 *, 0x1E4));
}
