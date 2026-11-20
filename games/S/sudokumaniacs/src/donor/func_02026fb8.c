/* compiler: 2.0/sp1p5  */
/* func_0203b7d0 from projets/battle-of-giants-dinosaurs/src/auto/func_0203b7d0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
void func_02026fb8(void *arg0) {
    M2C_UNK (*temp_r2)(s32, M2C_UNK);
    s32 temp_r1;

    temp_r1 = (*(s32 *) ((s8 *) (arg0) + (0)));
    if (temp_r1 != 0) {
        temp_r2 = (*(M2C_UNK(**)(s32, M2C_UNK))((s8 *) (arg0) + (8)));
        if (temp_r2 != ((void *) 0)) {
            temp_r2(temp_r1, -1);
        }
    }
}
