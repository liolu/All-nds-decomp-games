#include "m2c.h"

s32 func_020b4b2c(s32 arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= 0x20)) {
        return 0;
    }
    return (arg1 * 0x14) + arg0;
}
