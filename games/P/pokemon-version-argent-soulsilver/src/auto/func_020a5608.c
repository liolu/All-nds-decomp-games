#include "m2c.h"

s32 func_020a3e44();                                /* extern */
s32 func_020a4310();                                /* extern */

s32 func_020a5608(void) {
    if (func_020a3e44() == 0) {
        return 1;
    }
    return func_020a4310();
}
