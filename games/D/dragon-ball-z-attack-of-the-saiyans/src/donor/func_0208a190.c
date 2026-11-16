/* compiler: 2.0/sp1p5  */
/* CTRDG_IsOptionCartridge from projets/blue-dragon-awakened-shadow/src/auto/CTRDG_IsOptionCartridge.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef long s32;
extern s32 func_0208a1b8();
extern s32 func_0208a1d0();
s32 func_0208a190(void) {
    if ((func_0208a1d0() != 0) && (func_0208a1b8() == 0)) {
        return 1;
    }
    return 0;
}
