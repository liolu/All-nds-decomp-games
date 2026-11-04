/* compiler: 1.2/sp2p3  */
/* func_02052294 from projets/children-of-mana/src/auto/func_02052294.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020641b0();
extern M2C_UNK func_0205b2ec();
extern s32 (*data_0217e22c)();
void func_020641d0(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0 = 0;
        if (data_0217e22c != ((void *) 0)) {
            var_r0 = data_0217e22c();
        }
        if (var_r0 == 0) {
            return;
        }
        func_020641b0();
        return;
    }
    func_0205b2ec();
}
