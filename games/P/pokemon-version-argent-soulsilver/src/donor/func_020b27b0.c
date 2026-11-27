/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_AUDIO_ConvertPcm8ToPcm16 from https://github.com/Project-Holon/aletheia src/game/ov013/vct_audio.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
extern void func_020b27b0(signed char *src, short *dst, unsigned int sampleCount, int mode);
void func_020b27b0(signed char *src, short *dst, unsigned int sampleCount, int mode) {
    unsigned int i;

    for (i = 0; i < sampleCount; i++) {
        dst[i] = (short) (src[i] << 8);
    }
}
