/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_020a4240 from projets/pokemon-dash/src/donor/func_020a4240.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
extern "C" {
extern char data_02186840[];
extern int data_021846b4[];
extern void func_02069a40(void *p);
extern void func_0206fe28(void *fn);
extern int func_02070464(void *g);
}
namespace IRQ {
    extern unsigned int Disable();
    extern void Restore(unsigned int);
} // namespace IRQ
extern struct Sched {
    char pad00[0x18];
    int a;
    int b;
    int c;
    char pad24[0x28 - 0x24];
    int d;
    int e;
    char pad30[0x34 - 0x30];
    u32 flags;
    char pad38[0xd4 - 0x38];
    char sub[4];
};
extern "C" int func_020702a0(int a, int b, int c, int d, int e, int f) {
    Sched *g         = (Sched *) data_02186840;
    unsigned int irq = IRQ::Disable();
    if (g->flags & 4) {
        do {
            func_02069a40(g->sub);
        } while (g->flags & 4);
    }
    u32 *fp = (u32 *) ((unsigned long long) ((int) g + 0x34));
    *fp |= 4;
    IRQ::Restore(irq);
    g->a = a;
    g->b = b;
    g->c = c;
    g->d = d;
    g->e = e;
    if (f != 0) {
        func_0206fe28((void *) func_02070464);
        return 1;
    }
    *(int *) (data_02186840 + 0xd0) = data_021846b4[2];
    func_02070464(g);
    return (*(int **) g)[0] == 0;
}
