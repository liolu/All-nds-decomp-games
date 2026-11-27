/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02065af0 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02065af0.c (license: MIT), reused
 * by tools/donor_match.py */
extern int func_0205c948(void);
extern void func_0205c95c(unsigned int);
extern int *func_02060824(void);
extern void func_0205a174(int *dst, int *src, int len);
extern int data_0211b488;
extern int data_0211b538;
int func_0206078c(int *thiz) {
    int saved = func_0205c948();
    int *r;
    if (data_0211b488 != 1) {
        func_0205c95c(saved);
        return 0;
    }
    r = func_02060824();
    if (r == 0 || *r != 0) {
        func_0205c95c(saved);
        return 0;
    }
    func_0205a174(thiz, &data_0211b538, 0x9c);
    func_0205c95c(saved);
    return 1;
}
