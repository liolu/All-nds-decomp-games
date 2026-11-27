#include "m2c.h"

s32 func_020f4c6c(s8 *arg0) {
    s8 temp_r0;

    temp_r0 = *arg0;
    switch (temp_r0) {                              /* irregular */
        case 42:
            return 7;
        case 45:
            return 6;
        default:
            return 0;
    }
}
