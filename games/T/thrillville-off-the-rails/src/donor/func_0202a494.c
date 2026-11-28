/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020659a0 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_020659a0.c (license: MIT), reused
 * by tools/donor_match.py */
extern int *func_0202a688(void);
extern void func_0202a694(int v);
extern void func_0202a6a4(int v);
int func_0202a494(int a, int b) {
    int x = *func_0202a688();
    if (x != 4 && x != 6) {
        goto work;
    }
    return 0;
work:
    func_0202a694(a - 0xe);
    func_0202a6a4(b - 0xe);
    return 1;
}
