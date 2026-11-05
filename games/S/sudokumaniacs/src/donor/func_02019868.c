/* compiler: 2.0/sp1p5  */
/* func_02053098 from projets/simcity-creator/src/auto/func_02053098.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02018778(s32);
extern M2C_UNK func_02016d48(s32);
void func_02019868(void *arg0) {
    s32 temp_r4;

    temp_r4 = (*(s32 *) ((s8 *) (arg0) + (4)));
    if (temp_r4 == 0) {
        return;
    }
    func_02018778(temp_r4);
    func_02016d48(temp_r4);
}
