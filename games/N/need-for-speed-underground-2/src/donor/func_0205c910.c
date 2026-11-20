/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209ed94 from projets/pokemon-dash/src/donor/func_0209ed94.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
struct Slot {
    struct Node *p18;
    struct Node *p1c;
};
struct Node {
    char pad0[4];
    struct Node *f4;
    char pad8[0x10];
    struct Slot slots[1];
};
extern void func_0205a6bc(unsigned int a, unsigned int b);
void func_0205c910(struct Node *base) {
    int i;
    for (i = 0; i < 4; i++) {
        struct Node *n = base->slots[i].p18;
        if (n == 0) {
            continue;
        }
        if ((struct Node *) &base->slots[i] == n->slots[0].p18) {
            n->slots[0].p18 = base->slots[i].p1c;
            func_0205a6bc((unsigned int) n, 0x3c);
        } else {
            struct Node *p = n->slots[0].p18;
            if (p != 0) {
                for (;;) {
                    struct Node *next = p->f4;
                    if ((struct Node *) &base->slots[i] == next) {
                        break;
                    }
                    p = next;
                    if (next == 0) {
                        break;
                    }
                }
            }
            p->f4 = (struct Node *) base->slots[i].p1c;
            func_0205a6bc((unsigned int) p, 8);
        }
    }
}
