/* compiler: 1.2/sp2p3  */
/* func_0205c278 from projets/madagascar/src/auto/func_0205c278.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 *func_02056448();
extern s32 func_02056c88(s32, M2C_UNK);
s32 func_02056e30(s32 arg0, M2C_UNK arg1) {
    s32 *temp_r0;

    temp_r0 = func_02056448();
    if (temp_r0 == ((void *) 0)) {
        return 0;
    }
    if (func_02056c88(*temp_r0, arg1) != 0) {
        return 1;
    }
    return 0;
}
