/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_ProcessMinComplete from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/match_browse.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef int BOOL;
typedef u64 OSTick;
extern OSTick OS_GetTick(void);
typedef struct MatchTimer {
    u8 active;
    u8 wanted;
    u8 retries;
    u8 unk_03;
    u32 timeout;
    u32 mask;
    u32 all;
    u64 start;
    u64 last;
} MatchTimer;
typedef struct MatchRequest {
    u8 flag;
    u8 retries;
    u16 port;
    u32 address;
    int active;
} MatchRequest;
typedef struct MatchWork {
    void *gpConnection;
    void **peer;
    void *callback;
    u8 flag;
    u8 players;
    u8 aidCount;
    u8 unk_0F;
    void *reporting;
    volatile u8 connections;
    u8 mode;
    u8 limit;
    u8 newPeerPending;
    u8 qr2ShutdownPending;
    u8 unk_19;
    u16 port;
    u32 addr;
    u32 newPeerProfile;
    u32 addresses[32];
    u16 ports[32];
    void *list;
    int searchWait;
    u64 searchWaitTick;
    int profiles[32];
    u64 pending;
    u8 retryCount;
    u8 matchRetryCount;
    u16 cookieRandom;
    int retryProfile;
    u64 retryTick;
    u64 waitTick;
    MatchRequest request;
    int state;
    u8 initial;
    u8 current;
    u8 unk_1A6;
    u8 nextServerRetries;
    u8 closeState;
    u8 cancelling;
    u8 reservationRetries;
    u8 readyRetries;
    u8 closeRetries;
    u8 serverPollCount;
    u8 stopPending;
    u8 unk_1AF;
    u16 maxSize;
    u16 closeDelay;
    u16 remotePort;
    u16 unk_1B6;
    u32 remoteAddr;
    int active;
    u64 activeTick;
    u32 delay;
    u64 time;
    u32 readyMask;
    u32 closeMask;
    u32 friendCheckMask;
    u64 readyTick;
    u64 closeTick;
    u64 restartWaitTick;
    u64 serverPollTick;
    u32 identity;
    int target;
    u32 nextServerProfile;
    int eventPeerProfile;
    u32 addr2[32];
    u16 port2[32];
    u8 aids[32];
    u32 aidMask;
    const char *gameName;
    const char *secretKey;
    struct DwcAccData *friends;
    u32 unk_300;
    u8 friendIds[64];
    int friendCount;
    u32 serverPeerCount;
    u32 serverPeerProfiles[32];
    u8 sentCommand;
    u8 commandRetries;
    u16 commandPort;
    u32 commandAddr;
    u8 commandData[0x80];
    u32 commandProfile;
    u32 commandSize;
    u64 commandTick;
    void (*errorCallback)(int kind, int unk_01, BOOL unk_02, BOOL isServer, int unk_04, void *param);
    void *errorParam;
    void (*newPeerCallback)(int friendIndex, void *param);
    void *newPeerParam;
    int (*evalCallback)(int index, void *param);
    void *evalParam;
    void (*stopCallback)(void *param);
    void *stopParam;
} MatchWork;
typedef struct MatchGlobal {
    MatchTimer *timer;
    MatchWork *work;
    char *filter;
    int deferred;
    int updating;
    int freeBrowser;
    int busy;
    u8 scConnectBlock;
    u8 scConnectBlocked;
    u16 unk_1E;
} MatchGlobal;
extern MatchGlobal data_0210e8e0;
extern MatchWork *func_02059234(void);
extern void func_02059244(int state);
extern void func_02057a98(int flag);
extern void func_02057b08(void);
extern int func_02055940();
extern int func_02055b28(int mode, BOOL same, int previous);
extern int func_02055ec8(int profile);
extern void func_020562dc(unsigned action);
extern void func_02056bc0(int mode);
extern void func_02056e24(void);
extern void func_020540d0(int, int, u32, u16, int, int);
extern u32 func_02057a0c(int flag);
extern void func_02057a98(int flag);
extern void func_02057b08(void);
u32 func_02057a0c(int flag);
void func_02057a98(int flag);
void func_02057b08(void) {
    MatchTimer *s;
    int retries, i;
    u32 mask;
    u64 elapsed;
    if (!data_0210e8e0.timer || !data_0210e8e0.timer->active) {
        return;
    }
    if (func_02059234()->mode == 2) {
        return;
    }
    if (func_02059234()->mode == 3) {
        return;
    }
    if (func_02059234()->state == 19) {
        mask = func_02057a0c(0);
        s    = data_0210e8e0.timer;
        if (s->mask == mask) {
            if (s->all == mask) {
                func_02059234()->limit   = func_02059234()->players;
                func_02059234()->initial = func_02059234()->players - 1;
                func_020562dc(0);
                return;
            }
            s->last = OS_GetTick();
            s->mask = 0;
            if (func_02059234()->mode == 0) {
                func_02059244(3);
                func_02059234()->searchWait = 2;
                {
                    MatchWork *w      = func_02059234();
                    w->searchWaitTick = OS_GetTick();
                }
                return;
            }
            func_02059244(4);
            func_02055b28(1, 0, 0);
            return;
        }
        retries = s->retries;
        elapsed = ((OS_GetTick() - s->last) << 6) / 0x82ea;
        if (elapsed < (u64) (retries * 6000)) {
            return;
        }
        if ((u32) retries > 5) {
            func_02057a98(1);
            func_02056e24();
            func_02056bc0(1);
            return;
        }
        for (i = 1; i <= func_02059234()->players; i++) {
            if (!(data_0210e8e0.timer->mask & (1 << func_02059234()->aids[i]))) {
                MatchWork *a = func_02059234(), *b = func_02059234(), *c = func_02059234();
                func_020540d0(17, a->profiles[i], b->addresses[i], c->ports[i], 0, 0);
                if (func_02055940()) {
                    return;
                }
            }
        }
        data_0210e8e0.timer->retries++;
        return;
    }
    if (func_02059234()->state != 4 && func_02059234()->state != 3) {
        return;
    }
    s = data_0210e8e0.timer;
    if (func_02059234()->players < s->wanted - 1) {
        return;
    }
    if (s->retries == 0) {
        s       = data_0210e8e0.timer;
        elapsed = ((OS_GetTick() - s->start) << 6) / 0x82ea;
        if (elapsed >= s->timeout) {
            goto send;
        }
    }
    if (!s->retries) {
        return;
    }
    s       = data_0210e8e0.timer;
    elapsed = ((OS_GetTick() - s->last) << 6) / 0x82ea;
    if (elapsed < (s->timeout >> 2)) {
        return;
    }
send:
    if (func_02059234()->target) {
        func_02055ec8(func_02059234()->target);
        if (func_02055940()) {
            return;
        }
    }
    func_02059244(19);
    for (i = 1; i <= func_02059234()->players; i++) {
        MatchWork *a = func_02059234(), *b = func_02059234(), *c = func_02059234();
        func_020540d0(17, a->profiles[i], b->addresses[i], c->ports[i], 0, 0);
        if (func_02055940()) {
            return;
        }
    }
    s          = data_0210e8e0.timer;
    s->last    = OS_GetTick();
    s->retries = 1;
}
