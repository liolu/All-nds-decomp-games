/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* _Z20__DecodeSignedNumberPcPl from projets/battle-of-giants-dinosaurs/src/auto/_Z20__DecodeSignedNumberPcPl.c (same code in
 * another game of this workspace), reused by tools/donor_match.py */
#pragma cplusplus off
#pragma ipa file
#pragma ipa file
unsigned char *_Z20__DecodeSignedNumberPcPl(unsigned char *p, int *out) {
    int b0 = (signed char) p[0];
    if ((b0 & 1) == 0) {
        *out = b0 >> 1;
        return p + 1;
    }
    {
        unsigned int b1 = p[1];
        if ((b0 & 2) == 0) {
            *out = b1 | ((b0 >> 2) << 8);
            return p + 2;
        }
        {
            unsigned int b2 = p[2];
            if ((b0 & 4) == 0) {
                *out = ((b0 >> 3) << 16) | (b1 << 8) | b2;
                return p + 3;
            }
            {
                unsigned int b3 = p[3];
                *out            = ((b0 >> 3) << 24) | (b1 << 16) | (b2 << 8) | b3;
                return p + 4;
            }
        }
    }
}
