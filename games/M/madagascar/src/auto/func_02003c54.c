/* compiler: 1.2/sp2p3 */
/* func_02000ef4 from projets/ultimate-spider-man/src/auto/func_02000ef4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02001f74();
extern M2C_UNK func_020021e4(M2C_UNK **);
extern M2C_UNK data_020bcf54;
M2C_UNK **func_02003c54(M2C_UNK **arg0) {
    *arg0 = &data_020bcf54;
    func_02001f74();
    func_020021e4(arg0);
    return arg0;
}
