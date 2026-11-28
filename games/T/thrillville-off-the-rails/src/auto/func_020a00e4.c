#include "m2c.h"

M2C_UNK func_0209d128(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_020fd2b0;
extern M2C_UNK data_020fd46c;

void func_020a00e4(u32 arg0) {
    if (arg0 <= (u32) M2C_FIELD(&data_020fd2b0, u32 *, 0x1D4)) {
        return;
    }
    func_0209d128(&data_020fd46c, arg0 - M2C_FIELD(&data_020fd2b0, u32 *, 0x1D4));
}
