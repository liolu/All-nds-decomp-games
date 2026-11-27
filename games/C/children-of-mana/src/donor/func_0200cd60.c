/* compiler: 1.2/sp2p3  */
/* func_02079b54 from projets/madagascar/src/auto/func_02079b54.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
void func_0200cd60(void *arg0) {
    M2C_UNK (*temp_r2)(s32, M2C_UNK);
    s32 temp_r1;

    temp_r1 = (*(s32 *) ((s8 *) (arg0) + (0)));
    if (temp_r1 == 0) {
        return;
    }
    temp_r2 = (*(M2C_UNK(**)(s32, M2C_UNK))((s8 *) (arg0) + (8)));
    if (temp_r2 == ((void *) 0)) {
        return;
    }
    temp_r2(temp_r1, -1);
}
