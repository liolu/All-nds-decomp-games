/* compiler: 1.2/sp3 */
/* near start: 3 diffs with profile "1.2/sp2p3" */
/* near start: 32 diffs with profile "1.2/sp3" */
typedef unsigned char u8;
typedef unsigned short u16;
typedef struct {
    u8 p0[0x30];
    u8 b30;
    u8 p31;
    u16 h32;
    u8 p34[0x421];
    u8 b455;
} T;
int func_020a9628(int, int);
void func_020d4a50(void *, void *, int);
void func_020a8598(T *);
int func_020a95c8(void *, int, int);
void func_020a9700(T *self, u8 *buf) {
    u8 *p;
    u16 r;
    int n;
    u8 *q;
    if (func_020a9628(buf[0], buf[1]) == 0) {
        return;
    }
    func_020d4a50(buf + 2, (u8 *) self + 0x34, 0x20);
    n = buf[0x22];
    p = buf + 0x23;
    if (n != 0x20) {
        self->b30 = 0;
    } else {
        func_020d4a50(p, (u8 *) self + 0x74, 0x20);
        func_020a8598(self);
    }
    q = p + n;
    {
        int lo = q[1];
        int hi = p[n];
        r      = func_020a95c8(q + 2, ((hi << 8) + lo) / 2, 2);
    }
    self->h32 = r;
    if (r != 0) {
        self->b455 = 1;
    }
}
