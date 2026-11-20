/* compiler: 1.2/sp2p3  */
/* func_02054690 from projets/children-of-mana/src/auto/func_02054690.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0204da74(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_0204dbd4(void *);
s32 func_0204d9a4(s32 arg0, s32 arg1) {
    u8 sp0[68];

    func_0204dbd4(sp0);
    if (func_0204da74((s32) sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
