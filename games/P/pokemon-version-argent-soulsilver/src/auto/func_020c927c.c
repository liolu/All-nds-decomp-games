#include "m2c.h"

typedef struct {
    u8 p0[0xC];
    s32 a;
    s32 b;
    s32 c;
    u8 p1[4];
    s32 d;
    u8 p2[4];
    s32 e;
    s32 f;
    s32 g;
} G;
typedef struct {
    u8 p[0x48];
    s32 f;
} H;
void func_020d2894(s32, s32);
void func_020d47ec(s32, s32, s32);
void func_020d5174(s32, s32, s32, s32);
extern H data_021e0334;
extern G data_021e037c;

void func_020c927c(void) {
    s32 var_r2;
    G *g = &data_021e037c;
    if (data_021e0334.f == 0) {
        return;
    }
    g->d = 0;
    func_020d47ec(0, g->a, g->c);
    func_020d47ec(0, g->b, g->c);
    func_020d2894(g->a, g->c);
    func_020d2894(g->b, g->c);
    if (g->g >= 0) {
        var_r2 = 1 << g->g;
    } else {
        var_r2 = 0;
    }
    func_020d5174(g->e, g->f, var_r2, 0);
}
