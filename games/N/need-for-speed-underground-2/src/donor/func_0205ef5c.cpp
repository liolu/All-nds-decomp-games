/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_0205edd8 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0205/func_0205edd8.cpp (license: MIT), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
extern "C" {
extern int func_0205cba4(int a, int b, int c);
}
namespace IRQ {
    extern unsigned int Disable();
    extern void Restore(unsigned int);
} // namespace IRQ
struct S {
    void (*fn)(int, int, int);
    char pad[0x30];
    volatile u16 f34;
    volatile u16 f36;
};
extern S data_0217ccc8;
extern "C" void func_0205ef5c(int a, int b) {
    unsigned int irq = IRQ::Disable();
    int ok;
    if (func_0205cba4(6, a | 0x2000300, 0) < 0) {
        ok = 0;
    } else if (func_0205cba4(6, b | 0x1010000, 0) < 0) {
        ok = 0;
    } else {
        ok = 1;
    }
    if (ok == 0) {
        IRQ::Restore(irq);
        data_0217ccc8.f34 |= 8;
        if (data_0217ccc8.fn != 0) {
            data_0217ccc8.fn(3, 4, 0);
        }
        return;
    }
    data_0217ccc8.f36 |= 8;
    data_0217ccc8.f34 &= ~8;
    IRQ::Restore(irq);
}
