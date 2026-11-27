/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_power from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
extern void MI_CpuCopy8(const void *srcp, void *dstp, u32 size);
extern void BigInt_Mul(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_02040ebc(unsigned short *c, unsigned short *a, unsigned short *b, unsigned short *r, int digits,
                          unsigned short *work);
extern int BigInti_GetLength(const unsigned short *p, int n);
extern void BigInt_Mul(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_02040d3c(unsigned short *c, unsigned short *a, int digits);
extern void func_02040ebc(u16 *c, u16 *a, u16 *b, u16 *r, int digits, u16 *work);
extern void func_0204109c(u16 *c, u16 *a, u16 *b, int digits, u16 *n);
int BigInti_GetLength(const unsigned short *p, int n);
void BigInt_Mul(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
void func_02040d3c(unsigned short *c, unsigned short *a, int digits);
void func_02040ebc(u16 *c, u16 *a, u16 *b, u16 *r, int digits, u16 *work);
extern void *(*data_0210ca30)(u32 size);
extern void (*CPSiFree)(void *ptr);
void func_0204109c(u16 *c, u16 *a, u16 *b, int digits, u16 *n) {
    u16 *tmp;
    u16 *divwork;
    int i;

    tmp = data_0210ca30(digits * sizeof(u16) * 4);
    if (tmp == 0) {
        return;
    }
    divwork = tmp + digits;
    MI_CpuFill8(c + 1, 0, (digits - 1) * sizeof(u16));
    c[0] = 1;
    for (i = (digits - BigInti_GetLength(b, digits)) * 16; i < digits * sizeof(u16) * 8; i++) {
        if (b[digits - (i >> 4) - 1] & (0x8000u >> (i & 15))) {
            MI_CpuCopy8(a, c, digits * sizeof(u16));
            i++;
            break;
        }
    }
    for (; i < digits * sizeof(u16) * 8; i++) {
        func_02040d3c(tmp, c, digits);
        MI_CpuCopy8(tmp, c, digits * sizeof(u16));
        if (n) {
            func_02040ebc(0, c, n, c, digits, divwork);
        }
        if (b[digits - (i >> 4) - 1] & (0x8000u >> (i & 15))) {
            BigInt_Mul(tmp, c, a, digits);
            MI_CpuCopy8(tmp, c, digits * sizeof(u16));
            if (n) {
                func_02040ebc(0, c, n, c, digits, divwork);
            }
        }
    }
    CPSiFree(tmp);
}
extern void *(*data_0210ca30)(unsigned long size);
extern void (*CPSiFree)(void *ptr);
