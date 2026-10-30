#include "m2c.h"

M2C_UNK func_020a2f28();                            /* extern */

s32 func_020a2c2c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x54) == 0) {
        M2C_FIELD(arg0, u8 *, 0x54) = 0U;
        return 0;
    }
    func_020a2f28(arg0);
    M2C_FIELD(arg0, u8 *, 0x54) = 0U;
    return 1;
}
