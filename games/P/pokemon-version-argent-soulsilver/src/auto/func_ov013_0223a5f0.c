typedef struct Q {
    unsigned char b[0xE6];
    unsigned char lo : 2;
    unsigned char hi : 6;
    unsigned char c7;
    unsigned char pad[0xD];
    unsigned char cf5;
    unsigned char cf6;
} Q;
extern void func_020d4a50(void *, void *, int);
extern void func_020d4994(void *, int, int);
extern void func_ov013_0223a514(void);
extern unsigned char *data_ov013_0224f5c4;

void func_ov013_0223a5f0(unsigned char *a) {
    int n;
    int i;
    unsigned char *d;
    unsigned char *s;
    Q *q = (Q *) (data_ov013_0224f5c4 + 0x400);
    func_020d4994(q, 0, 0xEF);
    func_020d4a50(a, q->b + 0x40, 0x20);
    switch (*(int *) (a + 0x20)) {
        case 1:
            n     = 5;
            q->lo = 1;
            break;
        case 2:
            n     = 0xD;
            q->lo = 2;
            break;
        case 3:
            n     = 0x10;
            q->lo = 3;
            break;
        default:
            n     = 0;
            q->lo = 0;
            break;
    }
    d     = q->b + 0x80;
    s     = a + 0x28;
    q->hi = 0;
    i     = 0;
    do {
        func_020d4a50(s, d, n);
        i++;
        d += 0x10;
        s += 0x20;
    } while (i < 4);
    q->c7 = 2;
    func_020d4994((unsigned char *) q + 0xF0, 0, 4);
    q->cf5 = 1;
    q->cf6 = 1;
    func_ov013_0223a514();
}
