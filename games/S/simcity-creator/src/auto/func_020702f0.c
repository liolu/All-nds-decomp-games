#include "m2c.h"

s32 func_020702f0(s32 arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= 5)) {
        return 0;
    }
    return (arg1 * 0xC) + (arg0 + 0x28);
}
