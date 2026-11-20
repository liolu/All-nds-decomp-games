#include "m2c.h"

s32 func_02041f60();                                /* extern */
s32 func_0204f17c();                                /* extern */

s32 func_02042308(void) {
    if (func_02041f60() == 0) {
        return 0;
    }
    return func_0204f17c();
}
