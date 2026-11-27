/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* vct_decode_adpcm_32 from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libVCT/src/vct_adpcm.c (license: none), reused
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
extern s8 data_02109018[];
extern void func_020b03f0(u8 *in, s16 *out, u32 count, AdpcmState *state);
#pragma thumb off
void func_020b03f0(u8 *in, s16 *out, u32 count, AdpcmState *state) {
    u32 i;
    for (i = 0; i < count;) {
        {
            s32 index = state->index;
            s32 code  = (in[0] >> 0) & 15;
            s32 value = state->sample;
            s16 step  = data_02109028[index];
            s32 diff  = step >> 3;
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
                value -= diff;
                if (value < -32768) {
                    value = -32768;
                }
            } else {
                value += diff;
                if (value > 32767) {
                    value = 32767;
                }
            }
            index += data_02109018[code];
            if (index < 0) {
                index = 0;
            } else if (index > 88) {
                index = 88;
            }
            {
                s16 sample    = value;
                state->sample = sample;
                state->index  = index;
                *out++        = sample;
            }
        }
        {
            s32 index = state->index;
            s32 code  = (in[0] >> 4) & 15;
            s32 value = state->sample;
            s16 step  = data_02109028[index];
            s32 diff  = step >> 3;
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
                value -= diff;
                if (value < -32768) {
                    value = -32768;
                }
            } else {
                value += diff;
                if (value > 32767) {
                    value = 32767;
                }
            }
            index += data_02109018[code];
            if (index < 0) {
                index = 0;
            } else if (index > 88) {
                index = 88;
            }
            {
                s16 sample    = value;
                state->sample = sample;
                state->index  = index;
                i++;
                *out++ = sample;
            }
        }
        in++;
    }
}
