/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02064f54 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02064f54.c (license: MIT), reused
 * by tools/donor_match.py */
extern void func_02021390(const void *src, int off, int size);
int func_02029904(int off, short b, int c, int d, int e) {
    unsigned char tag = 2;
    short val         = b;
    int c1, c2, c3, c4;
    func_02021390(&tag, off, 1);
    c1 = off + 1;
    func_02021390(&val, c1, 2);
    c2 = c1 + 2;
    func_02021390(&c, c2, 1);
    c3 = c2 + 1;
    func_02021390(&d, c3, 2);
    c4 = c3 + 2;
    func_02021390(&e, c4, 2);
    return c4 + 2 - off;
}
