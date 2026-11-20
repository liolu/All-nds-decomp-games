/* compiler: 1.2/sp2p3  */
/* func_0201e7a4 from projets/code-lyoko/src/auto/func_0201e7a4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0204aa34(s32, M2C_UNK, M2C_UNK);
extern s32 data_0206efc4;
void func_02058b58(s32 arg0) {
    s32 temp_r4;

    if (data_0206efc4 == 0) {
        return;
    }
    temp_r4 = arg0 - 1;
    func_0204aa34(data_0206efc4 + (temp_r4 << 5), 0, 0x1E);
    (*(s32 *) ((s8 *) ((data_0206efc4 + (temp_r4 * 4))) + (0x1E0))) = 0;
}
