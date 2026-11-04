/* compiler: 1.2/sp2p3  */
/* func_0206ac8c from projets/madagascar/src/auto/func_0206ac8c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK WaitByLoop(M2C_UNK);
extern s32 func_0205cba4(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020613ac(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_0205cba4(0xE, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(arg1);
    } while (func_0205cba4(0xE, arg0, 0) != 0);
}
