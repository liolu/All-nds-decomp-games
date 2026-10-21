#include "m2c.h"

void *func_02090a40();                              /* extern */

s32 func_0208a9c8(s32 *arg0) {
    if (func_02090a40() == NULL) {
        return 0;
    }
    *arg0 = func_02090a40() + 0x2D0;
    return M2C_FIELD(func_02090a40(), u8 *, 0xD) + 1;
}
