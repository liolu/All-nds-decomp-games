/* compiler: 2.0/sp1p5 -flag no-opt_arithtransformation */
/* near start: 2 diffs with profile "2.0/sp1p5" */
#include "m2c.h"

typedef struct {
    s16 s0, s2, s4, s6;
    u32 pad8;
    u32 c;
} A;

typedef struct {
    u8 pad[6];
    s8 b6;
    s8 b7;
    u8 pad2[9];
} B;

typedef struct {
    u8 pad[0x20];
    A *a;
    u8 pad2[0x38 - 0x24];
    B *b;
} G;

s32 func_ov111_020e2098(s16);
s32 func_ov111_020e20f0(s16);
s32 func_ov111_020e2148(s16);
s32 func_ov111_020e21a0(s8, s8);
s32 func_ov111_020e21c8(s8, s8);

void func_ov111_020e21f0(G *g, s32 i, s32 j) {
    A *a;
    B *b;
    s32 r4, r5, r6, r7;
    s32 r10;
    u32 r9;

    if (i == -1) {
        *(volatile u32 *) 0x040004A8 = 0;
        return;
    }
    a = g->a + i;
    b = g->b + j;
    if (a->s6 != 0) {
        r10 = 0;
    } else {
        r10 = 1;
    }
    r9                           = a->c;
    r7                           = func_ov111_020e21c8(b->b6, b->b7);
    r6                           = func_ov111_020e21a0(b->b6, b->b7);
    r5                           = func_ov111_020e2148(a->s4);
    r4                           = func_ov111_020e20f0(a->s2);
    *(volatile u32 *) 0x040004A8 = (func_ov111_020e2098(a->s0) << 0x1A) | (r9 >> 3) | (r4 << 0x14) | (r5 << 0x17) |
                                   (r6 << 0x10) | (r7 << 0x12) | (r10 << 0x1D);
}
