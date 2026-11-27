/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_modinv from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
extern void func_020d4a50(const void *srcp, void *dstp, u32 size);
extern void func_020ad330(unsigned short *c, unsigned short *a, unsigned short *n, int digits, unsigned short *tmp_var);
extern void func_020acd18(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_020acfbc(unsigned short *c, unsigned short *a, unsigned short *b, unsigned short *r, int digits,
                          unsigned short *work);
extern int func_020aca2c(unsigned short *a, int digits);
extern void func_020aca5c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_020acb9c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_020acd18(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_020acfbc(u16 *c, u16 *a, u16 *b, u16 *r, int digits, u16 *work);
int func_020aca2c(unsigned short *a, int digits);
void func_020aca5c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
void func_020acb9c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
void func_020acd18(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
void func_020acfbc(u16 *c, u16 *a, u16 *b, u16 *r, int digits, u16 *work);
void func_020ad330(unsigned short *c, unsigned short *a, unsigned short *n, int digits, unsigned short *tmp_var) {
    unsigned short *q;
    unsigned short *t;
    unsigned short *u;
    unsigned short *v;
    unsigned short *w;
    unsigned short *divwork;

    q       = tmp_var + digits;
    t       = q + digits;
    u       = t + digits;
    v       = u + digits;
    w       = v + digits;
    divwork = w + digits;

    func_020d4a50(a, tmp_var, digits * 2);
    func_020d4a50(n, t, digits * 2);
    u[0] = 1;
    while (func_020aca2c(tmp_var, digits) > 0) {
        func_020acfbc(q, t, tmp_var, w, digits, divwork);
        func_020d4a50(tmp_var, t, digits * 2);
        func_020d4a50(w, tmp_var, digits * 2);
        func_020acd18(w, q, u, digits);
        func_020acb9c(w, v, w, digits);
        func_020d4a50(u, v, digits * 2);
        func_020d4a50(w, u, digits * 2);
    }
    func_020aca5c(v, v, n, digits);
    func_020acfbc(0, v, n, c, digits, divwork);
}
