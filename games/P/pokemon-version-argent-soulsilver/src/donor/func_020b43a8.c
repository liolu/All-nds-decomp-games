/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_DSP_InitVoiceGateDefaults from https://github.com/Project-Holon/aletheia src/game/ov013/vct_dsp.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
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
typedef enum {
    HangoverFramesDefault
} HangoverFrames;
extern void func_020b415c(void);
extern void func_020b43a8(void);
void func_020b415c(void);
#pragma opt_propagation reset
void func_020b43a8(void) {
    HangoverFrames hangover                              = 15;
    short frameBytes                                     = 68;
    (*(VoiceGateConfig *) &data_02110924).hangoverFrames = hangover;
    (*(VoiceGateConfig *) &data_02110924).hangoverBytes  = (short) hangover * frameBytes;
    func_020b415c();
}
