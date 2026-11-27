#include "m2c.h"

M2C_UNK func_020a0c3c();                            /* extern */

void func_ov000_0214230c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x4) == 0) {
        return;
    }
    func_020a0c3c();
    M2C_FIELD(arg0, s32 *, 0x4) = 0;
    M2C_FIELD(arg0, s32 *, 0x8) = 0;
}
