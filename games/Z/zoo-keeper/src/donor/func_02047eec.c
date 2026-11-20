/* compiler: 1.2/sp2p3  */
/* func_02059364 from projets/children-of-mana/src/auto/func_02059364.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern void func_0204a7d8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_0204a968(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 data_02064134;
void func_02047eec(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_02064134 != -1) && ((u32) arg2 > 0x1CU)) {
        func_0204a7d8(data_02064134, arg0, arg1 + 0x05000400, arg2);
        return;
    }
    func_0204a968(arg0, arg1 + 0x05000400, arg2);
}
