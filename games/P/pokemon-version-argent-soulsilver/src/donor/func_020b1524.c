/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_ADPCM_EncodePacket from https://github.com/Project-Holon/aletheia src/game/ov013/vct_adpcm.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef struct AdpcmState {
    s16 predictor;
    u8 stepIndex;
} AdpcmState;
typedef struct AdpcmHeader {
    s16 predictor;
    u8 stepIndex;
    u8 zero;
} AdpcmHeader;
extern void func_020b0544(u8 *dst, s16 *src, u32 sampleCount, AdpcmState *st);
extern void func_020b0b64(u8 *dst, s16 *src, u32 sampleCount, AdpcmState *st);
extern void func_020b1288(u8 *dst, s16 *src, u32 sampleCount, AdpcmState *st);
extern void func_020b1524(AdpcmHeader *out, void *samples, int sampleCount, AdpcmState *st, int bits);
void func_020b0544(u8 *dst, s16 *src, u32 sampleCount, AdpcmState *st);
void func_020b0b64(u8 *dst, s16 *src, u32 sampleCount, AdpcmState *st);
void func_020b1288(u8 *dst, s16 *src, u32 sampleCount, AdpcmState *st);
void func_020b1524(AdpcmHeader *out, void *samples, int sampleCount, AdpcmState *st, int bits) {
    out->predictor = st->predictor;
    out->stepIndex = st->stepIndex;
    out->zero      = 0;
    switch (bits) {
        case 2:
            func_020b1288((u8 *) out + 4, samples, sampleCount, st);
            break;
        case 3:
            func_020b0b64((u8 *) out + 4, samples, sampleCount, st);
            break;
        case 4:
            func_020b0544((u8 *) out + 4, samples, sampleCount, st);
            break;
    }
}
