/* compiler: 1.2/sp2p3  */
/* func_020588a8 from projets/children-of-mana/src/auto/func_020588a8.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02045d80(M2C_UNK);
extern void func_0204a608(M2C_UNK);
extern s32 data_02064134;
extern s32 data_0206b95c;
extern s32 data_0206b960;
extern s32 data_0206b964;
void func_020474f0(void) {
    if (data_02064134 != -1) {
        func_0204a608(data_02064134);
    }
    func_02045d80(data_0206b964);
    data_0206b964 = 0;
    data_0206b960 = 0;
    data_0206b95c = 0;
}
