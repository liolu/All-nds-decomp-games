/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_EvaluateServers from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/match_browse.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef int BOOL;
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
extern MatchWork *func_02059234(void);
extern char data_020fa7d8[];
extern const u8 data_020fa804[];
extern int func_0204d568(u32);
extern void SBServerAddIntKeyValue(void *, const void *, int);
extern int func_02074488(void *, const void *, int);
extern void ServerBrowserRemoveServer(void *, void *);
extern void *ServerBrowserGetServer(void *, int);
extern int ServerBrowserCount(void *);
extern void ServerBrowserSortA(void *, int, const void *, int);
extern int func_0205869c(int sort);
int func_0205869c(int sort) {
    int removed = 0, matched, value, weight;
    MatchWork *w;
    void *arg;
    int i = removed;
    if (ServerBrowserCount(func_02059234()->list) > 0) {
        do {
            int j;
            void *item = ServerBrowserGetServer(func_02059234()->list, i);
            if (func_02059234()->mode == 0) {
                value   = func_02074488(item, data_020fa7d8, 0);
                matched = 0;
                for (j = 1; j <= func_02059234()->players; j++) {
                    if (value == func_02059234()->profiles[j]) {
                        ServerBrowserRemoveServer(func_02059234()->list, item);
                        i--;
                        matched = 1;
                        break;
                    }
                }
                if (matched) {
                    goto advance;
                }
            }
            if (func_02059234()->evalCallback) {
                w      = func_02059234();
                arg    = func_02059234()->evalParam;
                weight = w->evalCallback(i, arg);
                if (weight > 0) {
                    if (weight > 0x7fffff) {
                        weight = 0x7fffff;
                    }
                    SBServerAddIntKeyValue(item, data_020fa804, func_0204d568(256) | (weight << 8));
                } else {
                    ServerBrowserRemoveServer(func_02059234()->list, item);
                    i--;
                    removed = 1;
                }
            } else {
                SBServerAddIntKeyValue(item, data_020fa804, func_0204d568(128));
            }
        advance:
            i++;
        } while (i < ServerBrowserCount(func_02059234()->list));
    }
    if (sort && ServerBrowserCount(func_02059234()->list) != 0) {
        ServerBrowserSortA(func_02059234()->list, 0, data_020fa804, 0);
    }
    if (removed && ServerBrowserCount(func_02059234()->list) == 0) {
        return 0;
    }
    return 1;
}
