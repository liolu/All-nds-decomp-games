/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* char_from_long from https://github.com/Project-Holon/aletheia src/game/ov009/sha1.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
extern void func_020ac06c(unsigned char *d, unsigned long *s, unsigned int len);
void func_020ac06c(unsigned char *d, unsigned long *s, unsigned int len) {
    unsigned int i;

    len >>= 2;
    for (i = 0; i < len; i++) {
        unsigned long v = *s++;
        d[0]            = v >> 24;
        d[1]            = v >> 16;
        d[2]            = v >> 8;
        d[3]            = v;
        d += 4;
    }
}
