/* compiler: 1.2/sp2p3  */
/* func_0201ec0c from projets/code-lyoko/src/auto/func_0201ec0c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201e640();
extern M2C_UNK func_02024ce0();
extern s32 data_020406e4;
extern s32 (*data_020406e8)();
void func_02024d10(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if (data_020406e4 != 0) {
            return;
        }
        var_r0 = 0;
        if (data_020406e8 != ((void *) 0)) {
            var_r0 = data_020406e8();
        }
        if (var_r0 != 0) {
            func_02024ce0();
        }
        data_020406e4 = 1;
        return;
    }
    func_0201e640();
}
