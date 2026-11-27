/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_div from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef unsigned long size_t;
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
extern void MI_CpuCopy8(const void *srcp, void *dstp, u32 size);
extern u64 func_02040e8c(u16 *s);
extern u64 func_02040e7c(u16 *s);
extern void *memmove(void *dest, const void *src, size_t n);
extern u64 func_02040ea0(u16 *s);
extern void func_02040ebc(unsigned short *c, unsigned short *a, unsigned short *b, unsigned short *r, int digits,
                          unsigned short *work);
extern int BigInti_GetLength(const unsigned short *p, int n);
extern void func_02040a9c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern int BigInti_Compare(unsigned short *a, unsigned short *b, int n);
extern void BigInti_MulDigit(unsigned short *c, unsigned short *a, unsigned short b, int digits);
extern unsigned long long func_02040e70(unsigned short *p);
extern void func_02040ebc(u16 *c, u16 *a, u16 *b, u16 *r, int digits, u16 *work);
int BigInti_GetLength(const unsigned short *p, int n);
void func_02040a9c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
int BigInti_Compare(unsigned short *a, unsigned short *b, int n);
void BigInti_MulDigit(unsigned short *c, unsigned short *a, unsigned short b, int digits);
unsigned long long func_02040e70(unsigned short *p);
u64 func_02040e7c(u16 *s);
u64 func_02040e8c(u16 *s);
u64 func_02040ea0(u16 *s);
void func_02040ebc(u16 *c, u16 *a, u16 *b, u16 *r, int digits, u16 *work) {
    int digits_a;
    int digits_b;
    int i;
    u64 msd;
    u32 guess;
    u16 *ca;
    u16 *cca;

    ca  = work + digits;
    cca = ca + digits;
    MI_CpuFill8(ca, 0, digits * 4);
    digits_a = BigInti_GetLength(a, digits);
    digits_b = BigInti_GetLength(b, digits);
    if (digits_a > 0 && digits_b > 0) {
        i = digits_b + (digits - digits_a) - 1;
        if (i >= digits) {
            MI_CpuCopy8(a, cca, digits * 2);
        } else {
            MI_CpuCopy8(a, ca + i, digits_a * 2);
            if (digits_b > 2) {
                msd = func_02040e8c(b + digits_b - 1);
            } else if (digits_b > 1) {
                msd = func_02040e7c(b + digits_b - 1);
            } else {
                msd = func_02040e70(b + digits_b - 1);
            }
            for (; i < digits; i++) {
                memmove(ca + 1, ca, (digits * 2 - 1) * 2);
                guess = func_02040ea0(cca + digits_b) / msd;
                if (guess > 0xffff) {
                    guess = 0xffff;
                }
                while (1) {
                    BigInti_MulDigit(work, b, (u16) guess, digits);
                    if (BigInti_Compare(cca, work, digits) >= 0) {
                        break;
                    }
                    guess--;
                }
                func_02040a9c(cca, cca, work, digits);
                *ca = guess;
            }
        }
    }
    if (c) {
        MI_CpuCopy8(ca, c, digits * 2);
    }
    if (r) {
        MI_CpuCopy8(cca, r, digits * 2);
    }
}
