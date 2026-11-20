/* compiler: 1.2/sp2p3  */
/* func_0206518c from projets/madagascar/src/auto/func_0206518c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0204c060(M2C_UNK, M2C_UNK);
extern void func_0204c088(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02048fb4(void);
extern void func_0204a2f8(M2C_UNK);
extern void func_0204b3e8(M2C_UNK, M2C_UNK);
void func_0204b37c(void) {
    func_0204c088(7, (s32) func_0204b3e8);
    if (func_02048fb4() != 0) {
        return;
    }
    if (func_0204c060(7, 1) != 0) {
        return;
    }
    do {
        func_0204a2f8(0x64);
    } while (func_0204c060(7, 1) == 0);
}
