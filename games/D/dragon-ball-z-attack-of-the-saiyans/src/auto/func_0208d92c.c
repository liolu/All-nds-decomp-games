#include "m2c.h"

typedef struct Arc {
    u8 pad0[8];
    u32 size;
    u8 pad1[0x2C];
    s32 base;
    u32 tbl[1];
} Arc;

extern u8 func_0208d8e4;
s32 func_0208712c(Arc *, u32);
s32 func_020870f0(Arc *);
s32 func_0208cf30(s32, s32, void *, Arc *, u32);
s32 func_0208cc9c(s32, s32, s32, s32);
void _Z15CleanCacheRangePKvj(s32, s32);
void func_020870f8(Arc *, u32, s32);

s32 func_0208d92c(Arc *arc, u32 idx, s32 src, s32 heap) {
    s32 len;
    s32 start;
    s32 buf;
    u32 last;
    u32 *e;
    if (func_0208712c(arc, idx) != 0) {
        return 1;
    }
    last  = func_020870f0(arc);
    e     = (u32 *) ((u8 *) arc + (arc->base + idx) * 4);
    start = e[0x3C / 4];
    len   = ((idx < last - 1) ? e[0x40 / 4] : arc->size) - start;
    if (heap == 0) {
        return 0;
    }
    buf = func_0208cf30(heap, len + 0x20, &func_0208d8e4, arc, idx);
    if (buf == 0) {
        return 0;
    }
    if (len != func_0208cc9c(src, buf, len, start)) {
        return 0;
    }
    _Z15CleanCacheRangePKvj(buf, len);
    func_020870f8(arc, idx, buf);
    return 1;
}
