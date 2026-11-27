/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* vct_encode_adpcm_32 from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libVCT/src/vct_adpcm.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef signed char s8;
typedef signed short int s16;
typedef struct AdpcmState {
    s16 sample;
    u8 index;
    u8 padding;
} AdpcmState;
extern s16 data_02109028[];
extern s8 data_02109018[];
extern void func_020b0544(u8 *out, const s16 *in, u32 count, AdpcmState *state);
static inline u8 EncodeSample4(const s16 *in, AdpcmState *state) {
    int index;
    int code;
    int diff;
    int step;
    int delta;
    int sample;
    delta = *in - state->sample;
    index = state->index;
    if (delta < 0) {
        code  = 8;
        delta = -delta;
    } else {
        code = 0;
    }
    step = data_02109028[index];
    if (delta >= step) {
        code |= 4;
        delta -= step;
    }
    if (delta >= (step >> 1)) {
        code |= 2;
        delta -= step >> 1;
    }
    if (delta >= (step >> 2)) {
        code |= 1;
    }
    diff = step >> 3;
    if (code & 4) {
        diff += step;
    }
    if (code & 2) {
        diff += step >> 1;
    }
    if (code & 1) {
        diff += step >> 2;
    }
    if (code & 8) {
        diff = -diff;
    }
    sample = state->sample + diff;
    if (sample < -32768) {
        sample = -32768;
    }
    if (sample > 32767) {
        sample = 32767;
    }
    index += data_02109018[code];
    if (index < 0) {
        index = 0;
    } else if (index > 88) {
        index = 88;
    }
    state->sample = sample;
    state->index  = index;
    return code;
}
void func_020b0544(u8 *out, const s16 *in, u32 count, AdpcmState *state) {
    u32 i;
    for (i = 0; i < count >> 1; i++) {
        u8 c0, c1;
        c0     = EncodeSample4(in++, state);
        c1     = EncodeSample4(in++, state);
        *out++ = c0 | (c1 << 4);
    }
}
