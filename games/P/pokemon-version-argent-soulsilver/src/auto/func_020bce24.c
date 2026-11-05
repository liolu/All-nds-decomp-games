#include "m2c.h"
typedef struct {
    u32 *dst;
    u32 w;
    u32 h;
    u8 fmt;
} I;
void func_020d4858(u32, void *, u32);
void func_020bce24(I *im, u32 v) {
    s32 fm = im->fmt;
    u32 wh;
    if (fm == 4) {
        v |= v << 4;
        v |= v << 8;
        v |= v << 16;
    } else {
        v |= v << 8;
        v |= v << 16;
    }
    wh = im->w * im->h;
    func_020d4858(v, im->dst, wh * ((fm << 6) / 8));
}
