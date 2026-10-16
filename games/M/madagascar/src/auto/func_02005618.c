/* compiler: 1.2/sp2p3 */
/* func_02000ef4 from projets/ultimate-spider-man/src/auto/func_02000ef4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02010898();
extern M2C_UNK func_0207b040(M2C_UNK **);
extern M2C_UNK data_020bd09c;
M2C_UNK **func_02005618(M2C_UNK **arg0) {
    *arg0 = &data_020bd09c;
    func_02010898();
    func_0207b040(arg0);
    return arg0;
}
