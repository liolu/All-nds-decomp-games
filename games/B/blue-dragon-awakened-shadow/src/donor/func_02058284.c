/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_SBCallback from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/match_browse.c (license: none), reused
 * by tools/donor_match.py */
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
extern int func_02057fa8(unsigned error);
extern void func_02058284(void *list, int event, void *arg);
extern int func_02053ac4(int profile);
extern int func_02053d28(int mode, u32 value, void *server);
extern int func_02055940();
extern int func_0205596c(int profile, BOOL direct);
extern int func_02055b28(int mode, BOOL same, int previous);
extern int func_02055ec8(int profile);
extern int func_020561f8(void);
extern char data_020fa7d8[];
extern int func_02074488(void *, const void *, int);
extern u32 SBServerGetPublicInetAddress(void *);
extern u16 SBServerGetPublicQueryPort(void *);
extern void ServerBrowserRemoveServer(void *, void *);
extern void *ServerBrowserGetServer(void *, int);
extern int ServerBrowserCount(void *);
extern int func_020578cc(void *server);
extern int func_02057fa8(unsigned error);
extern int func_02058124(unsigned error);
extern void func_02058284(void *list, int event, void *arg);
extern void func_02058698(void *arg);
extern int func_0205869c(int sort);
extern void func_02058874(void);
int func_020578cc(void *p);
int func_02057fa8(unsigned n);
int func_02058124(unsigned n);
void func_02058284(void *list, int event, void *arg) {
    int i, profile;
    void *item;
    MatchWork *w;
    data_0210e8e0.busy++;
    if (func_02059234()->pending) {
        if ((u32) (event - 4) <= 1) {
            w          = func_02059234();
            w->pending = 0;
        } else {
            w          = func_02059234();
            w->pending = OS_GetTick() + 0xefb5f7;
        }
    }
    switch (event) {
        case 0:
            func_02058698(arg);
            break;
        case 4:
            for (i = 0; i < ServerBrowserCount(list); i++) {
                item = ServerBrowserGetServer(list, i);
                if (!func_020578cc(item)) {
                    ServerBrowserRemoveServer(list, item);
                    i--;
                }
            }
            switch (func_02059234()->state) {
                case 2:
                    for (i = 0; i < ServerBrowserCount(list); i++) {
                        item = ServerBrowserGetServer(list, i);
                        if (func_02059234()->addr && func_02059234()->addr == SBServerGetPublicInetAddress(item) &&
                            func_02059234()->port && func_02059234()->port == SBServerGetPublicQueryPort(item)) {
                            break;
                        }
                    }
                    if (i < ServerBrowserCount(list)) {
                        func_02059244(3);
                        func_02059234()->target = 0;
                        func_02057fa8(func_02053ac4(func_02059234()->target));
                    } else {
                        func_02059234()->searchWait = 2;
                        w                           = func_02059234();
                        w->searchWaitTick           = OS_GetTick();
                    }
                    break;
                case 3:
                    func_0205869c(1);
                    func_02058874();
                    if (ServerBrowserCount(list)) {
                        func_0205596c(0, 0);
                        if (func_02055940()) {
                            goto end;
                        }
                        func_02059244(4);
                        func_02059234()->searchWait = 0;
                    } else {
                        func_02059234()->searchWait = 2;
                        w                           = func_02059234();
                        w->searchWaitTick           = OS_GetTick();
                    }
                    break;
                case 5:
                    if (ServerBrowserCount(list)) {
                        i = 0;
                        do {
                            item = ServerBrowserGetServer(list, i);
                            if (SBServerGetPublicInetAddress(item) == func_02059234()->remoteAddr &&
                                SBServerGetPublicQueryPort(item) == func_02059234()->remotePort) {
                                break;
                            }
                            ServerBrowserRemoveServer(list, item);
                        } while (ServerBrowserCount(list));
                    }
                    if (ServerBrowserCount(list)) {
                        profile = func_02074488(ServerBrowserGetServer(list, 0), data_020fa7d8, 0);
                        if (func_02059234()->mode == 1 && profile == func_02059234()->profiles[0]) {
                            if (func_0205869c(0)) {
                                if (func_02059234()->players) {
                                    func_020561f8();
                                    if (func_02055940()) {
                                        goto end;
                                    }
                                }
                            } else {
                                func_02055ec8(func_02059234()->profiles[0]);
                                if (func_02055940()) {
                                    goto end;
                                }
                                func_02059244(4);
                                func_02055b28(0, 0, func_02059234()->profiles[0]);
                                func_02055940();
                                goto end;
                            }
                        }
                        func_02059244(6);
                        func_02058124(func_02053d28(0, 0, ServerBrowserGetServer(list, 0)));
                    } else {
                        func_02059234()->searchWait = 2;
                        w                           = func_02059234();
                        w->searchWaitTick           = OS_GetTick();
                    }
                    break;
            }
            break;
        case 5:
            break;
    }
end:
    data_0210e8e0.busy--;
}
void func_02058698(void *arg);
int func_0205869c(int sort);
void func_02058874(void);
