/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_0206084c from projets/need-for-speed-underground-2/src/donor/func_0206084c.cpp (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
extern "C" {
extern char data_0206dbc0[];
extern int data_0206b9dc[];
extern void func_02048918(void *p);
extern void func_0205017c(void *fn);
extern int func_02050798(void *g);
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
extern "C" int func_020505d4(int a, int b, int c, int d, int e, int f) {
    Sched *g         = (Sched *) data_0206dbc0;
    unsigned int irq = IRQ::Disable();
    if (g->flags & 4) {
        do {
            func_02048918(g->sub);
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
        func_0205017c((void *) func_02050798);
        return 1;
    }
    *(int *) (data_0206dbc0 + 0xd0) = data_0206b9dc[2];
    func_02050798(g);
    return (*(int **) g)[0] == 0;
}
