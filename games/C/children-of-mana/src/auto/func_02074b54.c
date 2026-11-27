/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02073d04 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_stream.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern u32 func_0205c948(void);
extern u32 func_0205c95c(u32 irq_flag);
typedef struct UnkList {
    void *head;
    void *tail;
    u16 numObjects;
    u16 offset;
} UnkList;
typedef struct UnkLink {
    void *prev;
    void *next;
} UnkLink;
extern void func_02064740(UnkList *list, void *obj);
extern void func_020632f4(int ch, int format, const void *data, int loop, int loopStart, int loopLen, int volume, int shift,
                          int timer, int pan);
extern void func_02063438(int alarm, u32 tick, u32 period, void (*callback)(void *), void *arg);
extern int func_02073c60(void);
typedef struct UnkSleepCallbackInfo {
    void (*func)(void *);
    void *arg;
    struct UnkSleepCallbackInfo *next;
} UnkSleepCallbackInfo;
typedef void (*UnkStrmCallback)(int status, int chNum, void **buffer, u32 len, int format, void *arg);
typedef struct UnkSndStrm {
    UnkLink link;
    UnkSleepCallbackInfo preSleepInfo;
    UnkSleepCallbackInfo postSleepInfo;
    int format;
    BOOL active : 1;
    BOOL started : 1;
    u32 bufSize;
    int interval;
    UnkStrmCallback callback;
    void *arg;
    int curBlock;
    int volume;
    int alarmNo;
    u32 chBitMask;
    int chNum;
    u8 chNo[16];
} UnkSndStrm;
typedef struct UnkSndStrmChannel {
    u8 *bufAddr;
    int volume;
} UnkSndStrmChannel;
extern UnkList data_02123b7c;
extern UnkSndStrmChannel data_02123bc8[16];
extern void func_02074ac8(UnkSndStrm *strm);
extern void func_020748ec(void *arg);
extern void func_02074834(UnkSndStrm *strm, int status);
BOOL func_02074b54(UnkSndStrm *strm, int format, u8 *buffer, u32 bufSize, int timer, int interval, UnkStrmCallback callback,
                   void *arg) {
    u32 len;
    u32 period;
    int i;
    int irq;

    if (strm->active) {
        func_02074ac8(strm);
    }

    bufSize       = bufSize / (strm->chNum * (interval * 32));
    strm->bufSize = bufSize * interval * 32;

    len = strm->bufSize;
    if (format == 1) {
        len >>= 1;
    }
    period = timer * len / interval;

    strm->alarmNo = func_02073c60();
    if (strm->alarmNo < 0) {
        return 0;
    }

    for (i = 0; i < strm->chNum; i++) {
        int chNo              = strm->chNo[i];
        UnkSndStrmChannel *ch = &data_02123bc8[chNo];

        ch->bufAddr = buffer + strm->bufSize * i;
        ch->volume  = 0;
        func_020632f4(chNo, format, ch->bufAddr, 1, 0, strm->bufSize >> 2, 0x7F, 0, timer * 32, 0x40);
    }

    func_02063438(strm->alarmNo, period, period, func_020748ec, strm);
    func_02064740(&data_02123b7c, strm);

    strm->format   = format;
    strm->interval = interval;
    strm->callback = callback;
    strm->arg      = arg;
    strm->curBlock = 0;
    strm->volume   = 0;
    strm->active   = 1;

    irq            = func_0205c948();
    strm->interval = 1;
    func_02074834(strm, 0);
    strm->interval = interval;
    func_0205c95c(irq);

    return 1;
}
void func_02074ac8(UnkSndStrm *strm);
void func_020748ec(void *arg);
void func_02074834(UnkSndStrm *strm, int status);
