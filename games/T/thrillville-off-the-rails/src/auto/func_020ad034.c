#include "m2c.h"

M2C_UNK func_0209d128(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_020ffaa4;
extern M2C_UNK data_020ffb30;

void func_020ad034(u32 arg0) {
    if (arg0 <= (u32) M2C_FIELD(&data_020ffaa4, u32 *, 0xA4)) {
        return;
    }
    func_0209d128(&data_020ffb30, arg0 - M2C_FIELD(&data_020ffaa4, u32 *, 0xA4));
}
