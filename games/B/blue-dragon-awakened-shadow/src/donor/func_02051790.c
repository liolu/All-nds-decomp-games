/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_QR2Startup from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/match_setup.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef int BOOL;
typedef struct DwcAccData {
    u32 flags;
    u32 low;
    u32 high;
} DwcAccData;
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
extern int func_02051790(u32 identity);
extern int func_0205803c(int error);
extern void func_020589e4(int id, void *out);
extern void func_02058b2c(void);
extern void func_02058b30(void);
extern void func_02058b34(int state, void *p);
extern int func_02058bd8(void);
extern int func_02058be0(unsigned error);
extern void func_02058bec(u32 addr, u16 port);
extern void func_02058c0c(int profile);
extern void func_02058cc0(void *src, u32 size);
extern int gt2GetLocalPort(void *peer);
extern int func_0206d4c4(void *peer);
extern int func_02071868(void **reporting, int a, int b, const char *gameName, const char *secretKey, int c, int d, void *cb0,
                         void *cb1, void *cb2, void *cb3, void *cb4, void *cb5, int e);
extern void func_02071a2c(void *reporting, void *callback);
extern void func_02071a44(void *reporting, void *callback);
extern void func_02071a5c(void *reporting, void *callback);
extern void func_02071c70(void *reporting);
extern void func_02071ccc(void *reporting);
int func_02051790(u32 identity) {
    int i, result;
    MatchWork *work, *names;
    int ip, port;
    if (func_02059234()->reporting) {
        return 0;
    }
    func_02059234()->identity = identity;
    for (i = 0; i < 5; i++) {
        work   = func_02059234();
        ip     = func_0206d4c4(*func_02059234()->peer);
        port   = gt2GetLocalPort(*func_02059234()->peer);
        names  = func_02059234();
        result = func_02071868(&work->reporting, ip, port, names->gameName, func_02059234()->secretKey, 1, 1, func_020589e4,
                               func_02058b2c, func_02058b30, func_02058b34, func_02058bd8, func_02058be0, 0);
        if (!result) {
            break;
        }
        func_02071ccc(func_02059234()->reporting);
        func_02059234()->reporting = ((void *) 0);
        if (result != 3 || i == 4) {
            func_0205803c(result);
            return result;
        }
    }
    func_02059234()->addr = 0;
    func_02059234()->port = 0;
    func_02071a5c(func_02059234()->reporting, func_02058bec);
    func_02071a2c(func_02059234()->reporting, func_02058c0c);
    func_02071a44(func_02059234()->reporting, func_02058cc0);
    func_02071c70(func_02059234()->reporting);
    return result;
}
