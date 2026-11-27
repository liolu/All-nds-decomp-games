/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_DSP_InitEchoState from https://github.com/Project-Holon/aletheia src/game/ov013/vct_dsp.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
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
extern void func_020b44bc(void);
extern struct EchoState data_021d7028;
extern s16 data_02110934[];
extern s16 data_021d74ac[];
extern int data_021d7054[];
extern int data_021d703c[];
void func_020b44bc(void) {
    int i;
    s16 *defaultCoeffs;

    defaultCoeffs                = data_02110934;
    data_021d7028.ringWriteIndex = 0;
    data_021d7028.ringReadIndex  = 0x19D;
    for (i = 0; i < 0x800; i++) {
        data_021d74ac[i] = 0;
    }
    for (i = 0; i < 6; i++) {
        data_021d7054[i] = 0;
        data_021d703c[i] = defaultCoeffs[i];
    }
}
