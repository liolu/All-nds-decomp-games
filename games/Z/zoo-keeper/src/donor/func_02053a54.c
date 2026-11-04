/* compiler: 1.2/sp2p3  */
/* func_02063030 from projets/children-of-mana/src/auto/func_02063030.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0204a968(s32, M2C_UNK *, u32);
extern M2C_UNK func_02049488(M2C_UNK *, u32);
extern s32 func_020515f0(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 func_02051720(M2C_UNK, M2C_UNK, M2C_UNK *, u32, s32, s32, s32);
extern M2C_UNK func_02051878(M2C_UNK, M2C_UNK);
extern M2C_UNK data_0206ee80;
s32 func_02053a54(M2C_UNK arg0, s32 arg1, u32 arg2, s32 arg3, u16 arg4, u8 arg5) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_020515f0(2, 7, 9);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg1 == 0) {
        return 6;
    }
    if (arg2 > 0x70U) {
        return 6;
    }
    func_0204a968(arg1, &data_0206ee80, arg2);
    func_02049488(&data_0206ee80, arg2);
    func_02051878(0x18, arg0);
    var_r0 = func_02051720(0x18, 5, &data_0206ee80, arg2, arg3, (s32) arg4, (s32) arg5);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
