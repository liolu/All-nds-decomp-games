#include "m2c.h"

void *func_020671e4(void *arg0) {
    u8 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u8 *, 0x35);
    switch (temp_r1) {                              /* irregular */
        case 2:
            return arg0 + 0x74;
        case 5:
            return arg0 + 0x3C;
        default:
            return arg0 + 0x3C;
    }
}
