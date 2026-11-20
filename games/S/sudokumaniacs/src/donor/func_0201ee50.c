/* compiler: 1.2/sp2p3  */
/* func_02063718 from projets/children-of-mana/src/auto/func_02063718.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201d1a0(void);
extern M2C_UNK func_0201e3b0(void);
extern void func_0201e3c4(M2C_UNK);
s32 func_0201ee50(void) {
    s32 temp_r0;
    s32 temp_r4;

    if (func_0201d1a0() == 0) {
        return 1;
    }
    temp_r0             = func_0201e3b0();
    *(s32 *) 0x04FFF200 = 0x10;
    temp_r4             = *(s32 *) 0x04FFF200;
    func_0201e3c4(temp_r0);
    if (temp_r4 != 0) {
        return 1;
    }
    return 0;
}
