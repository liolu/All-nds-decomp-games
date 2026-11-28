/* compiler: 2.0/sp1p5 -profile -O2,p */
/* near start: 4 diffs with profile "2.0/sp1p5 -profile" */
/* near start: 10 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

typedef struct {
    u8 pad[0x20];
    u32 pad0 : 12;
    u32 big : 1;
} G;

extern G *data_ov000_02051548;
extern u8 *data_ov000_0205154c;

u16 SearchCanUseVramNo(u32 cnt, s32 idx) {
    s32 lim;
    s32 off;
    G *g;
    u8 *b;
    u8 *p;
    u16 v;
    u16 n;
    u16 start;

    b = data_ov000_0205154c;
    g = data_ov000_02051548;
    v = *(u16 *) (b + idx * 0x4b0 + 0x600);
    if (g->big == 0) {
        if (idx == 0) {
            lim = 0x200;
        } else {
            lim = 0x400;
        }
    } else {
        lim = 0x400;
    }
    p = b + idx * 0x4b0;
    for (;;) {
        if (!(p[0x580 + ((s32) v >> 3)] & (1 << (v & 7)))) {
            start = v;
            n     = 0;
            if (n < cnt) {
                do {
                    if (p[0x580 + ((s32) v >> 3)] & (1 << (v & 7))) {
                        break;
                    }
                    v++;
                    n++;
                    if (!(lim > v)) {
                        while (1) {
                        }
                    }
                } while (n < cnt);
            }
            if (n == cnt) {
                return start;
            }
        }
        if (p[0x580 + ((s32) v >> 3)] == 0xff) {
            v = (v + 8) & ~7;
        } else {
            v = v + 1;
        }
        if (v >= lim) {
            while (1) {
            }
        }
    }
}
