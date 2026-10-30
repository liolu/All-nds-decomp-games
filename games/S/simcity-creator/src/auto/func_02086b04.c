#include "m2c.h"

s32 func_02086940(s32);                             /* extern */

s32 func_02086b04(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return 0;
    }
    return func_02086940(M2C_FIELD(arg0, s32 *, 0xC) + 8);
}
