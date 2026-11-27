#include "m2c.h"

s32 func_02093494(s32);                             /* extern */

void *func_0208fcb4(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s8 *, 0)  = 0;
    M2C_FIELD(arg0, s16 *, 2) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 4) = func_02093494(arg1 * 2);
    }
    return arg0;
}
