#include "m2c.h"

s32 func_020aff20();                                /* extern */

s32 func_020a0a60(void) {
    if (func_020aff20() != 0) {
        return 1;
    }
    return 0;
}
