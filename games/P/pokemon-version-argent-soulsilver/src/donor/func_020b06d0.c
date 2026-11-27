/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* vct_decode_adpcm_24 from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libVCT/src/vct_adpcm.c (license: none), reused
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
extern void func_020b06d0(u8 *in, s16 *out, u32 size, AdpcmState *state);
static inline s16 DecodeSample3(int code, AdpcmState *state) {
    s32 previous = state->sample, index = state->index, step = data_02109028[index], diff = step >> 2;
    if (code & 2) {
        diff += step;
    }
    if (code & 1) {
        diff += step >> 1;
    }
    if (code & 4) {
        previous -= diff;
        if (previous < -32768) {
            previous = -32768;
        }
    } else {
        previous += diff;
        if (previous > 32767) {
            previous = 32767;
        }
    }
    index += data_02109010[code];
    if (index < 0) {
        index = 0;
    } else if (index > 88) {
        index = 88;
    }
    state->sample = (s16) previous;
    state->index  = index;
    return (s16) previous;
}
void func_020b06d0(u8 *in, s16 *out, u32 size, AdpcmState *state) {
    u32 i;
    for (i = 0; i < size / 3; i++) {
        u8 a = in[0], b = in[1], c = in[2];
        out[0] = DecodeSample3(a >> 5, state);
        out[1] = DecodeSample3((a >> 2) & 7, state);
        out[2] = DecodeSample3(((a << 1) & 7) | (b >> 7), state);
        out[3] = DecodeSample3((b >> 4) & 7, state);
        out[4] = DecodeSample3((b >> 1) & 7, state);
        out[5] = DecodeSample3(((b << 2) & 7) | (c >> 6), state);
        out[6] = DecodeSample3((c >> 3) & 7, state);
        out[7] = DecodeSample3(c & 7, state);
        in += 3;
        out += 8;
    }
}
