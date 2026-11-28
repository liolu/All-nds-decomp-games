#include "m2c.h"

M2C_UNK func_0209d128(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_020fee40;
extern M2C_UNK data_020fee8c;

void func_020a620c(u32 arg0) {
    if (arg0 <= (u32) M2C_FIELD(&data_020fee40, u32 *, 0x64)) {
        return;
    }
    func_0209d128(&data_020fee8c, arg0 - M2C_FIELD(&data_020fee40, u32 *, 0x64));
}
