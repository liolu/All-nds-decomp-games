/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_020603c8 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_020603c8.cpp (license: MIT), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern "C" {
extern char data_021608c0[];
extern int data_021612e4[];
extern void func_02056d44(void *p);
extern void func_0205074c(int arg);
extern void func_02050bbc(void *thiz);
}
namespace IRQ {
    extern unsigned int Disable();
    extern void Restore(unsigned int);
} // namespace IRQ
struct Sched {
    char pad00[0x28];
    int d;
    int e;
    char pad30[0x34 - 0x30];
    u32 flags;
    char pad38[0xd4 - 0x38];
    char sub[4];
};
extern "C" void func_020507b0(int arg) {
    Sched *g         = (Sched *) data_021608c0;
    unsigned int irq = IRQ::Disable();
    if (g->flags & 4) {
        do {
            func_02056d44(g->sub);
        } while (g->flags & 4);
    }
    u32 *fp = (u32 *) ((unsigned long long) ((int) g + 0x34));
    *fp |= 4;
    IRQ::Restore(irq);
    func_0205074c(arg);
    g->d                            = 0;
    g->e                            = 0;
    *(int *) (data_021608c0 + 0xd0) = data_021612e4[2];
    func_02050bbc(g);
}
