/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PMi_SendLEDPatternCommandAsync from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSDK/src/pm.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
typedef enum {
    PM_AMP_OFF = 0,
    PM_AMP_ON  = 1
} PMAmpSwitch;
typedef void (*PmCallback)(u32 result, void *arg);
typedef struct PmSleepCallbackInfo {
    void (*func)(void *arg);
    void *arg;
    struct PmSleepCallbackInfo *next;
} PmSleepCallbackInfo;
typedef struct PmWork {
    u16 init;
    u16 unk_02;
    volatile BOOL sleepReady;
    BOOL unk_08;
    PmSleepCallbackInfo *preSleep;
    u32 lcdOffVBlankCount;
    PMAmpSwitch amp;
    PmSleepCallbackInfo *postSleep;
    volatile BOOL lock;
    PmCallback callback;
    void *callbackArg;
    u32 *ledPattern;
} PmWork;
extern PmWork data_021e372c;
extern BOOL func_020dad24(void);
extern void func_020db410(u32 data);
extern u32 func_020db7b0(u32 pattern, PmCallback callback, void *arg);
BOOL func_020dad24(void);
void func_020db410(u32 data);
u32 func_020db7b0(u32 pattern, PmCallback callback, void *arg) {
    if (!func_020dad24()) {
        return 1;
    }
    data_021e372c.callback    = callback;
    data_021e372c.callbackArg = arg;
    func_020db410((pattern & 0xFF) | 0x6600 | 0x3000000);
    return 0;
}
