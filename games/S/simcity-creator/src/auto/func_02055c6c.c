#include "m2c.h"

s32 func_02055c6c(s32 arg0, s32 arg1, s32 arg2) {
    if ((arg1 >= 0) && (arg1 < 0x80) && (arg2 >= 0) && (arg2 < 0x80)) {
        return 1;
    }
    return 0;
}
