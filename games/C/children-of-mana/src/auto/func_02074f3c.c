/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern BOOL func_0205b780(void *queue, void *msg, s32 flags);
extern void func_0206347c(u32 chBitMask, u32 capBitMask, u32 alarmBitMask, u32 flags);
extern void func_0206323c(int a, int b, int c, int d);
extern void func_02063a4c(int flag);
extern void func_020639bc(u32 tag);
extern u32 func_0206397c(void);
extern void func_02073ca4(u32 capBitMask);
extern BOOL func_02073cc0(u32 chBitMask);
extern void func_02073c40(int alarm);
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
extern UnkMessageQueue data_02123c4c;
extern UnkSndCapture data_02123c60;
extern void func_02074f3c(void);

/* func_020742fc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_capture.c (license: none),
 * reused by tools/donor_match.py */
void func_02074f3c(void) {
    UnkSndCapture *capture = &data_02123c60;
    BOOL hasAlarm;

    if (!data_02123c60.active) {
        return;
    }

    hasAlarm = capture->alarmNo >= 0;
    func_0206347c(capture->chBitMask, capture->capBitMask, hasAlarm ? 1 << capture->alarmNo : 0, 0);

    if (hasAlarm) {
        u32 tag = func_0206397c();
        func_02063a4c(1);
        func_020639bc(tag);

        while (func_0205b780(&data_02123c4c, 0, 0)) {
        }
    }

    if (capture->capBitMask != 0) {
        func_02073ca4(capture->capBitMask);
    }
    if (capture->lockedChBitMask != 0) {
        func_02073cc0(capture->lockedChBitMask);
    }
    if (hasAlarm) {
        func_02073c40(capture->alarmNo);
    }
    if (capture->type == 1) {
        func_0206323c(0, 0, 0, 0);
    }

    capture->active = 0;
}
