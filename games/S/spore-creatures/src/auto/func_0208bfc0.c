#include "m2c.h"

void func_020021f0(void);   /* extern */

u32 func_0208bfc0(void *arg0, u32 arg1, u32 arg2) {
    u32 n = M2C_FIELD(arg0, u32 *, 8);
    u32 a;
    u32 b;

    if (arg1 > 0x3fffffff - n) {
        func_020021f0();
    }
    if (n < 0x15555555) {
        a = (3 * (n + 1)) / 5;
        return n + *((arg1 > a) ? &arg1 : &a);
    } else if (n < 0x2aaaaaaa) {
        b = (n + 1) / 2;
        return n + *((arg1 > b) ? &arg1 : &b);
    }
    return 0x3fffffff;
}
