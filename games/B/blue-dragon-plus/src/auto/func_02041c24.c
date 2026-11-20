#include "m2c.h"

s32 func_02041c4c();                                /* extern */
s32 func_02041c64();                                /* extern */

s32 func_02041c24(void) {
    if ((func_02041c64() != 0) && (func_02041c4c() == 0)) {
        return 1;
    }
    return 0;
}
