/* compiler: 1.2/sp2p3  */
/* func_02060d2c from projets/children-of-mana/src/auto/func_02060d2c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0204946c(u16 *, M2C_UNK);
extern s32 func_020516f4();
extern void *data_0206e3ec;
s32 func_02051698(void) {
    s32 temp_r0;

    temp_r0 = func_020516f4();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0204946c((*(u16 **) ((s8 *) (data_0206e3ec) + (4))), 2);
    if ((u32) * (*(u16 **) ((s8 *) (data_0206e3ec) + (4))) <= 1U) {
        return 3;
    }
    return 0;
}
