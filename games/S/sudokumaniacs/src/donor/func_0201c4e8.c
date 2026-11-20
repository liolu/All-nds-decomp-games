/* compiler: 1.2/sp2p3  */
/* func_0205aa44 from projets/children-of-mana/src/auto/func_0205aa44.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0201eb6c(s16, void *);
extern s32 func_0201e3b0();
extern M2C_UNK func_0201e3c4(s32);
extern s32 func_0201e3dc();
extern M2C_UNK func_0201e3f0(s32);
s32 func_0201c4e8(s16 arg0, void *arg1, M2C_UNK (*arg2)(), s32 arg3) {
    s32 temp_r0;
    s32 var_r5;

    if (arg3 != 0) {
        var_r5 = func_0201e3dc();
    } else {
        var_r5 = func_0201e3b0();
    }
    temp_r0 = func_0201eb6c(arg0, arg1);
    if (temp_r0 == 0) {
        if (arg2 != ((void *) 0)) {
            arg2();
        }
        (*(s16 *) ((s8 *) (arg1) + (4))) = arg0;
    }
    if (arg3 != 0) {
        func_0201e3f0(var_r5);
    } else {
        func_0201e3c4(var_r5);
    }
    return temp_r0;
}
