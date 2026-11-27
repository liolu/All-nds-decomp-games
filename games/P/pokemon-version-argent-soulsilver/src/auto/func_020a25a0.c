#include "m2c.h"

s32 func_020a2e54();                                /* extern */
s32 func_020a2e88(s32);                             /* extern */

s32 func_020a25a0(s32 arg0) {
    if ((arg0 >= 0) && (func_020a2e54() != 0) && (func_020a2e88(arg0) == 0)) {
        return 1;
    }
    return 0;
}
