/* compiler: 1.2/sp2p3  */
/* func_02059238 from projets/children-of-mana/src/auto/func_02059238.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern void func_0204a850(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_0204a998(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 data_02064134;
void func_02047dc0(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_02064134 != -1) && ((u32) arg2 > 0x30U)) {
        func_0204a850(data_02064134, arg0, arg1 + 0x07000000, arg2);
        return;
    }
    func_0204a998(arg0, arg1 + 0x07000000, arg2);
}
