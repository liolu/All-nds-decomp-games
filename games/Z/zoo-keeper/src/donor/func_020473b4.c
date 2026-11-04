/* compiler: 1.2/sp2p3  */
/* func_0205876c from projets/children-of-mana/src/auto/func_0205876c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02045cc8(M2C_UNK);
extern void func_0204a608(M2C_UNK);
extern s32 data_02064134;
extern s32 data_0206b954;
extern s32 data_0206b958;
void func_020473b4(void) {
    if (data_02064134 != -1) {
        func_0204a608(data_02064134);
    }
    func_02045cc8(data_0206b958);
    data_0206b958 = 0;
    data_0206b954 = 0;
}
