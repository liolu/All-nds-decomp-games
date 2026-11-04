/* compiler: 1.2/sp2p3  */
/* func_02000ff4 from projets/children-of-mana/src/donor/func_02000ff4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020644c4(M2C_UNK);
extern M2C_UNK func_02066a9c();
extern M2C_UNK (*data_0217e304)();
extern s32 data_0217e30c;
void func_020645f8(M2C_UNK arg0) {
    if (data_0217e30c == 0) {
        func_02066a9c();
        if (data_0217e304 != ((void *) 0)) {
            data_0217e304();
            data_0217e304 = ((void *) 0);
        }
    }
    func_020644c4(arg0);
}
