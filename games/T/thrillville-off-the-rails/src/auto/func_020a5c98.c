#include "m2c.h"

M2C_UNK func_0209d128(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_020feac0;
extern M2C_UNK data_020febbc;

void func_020a5c98(u32 arg0) {
    if (arg0 <= (u32) M2C_FIELD(&data_020feac0, u32 *, 0x114)) {
        return;
    }
    func_0209d128(&data_020febbc, arg0 - M2C_FIELD(&data_020feac0, u32 *, 0x114));
}
