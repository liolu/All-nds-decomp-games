/* near start: 1 diffs with profile "1.2/sp3" */
#include "m2c.h"

typedef struct {
    s32 w[7];
} S28;

typedef struct {
    u8 pad0[0x1000];
    u8 b;
    u8 p1[3];
    S28 cfg;
    s32 r;
    u8 p2[0x19cc - 0x1024];
    s32 h1;
    s32 h2;
    u8 p3[0x1a08 - 0x19d4];
    u8 t[0x28];
    s32 m0;
    s32 m1;
} C;

extern u8 data_ov000_022166a0[];
extern u8 data_ov000_022166b8[];
void func_020d4994(void *, s32, s32);
s32 func_ov000_021e9ca4(void *, s32);
s32 func_ov000_021e9b64(void *, void *, s32);
s32 func_ov000_021e9828(void *);

s32 func_ov000_021e8fc0(C *a, S28 *b) {
    s32 (*fn)(void *, s32);

    fn = (s32(*)(void *, s32)) b->w[3];
    func_020d4994(a, 0, 0x1c14);
    a->m0  = -1;
    a->m1  = -1;
    a->cfg = *b;
    a->h1  = fn(data_ov000_022166a0, 0xb68);
    if (a->h1 == 0) {
        a->r = 1;
        return 1;
    }
    a->h2 = fn(data_ov000_022166b8, 0x5ea);
    if (a->h2 == 0) {
        a->r = 1;
        return 1;
    }
    if (func_ov000_021e9b64(a, a->t, a->cfg.w[2]) == 0) {
        a->r = 1;
        return 1;
    }
    if (func_ov000_021e9ca4(a, b->w[0]) == 0) {
        a->r = 1;
        return 1;
    }
    a->r = func_ov000_021e9828(a);
    if (a->r == 0) {
        a->b = 0xff;
    }
    return a->r;
}
