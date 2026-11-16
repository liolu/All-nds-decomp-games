/* compiler: 2.0/sp1p5  */
/* NNSi_SndCaptureStop from projets/blue-dragon-awakened-shadow/src/auto/NNSi_SndCaptureStop.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
typedef struct {
    s32 f0, f4;
    u8 p0[0x20 - 8];
    s32 f20, f24, f28, f2c;
} G;
typedef struct {
    u8 p[0x48];
    s32 f48;
} H;
extern H data_020de534;
extern G data_020de57c;
extern u8 data_020de53c[];
extern void func_02086230(u32, u32, u32, u32);
extern s32 func_0208695c(void);
extern s32 func_02086734(s32);
extern void func_020868f0(s32);
extern int func_02084774(void *, void *, int);
extern void func_0208b7b8(s32);
extern void func_0208b788(s32);
extern void func_0208b7d4(s32);
extern void func_0208633c(int, int, int, int);
void func_0208c53c(void) {
    G *g = &data_020de57c;
    s32 en;
    s32 r;
    if (data_020de534.f48 == 0) {
        return;
    }
    en = g->f2c >= 0;
    func_02086230(g->f24, g->f28, en ? 1 << g->f2c : 0, 0);
    if (en) {
        r = func_0208695c();
        func_02086734(1);
        func_020868f0(r);
        while (func_02084774(data_020de53c, 0, 0) != 0) {
        }
    }
    if (g->f28 != 0) {
        func_0208b7b8(g->f28);
    }
    if (g->f20 != 0) {
        func_0208b788(g->f20);
    }
    if (en) {
        func_0208b7d4(g->f2c);
    }
    if (g->f4 == 1) {
        func_0208633c(0, 0, 0, 0);
    }
    g->f0 = 0;
}
