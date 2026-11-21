#include "m2c.h"
typedef struct {
    u8 *buf;
    s32 f4;
    s32 len;
    s32 off;
} B;
void *func_020e5af8(void *, const void *, u32);

s32 func_ov000_02202958(s32 unused, B *b) {
    if (b == 0 || b->buf == 0 || b->off == 0) {
        return 0;
    }
    b->len = b->len - b->off;
    if (b->len != 0) {
        func_020e5af8(b->buf, b->buf + b->off, b->len);
    }
    b->buf[b->len] = 0;
    b->off         = 0;
    return 0;
}
