/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern BOOL func_02065ef8(void *queue, void *msg, s32 flags);
extern void func_0206848c(u32 chBitMask, u32 capBitMask, u32 alarmBitMask, u32 flags);
extern void func_02068234(int a, int b, int c, int d);
extern void func_02068a5c(int flag);
extern void func_020689cc(u32 tag);
extern u32 func_0206898c(void);
extern void func_020752f8(u32 capBitMask);
extern BOOL func_02075338(u32 chBitMask);
extern void func_02075294(int alarm);
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
typedef struct UnkMessageQueue {
    u8 unk_00[0x20];
} UnkMessageQueue;
extern UnkMessageQueue data_020eb190;
extern UnkSndCapture data_020eb1b0;
extern void func_02076648(void);

/* func_020742fc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_capture.c (license: none),
 * reused by tools/donor_match.py */
void func_02076648(void) {
    UnkSndCapture *capture = &data_020eb1b0;
    BOOL hasAlarm;

    if (!data_020eb1b0.active) {
        return;
    }

    hasAlarm = capture->alarmNo >= 0;
    func_0206848c(capture->chBitMask, capture->capBitMask, hasAlarm ? 1 << capture->alarmNo : 0, 0);

    if (hasAlarm) {
        u32 tag = func_0206898c();
        func_02068a5c(1);
        func_020689cc(tag);

        while (func_02065ef8(&data_020eb190, 0, 0)) {
        }
    }

    if (capture->capBitMask != 0) {
        func_020752f8(capture->capBitMask);
    }
    if (capture->lockedChBitMask != 0) {
        func_02075338(capture->lockedChBitMask);
    }
    if (hasAlarm) {
        func_02075294(capture->alarmNo);
    }
    if (capture->type == 1) {
        func_02068234(0, 0, 0, 0);
    }

    capture->active = 0;
}
