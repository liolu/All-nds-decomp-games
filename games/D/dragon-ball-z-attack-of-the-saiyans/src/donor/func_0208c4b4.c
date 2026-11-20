/* compiler: 2.0/sp1p5  */
/* NNSi_SndCaptureMain from projets/blue-dragon-awakened-shadow/src/auto/NNSi_SndCaptureMain.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
extern u8 data_020de534[];
extern u8 data_020de57c[];
extern void func_0208c53c(void);
extern s32 func_0208f064(void *);
extern void func_0208f098(void *);
extern s32 func_0208f0b0(void *);
extern void func_020862b4(s32, s32, s32);
void func_0208c4b4(void) {
    u8 *b = data_020de57c;
    s32 t;
    if (*(s32 *) (data_020de534 + 0x48) == 0) {
        return;
    }
    if (*(s32 *) (b + 4) != 0) {
        return;
    }
    func_0208f098(b + 0x3c);
    if (*(s32 *) (b + 0x4c) != 0 && func_0208f0b0(b + 0x3c) != 0) {
        func_0208c53c();
        return;
    }
    t = func_0208f064(b + 0x3c) >> 8;
    if (t == *(s32 *) (b + 0x50)) {
        return;
    }
    func_020862b4(*(s32 *) (b + 0x24), t, 0);
    *(s32 *) (b + 0x50) = t;
}
