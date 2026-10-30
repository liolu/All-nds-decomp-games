#include "m2c.h"

s32 func_020a0c54(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 3:
        case 4:
        /* fallthrough */
        case 23:
        case 12:
        case 11:
            return 0;
        default:
            return 1;
    }
}
