/* compiler: 1.2/sp2p3  */
/* func_02058a90 from projets/children-of-mana/src/auto/func_02058a90.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern s32 func_020464e0();
extern M2C_UNK func_0204a850(s32, M2C_UNK, s32, u32);
extern M2C_UNK func_0204a998(M2C_UNK, s32, u32);
extern s32 data_02064134;
void func_020478e0(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_020464e0();
    if ((data_02064134 != -1) && (arg2 > 0x30U)) {
        func_0204a850(data_02064134, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_0204a998(arg0, temp_ip + arg1, arg2);
}
