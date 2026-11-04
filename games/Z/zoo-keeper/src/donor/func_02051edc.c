/* compiler: 1.2/sp2p3  */
/* func_020d16f8 from projets/pokemon-ranger/src/auto/func_020d16f8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0204946c();
extern s32 func_020515f0();
extern void *func_02051710();
extern s32 func_02051720();
extern M2C_UNK func_02051878();
s32 func_02051edc(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r6;

    temp_r6 = func_02051710();
    temp_r0 = func_020515f0(2, 7, 9);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0204946c((*(void **) ((s8 *) (temp_r6) + (4))) + 0x17E, 2);
    if (!((*(u16 *) ((s8 *) ((*(void **) ((s8 *) (temp_r6) + (4)))) + (0x17E))) & arg1 & 0xFFFE)) {
        return 7;
    }
    func_02051878(0xD, arg0);
    var_r0 = func_02051720(0xD, 1, arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
