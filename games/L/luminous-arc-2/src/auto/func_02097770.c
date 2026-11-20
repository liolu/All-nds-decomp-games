#include "m2c.h"

s32 func_02095fac();                                /* extern */
s32 func_02096478();                                /* extern */

s32 func_02097770(void) {
    if (func_02095fac() == 0) {
        return 1;
    }
    return func_02096478();
}
