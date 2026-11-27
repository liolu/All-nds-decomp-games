/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_MIXER_SetSendEnabled from https://github.com/Project-Holon/aletheia src/game/ov013/vct_mixer.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct VctSendState {
    u16 sequence;
    u8 pad2[2];
    u32 memberMask;
    volatile u32 markerRequestNoVad;
    u32 packetBytes;
    u16 adpcmPredictor;
    u8 adpcmStepIndex;
    u8 pad13;
    volatile u32 markerRequest;
    u32 echoSuppressEnabled;
    int codecMode;
    int memberCount;
    u32 frameBytes;
    int lastGateResult;
} VctSendState;
extern VctSendState data_021d6060;
extern int data_021108f8;
extern void func_020b415c(void);
extern void func_020b1d6c(int enabled);
void func_020b1d6c(int enabled) {
    data_021108f8 = enabled;
    func_020b415c();
    if (enabled == 0) {
        data_021d6060.markerRequestNoVad = 1;
    }
}
