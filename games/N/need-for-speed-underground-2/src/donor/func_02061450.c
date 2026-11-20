/* compiler: 1.2/sp2p3  */
/* func_02051d60 from projets/children-of-mana/src/auto/func_02051d60.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02061410();
extern M2C_UNK func_0205b2ec();
extern s32 data_0217d700;
extern s32 (*data_0217d704)();
void func_02061450(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0        = 1;
        data_0217d700 = 1;
        if (data_0217d704 != ((void *) 0)) {
            var_r0 = data_0217d704();
        }
        if (var_r0 == 0) {
            return;
        }
        func_02061410();
        return;
    }
    func_0205b2ec();
}
