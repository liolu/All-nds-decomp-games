#include "m2c.h"

s32 func_020e5bb0(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 n;
    u8 c1;
    u8 c2;

    n = arg2;
    while (n != 0) {
        c1 = *arg0;
        arg0++;
        c2 = *arg1;
        arg1++;
        if (c1 != c2) {
            if (arg0[-1] < arg1[-1]) {
                return -1;
            }
            return 1;
        }
        n--;
    }
    return 0;
}
