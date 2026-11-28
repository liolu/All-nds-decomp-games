#include "m2c.h"

s32 func_020c22e4(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 0:
            return arg0 + 0x14;
        case 1:
            return arg0 + 0x38;
        case 2:
            return arg0 + 0x5C;
        default:
            return 0;
    }
}
