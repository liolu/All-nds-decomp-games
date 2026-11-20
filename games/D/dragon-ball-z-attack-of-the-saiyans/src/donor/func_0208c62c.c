/* compiler: 2.0/sp1p5  */
/* NNSi_SndCaptureBeginSleep from projets/blue-dragon-awakened-shadow/src/auto/NNSi_SndCaptureBeginSleep.c (same code in
 * another game of this workspace), reused by tools/donor_match.py */
typedef long s32;
extern void func_02086230(s32, s32, s32, s32);
extern void func_02086734(s32);
extern void func_020868f0(s32);
extern s32 func_0208695c(void);
extern s32 data_020de534[];
extern s32 data_020de57c[];
void func_0208c62c(void) {
    s32 t;
    s32 r2;
    s32 *p = data_020de57c;
    if (data_020de534[18] == 0) {
        return;
    }
    if (p[11] >= 0) {
        r2 = 1 << p[11];
    } else {
        r2 = 0;
    }
    func_02086230(p[9], p[10], r2, 0);
    t = func_0208695c();
    func_02086734(1);
    func_020868f0(t);
}
