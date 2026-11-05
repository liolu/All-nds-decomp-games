/* compiler: 1.2/sp2p3  */
/* func_0200c76c from projets/rayman-rr/src/auto/func_0200c76c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK WaitByLoop();
extern s32 func_0201c4e8();
void func_0201c618(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (func_0201c4e8() <= 0) {
        return;
    }
    do {
        WaitByLoop(0x400);
    } while (func_0201c4e8(arg0, arg1, arg2, arg3) > 0);
}
