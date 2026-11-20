/* compiler: 2.0/sp1p5  */
/* InitHeap from projets/blue-dragon-awakened-shadow/src/auto/InitHeap.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0208a958(s32, M2C_UNK);
extern s32 func_0208d0fc(s32 *);
s32 func_0208d0c8(s32 *arg0, s32 arg1) {
    func_0208a958(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (func_0208d0fc(arg0) != 0) {
        return 1;
    }
    return 0;
}
