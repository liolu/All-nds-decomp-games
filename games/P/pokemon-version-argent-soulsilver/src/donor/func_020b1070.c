/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* vct_decode_adpcm_16 from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libVCT/src/vct_adpcm.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef signed char s8;
typedef signed short int s16;
typedef signed long s32;
typedef struct AdpcmState {
    s16 sample;
    u8 index;
    u8 padding;
} AdpcmState;
extern s16 data_02109028[];
extern s8 data_0210900c[];
extern void func_020b1070(u8 *in, s16 *out, u32 count, AdpcmState *state);
static inline s16 DecodeSample2(int code, AdpcmState *state) {
    s32 previous = state->sample, index = state->index, step = data_02109028[index];
    if (!(code & 1)) {
        step = 0;
    }
    if (code & 2) {
        previous -= step;
        if (previous < -32768) {
            previous = -32768;
        }
    } else {
        previous += step;
        if (previous > 32767) {
            previous = 32767;
        }
    }
    index += data_0210900c[code];
    if (index < 0) {
        index = 0;
    } else if (index > 88) {
        index = 88;
    }
    state->sample = (s16) previous;
    state->index  = index;
    return (s16) previous;
}
void func_020b1070(u8 *in, s16 *out, u32 count, AdpcmState *state) {
    int i;
    for (i = 0; i < count; i++) {
        *out++ = DecodeSample2(*in & 3, state);
        *out++ = DecodeSample2((*in >> 2) & 3, state);
        *out++ = DecodeSample2((*in >> 4) & 3, state);
        *out++ = DecodeSample2((*in >> 6) & 3, state);
        in++;
    }
}
