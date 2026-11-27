/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02064fe8 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02064fe8.c (license: MIT), reused
 * by tools/donor_match.py */
extern void func_0205a328(const void *src, void *dst, unsigned int size);
int func_0205fdf8(void *dst, short b, char c) {
    char *p;
    char *q;
    unsigned char one = 1;
    short s           = b;
    func_0205a328(&one, dst, 1);
    p = (char *) dst + 1;
    func_0205a328(&s, p, 2);
    q = p + 2;
    func_0205a328(&c, q, 1);
    return q + 1 - (char *) dst;
}
