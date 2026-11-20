#include "m2c.h"

s32 func_ov000_0220a3dc(s32 a, s32 b, s32 c, s32 d, ...) {
    b = (b & 0x7FFFFFFF) | (d & 0x80000000);
    return a;
}
