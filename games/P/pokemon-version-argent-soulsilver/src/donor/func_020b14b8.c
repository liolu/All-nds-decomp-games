/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_ADPCM_DecodePacket from https://github.com/Project-Holon/aletheia src/game/ov013/vct_adpcm.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef struct AdpcmState {
    s16 predictor;
    u8 stepIndex;
} AdpcmState;
extern void func_020b03f0(const u8 *src, s16 *dst, u32 byteCount, AdpcmState *st);
extern void func_020b06d0(const u8 *src, s16 *dst, u32 byteCount, AdpcmState *st);
extern void func_020b1070(const u8 *src, s16 *dst, u32 byteCount, AdpcmState *st);
extern void func_020b14b8(AdpcmState *hdr, void *dst, int packetBytes, int bits);
void func_020b03f0(const u8 *src, s16 *dst, u32 byteCount, AdpcmState *st);
void func_020b06d0(const u8 *src, s16 *dst, u32 byteCount, AdpcmState *st);
void func_020b1070(const u8 *src, s16 *dst, u32 byteCount, AdpcmState *st);
void func_020b14b8(AdpcmState *hdr, void *dst, int packetBytes, int bits) {
    AdpcmState st;

    st.predictor = hdr->predictor;
    st.stepIndex = hdr->stepIndex;
    switch (bits) {
        case 2:
            func_020b1070((u8 *) hdr + 4, dst, packetBytes - 4, &st);
            break;
        case 3:
            func_020b06d0((u8 *) hdr + 4, dst, packetBytes - 4, &st);
            break;
        case 4:
            func_020b03f0((u8 *) hdr + 4, dst, packetBytes - 4, &st);
            break;
    }
}
