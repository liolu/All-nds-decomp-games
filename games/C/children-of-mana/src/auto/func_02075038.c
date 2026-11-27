/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNSi_SndCaptureMain from https://github.com/RonyxDumb/mkds src/arm9/0212c9d4_func_0212c9d4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
typedef enum {
    SND_CHANNEL_DATASHIFT_NONE,
    SND_CHANNEL_DATASHIFT_1BIT,
    SND_CHANNEL_DATASHIFT_2BIT,
    SND_CHANNEL_DATASHIFT_4BIT
} SNDChannelDataShift;
extern void func_02063378(u32 chBitMask, int volume, SNDChannelDataShift shift);
typedef enum {
    NNS_SND_CAPTURE_FORMAT_PCM16,
    NNS_SND_CAPTURE_FORMAT_PCM8
} NNSSndCaptureFormat;
typedef enum {
    NNS_SND_CAPTURE_TYPE_REVERB,
    NNS_SND_CAPTURE_TYPE_EFFECT,
    NNS_SND_CAPTURE_TYPE_SAMPLING
} NNSSndCaptureType;
typedef void (*NNSSndCaptureCallback)(void *bufferL, void *bufferR, u32 len, NNSSndCaptureFormat format, void *arg);
extern void func_02075038(void);
extern void func_02074f3c(void);
typedef struct NNSSndFader {
    int origin;
    int target;
    int counter;
    int frame;
} NNSSndFader;
extern int func_02076e30(const NNSSndFader *fader);
extern void func_02076e18(NNSSndFader *fader);
extern BOOL func_02076e00(const NNSSndFader *fader);
typedef struct CaptureParam {
    BOOL activeFlag;
    NNSSndCaptureType type;
    NNSSndCaptureFormat format;
    void *bufferL;
    void *bufferR;
    u32 bufLen;
    u32 blockSize;
    int curBuffer;
    u32 chBitMask;
    u32 playChBitMask;
    u32 capBitMask;
    int alarmNo;
    int interval;
    NNSSndCaptureCallback callback;
    void *callbackArg;
    NNSSndFader fader;
    BOOL fadeOutFlag;
    int volume;
} CaptureParam;
extern CaptureParam data_02123c60;
void func_02075038(void) {
    CaptureParam *cap;
    NNSSndFader *fader;
    int volume;

    cap = &data_02123c60;

    if (cap->activeFlag && cap->type == NNS_SND_CAPTURE_TYPE_REVERB) {
        fader = &cap->fader;

        func_02076e18(fader);

        if (cap->fadeOutFlag) {
            if (func_02076e00(fader)) {
                func_02074f3c();
                return;
            }
        }

        volume = (func_02076e30(fader) >> 8);

        if (volume != cap->volume) {
            func_02063378(cap->playChBitMask, volume, SND_CHANNEL_DATASHIFT_NONE);

            cap->volume = volume;
        }
    }
}
void func_02074f3c(void);
