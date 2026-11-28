#include "m2c.h"

M2C_UNK func_0209d128(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_02100e98;
extern M2C_UNK data_02100f64;

void func_020b9118(u32 arg0) {
    if (arg0 <= (u32) M2C_FIELD(&data_02100e98, u32 *, 0xE4)) {
        return;
    }
    func_0209d128(&data_02100f64, arg0 - M2C_FIELD(&data_02100e98, u32 *, 0xE4));
}
