/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
extern void func_02067be8(u32 data, void *dest, u32 size);
extern void func_0206633c(void *ptr, u32 size);
extern void func_020684fc(u32 chBitMask, u32 capBitMask, u32 alarmBitMask, u32 flags);
typedef struct UnkSndFader {
    s32 origin;
    s32 target;
    s32 counter;
    s32 frames;
} UnkSndFader;
typedef void (*UnkCaptureCallback)(void *buf0, void *buf1, u32 size, int format, void *arg);
typedef struct UnkSndCapture {
    BOOL active;
    int type;
    int format;
    void *buf0;
    void *buf1;
    u32 bufSize;
    u32 unk_18;
    u32 unk_1c;
    u32 lockedChBitMask;
    u32 chBitMask;
    u32 capBitMask;
    int alarmNo;
    u32 unk_30;
    UnkCaptureCallback callback;
    void *arg;
    UnkSndFader fader;
    BOOL stopAfterFade;
    int volume;
} UnkSndCapture;
extern UnkSndCapture data_020eb1b0;

/* func_0207444c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_capture.c (license: none),
 * reused by tools/donor_match.py */
void func_02076564(void) {
    UnkSndCapture *capture = &data_020eb1b0;

    if (!data_020eb1b0.active) {
        return;
    }

    capture->unk_1c = 0;
    func_02067be8(0, capture->buf0, capture->bufSize);
    func_02067be8(0, capture->buf1, capture->bufSize);
    func_0206633c(capture->buf0, capture->bufSize);
    func_0206633c(capture->buf1, capture->bufSize);

    func_020684fc(capture->chBitMask, capture->capBitMask, capture->alarmNo >= 0 ? 1 << capture->alarmNo : 0, 0);
}
