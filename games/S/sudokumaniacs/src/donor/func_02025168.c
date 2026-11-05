/* compiler: 1.2/sp2p3  */
/* func_0201f064 from projets/code-lyoko/src/auto/func_0201f064.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201c9e8(void *);
extern M2C_UNK func_0201cc30(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32);
extern s32 func_0201e3b0();
extern M2C_UNK func_0201e3c4(s32);
extern M2C_UNK func_02025154(M2C_UNK *);
extern void *data_020408a8;
extern M2C_UNK data_020408ac;
extern M2C_UNK data_02040cd0;
extern M2C_UNK func_02025068;
void func_02025168(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_0201e3b0();
    if (data_020408a8 == ((void *) 0)) {
        data_020408a8 = arg0;
        func_02025154(arg0 + 0xC4);
        func_02025154(&data_020408ac);
        (*(s32 *) ((s8 *) (arg0) + (0xC0))) = 0;
        func_0201cc30(arg0, &func_02025068, arg0, &data_02040cd0, 0x400, 0x14);
        func_0201c9e8(arg0);
    }
    func_0201e3c4(temp_r4);
}
