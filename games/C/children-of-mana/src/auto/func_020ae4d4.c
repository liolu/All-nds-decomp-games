#include "m2c.h"

s32 func_020ae4d4(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 0x7B)) {
        return 1;
    }
    if ((arg0 >= 0xAA) && (arg0 <= 0xB5)) {
        return 1;
    }
    if ((arg0 >= 0xCC) && (arg0 <= 0xD3)) {
        return 1;
    }
    return 0;
}
