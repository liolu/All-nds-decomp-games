/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* vct_encode_adpcm_24 from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libVCT/src/vct_adpcm.c (license: none), reused
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
extern s8 data_02109010[];
extern void func_020b0b64(u8 *out, const s16 *in, u32 size, AdpcmState *state);
static inline u8 EncodeSample3(const s16 *in, AdpcmState *state) {
    s32 previous, step, index, diff, code, sample;
    previous = state->sample;
    diff     = *in - previous;
    index    = state->index;
    if (diff < 0) {
        code = 4;
        diff = -diff;
    } else {
        code = 0;
    }
    step = data_02109028[index];
    if (diff >= step) {
        code |= 2;
        diff -= step;
    }
    if (diff >= (step >> 1)) {
        code |= 1;
    }
    diff = step >> 2;
    if (code & 2) {
        diff += step;
    }
    if (code & 1) {
        diff += step >> 1;
    }
    if (code & 4) {
        diff = -diff;
    }
    sample = previous + diff;
    if (sample < -32768) {
        sample = -32768;
    }
    if (sample > 32767) {
        sample = 32767;
    }
    index += data_02109010[code];
    if (index < 0) {
        index = 0;
    } else if (index > 88) {
        index = 88;
    }
    state->sample = (s16) sample;
    state->index  = index;
    return code;
}
void func_020b0b64(u8 *out, const s16 *in, u32 size, AdpcmState *state) {
    u32 i;
    for (i = 0; i < size / 8; i++) {
        u8 c0, c1, c2, c3, c4, c5, c6, c7, t;
        c0 = EncodeSample3(in++, state);
        t  = c0 << 5;
        c1 = EncodeSample3(in++, state);
        t |= c1 << 2;
        c2     = EncodeSample3(in++, state);
        out[0] = t | (c2 >> 1);
        c3     = EncodeSample3(in++, state);
        t      = c3 << 4;
        c4     = EncodeSample3(in++, state);
        t |= c4 << 1;
        c5     = EncodeSample3(in++, state);
        out[1] = (c2 << 7) | t | (c5 >> 2);
        c6     = EncodeSample3(in++, state);
        t      = c6 << 3;
        c7     = EncodeSample3(in++, state);
        t |= c7;
        out[2] = (c5 << 6) | t;
        out += 3;
    }
}
