/* compiler: 1.2/sp2p3  */
/* func_020109d0 from projets/children-of-mana/src/auto/func_020109d0.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
s32 func_02002908(void *arg0, void *arg1) {
    if (((*(s32 *) ((s8 *) (arg0) + (0))) == (*(s32 *) ((s8 *) (arg1) + (0)))) &&
        ((*(s32 *) ((s8 *) (arg0) + (4))) == (*(s32 *) ((s8 *) (arg1) + (4)))) &&
        ((*(s32 *) ((s8 *) (arg0) + (8))) == (*(s32 *) ((s8 *) (arg1) + (8))))) {
        return 1;
    }
    return 0;
}
