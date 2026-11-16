/* compiler: 2.0/sp1p5  */
/* NNSi_SndCaptureEndSleep from projets/blue-dragon-awakened-shadow/src/auto/NNSi_SndCaptureEndSleep.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
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
extern void func_02084a74(s32, s32);
extern void func_020831cc(s32, s32, s32);
extern void func_02086208(s32, s32, s32, s32);
extern H data_020de534;
extern G data_020de57c;
void func_0208c68c(void) {
    s32 var_r2;
    G *g = &data_020de57c;
    if (data_020de534.f == 0) {
        return;
    }
    g->d = 0;
    func_020831cc(0, g->a, g->c);
    func_020831cc(0, g->b, g->c);
    func_02084a74(g->a, g->c);
    func_02084a74(g->b, g->c);
    if (g->g >= 0) {
        var_r2 = 1 << g->g;
    } else {
        var_r2 = 0;
    }
    func_02086208(g->e, g->f, var_r2, 0);
}
