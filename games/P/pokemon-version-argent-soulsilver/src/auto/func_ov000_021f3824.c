#include "m2c.h"

s32 func_ov000_021f957c();                                /* extern */

s32 func_ov000_021f3824(void) {
    if (func_ov000_021f957c() == 0) {
        return 1;
    }
    return 0;
}
