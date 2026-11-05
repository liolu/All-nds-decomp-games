/* compiler: 1.2/sp2p3  */
/* func_02051d20 from projets/children-of-mana/src/auto/func_02051d20.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020243d8(M2C_UNK, M2C_UNK);
extern M2C_UNK func_0201e640();
extern M2C_UNK func_02022700(s32);
void func_020244ac(void) {
    s32 temp_r0;

    temp_r0 = (s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF;
    if (temp_r0 != 0) {
        func_02022700(temp_r0);
    }
    func_020243d8(1, 1);
    func_0201e640();
}
