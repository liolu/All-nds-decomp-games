/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02064fe8 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02064fe8.c (license: MIT), reused
 * by tools/donor_match.py */
extern void func_02021390(const void *src, void *dst, unsigned int size);
int func_02029998(void *dst, short b, char c) {
    char *p;
    char *q;
    unsigned char one = 1;
    short s           = b;
    func_02021390(&one, dst, 1);
    p = (char *) dst + 1;
    func_02021390(&s, p, 2);
    q = p + 2;
    func_02021390(&c, q, 1);
    return q + 1 - (char *) dst;
}
