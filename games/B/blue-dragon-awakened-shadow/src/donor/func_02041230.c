/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_modinv from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
extern void MI_CpuCopy8(const void *srcp, void *dstp, u32 size);
extern void func_02041230(unsigned short *c, unsigned short *a, unsigned short *n, int digits, unsigned short *tmp_var);
extern void BigInt_Mul(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_02040ebc(unsigned short *c, unsigned short *a, unsigned short *b, unsigned short *r, int digits,
                          unsigned short *work);
extern int BigInt_GetSign(unsigned short *a, int digits);
extern void func_0204095c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_02040a9c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void BigInt_Mul(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_02040ebc(u16 *c, u16 *a, u16 *b, u16 *r, int digits, u16 *work);
int BigInt_GetSign(unsigned short *a, int digits);
void func_0204095c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
void func_02040a9c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
void BigInt_Mul(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
void func_02040ebc(u16 *c, u16 *a, u16 *b, u16 *r, int digits, u16 *work);
void func_02041230(unsigned short *c, unsigned short *a, unsigned short *n, int digits, unsigned short *tmp_var) {
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

    MI_CpuCopy8(a, tmp_var, digits * 2);
    MI_CpuCopy8(n, t, digits * 2);
    u[0] = 1;
    while (BigInt_GetSign(tmp_var, digits) > 0) {
        func_02040ebc(q, t, tmp_var, w, digits, divwork);
        MI_CpuCopy8(tmp_var, t, digits * 2);
        MI_CpuCopy8(w, tmp_var, digits * 2);
        BigInt_Mul(w, q, u, digits);
        func_02040a9c(w, v, w, digits);
        MI_CpuCopy8(u, v, digits * 2);
        MI_CpuCopy8(w, u, digits * 2);
    }
    func_0204095c(v, v, n, digits);
    func_02040ebc(0, v, n, c, digits, divwork);
}
