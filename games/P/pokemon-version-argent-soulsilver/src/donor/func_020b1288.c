/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_ADPCM_Encode2Bit from https://github.com/Project-Holon/aletheia src/game/ov013/vct_adpcm.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed char s8;
typedef signed short s16;
typedef struct AdpcmState {
    s16 predictor;
    u8 stepIndex;
} AdpcmState;
extern void func_020b1288(u8 *dst, s16 *src, u32 sampleCount, AdpcmState *st);
extern const s16 data_02109028[89];
extern const s8 data_0210900c[4];
static inline u8 Adpcm2EncodeSample(AdpcmState *st, int sample) {
    int predicted;
    int stepIndex;
    int diff;
    int code;
    int delta;
    int newPred;
    stepIndex = st->stepIndex;
    predicted = st->predictor;
    diff      = sample - predicted;
    if (diff < 0) {
        code = 2;
        diff = -diff;
    } else {
        code = 0;
    }
    if (diff >= data_02109028[stepIndex]) {
        code |= 1;
    }
    delta = data_02109028[stepIndex];
    if (!(code & 1)) {
        delta = 0;
    }
    if (code & 2) {
        delta = -delta;
    }
    newPred = predicted + delta;
    if (newPred < -32768) {
        newPred = -32768;
    }
    if (newPred > 32767) {
        newPred = 32767;
    }
    stepIndex += data_0210900c[code];
    if (stepIndex < 0) {
        stepIndex = 0;
    } else if (stepIndex > 88) {
        stepIndex = 88;
    }
    st->predictor = (s16) newPred;
    st->stepIndex = stepIndex;
    return code;
}
void func_020b1288(u8 *dst, s16 *src, u32 sampleCount, AdpcmState *st) {
    u32 i;
    u8 packed;
    for (i = 0; i < sampleCount / 4; i++) {
        packed = Adpcm2EncodeSample(st, *src++);
        packed |= Adpcm2EncodeSample(st, *src++) << 2;
        packed |= Adpcm2EncodeSample(st, *src++) << 4;
        packed |= Adpcm2EncodeSample(st, *src++) << 6;
        *dst++ = packed;
    }
}
