#include "m2c.h"

s32 func_0200660c();                                /* extern */

s32 func_0200663c(u8 *arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= (s32) *arg0)) {
        return 0;
    }
    return func_0200660c(arg0);
}
