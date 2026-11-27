#include "m2c.h"

s32 func_02006608(s32);                             /* extern */
s32 func_02006e18(void *);                          /* extern */

void func_02006ea4(s32 *arg0, void *arg1, s32 arg2) {
    if ((arg2 < 0) || (arg2 >= func_02006e18(arg1))) {
        *arg0 = 0;
        return;
    }
    *arg0 = (arg2 * 0x14) + (func_02006608(M2C_FIELD(arg1, s32 *, 4)) + 4);
}
