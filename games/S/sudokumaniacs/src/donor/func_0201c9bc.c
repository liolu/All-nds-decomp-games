/* compiler: 2.0/sp1p5  */
/* func_02009064 from projets/code-lyoko/src/auto/func_02009064.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_0203dd68;
s32 func_0201c9bc(void) {
    void *var_r0;

    var_r0 = (*(void **) ((s8 *) (&data_0203dd68) + (8)));
    goto test;
body:
    var_r0 = (*(void **) ((s8 *) (var_r0) + (0x68)));
test:
    if (var_r0 == ((void *) 0)) {
        return (s32) var_r0;
    }
    if ((*(s32 *) ((s8 *) (var_r0) + (0x64))) == 1) {
        return (s32) var_r0;
    }
    goto body;
}
