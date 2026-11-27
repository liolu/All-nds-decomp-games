/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020579f0 from https://github.com/banatic/acww-decomp src/main/func_020579f0.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
#pragma ipa file
void *func_020213e0(unsigned char *b, int k) {
    unsigned char *table  = b + 0x3c;
    unsigned short off    = *(unsigned short *) (b + 0x42);
    unsigned char *base   = b + *(unsigned int *) (b + 0x14);
    unsigned short stride = *(unsigned short *) (table + off);
    unsigned char *entry  = table + off + stride * k;
    unsigned int w        = *(unsigned int *) (entry + 4);

    return base + ((w & 0xffff) << 3);
}
