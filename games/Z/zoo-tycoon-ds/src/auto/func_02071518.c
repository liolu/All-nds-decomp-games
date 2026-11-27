/* compiler: 1.2/sp2p3 */
/* func_020730c0 from projets/madagascar/src/auto/func_020730c0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020713e4(M2C_UNK);
extern M2C_UNK func_02074bd8();
extern M2C_UNK (*data_02187144)();
extern s32 data_0218714c;
void func_02071518(M2C_UNK arg0) {
    if (data_0218714c == 0) {
        func_02074bd8();
        if (data_02187144 != ((void *) 0)) {
            data_02187144();
            data_02187144 = ((void *) 0);
        }
    }
    func_020713e4(arg0);
}
