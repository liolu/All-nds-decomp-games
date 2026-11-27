#include "m2c.h"

s32 func_020e1040();                                /* extern */
s32 func_020e1134();                                /* extern */

s32 func_020e0ff0(void) {
    if ((func_020e1134() != 0) && (func_020e1040() != 0)) {
        return 1;
    }
    return 0;
}
