#include "m2c.h"

s32 func_0206c6a8();                                /* extern */

s32 func_0206c22c(void *arg0) {
    if (func_0206c6a8() == 0) {
        return -1;
    }
    return M2C_FIELD(arg0, s32 *, 0x58);
}
