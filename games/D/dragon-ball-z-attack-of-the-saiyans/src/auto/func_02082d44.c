#include "m2c.h"

extern int func_02085130(void);
extern void func_02085144(int);
extern void func_01ffb810(int, int *, int, unsigned);

void func_02082d44(int a, int b, int c, unsigned d) {
    volatile unsigned *st;
    int irq;
    int *p;
    if (d == 0) {
        return;
    }
    st = (volatile unsigned *) (0x040000B0 + (a * 3 + 2) * 4);
    while (*st & 0x80000000) {
    }
    irq = func_02085130();
    p   = (int *) 0x040000E0 + a;
    *p  = c;
    func_01ffb810(a, p, b, (d >> 1) | 0x81000000);
    func_02085144(irq);
    while (*st & 0x80000000) {
    }
}
