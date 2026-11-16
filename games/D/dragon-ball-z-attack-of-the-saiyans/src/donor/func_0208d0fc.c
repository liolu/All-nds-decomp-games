/* compiler: 2.0/sp1p5  */
/* NewSection from projets/blue-dragon-awakened-shadow/src/auto/NewSection.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0208a99c(void *, s32);
extern s32 func_0208add4(s32, M2C_UNK, M2C_UNK);
extern M2C_UNK func_0208d0b8();
s32 func_0208d0fc(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_0208add4(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_0208d0b8();
    func_0208a99c(((s8 *) arg0 + 4), temp_r0);
    return 1;
}
