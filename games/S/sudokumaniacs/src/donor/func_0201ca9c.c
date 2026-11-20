/* compiler: 1.2/sp2p3  */
/* func_02009144 from projets/code-lyoko/src/auto/func_02009144.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201c8d0();
extern M2C_UNK func_0201cffc(s32, void *);
extern s32 func_0201e3b0();
extern M2C_UNK func_0201e3c4(s32);
extern void **data_0203dd60;
void func_0201ca9c(s32 arg0) {
    s32 temp_r5;
    void *temp_r4;

    temp_r5 = func_0201e3b0();
    temp_r4 = *data_0203dd60;
    if (arg0 != 0) {
        (*(s32 *) ((s8 *) (temp_r4) + (0x78))) = arg0;
        func_0201cffc(arg0, temp_r4);
    }
    (*(s32 *) ((s8 *) (temp_r4) + (0x64))) = 0;
    func_0201c8d0();
    func_0201e3c4(temp_r5);
}
