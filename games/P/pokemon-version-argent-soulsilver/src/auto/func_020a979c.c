/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* decrypt_premaster_secret from https://github.com/Project-Holon/aletheia src/game/ov009/ssl.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned short u16;
extern int func_020aca2c(unsigned short *a, int digits);
extern void func_020aca5c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_020acb5c(unsigned short *a, int digits);
extern void func_020acb9c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_020acd18(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_020acfbc(u16 *c, u16 *a, u16 *b, u16 *r, int digits, u16 *work);
extern void func_020ad5a4(unsigned short *c, unsigned short *m, unsigned short *e, int digits, unsigned short *n);
extern void func_020ad7b0(unsigned short *d, unsigned char *s, int numbytes, int digits);
extern void func_020ad80c(unsigned char *d, unsigned short *s, int numbytes, int digits);
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
extern void *(*data_021d4654)(unsigned long size);
extern void (*data_021d4680)(void *ptr);
extern void func_020ad7b0(unsigned short *d, unsigned char *s, int numbytes, int digits);
extern void func_020a88c4(unsigned long old_priority);
extern void func_020ad7b0(unsigned short *d, unsigned char *s, int numbytes, int digits);
extern void func_020ad5a4(unsigned short *c, unsigned short *m, unsigned short *e, int digits, unsigned short *n);
extern void func_020acb9c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_020acd18(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_020aca5c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern int func_020aca2c(unsigned short *a, int digits);
extern void func_020acb5c(unsigned short *a, int digits);
extern void func_020acfbc(unsigned short *c, unsigned short *a, unsigned short *b, unsigned short *r, int digits,
                          unsigned short *work);
extern unsigned long func_020a8878(void);
unsigned long func_020a8878(void);
void func_020a88c4(unsigned long old_priority);
void func_020a979c(unsigned char *d, unsigned char *s, CPSPrivateKey *k) {
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
    tmp_var = (unsigned short *) data_021d4654(digits * 20);
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

    func_020ad7b0(tmp_var, s, k->size, digits);
    func_020ad7b0(b, k->p3, k->l3, digits);
    func_020ad7b0(n, k->p1, k->l1, digits);
    old_priority = func_020a8878();
    func_020ad5a4(k1, tmp_var, b, digits, n);
    func_020ad7b0(b, k->p4, k->l4, digits);
    func_020ad7b0(n, k->p2, k->l2, digits);
    func_020ad5a4(k2, tmp_var, b, digits, n);
    func_020a88c4(old_priority);
    func_020acb9c(tmp_var, k1, k2, digits);
    func_020ad7b0(b, k->p5, k->l5, digits);
    func_020acd18(c, tmp_var, b, digits);
    func_020ad7b0(b, k->p2, k->l2, digits);
    func_020acd18(tmp_var, c, b, digits);
    func_020aca5c(c, tmp_var, k2, digits);
    func_020ad7b0(b, k->p0, k->size, digits);
    if (func_020aca2c(c, digits) < 0) {
        func_020acb5c(c, digits);
        func_020acfbc(0, c, b, l, digits, divwork);
        func_020acb9c(l, b, l, digits);
    } else {
        func_020acfbc(0, c, b, l, digits, divwork);
    }
    func_020ad80c(d, l, 0x30, digits);
    data_021d4680(tmp_var);
}
