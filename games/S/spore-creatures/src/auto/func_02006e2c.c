#include "m2c.h"

u16 func_02006e2c(s32 arg0, s32 arg1) {
    void *temp_r0;

    if (arg1 >= 2) {
        return 0U;
    }
    temp_r0 = M2C_FIELD(((arg1 * 0x18) + arg0), void **, 0xC);
    if (temp_r0 != NULL) {
        return M2C_FIELD(temp_r0, u16 *, 4);
    }
    return 0U;
}
