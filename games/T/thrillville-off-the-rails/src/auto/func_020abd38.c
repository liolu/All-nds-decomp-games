#include "m2c.h"

M2C_UNK func_0209d128(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_020fef78;
extern M2C_UNK data_020ff2a4;

void func_020abd38(u32 arg0) {
    if (arg0 <= (u32) M2C_FIELD(&data_020fef78, u32 *, 0x344)) {
        return;
    }
    func_0209d128(&data_020ff2a4, arg0 - M2C_FIELD(&data_020fef78, u32 *, 0x344));
}
