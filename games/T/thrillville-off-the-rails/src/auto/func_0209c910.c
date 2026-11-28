#include "m2c.h"

M2C_UNK func_0209d128(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_020fc70c;
extern M2C_UNK data_020fc758;

void func_0209c910(u32 arg0) {
    if (arg0 <= (u32) M2C_FIELD(&data_020fc70c, u32 *, 0x64)) {
        return;
    }
    func_0209d128(&data_020fc758, arg0 - M2C_FIELD(&data_020fc70c, u32 *, 0x64));
}
