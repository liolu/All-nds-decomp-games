/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_SendMatchSynPacket from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/match_sync.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef int BOOL;
typedef u64 OSTick;
extern OSTick OS_GetTick(void);
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
extern void func_02056f90(int aid, int message);
extern int func_02059584(int flag, int aid, const void *p, int n);
void func_02056f90(int aid, int message) {
    u8 data[4];
    switch (message) {
        case 2: {
            MatchWork *w = func_02059234();
            u8 i;
            if (aid == w->aids[func_02059234()->players]) {
                data[0] = 1;
            } else {
                data[0] = 0;
            }
            for (i = 1; i <= func_02059234()->players; i++) {
                if (aid == func_02059234()->aids[i]) {
                    data[1] = i;
                    data[2] = aid;
                    break;
                }
            }
            break;
        }
        case 3: {
            data[0] = func_02059234()->maxSize;
            data[1] = func_02059234()->maxSize >> 8;
            break;
        }
        default:
            break;
    }
    func_02059584(message, aid, data, 4);
    {
        MatchWork *w = func_02059234();
        w->readyTick = OS_GetTick();
    }
}
