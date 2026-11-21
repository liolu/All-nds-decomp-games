#include "m2c.h"
s32 func_ov000_0220bf30(u8 *arg0, u8 *arg1) {
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (i != 0 && i != 0xD && arg0[i] != arg1[i]) {
            return 0;
        }
    }
    return 1;
}
