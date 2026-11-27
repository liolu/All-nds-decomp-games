/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_DSP_ResetVoiceGate from https://github.com/Project-Holon/aletheia src/game/ov013/vct_dsp.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef struct VoiceGateConfig {
    volatile u32 voiceActive;
    u32 lastLevel;
    s32 hangoverFrames;
    s32 hangoverBytes;
} VoiceGateConfig;
extern u8 data_02110924;
typedef struct VoiceGateState {
    volatile u32 threshold;
    u32 ringIndex;
    s32 quietFrames;
} VoiceGateState;
extern void func_020b415c(void);
extern u32 data_021d7018[];
extern VoiceGateState data_021d700c;
void func_020b415c(void) {
    int i;
    for (i = 0; i < 4; i++) {
        data_021d7018[i] = 0x1000000;
    }
    data_021d700c.ringIndex                           = 0;
    data_021d700c.threshold                           = 0;
    (*(VoiceGateConfig *) &data_02110924).voiceActive = 0;
    (*(VoiceGateConfig *) &data_02110924).lastLevel   = 0;
    data_021d700c.quietFrames                         = 0;
}
