#include "m2c.h"

M2C_UNK func_0209d128(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_02101ba8;
extern M2C_UNK data_02101be4;

void func_020bcb94(u32 arg0) {
    if (arg0 <= (u32) M2C_FIELD(&data_02101ba8, u32 *, 0x54)) {
        return;
    }
    func_0209d128(&data_02101be4, arg0 - M2C_FIELD(&data_02101ba8, u32 *, 0x54));
}
