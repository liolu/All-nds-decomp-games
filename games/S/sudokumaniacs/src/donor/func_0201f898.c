/* compiler: 1.2/sp2p3  */
/* func_0205cdc4 from projets/children-of-mana/src/auto/func_0205cdc4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
s32 func_0201f898(s32 arg0, s32 arg1) {
    s32 var_r3;

    var_r3 = 1;
    if (!((*(s32 *) ((s8 *) (((arg1 * 4) + 0x027FFC00)) + (0x388))) & (1 << arg0))) {
        var_r3 = 0;
    }
    return var_r3;
}
