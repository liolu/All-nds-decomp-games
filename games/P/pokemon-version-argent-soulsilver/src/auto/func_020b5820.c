#include "m2c.h"

s32 func_020b5820(void *arg0, s32 arg1) {
    s32 *r2 = (s32 *) ((u8 *) arg0 + 0x24);
    s32 *r3 = (s32 *) r2[2];

    if (arg1 != 0 && r3 != 0) {
        do {
            if (r3[0] == arg1) {
                break;
            }
            r3 = (s32 *) r3[3];
        } while (r3 != 0);
    }
    if (r3 == 0) {
        return 0;
    }
    r2[0] = r3[1];
    r2[1] = r3[2];
    r2[2] = r3[3];
    return 1;
}
