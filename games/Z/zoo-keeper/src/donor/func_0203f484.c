/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* UI_GetInputMode from https://github.com/Project-Holon/aletheia src/game/arm9/ui.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef struct TPData {
    u16 x;
    u16 y;
    u16 touch;
    u16 validity;
} TPData;
typedef struct {
    u8 pad00[0x0C];
    TPData autoSampleBuf[9];
    u8 pad54[4];
    u16 autoSampleMode;
    u16 autoSampleStopped;
    u16 x;
    u16 y;
    u16 trg;
    u16 cont;
    u16 x30;
    u16 y30;
    u16 trg30;
    u16 cont30;
    u16 pendX;
    u16 pendY;
    u16 pendTrg;
    u16 pendCont;
    u8 autoSampleActive;
    u8 autoSampleFreq;
    u8 autoSampleIndex;
    u8 pad77[5];
} TouchPanelWork;
typedef struct {
    u32 srcKey;
    u32 dstKey;
    u8 kind;
    u8 pad09[3];
} KeyConvEntry;
typedef struct {
    const KeyConvEntry *controlModeTable;
    u32 controlModeCount;
    u32 controlMode;
    u32 rawCont;
    u32 rawTrg;
    u32 rawRepeat;
    u32 cont;
    u32 trg;
    u32 repeat;
    u32 cont30;
    u32 trg30;
    u32 repeat30;
    u32 pendCont;
    u32 pendTrg;
    u32 pendRepeat;
    s32 repeatCounter;
    s32 repeatSpeed;
    s32 repeatWait;
    u32 pad48;
} KeyWork;
typedef void (*UiCb)(void *);
typedef int (*UiPred)(void *);
typedef void (*UiIntrFunc)(void *arg);
typedef struct UiCtx {
    KeyWork *keyWork;
    TouchPanelWork *tpWork;
    UiIntrFunc intrData;
    void *intrArg;
    UiCb onWake;
    UiCb onSleep;
    UiCb onResume;
    UiCb onSuspend;
    UiCb onWakePowered;
    UiPred keepAwakePred;
    void *sleepWakeArg;
    void *suspendResumeArg;
    void *wakePoweredArg;
    void *keepAwakeArg;
    u8 keepAwakeFlags;
    u8 softResetInhibit;
    u8 reserved3A;
    u8 backlightState;
    u8 inputMode;
    u8 frameRate;
    u8 frameCounter;
    u8 powerState;
    u8 mode;
    u8 resumeArmed;
    u8 reserved42;
    u8 suspended;
} UiCtx;
typedef struct {
    u16 keyParam0;
    u16 keyParam1;
    u16 keyParam2;
    u16 touchX;
    u16 touchY;
    u8 touchFlagA;
    u8 touchFlagB;
} UiInputCorner;
typedef struct {
    UiCtx *ctx;
    int (*getInputBounds)(UiInputCorner *lower, UiInputCorner *upper);
} UiState;
extern UiState data_0206a0f0;
extern u8 func_0203f484(void);
u8 func_0203f484(void) {
    return data_0206a0f0.ctx->inputMode;
}
