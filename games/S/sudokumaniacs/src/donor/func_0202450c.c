/* compiler: 1.2/sp2p3  */
/* func_02013d24 from projets/code-lyoko/src/auto/func_02013d24.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201e640();
extern M2C_UNK func_020244ac();
extern s32 data_020406a0;
extern s32 (*data_020406a4)();
void func_0202450c(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if (data_020406a0 != 0) {
            return;
        }
        var_r0        = 1;
        data_020406a0 = 1;
        if (data_020406a4 != ((void *) 0)) {
            var_r0 = data_020406a4();
        }
        if (var_r0 == 0) {
            return;
        }
        func_020244ac();
        return;
    }
    func_0201e640();
}
