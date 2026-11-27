/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_mult from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void func_020d4994(void *dest, u8 data, u32 size);
extern void func_020acd18(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern int func_020aca04(const unsigned short *p, int n);
extern void func_020acce4(unsigned short *a, unsigned long b, int i, int digits);
extern void func_020acd18(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
int func_020aca04(const unsigned short *p, int n);
void func_020acce4(unsigned short *a, unsigned long b, int i, int digits);
void func_020acd18(unsigned short *c, unsigned short *a, unsigned short *b, int digits) {
    int digits_b;
    int digits_a;
    int i;
    int j;

    func_020d4994(c, 0, digits * 2);
    digits_a = func_020aca04(a, digits);
    digits_b = func_020aca04(b, digits);
    for (i = 0; i < digits_b; i++) {
        for (j = 0; j < digits_a && j < digits - i; j++) {
            func_020acce4(c, a[j] * b[i], i + j, digits);
        }
    }
}
