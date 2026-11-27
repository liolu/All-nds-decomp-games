/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_montmult from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef unsigned long size_t;
extern void func_020d4994(void *dest, u8 data, u32 size);
extern void func_020d4a50(const void *srcp, void *dstp, u32 size);
extern void *func_020e5af8(void *dest, const void *src, size_t n);
extern void func_020acd18(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_020ad47c(unsigned short *c, unsigned short *a, unsigned short *b, int digits, int rdigits, unsigned short *n,
                          unsigned short *np, unsigned short *m, unsigned short *m2);
extern void func_020aca5c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_020acb9c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern int func_020accac(unsigned short *a, unsigned short *b, int n);
extern void func_020acd18(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_020ace3c(unsigned short *c, unsigned short *a, int digits);
void func_020aca5c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
void func_020acb9c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
int func_020accac(unsigned short *a, unsigned short *b, int n);
void func_020acd18(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
void func_020ace3c(unsigned short *c, unsigned short *a, int digits);
void func_020ad47c(unsigned short *c, unsigned short *a, unsigned short *b, int digits, int rdigits, unsigned short *n,
                   unsigned short *np, unsigned short *m, unsigned short *m2) {
    func_020d4a50(c, a, digits * 2);
    if (b == (unsigned short *) 1) {
        func_020ace3c(c, a, digits);
    } else if (b != 0) {
        func_020acd18(c, a, b, digits);
    }
    func_020acd18(m, c, np, rdigits);
    func_020d4994(m + rdigits, 0, (digits - rdigits) * 2);
    func_020acd18(m2, m, n, digits);
    func_020aca5c(c, c, m2, digits);
    func_020e5af8(c, c + rdigits, (digits - rdigits) * 2);
    func_020d4994(c + digits - rdigits, 0, rdigits * 2);
    switch (func_020accac(c, n, digits)) {
        case 0:
            func_020d4994(c, 0, digits * 2);
            break;
        case 1:
            func_020acb9c(c, c, n, digits);
            break;
    }
}
