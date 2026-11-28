#include "m2c.h"

M2C_UNK func_0209d128(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_020fc2bc;
extern M2C_UNK data_020fc338;

void func_020953b0(u32 arg0) {
    if (arg0 <= (u32) M2C_FIELD(&data_020fc2bc, u32 *, 0x94)) {
        return;
    }
    func_0209d128(&data_020fc338, arg0 - M2C_FIELD(&data_020fc2bc, u32 *, 0x94));
}
