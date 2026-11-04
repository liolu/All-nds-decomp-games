/* compiler: 1.2/sp2p3  */
/* func_020659d8 from projets/madagascar/src/auto/func_020659d8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205a6bc(void *, M2C_UNK);
void func_0205c8cc(void *arg0) {
    void *temp_r6;
    void *var_r0;

    var_r0 = (*(void **) ((s8 *) (arg0) + (0x18)));
    if (var_r0 == ((void *) 0)) {
        return;
    }
    do {
        temp_r6                              = (*(void **) ((s8 *) (var_r0) + (4)));
        (*(s32 *) ((s8 *) (var_r0) + (0)))   = 0;
        (*(void **) ((s8 *) (var_r0) + (4))) = ((void *) 0);
        func_0205a6bc(var_r0, 8);
        var_r0 = temp_r6;
    } while (temp_r6 != ((void *) 0));
}
