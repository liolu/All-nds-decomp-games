/* compiler: 1.2/sp2p3  */
/* func_0201a904 from projets/code-lyoko/src/auto/func_0201a904.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_020524a8(s32);
extern M2C_UNK func_020567a8(M2C_UNK, s32);
extern void *data_0206ef98;
s32 func_02056ae0(void) {
    s32 var_r4;

    var_r4 = func_020524a8((*(s32 *) ((s8 *) (data_0206ef98) + (0x508))));
    func_020567a8(1, var_r4);
    if (var_r4 == 2) {
        var_r4 = 0;
    }
    return var_r4;
}
