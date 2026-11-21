/* compiler: 2.0/sp1p5 -thumb */
/* near start: 10 diffs with profile "1.2/sp2p3 -thumb" */
#include "m2c.h"

extern void func_020e5b44(void *, s32, u32);
extern void func_020e5ad8(void *, void *, u32);

void *func_ov013_022247fc(u8 *out, u32 a, void *src, u32 c) {
    u32 size;
    u32 v;

    out[0]             = 0;
    out[1]             = 0;
    out[2]             = 0;
    out[3]             = 0;
    v                  = ((u16) a >> 8) & 0xFF;
    *(u16 *) out       = v | (((u16) a << 8) & 0xFF00);
    size               = ((c + 0xB) & ~7) - 4;
    v                  = ((u16) c >> 8) & 0xFF;
    *(u16 *) (out + 2) = v | (((u16) c << 8) & 0xFF00);
    out                = (u8 *) ((s32) out + 4);
    func_020e5b44(out, 0, size);
    func_020e5ad8(out, src, c);
    return out + size;
}
