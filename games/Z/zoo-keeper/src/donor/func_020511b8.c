/* compiler: 1.2/sp2p3  */
/* func_02051d60 from projets/children-of-mana/src/auto/func_02051d60.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02051158();
extern M2C_UNK func_0204a304();
extern s32 data_0206e3e0;
extern s32 (*data_0206e3e4)();
void func_020511b8(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0        = 1;
        data_0206e3e0 = 1;
        if (data_0206e3e4 != ((void *) 0)) {
            var_r0 = data_0206e3e4();
        }
        if (var_r0 == 0) {
            return;
        }
        func_02051158();
        return;
    }
    func_0204a304();
}
