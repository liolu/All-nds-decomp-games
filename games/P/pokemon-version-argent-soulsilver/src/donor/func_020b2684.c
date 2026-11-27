/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_AUDIO_EncodeMuLaw from https://github.com/Project-Holon/aletheia src/game/ov013/vct_audio.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
extern void func_020b2684(unsigned char *dst, const short *src, unsigned int sampleCount);
extern const int data_021108fc[8];
void func_020b2684(unsigned char *dst, const short *src, unsigned int sampleCount) {
    unsigned int i;

    for (i = 0; i < sampleCount; i++) {
        int sample, segment, code;
        unsigned char signMask;
        const int *segmentEnd;

        sample = src[i] >> 2;
        if (sample < 0) {
            signMask = 0x7f;
            sample   = -sample;
        } else {
            signMask = 0xff;
        }
        if (sample > 8159) {
            sample = 8159;
        }
        segmentEnd = data_021108fc;
        for (segment = 0; segment < 8; segment++) {
            if (sample + 0x21 <= *segmentEnd++) {
                goto found;
            }
        }
        segment = 8;
    found:
        if (segment >= 8) {
            dst[i] = 0x7f ^ signMask;
        } else {
            code   = (segment << 4) | (((sample + 0x21) >> (segment + 1)) & 0xf);
            dst[i] = code ^ signMask;
        }
    }
}
