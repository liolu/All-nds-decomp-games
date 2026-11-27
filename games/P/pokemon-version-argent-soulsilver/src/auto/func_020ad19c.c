/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_power from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
extern void func_020d4994(void *dest, u8 data, u32 size);
extern void func_020d4a50(const void *srcp, void *dstp, u32 size);
extern void func_020acd18(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_020acfbc(unsigned short *c, unsigned short *a, unsigned short *b, unsigned short *r, int digits,
                          unsigned short *work);
extern int func_020aca04(const unsigned short *p, int n);
extern void func_020acd18(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_020ace3c(unsigned short *c, unsigned short *a, int digits);
extern void func_020acfbc(u16 *c, u16 *a, u16 *b, u16 *r, int digits, u16 *work);
extern void func_020ad19c(u16 *c, u16 *a, u16 *b, int digits, u16 *n);
int func_020aca04(const unsigned short *p, int n);
void func_020acd18(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
void func_020ace3c(unsigned short *c, unsigned short *a, int digits);
void func_020acfbc(u16 *c, u16 *a, u16 *b, u16 *r, int digits, u16 *work);
extern void *(*data_021d4654)(u32 size);
extern void (*data_021d4680)(void *ptr);
void func_020ad19c(u16 *c, u16 *a, u16 *b, int digits, u16 *n) {
    u16 *tmp;
    u16 *divwork;
    int i;

    tmp = data_021d4654(digits * sizeof(u16) * 4);
    if (tmp == 0) {
        return;
    }
    divwork = tmp + digits;
    func_020d4994(c + 1, 0, (digits - 1) * sizeof(u16));
    c[0] = 1;
    for (i = (digits - func_020aca04(b, digits)) * 16; i < digits * sizeof(u16) * 8; i++) {
        if (b[digits - (i >> 4) - 1] & (0x8000u >> (i & 15))) {
            func_020d4a50(a, c, digits * sizeof(u16));
            i++;
            break;
        }
    }
    for (; i < digits * sizeof(u16) * 8; i++) {
        func_020ace3c(tmp, c, digits);
        func_020d4a50(tmp, c, digits * sizeof(u16));
        if (n) {
            func_020acfbc(0, c, n, c, digits, divwork);
        }
        if (b[digits - (i >> 4) - 1] & (0x8000u >> (i & 15))) {
            func_020acd18(tmp, c, a, digits);
            func_020d4a50(tmp, c, digits * sizeof(u16));
            if (n) {
                func_020acfbc(0, c, n, c, digits, divwork);
            }
        }
    }
    data_021d4680(tmp);
}
extern void *(*data_021d4654)(unsigned long size);
extern void (*data_021d4680)(void *ptr);
