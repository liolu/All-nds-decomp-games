/* compiler: 1.2/sp2p3  */
/* func_02054690 from projets/children-of-mana/src/auto/func_02054690.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205e460(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_0205e5c0(void *);
s32 func_0205e390(s32 arg0, s32 arg1) {
    u8 sp0[68];

    func_0205e5c0(sp0);
    if (func_0205e460((s32) sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
