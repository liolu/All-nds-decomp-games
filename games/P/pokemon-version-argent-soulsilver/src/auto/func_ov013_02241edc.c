/* near start: 6 diffs with profile "1.2/sp3" */
typedef unsigned short u16;
typedef struct N {
    struct N *prev;
    struct N *next;
    u16 h8;
    u16 ha;
} N;
typedef struct Pl {
    char pad[0x1a0];
} Pl;
extern Pl *data_ov013_0224f62c;
extern N *func_ov013_02240300(int);
extern int func_020d1204(int);
extern void _Z24EnableSpecificInterruptsj(int);
extern void func_ov013_02241c38(N *, N *);
extern void func_020d3f48(void);

N *func_ov013_02241edc(int idx, int sz, int dir, int *out) {
    N *n;
    N *p;
    int off;
    int irq;
    int len;
    off   = idx * 0x1a0;
    n     = func_ov013_02240300(*(int *) ((char *) data_ov013_0224f62c + off + 0x19c));
    len   = (sz + 3 & ~3) >> 2;
    n->ha = len;
    irq   = func_020d1204(1);
    if (dir != 0) {
        p = (N *) ((char *) &data_ov013_0224f62c[idx] + 0x180);
        if (p != (N *) ((char *) &data_ov013_0224f62c[idx] + 0x18c)) {
            do {
                N *nx = p->next;
                int s = p->h8 + p->ha;
                if (s + len <= nx->h8) {
                    n->h8 = s;
                    func_ov013_02241c38(nx, n);
                    break;
                }
                p = nx;
            } while (p != (N *) ((char *) data_ov013_0224f62c + off + 0x18c));
        }
        if (p == (N *) ((char *) data_ov013_0224f62c + off + 0x18c)) {
            func_020d3f48();
        }
    } else {
        p = (N *) ((char *) &data_ov013_0224f62c[idx] + 0x18c);
        if (p != (N *) ((char *) &data_ov013_0224f62c[idx] + 0x180)) {
            do {
                N *pv = p->prev;
                int s = p->h8 - len;
                if (s >= pv->h8 + pv->ha) {
                    n->h8 = s;
                    func_ov013_02241c38(p, n);
                    break;
                }
                p = pv;
            } while (p != (N *) ((char *) data_ov013_0224f62c + off + 0x180));
        }
        if (p == (N *) ((char *) data_ov013_0224f62c + off + 0x180)) {
            func_020d3f48();
        }
    }
    *out = n->h8;
    _Z24EnableSpecificInterruptsj(irq);
    return n;
}
