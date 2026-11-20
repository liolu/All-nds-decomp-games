/* compiler: 1.2/sp2p3  */
/* func_02054524 from projets/children-of-mana/src/auto/func_02054524.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_020209d0(void *, M2C_UNK);
s32 func_02021098(void *arg0) {
    if (func_020209d0(arg0, 8) == 0) {
        return 0;
    }
    (*(s32 *) ((s8 *) (arg0) + (8)))    = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x10))) = 0xE;
    (*(s32 *) ((s8 *) (arg0) + (0xC)))  = (s32) ((*(s32 *) ((s8 *) (arg0) + (0xC))) & ~0x30);
    return 1;
}
