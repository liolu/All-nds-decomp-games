/* compiler: 1.2/sp2p3  */
/* func_0209b2e0 from projets/pokemon-dash/src/auto/func_0209b2e0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0205b728(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_0205b848(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 data_020a2c94;
void func_02058e78(s32 arg0, s32 arg1, s32 arg2) {
    if (data_020a2c94 != -1) {
        func_0205b728(data_020a2c94, arg0, arg1 + 0x07000000, arg2);
        return;
    }
    func_0205b848(arg0, arg1 + 0x07000000, arg2);
}
