/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02065af0 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02065af0.c (license: MIT), reused
 * by tools/donor_match.py */
extern int func_02024624(void);
extern void func_02024638(unsigned int);
extern int *func_0202a67c(void);
extern void func_020211dc(int *dst, int *src, int len);
extern int data_020ee388;
extern int data_020ee438;
int func_0202a5e4(int *thiz) {
    int saved = func_02024624();
    int *r;
    if (data_020ee388 != 1) {
        func_02024638(saved);
        return 0;
    }
    r = func_0202a67c();
    if (r == 0 || *r != 0) {
        func_02024638(saved);
        return 0;
    }
    func_020211dc(thiz, &data_020ee438, 0x9c);
    func_02024638(saved);
    return 1;
}
