#include "m2c.h"

s32 func_0206c6a8();                                /* extern */

s32 func_0206c210(void *arg0) {
    if (func_0206c6a8() == 0) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x5C);
}
