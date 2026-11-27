/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_AUDIO_DecodeMuLaw from https://github.com/Project-Holon/aletheia src/game/ov013/vct_audio.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
extern void func_020b2730(unsigned char *src, short *dst, unsigned int sampleCount);
void func_020b2730(unsigned char *src, short *dst, unsigned int sampleCount) {
    unsigned int i;

    for (i = 0; i < sampleCount; i++) {
        int code      = ~src[i];
        int magnitude = (((code & 0xf) << 3) + 0x84) << ((code & 0x70) >> 4);

        dst[i] = (code & 0x80) ? 0x84 - magnitude : magnitude - 0x84;
    }
}
