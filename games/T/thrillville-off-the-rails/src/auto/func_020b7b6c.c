#include "m2c.h"

M2C_UNK func_0209d128(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_02100780;
extern M2C_UNK data_0210099c;

void func_020b7b6c(u32 arg0) {
    if (arg0 <= (u32) M2C_FIELD(&data_02100780, u32 *, 0x234)) {
        return;
    }
    func_0209d128(&data_0210099c, arg0 - M2C_FIELD(&data_02100780, u32 *, 0x234));
}
