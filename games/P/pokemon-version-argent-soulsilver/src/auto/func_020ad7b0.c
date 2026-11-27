/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_from_char from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void func_020d4994(void *dest, u8 data, u32 size);
extern void func_020ad7b0(unsigned short *d, unsigned char *s, int numbytes, int digits);
void func_020ad7b0(unsigned short *d, unsigned char *s, int numbytes, int digits) {
    func_020d4994(d, 0, digits * 2);
    s += numbytes - 1;
    while (numbytes > 1) {
        *d++ = (unsigned short) (s[0] + (s[-1] << 8));
        s -= 2;
        numbytes -= 2;
    }
    if (numbytes > 0) {
        *d = *s;
    }
}
