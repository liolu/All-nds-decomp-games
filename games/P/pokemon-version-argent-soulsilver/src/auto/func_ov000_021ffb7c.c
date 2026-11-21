#include "m2c.h"
extern s64 _s32_div_f(s32, s32);
extern s32 func_ov000_021ffb40(void);
s32 func_ov000_021ffb7c(s32 a, s32 b) {
    s32 d = b - a;
    s64 r;
    if (d == 0) {
        return a;
    }
    r = _s32_div_f(func_ov000_021ffb40(), d);
    return (s32) (r >> 32) + a;
}