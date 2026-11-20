#include "m2c.h"

s32 func_020c0728();                                /* extern */
s32 func_020c0740();                                /* extern */

s32 func_020c0700(void) {
    if ((func_020c0740() != 0) && (func_020c0728() == 0)) {
        return 1;
    }
    return 0;
}
