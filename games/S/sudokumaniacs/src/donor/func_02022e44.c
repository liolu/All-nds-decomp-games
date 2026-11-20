/* compiler: 1.2/sp2p3  */
/* func_0205e46c from projets/children-of-mana/src/auto/func_0205e46c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201e3b0(void);
extern void func_0201e3c4(M2C_UNK);
extern s32 data_0203fd84;
s32 func_02022e44(void) {
    s32 temp_r0;

    temp_r0 = func_0201e3b0();
    if (data_0203fd84 != 0) {
        func_0201e3c4(temp_r0);
        return 0;
    }
    data_0203fd84 = 1;
    func_0201e3c4(temp_r0);
    return 1;
}
