/* compiler: 2.0/sp1p5  */
/* NNS_SndHeapAlloc from projets/blue-dragon-awakened-shadow/src/auto/NNS_SndHeapAlloc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0208a99c(s32, void *);
extern s32 func_0208ab1c(void *, M2C_UNK);
extern void *func_0208add4(s32, s32, M2C_UNK);
void *func_0208cf30(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0 = func_0208add4(*arg0, ((arg1 + 0x1F) & ~0x1F) + 0x20, 0x20);
    if (temp_r0 == ((void *) 0)) {
        return ((void *) 0);
    }
    temp_r0_2                              = func_0208ab1c(((s8 *) arg0 + 4), 0);
    (*(s32 *) ((s8 *) (temp_r0) + (8)))    = arg1;
    (*(s32 *) ((s8 *) (temp_r0) + (0xC)))  = arg2;
    (*(s32 *) ((s8 *) (temp_r0) + (0x10))) = arg3;
    (*(s32 *) ((s8 *) (temp_r0) + (0x14))) = arg4;
    func_0208a99c(temp_r0_2, temp_r0);
    return temp_r0 + 0x20;
}
