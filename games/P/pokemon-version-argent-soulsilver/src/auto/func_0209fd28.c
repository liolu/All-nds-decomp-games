#include "m2c.h"
extern void func_020e37d8(void *, int);
extern unsigned char func_020e39dc(void *, void *, int);
int func_0209fd28(unsigned long long x, unsigned c) {
    unsigned buf[2];
    unsigned char tab[0x100];
    int r;
    if (x & 0x80000000ULL) {
        return 0;
    }
    buf[0] = (unsigned) x;
    buf[1] = c;
    func_020e37d8(tab, 7);
    r = func_020e39dc(tab, buf, 8) & 0x7f;
    return (long long) r == (long long) (x >> 32);
}