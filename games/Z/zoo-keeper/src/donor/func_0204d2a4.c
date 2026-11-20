/* compiler: 1.2/sp2p3  */
/* func_02054008 from projets/children-of-mana/src/auto/func_02054008.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0204cc10(void *, s32);
extern M2C_UNK func_0204cdb4(void *, s32);
extern M2C_UNK func_0204d2ec();
extern s32 func_0204d38c(s32);
s32 func_0204d2a4(void *arg0) {
    func_0204cdb4(arg0, func_0204cc10(arg0, (*(s32 *) ((s8 *) (arg0) + (0x10)))));
    if (func_0204d38c((*(s32 *) ((s8 *) (arg0) + (8)))) != 0) {
        func_0204d2ec();
    }
    if ((*(s32 *) ((s8 *) (arg0) + (0x14))) == 0) {
        return 1;
    }
    return 0;
}
