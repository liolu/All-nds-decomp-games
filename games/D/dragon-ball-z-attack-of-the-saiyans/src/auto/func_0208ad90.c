#include "m2c.h"

void *func_0208ac54(u32, u32, u32);

void *func_0208ad90(u32 a0, u32 a1, u32 a2) {
    u32 s;
    u32 e;

    e = (a1 + a0) & ~3;
    s = (a0 + 3) & ~3;
    if (s > e || e - s < 0x30) {
        return 0;
    }
    return func_0208ac54(s, e, a2);
}
