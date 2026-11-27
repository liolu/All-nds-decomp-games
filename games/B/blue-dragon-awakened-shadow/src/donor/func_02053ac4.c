/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_UpdateServerListAsync from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/match_command.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef int BOOL;
extern int OS_SNPrintf(char *dest, u32 len, const char *format, ...);
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
typedef struct MatchKeyEntry {
    u8 id;
    u8 isString;
    u16 unk_02;
    void *buffer;
    void *value;
} MatchKeyEntry;
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
extern MatchKeyEntry data_0210e920[];
extern int func_02053ac4(int profile);
extern int func_02053cc0(char *out, int identity, int limit, int mode);
extern const char data_020fa7d8[];
extern const char data_020fa810[];
extern const char data_020fa81c[];
extern int ServerBrowserLimitUpdateA(void *list, int a, int b, u8 *keys, int count, char *filter, int c);
extern void ServerBrowserClear(void *list);
int func_02053ac4(int profile) {
    struct {
        u8 keys[161];
        char filter[256];
    } search;

    int count = 7, i, n, result;
    u8 *dst;
    search.keys[0] = 8;
    search.keys[1] = 10;
    search.keys[2] = 50;
    search.keys[3] = 51;
    search.keys[4] = 52;
    search.keys[5] = 53;
    search.keys[6] = 54;
    if (func_02059234()->mode == 0 || func_02059234()->mode == 1) {
        MatchKeyEntry *entry = data_0210e920;
        dst                  = search.keys + 7;
        for (i = 0; i < 154; i++, entry++) {
            u8 id = entry->id;
            if (id) {
                *dst++ = id;
                count++;
            }
        }
    }
    switch (func_02059234()->state) {
        case 0:
        case 1:
        default:
            break;
        case 3:
            if (func_02059234()->nextServerProfile == 0) {
                volatile MatchWork *a = func_02059234();
                volatile MatchWork *b = func_02059234();
                volatile MatchWork *c = func_02059234();
                u32 identity          = a->identity;
                u8 limit              = b->limit;
                u8 mode               = c->mode;
                n                     = func_02053cc0(search.filter, identity, limit, mode);
                if (data_0210e8e0.filter) {
                    OS_SNPrintf(search.filter + n, 256 - n, data_020fa810, data_0210e8e0.filter);
                }
                break;
            }
            profile = func_02059234()->nextServerProfile;
        case 2:
        case 4:
        case 5:
            OS_SNPrintf(search.filter, 256, data_020fa81c, data_020fa7d8, profile);
            func_02059234()->target = profile;
            break;
    }
    ServerBrowserClear(func_02059234()->list);
    i = 0;
    do {
        result = ServerBrowserLimitUpdateA(func_02059234()->list, 1, 0, search.keys, count, search.filter, 6);
        if (result == 0 || result != 2) {
            break;
        }
        i++;
    } while (i < 5);
    if (result == 0) {
        MatchWork *w = func_02059234();
        w->pending   = OS_GetTick() + 0xEFB5F7;
    }
    return result;
}
int func_02053cc0(char *out, int identity, int limit, int mode);
