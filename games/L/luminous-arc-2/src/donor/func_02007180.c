/* compiler: 2.0/sp1p5  */
/* func_020059c0 from projets/farm-frenzy/src/auto/func_020059c0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_01ff81e4(M2C_UNK, M2C_UNK, M2C_UNK, s32);
extern M2C_UNK func_02004448(M2C_UNK, M2C_UNK (*)(s32), s32);
extern M2C_UNK func_02007218(M2C_UNK);
extern M2C_UNK func_020073a8(M2C_UNK, M2C_UNK, u32, M2C_UNK);
void func_02007180(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, u32 arg3, M2C_UNK (*arg4)(s32), s32 arg5) {
    func_020073a8(arg0, arg1, arg3, 0);
    if (arg3 == 0) {
        if (arg4 == ((void *) 0)) {
            return;
        }
        arg4(arg5);
        return;
    }
    func_02007218(arg0);
    if (arg4 != ((void *) 0)) {
        func_02004448(arg0, arg4, arg5);
        func_01ff81e4(arg0, arg1, arg2, (arg3 >> 2) | 0xC4000000);
        return;
    }
    func_01ff81e4(arg0, arg1, arg2, (arg3 >> 2) | 0x84000000);
}
