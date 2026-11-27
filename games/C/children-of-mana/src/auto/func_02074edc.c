/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
extern void func_0206347c(u32 chBitMask, u32 capBitMask, u32 alarmBitMask, u32 flags);
extern void func_02063a4c(int flag);
extern void func_020639bc(u32 tag);
extern u32 func_0206397c(void);
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
extern UnkSndCapture data_02123c60;

/* func_020743ec from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_capture.c (license: none),
 * reused by tools/donor_match.py */
void func_02074edc(void) {
    UnkSndCapture *capture = &data_02123c60;
    u32 tag;

    if (!data_02123c60.active) {
        return;
    }

    func_0206347c(capture->chBitMask, capture->capBitMask, capture->alarmNo >= 0 ? 1 << capture->alarmNo : 0, 0);

    tag = func_0206397c();
    func_02063a4c(1);
    func_020639bc(tag);
}
