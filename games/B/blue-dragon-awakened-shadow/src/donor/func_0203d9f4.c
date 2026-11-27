/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* decrypt_premaster_secret from https://github.com/Project-Holon/aletheia src/game/ov009/ssl.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned short u16;
extern int BigInt_GetSign(unsigned short *a, int digits);
extern void func_0204095c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void BigInt_Negate(unsigned short *a, int digits);
extern void func_02040a9c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void BigInt_Mul(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_02040ebc(u16 *c, u16 *a, u16 *b, u16 *r, int digits, u16 *work);
extern void func_020414a4(unsigned short *c, unsigned short *m, unsigned short *e, int digits, unsigned short *n);
extern void func_020416b0(unsigned short *d, unsigned char *s, int numbytes, int digits);
extern void func_0204170c(unsigned char *d, unsigned short *s, int numbytes, int digits);
typedef struct CPSPrivateKey {
    int size;
    unsigned char *p0;
    int l1;
    unsigned char *p1;
    int l2;
    unsigned char *p2;
    int l3;
    unsigned char *p3;
    int l4;
    unsigned char *p4;
    int l5;
    unsigned char *p5;
} CPSPrivateKey;
extern void *(*data_0210ca30)(unsigned long size);
extern void (*CPSiFree)(void *ptr);
extern void func_020416b0(unsigned short *d, unsigned char *s, int numbytes, int digits);
extern void func_0203cb1c(unsigned long old_priority);
extern void func_020416b0(unsigned short *d, unsigned char *s, int numbytes, int digits);
extern void func_020414a4(unsigned short *c, unsigned short *m, unsigned short *e, int digits, unsigned short *n);
extern void func_02040a9c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void BigInt_Mul(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_0204095c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern int BigInt_GetSign(unsigned short *a, int digits);
extern void BigInt_Negate(unsigned short *a, int digits);
extern void func_02040ebc(unsigned short *c, unsigned short *a, unsigned short *b, unsigned short *r, int digits,
                          unsigned short *work);
extern unsigned long SSLi_RaisePriority(void);
unsigned long SSLi_RaisePriority(void);
void func_0203cb1c(unsigned long old_priority);
void func_0203d9f4(unsigned char *d, unsigned char *s, CPSPrivateKey *k) {
    int digits;
    unsigned short *tmp_var;
    unsigned short *b;
    unsigned short *c;
    unsigned short *k1;
    unsigned short *k2;
    unsigned short *n;
    unsigned short *l;
    unsigned short *divwork;
    unsigned long old_priority;

    if (k == 0 || k->size == 0) {
        return;
    }

    digits  = (k->size * 2) / 2 + 1;
    tmp_var = (unsigned short *) data_0210ca30(digits * 20);
    if (tmp_var == 0) {
        return;
    }

    b       = tmp_var + digits;
    c       = b + digits;
    k1      = c + digits;
    k2      = k1 + digits;
    n       = k2 + digits;
    l       = n + digits;
    divwork = l + digits;

    func_020416b0(tmp_var, s, k->size, digits);
    func_020416b0(b, k->p3, k->l3, digits);
    func_020416b0(n, k->p1, k->l1, digits);
    old_priority = SSLi_RaisePriority();
    func_020414a4(k1, tmp_var, b, digits, n);
    func_020416b0(b, k->p4, k->l4, digits);
    func_020416b0(n, k->p2, k->l2, digits);
    func_020414a4(k2, tmp_var, b, digits, n);
    func_0203cb1c(old_priority);
    func_02040a9c(tmp_var, k1, k2, digits);
    func_020416b0(b, k->p5, k->l5, digits);
    BigInt_Mul(c, tmp_var, b, digits);
    func_020416b0(b, k->p2, k->l2, digits);
    BigInt_Mul(tmp_var, c, b, digits);
    func_0204095c(c, tmp_var, k2, digits);
    func_020416b0(b, k->p0, k->size, digits);
    if (BigInt_GetSign(c, digits) < 0) {
        BigInt_Negate(c, digits);
        func_02040ebc(0, c, b, l, digits, divwork);
        func_02040a9c(l, b, l, digits);
    } else {
        func_02040ebc(0, c, b, l, digits, divwork);
    }
    func_0204170c(d, l, 0x30, digits);
    CPSiFree(tmp_var);
}
