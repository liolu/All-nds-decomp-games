/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_DSP_HighPassFilter from https://github.com/Project-Holon/aletheia src/game/ov013/vct_dsp.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
struct EchoState {
    s16 attenuationShift;
    s16 pad2;
    s32 highPassPrevInput;
    s32 ringReadIndex;
    s32 ringWriteIndex;
    s32 highPassPrevOutput;
    s32 firCoeffs[6];
    s32 firDelay[6];
    u8 reserved44[0x440];
    s16 ringBuf[2048];
};
extern s32 func_020b43d0(s16 *samples, u32 byteCount);
extern struct EchoState data_021d7028;
static inline void CP_WaitDiv(void) {
    while ((*(volatile u16 *) 0x04000280) & 0x8000) {
    }
}
s32 func_020b43d0(s16 *samples, u32 length) {
    s32 prevInput;
    u32 i;
    s64 energy;
    s32 output;
    s32 scaled;

    scaled = samples[0] * 0xE9F;
    output = (scaled + data_021d7028.highPassPrevInput + data_021d7028.highPassPrevOutput * 0xD3E) >> 12;
    data_021d7028.highPassPrevOutput = output;
    data_021d7028.highPassPrevInput = prevInput = -scaled;
    energy                                      = output * output;
    length >>= 1;
    i = 1;
    if (length > 1) {
        do {
            scaled         = samples[i] * 0xE9F;
            samples[i - 1] = output;
            output         = (scaled + prevInput + output * 0xD3E) >> 12;
            energy += output * output;
            prevInput = -scaled;
        } while (++i < length);
        data_021d7028.highPassPrevInput  = prevInput;
        data_021d7028.highPassPrevOutput = output;
    }
    (samples + length)[-1]         = output;
    (*(volatile u16 *) 0x04000280) = 1;
    (*(u64 *) 0x04000290)          = energy;
    (*(u64 *) 0x04000298)          = length;
    CP_WaitDiv();
    return (*(volatile u32 *) 0x040002A0);
}
