/* compiler: 1.2/sp2p3  */
/* func_0205c110 from projets/madagascar/src/auto/func_0205c110.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_020425b8(M2C_UNK, s32, s32, M2C_UNK);
extern s32 func_0204263c();
extern s32 func_02042e08(s32, s32, M2C_UNK, M2C_UNK, s32);
extern M2C_UNK func_02049488(s32, s32);
s32 func_02043268(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0_2 = func_0204263c();
    if (temp_r0_2 == 0) {
        return 0;
    }
    temp_r0 = func_02042e08(arg4, temp_r0_2 + 0x20, arg1, arg2, arg3);
    if (temp_r0 == 0) {
        return 0;
    }
    if (temp_r0_2 != func_020425b8(arg0, temp_r0, temp_r0_2, 0)) {
        return 0;
    }
    func_02049488(temp_r0, temp_r0_2);
    return temp_r0;
}
