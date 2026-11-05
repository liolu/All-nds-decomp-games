#include "m2c.h"
s32 func_020aca04(u16 *a, s32 n) {
    while (n != 0 && a[n - 1] == 0) {
        n--;
    }
    return n;
}