/* compiler: 1.2/sp2p3  */
/* func_0205aad4 from projets/children-of-mana/src/auto/func_0205aad4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0201e3b0();
extern M2C_UNK func_0201e3c4(s32);
extern s32 func_0201e3dc();
extern M2C_UNK func_0201e3f0(s32);
s32 func_0201c578(s32 arg0, void *arg1, M2C_UNK (*arg2)(), s32 arg3) {
    s32 var_r4;

    if (arg0 != (*(u16 *) ((s8 *) (arg1) + (4)))) {
        return -2;
    }
    if (arg3 != 0) {
        var_r4 = func_0201e3dc();
    } else {
        var_r4 = func_0201e3b0();
    }
    (*(u16 *) ((s8 *) (arg1) + (4))) = 0U;
    if (arg2 != ((void *) 0)) {
        arg2();
    }
    (*(s32 *) ((s8 *) (arg1) + (0))) = 0;
    if (arg3 != 0) {
        func_0201e3f0(var_r4);
    } else {
        func_0201e3c4(var_r4);
    }
    return 0;
}
