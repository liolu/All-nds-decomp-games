/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_MatchProcess from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/match_setup.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef int BOOL;
typedef u64 OSTick;
extern OSTick OS_GetTick(void);
typedef struct DwcAccData {
    u32 flags;
    u32 low;
    u32 high;
} DwcAccData;
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
typedef struct MatchAddr {
    u8 family;
    u8 unk_01;
    u16 port;
    u32 address;
} MatchAddr;
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
extern void func_02051b3c(void *reporting);
extern void func_02051bec(BOOL active);
extern void func_02057b08(void);
extern int func_02057fa8(unsigned error);
extern void func_02058dd0(int result, int unused, MatchAddr *addr, MatchRequest *req);
extern void func_02052ccc(void);
extern void func_02052cec(int kind, int code);
extern int func_02053484(void);
extern int func_02053ac4(int profile);
extern int func_02055940();
extern int func_0205596c(int profile, BOOL direct);
extern int func_02055df0(int profile);
extern int func_02055f1c(int profile);
extern int func_02056138(int profile);
extern void func_02056cc0(void);
extern int func_02056cf4(void);
extern int func_02057080(void);
extern int func_02057594(void);
extern int DWCi_IsError(void);
extern int func_0204e34c(void);
extern void func_02052ccc(void);
extern void func_02052cec(int kind, int code);
extern int func_02053484(void);
extern void func_020540d0(int command, u32 profile, u32 addr, u16 port, void *data, u32 size);
extern void gt2Think(void *peer);
extern void NNFreeNegotiateList(void);
extern void NNThink(void);
extern void func_02071a74(void *reporting);
extern void func_020750b4(void *list);
extern void ServerBrowserThink(void *list);
extern int ServerBrowserState(void *list);
void func_02051b3c(void *reporting);
void func_02051bec(BOOL active) {
    if (!func_02059234()) {
        return;
    }
    if (DWCi_IsError()) {
        return;
    }
    if (!active) {
        if (func_02059234()->reporting) {
            func_02071a74(func_02059234()->reporting);
        }
        if (!func_02059234()->peer) {
            return;
        }
        gt2Think(*func_02059234()->peer);
        return;
    }
    if (!func_02059234()->state) {
        return;
    }
    switch (func_02059234()->state) {
        case 0:
        case 6:
        case 8:
        case 9:
        case 10:
        case 12:
            break;
        case 4:
            if (func_02059234()->delay) {
                u64 now          = OS_GetTick();
                MatchWork *stamp = func_02059234();
                MatchWork *limit = func_02059234();
                if ((((now - stamp->time) << 6) / 0x82EA) > limit->delay) {
                    func_02059234()->delay = 0;
                    if (func_02059234()->mode == 3) {
                        func_02059234()->reservationRetries++;
                        if (func_02059234()->reservationRetries > 5) {
                            func_02052cec(6, -80430);
                            return;
                        }
                        func_0205596c(func_02059234()->profiles[0], 0);
                        if (func_02055940()) {
                            return;
                        }
                    } else if (!func_02055df0(0)) {
                        return;
                    }
                }
            }
            if (func_02059234()->active) {
                u32 limit = 3000 * func_02059234()->players + 3000;
                u64 now   = OS_GetTick();
                if ((((now - func_02059234()->activeTick) << 6) / 0x82EA) >= limit) {
                    func_0205596c(func_02059234()->profiles[0], 0);
                    if (func_02055940()) {
                        return;
                    }
                }
            }
            break;
        case 2:
        case 3:
        case 5:
            if (func_02059234()->searchWait > 0) {
                u32 limit;
                u64 now;
                if (func_02059234()->state == 3) {
                    limit = 3000 * func_02059234()->players + 3000;
                } else {
                    limit = func_02059234()->searchWait == 1 ? 1000 : 3000;
                }
                now = OS_GetTick();
                if ((((now - func_02059234()->searchWaitTick) << 6) / 0x82EA) > limit) {
                    if (func_02057fa8(func_02053ac4(func_02059234()->target))) {
                        return;
                    }
                    func_02059234()->searchWait = 0;
                }
            }
            break;
        case 7:
            if (func_02059234()->waitTick) {
                u64 now = OS_GetTick();
                if ((((now - func_02059234()->waitTick) << 6) / 0x82EA) > 25000) {
                    func_02059234()->waitTick = 0;
                    if (!func_02056138(func_02059234()->profiles[0])) {
                        return;
                    }
                }
            } else if (func_02059234()->sentCommand == 6) {
                u64 now = OS_GetTick();
                if ((((now - func_02059234()->commandTick) << 6) / 0x82EA) > 6000) {
                    func_02059234()->commandRetries++;
                    if (func_02059234()->commandRetries > 5) {
                        func_02052ccc();
                        if (!func_02056138(func_02059234()->profiles[0])) {
                            return;
                        }
                    } else {
                        func_020540d0(6, func_02059234()->commandProfile, func_02059234()->commandAddr,
                                      func_02059234()->commandPort, func_02059234()->commandData,
                                      func_02059234()->commandSize);
                        if (func_02055940()) {
                            return;
                        }
                    }
                }
            }
            break;
        case 11:
            if (func_02059234()->sentCommand == 2) {
                if (!func_02059234()->mode) {
                    u64 now = OS_GetTick();
                    if ((((now - func_02059234()->commandTick) << 6) / 0x82EA) > 6000) {
                        goto expired;
                    }
                }
                if (func_02059234()->mode) {
                    u64 now = OS_GetTick();
                    if ((((now - func_02059234()->commandTick) << 6) / 0x82EA) > 19000) {
                    expired:
                        func_02052ccc();
                        if (!func_02055f1c(func_02059234()->profiles[func_02059234()->players + 1])) {
                            return;
                        }
                    }
                }
            }
            break;
        case 13:
            if (func_02059234()->sentCommand == 8) {
                u64 now = OS_GetTick();
                if ((((now - func_02059234()->commandTick) << 6) / 0x82EA) > 30000) {
                    func_02059234()->commandRetries++;
                    if (func_02059234()->commandRetries) {
                        func_02052ccc();
                        if (func_02059234()->mode == 2) {
                            if (!func_02055f1c(func_02059234()->profiles[func_02059234()->players])) {
                                return;
                            }
                        } else {
                            func_02056cc0();
                        }
                    } else {
                        func_020540d0(8, func_02059234()->commandProfile, func_02059234()->commandAddr,
                                      func_02059234()->commandPort, func_02059234()->commandData,
                                      func_02059234()->commandSize);
                        if (func_02055940()) {
                            return;
                        }
                    }
                }
            }
            break;
        case 1:
            if (func_0204e34c() == 5) {
                u64 now = OS_GetTick();
                if ((((now - func_02059234()->serverPollTick) << 6) / 0x82EA) > 30000) {
                    if (func_02059234()->serverPollCount >= 5) {
                        if (!func_02056138(func_02059234()->profiles[0])) {
                            return;
                        }
                    } else {
                        func_020540d0(64, func_02059234()->profiles[0], func_02059234()->addresses[0],
                                      func_02059234()->ports[0], ((void *) 0), 0);
                        if (func_02055940()) {
                            return;
                        }
                        func_02059234()->serverPollCount++;
                        func_02059234()->serverPollTick = OS_GetTick() - 12567750;
                    }
                }
            }
            break;
    }
    if (func_02059234()->state == 11 || func_02059234()->state == 6) {
        if (func_02059234()->retryTick) {
            u64 now = OS_GetTick();
            if ((((now - func_02059234()->retryTick) << 6) / 0x82EA) > 10000) {
                func_02058dd0(1, 0, ((void *) 0), &func_02059234()->request);
            }
        }
    }
    if (func_02059234()->list) {
        data_0210e8e0.busy        = 0;
        data_0210e8e0.freeBrowser = 0;
        ServerBrowserThink(func_02059234()->list);
        if (data_0210e8e0.freeBrowser) {
            func_020750b4(func_02059234()->list);
            func_02059234()->list = ((void *) 0);
        }
        if (func_02059234()->list && ServerBrowserState(func_02059234()->list) && func_02059234()->pending) {
            u64 now = OS_GetTick();
            if (now > func_02059234()->pending) {
                func_02052cec(6, -85010);
            }
        }
    }
    func_02051b3c(func_02059234()->reporting);
    data_0210e8e0.deferred = 0;
    data_0210e8e0.updating = 1;
    NNThink();
    data_0210e8e0.updating = 0;
    if (data_0210e8e0.deferred == 1) {
        data_0210e8e0.deferred = 0;
        NNFreeNegotiateList();
    }
    if (func_02059234()->peer) {
        gt2Think(*func_02059234()->peer);
    }
    if (func_02059234()->state == 18) {
        u64 now = OS_GetTick();
        if ((((now - func_02059234()->restartWaitTick) << 6) / 0x82EA) > 3000 && func_02056cf4()) {
            return;
        }
    }
    if (!func_02057080()) {
        return;
    }
    if (!func_02057594()) {
        return;
    }
    func_02057b08();
    if (!func_02059234()->stopPending) {
        return;
    }
    if (func_02059234()->state != 10) {
        return;
    }
    func_02059234()->limit = func_02059234()->players;
    func_02053484();
    func_02059234()->stopPending = 0;
    if (!func_02059234()->stopCallback) {
        return;
    }
    func_02059234()->stopCallback(func_02059234()->stopParam);
}
