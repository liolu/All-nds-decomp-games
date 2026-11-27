/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* long_from_char from https://github.com/Project-Holon/aletheia src/game/ov009/sha1.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
extern void func_020ac0b0(unsigned int *dst, const u8 *src, unsigned int count);
void func_020ac0b0(unsigned int *dst, const u8 *src, unsigned int count) {
    unsigned int i = 0;
    while (i < count) {
        unsigned int b0 = src[i];
        unsigned int b1 = src[i + 1];
        unsigned int b2 = src[i + 2];
        unsigned int b3 = src[i + 3];
        *dst++          = (b0 << 24) | (b1 << 16) | (b2 << 8) | b3;
        i += 4;
    }
}
