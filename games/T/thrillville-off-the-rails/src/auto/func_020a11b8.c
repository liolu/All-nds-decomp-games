#include "m2c.h"

M2C_UNK func_0209d128(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_020fd894;
extern M2C_UNK data_020fd980;

void func_020a11b8(u32 arg0) {
    if (arg0 <= (u32) M2C_FIELD(&data_020fd894, u32 *, 0x104)) {
        return;
    }
    func_0209d128(&data_020fd980, arg0 - M2C_FIELD(&data_020fd894, u32 *, 0x104));
}
