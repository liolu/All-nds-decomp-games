/* compiler: 2.0/sp1p5  */
/* func_02070264 from projets/madagascar/src/auto/func_02070264.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void *data_0206ef04;
void func_020564dc(void *arg0) {
    void *var_r1;
    void *var_r2;

    var_r2 = data_0206ef04;
    if (var_r2 == ((void *) 0)) {
        data_0206ef04 = arg0;
    } else {
        var_r1 = (*(void **) ((s8 *) (var_r2) + (0x4B4)));
        if (var_r1 != ((void *) 0)) {
            do {
                var_r2 = var_r1;
                var_r1 = (*(void **) ((s8 *) (var_r1) + (0x4B4)));
            } while (var_r1 != ((void *) 0));
        }
        (*(void **) ((s8 *) (var_r2) + (0x4B4))) = arg0;
    }
    (*(s32 *) ((s8 *) (arg0) + (0x4B4))) = 0;
}
