/* compiler: 1.2/sp2p3  */
/* func_020730c0 from projets/madagascar/src/auto/func_020730c0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02000ec0(M2C_UNK);
extern M2C_UNK func_0200e104();
extern M2C_UNK (*data_02110b6c)();
extern s32 data_02110b74;
void func_02000ff4(M2C_UNK arg0) {
    if (data_02110b74 == 0) {
        func_0200e104();
        if (data_02110b6c != ((void *) 0)) {
            data_02110b6c();
            data_02110b6c = ((void *) 0);
        }
    }
    func_02000ec0(arg0);
}
