/* compiler: 2.0/sp1p5  */
/* NNS_SndHeapSaveState from projets/blue-dragon-awakened-shadow/src/auto/NNS_SndHeapSaveState.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0208ae34(s32, u16);
extern M2C_UNK func_0208ae84(s32, M2C_UNK);
extern s32 func_0208d0fc(void *);
s32 func_0208cf98(void *arg0) {
    if (func_0208ae34((*(s32 *) ((s8 *) (arg0) + (0))), (*(u16 *) ((s8 *) (arg0) + (0xC)))) == 0) {
        return -1;
    }
    if (func_0208d0fc(arg0) != 0) {
        return (*(u16 *) ((s8 *) (arg0) + (0xC))) - 1;
    }
    func_0208ae84((*(s32 *) ((s8 *) (arg0) + (0))), 0);
    return -1;
}
