/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02061e54 from projets/need-for-speed-underground-2/src/donor/func_02061e54.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
extern int func_02051710(void);
extern int func_020516f4(void);
extern void func_0204946c(u32 a, u32 b);
char *func_02051bc0(char *a, unsigned int idx) {
    int h;
    int n;
    char *local[16];
    int i;
    h = func_02051710();
    if (func_020516f4() != 0) {
        return 0;
    }
    if (idx < 1) {
        goto ret0;
    }
    if (idx > 0xf) {
    ret0:
        return 0;
    }
    func_0204946c((u32) * (char **) (h + 4) + 0x17e, 2);
    if ((*(u16 *) (*(char **) (h + 4) + 0x100 + 0x7e) & (1u << idx)) == 0) {
        return 0;
    }
    n = *(u16 *) (a + 4);
    if (n == 0) {
        return 0;
    }
    local[0] = a + 0xa;
    i        = 0;
    for (;;) {
        if (idx == *(u16 *) (local[i] + 4)) {
            return local[i];
        }
        i++;
        local[i] = (char *) (*(u16 *) (a + 6) + (u32) local[i - 1]);
        if (i >= *(volatile u16 *) (a + 4)) {
            break;
        }
    }
    return 0;
}
