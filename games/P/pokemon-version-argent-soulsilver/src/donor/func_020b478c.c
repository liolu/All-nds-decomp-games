/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_DSP_MixSaturated from https://github.com/Project-Holon/aletheia src/game/ov013/vct_dsp.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern void func_020b478c(s16 *srcA, s16 *srcB, s16 *dst, u32 byteCount);
void func_020b478c(s16 *srcA, s16 *srcB, s16 *dst, u32 byteCount) {
    u32 i;
    u32 count;
    s32 sum;

    count = byteCount >> 1;
    for (i = 0; i < count; i += 4) {
        sum = srcA[i] + srcB[i];
        if (sum > 0x7fff) {
            sum = 0x7fff;
        } else if (sum < -0x8000) {
            sum = -0x8000;
        }
        dst[i] = sum;
        sum    = srcA[i + 1] + srcB[i + 1];
        if (sum > 0x7fff) {
            sum = 0x7fff;
        } else if (sum < -0x8000) {
            sum = -0x8000;
        }
        dst[i + 1] = sum;
        sum        = srcA[i + 2] + srcB[i + 2];
        if (sum > 0x7fff) {
            sum = 0x7fff;
        } else if (sum < -0x8000) {
            sum = -0x8000;
        }
        dst[i + 2] = sum;
        sum        = srcA[i + 3] + srcB[i + 3];
        if (sum > 0x7fff) {
            sum = 0x7fff;
        } else if (sum < -0x8000) {
            sum = -0x8000;
        }
        dst[i + 3] = sum;
    }
}
