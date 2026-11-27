/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NTRi_GetRegionTableSize from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/nitro/calls/NTRi_GetRegionTableSize.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
struct H {
    char _0[0x17];
    unsigned char x17;
    unsigned char x18;
};
int func_020bdfa8(const unsigned char *region, struct H *hdr) {
    int v;
    if (region == 0 || hdr == 0) {
        return 0;
    }
    switch (*region) {
        case 'M':
            v = hdr->x18 << 1;
            return (v + 0x1c) & ~3;
        case 'J':
        case 'V':
            v = hdr->x17 << 1;
            return (v + 0x1c) & ~3;
    }
    return 0;
}
