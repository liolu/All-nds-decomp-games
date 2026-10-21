#include "m2c.h"

void *func_020ab6e8();                              /* extern */

u16 func_020ac480(void) {
    void *temp_r0;

    temp_r0 = func_020ab6e8();
    if (M2C_FIELD(temp_r0, s32 *, 0xC) != 0) {
        return M2C_FIELD(temp_r0, u16 *, 0x38);
    }
    return 0U;
}
