/* compiler: 1.2/sp2p3  */
/* func_0200923c from projets/code-lyoko/src/auto/func_0200923c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201cb50(s32);
extern M2C_UNK func_0201d08c(void *, M2C_UNK (*)(s32));
extern M2C_UNK func_0201d144(void *);
extern s32 data_0203dd50;
void func_0201cb94(void *arg0, s32 arg1) {
    if (data_0203dd50 != 0) {
        func_0201d08c(arg0, func_0201cb50);
        (*(s32 *) ((s8 *) (arg0) + (4)))    = arg1;
        (*(s32 *) ((s8 *) (arg0) + (0)))    = (s32) ((*(s32 *) ((s8 *) (arg0) + (0))) | 0x80);
        (*(s32 *) ((s8 *) (arg0) + (0x64))) = 1;
        func_0201d144(arg0);
        return;
    }
    func_0201cb50(arg1);
}
