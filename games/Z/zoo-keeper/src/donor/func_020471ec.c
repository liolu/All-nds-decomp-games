/* compiler: 1.2/sp2p3  */
/* func_020585a4 from projets/children-of-mana/src/auto/func_020585a4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02045770(M2C_UNK);
extern void func_0204a608(M2C_UNK);
extern s32 data_02064134;
extern s32 data_0206b968;
void func_020471ec(void) {
    if (data_02064134 != -1) {
        func_0204a608(data_02064134);
    }
    func_02045770(data_0206b968);
    data_0206b968 = 0;
}
