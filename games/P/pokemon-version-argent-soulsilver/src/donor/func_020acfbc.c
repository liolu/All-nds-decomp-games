/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02040ebc from projets/blue-dragon-awakened-shadow/src/donor/func_02040ebc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef unsigned long size_t;
extern void func_020d4994(void *dest, u8 data, u32 size);
extern void func_020d4a50(const void *srcp, void *dstp, u32 size);
extern u64 func_020acf8c(u16 *s);
extern u64 func_020acf7c(u16 *s);
extern void *func_020e5af8(void *dest, const void *src, size_t n);
extern u64 func_020acfa0(u16 *s);
extern void func_020acfbc(unsigned short *c, unsigned short *a, unsigned short *b, unsigned short *r, int digits,
                          unsigned short *work);
extern int func_020aca04(const unsigned short *p, int n);
extern void func_020acb9c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern int func_020accac(unsigned short *a, unsigned short *b, int n);
extern void func_020acdc4(unsigned short *c, unsigned short *a, unsigned short b, int digits);
extern unsigned long long func_020acf70(unsigned short *p);
extern void func_020acfbc(u16 *c, u16 *a, u16 *b, u16 *r, int digits, u16 *work);
extern int func_020aca04(const unsigned short *p, int n);
extern void func_020acb9c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern int func_020accac(unsigned short *a, unsigned short *b, int n);
extern void func_020acdc4(unsigned short *c, unsigned short *a, unsigned short b, int digits);
extern unsigned long long func_020acf70(unsigned short *p);
extern u64 func_020acf7c(u16 *s);
extern u64 func_020acf8c(u16 *s);
extern u64 func_020acfa0(u16 *s);
void func_020acfbc(u16 *c, u16 *a, u16 *b, u16 *r, int digits, u16 *work) {
    int digits_a;
    int digits_b;
    int i;
    u64 msd;
    u32 guess;
    u16 *ca;
    u16 *cca;

    ca  = work + digits;
    cca = ca + digits;
    func_020d4994(ca, 0, digits * 4);
    digits_a = func_020aca04(a, digits);
    digits_b = func_020aca04(b, digits);
    if (digits_a > 0 && digits_b > 0) {
        i = digits_b + (digits - digits_a) - 1;
        if (i >= digits) {
            func_020d4a50(a, cca, digits * 2);
        } else {
            func_020d4a50(a, ca + i, digits_a * 2);
            if (digits_b > 2) {
                msd = func_020acf8c(b + digits_b - 1);
            } else if (digits_b > 1) {
                msd = func_020acf7c(b + digits_b - 1);
            } else {
                msd = func_020acf70(b + digits_b - 1);
            }
            for (; i < digits; i++) {
                func_020e5af8(ca + 1, ca, (digits * 2 - 1) * 2);
                guess = func_020acfa0(cca + digits_b) / msd;
                if (guess > 0xffff) {
                    guess = 0xffff;
                }
                while (1) {
                    func_020acdc4(work, b, (u16) guess, digits);
                    if (func_020accac(cca, work, digits) >= 0) {
                        break;
                    }
                    guess--;
                }
                func_020acb9c(cca, cca, work, digits);
                *ca = guess;
            }
        }
    }
    if (c) {
        func_020d4a50(ca, c, digits * 2);
    }
    if (r) {
        func_020d4a50(cca, r, digits * 2);
    }
}
