/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_AUDIO_ConvertPcm16ToPcm8 from https://github.com/Project-Holon/aletheia src/game/ov013/vct_audio.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
extern void func_020b2784(unsigned char *dst, short *src, unsigned int sampleCount);
void func_020b2784(unsigned char *dst, short *src, unsigned int sampleCount) {
    unsigned int i;

    for (i = 0; i < sampleCount; i++) {
        dst[i] = (signed char) (src[i] >> 8);
    }
}
