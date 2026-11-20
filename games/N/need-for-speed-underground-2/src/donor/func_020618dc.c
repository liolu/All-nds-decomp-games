/* compiler: 1.2/sp2p3  */
/* func_02060d2c from projets/children-of-mana/src/auto/func_02060d2c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205a6a0(u16 *, M2C_UNK);
extern s32 func_02061938();
extern void *data_0217d70c;
s32 func_020618dc(void) {
    s32 temp_r0;

    temp_r0 = func_02061938();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0205a6a0((*(u16 **) ((s8 *) (data_0217d70c) + (4))), 2);
    if ((u32) * (*(u16 **) ((s8 *) (data_0217d70c) + (4))) <= 1U) {
        return 3;
    }
    return 0;
}
