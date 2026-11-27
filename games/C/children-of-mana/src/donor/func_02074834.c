/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02074064 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_stream.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkLink {
    void *prev;
    void *next;
} UnkLink;
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
extern void *data_02123b88[16];
extern UnkSndStrmChannel data_02123bc8[16];
extern void func_02074834(UnkSndStrm *strm, int status);
void func_02074834(UnkSndStrm *strm, int status) {
    u32 len              = strm->bufSize / strm->interval;
    unsigned long offset = len * strm->curBlock;
    int i;

    for (i = 0; i < strm->chNum; i++) {
        data_02123b88[i] = data_02123bc8[strm->chNo[i]].bufAddr + offset;
    }

    strm->callback(status, strm->chNum, data_02123b88, len, strm->format, strm->arg);

    if (++strm->curBlock >= strm->interval) {
        strm->curBlock = 0;
    }
}
