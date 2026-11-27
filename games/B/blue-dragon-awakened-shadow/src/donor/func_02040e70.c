/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* get48bits_1 from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
extern unsigned long long func_02040e70(unsigned short *p);
unsigned long long func_02040e70(unsigned short *p) {
    return (unsigned long long) *p << 32;
}
