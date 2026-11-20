/* compiler: 1.2/sp2p3  */
/* func_0206518c from projets/madagascar/src/auto/func_0206518c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205cc58(M2C_UNK, M2C_UNK);
extern void func_0205cc80(M2C_UNK, M2C_UNK);
extern M2C_UNK func_0205a288(void);
extern void func_0205b2e0(M2C_UNK);
extern void func_0205c0ec(M2C_UNK, M2C_UNK);
void func_0205c080(void) {
    func_0205cc80(7, (s32) func_0205c0ec);
    if (func_0205a288() != 0) {
        return;
    }
    if (func_0205cc58(7, 1) != 0) {
        return;
    }
    do {
        func_0205b2e0(0x64);
    } while (func_0205cc58(7, 1) == 0);
}
