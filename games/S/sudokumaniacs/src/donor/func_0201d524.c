/* compiler: 1.2/sp2p3  */
/* func_02009bfc from projets/code-lyoko/src/auto/func_02009bfc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201ca9c(void *);
extern M2C_UNK func_0201d3d4(void *, void *);
extern s32 func_0201e3b0();
extern M2C_UNK func_0201e3c4(s32);
extern M2C_UNK data_0203dd68;
void func_0201d524(void *arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r7;

    temp_r4 = func_0201e3b0();
    temp_r7 = (*(void **) ((s8 *) (&data_0203dd68) + (4)));
loop_1:
    temp_r0 = (*(void **) ((s8 *) (arg0) + (8)));
    if (temp_r0 == ((void *) 0)) {
        (*(void **) ((s8 *) (arg0) + (8))) = temp_r7;
        (*(s32 *) ((s8 *) (arg0) + (0xC))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0xC))) + 1);
        func_0201d3d4(temp_r7, arg0);
    } else if (temp_r0 == temp_r7) {
        (*(s32 *) ((s8 *) (arg0) + (0xC))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0xC))) + 1);
    } else {
        (*(void **) ((s8 *) (temp_r7) + (0x84))) = arg0;
        func_0201ca9c(arg0);
        (*(void **) ((s8 *) (temp_r7) + (0x84))) = ((void *) 0);
        goto loop_1;
    }
    func_0201e3c4(temp_r4);
}
