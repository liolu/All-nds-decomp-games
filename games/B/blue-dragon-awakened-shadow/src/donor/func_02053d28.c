/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_StartNatNegotiation from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/match_command.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef int BOOL;
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
extern MatchWork *func_02059234(void);
extern void func_02058dd0(int result, int unused, MatchAddr *addr, MatchRequest *req);
extern int func_02053d28(int mode, u32 value, void *server);
extern int func_02054014(MatchRequest *req);
extern u32 func_0204d568(u32 max);
extern u32 SOC_GetHostID(void);
extern u32 gt2GetLocalPort(void *connection);
extern void *func_0206d4c4(void *connection);
extern u32 SBServerGetPublicInetAddress(void *server);
extern u16 SBServerGetPublicQueryPort(void *server);
extern int func_02074598(void *server);
extern u32 func_020745b0(void *server);
extern u32 SBServerGetPrivateQueryPort(void *server);
extern u32 func_02075408(void *list);
extern int func_020540d0(u8 command, u32 profile, u32 addr, u16 port, u32 *data, int count);
int func_02053d28(int mode, u32 value, void *server) {
    MatchWork *w    = func_02059234();
    int index       = w->connections, retry;
    unsigned result = 0;
    u32 local[2];
    if (mode == 0) {
        w     = func_02059234();
        value = (w->identity & 0xFFFF) | (func_02059234()->cookieRandom << 16);
        if (func_02074598(server)) {
            u32 ip = SBServerGetPublicInetAddress(server);
            if (ip != func_02075408(func_02059234()->list)) {
                retry = 1;
            } else {
                w               = func_02059234();
                w->addr2[index] = func_020745b0(server);
                w               = func_02059234();
                w->port2[index] = SBServerGetPrivateQueryPort(server);
                retry           = result;
            }
        } else {
            u32 ip = (u16) SOC_GetHostID();

            if ((u16) ip == 0xA8C0 || ((ip & 0xFF) == 0xAC && (ip & 0xFF00) >= 0x1000 && (ip & 0xFF00) <= 0x1F00) ||
                (ip & 0xFF) == 10) {
                retry = 1;
            } else {
                w               = func_02059234();
                w->addr2[index] = SBServerGetPublicInetAddress(server);
                w               = func_02059234();
                w->port2[index] = SBServerGetPublicQueryPort(server);
                retry           = 0;
            }
        }
        if (retry) {
            w                               = func_02059234();
            w->cookieRandom                 = func_0204d568(0x10000);
            func_02059234()->request.active = value;
        } else {
            local[0] = SOC_GetHostID();
            local[1] = gt2GetLocalPort(*func_02059234()->peer);
            w        = func_02059234();
            value    = SBServerGetPublicInetAddress(server);
            {
                int error = func_020540d0(6, w->profiles[index], value, SBServerGetPublicQueryPort(server), local, 2);
                func_02059234()->commandRetries = 0;
                if (error) {
                    return 2;
                }
            }
            func_02059234()->request.active = 0;
        }
        func_02059234()->request.flag    = 0;
        func_02059234()->request.retries = 0;
        w                                = func_02059234();
        w->request.port                  = SBServerGetPublicQueryPort(server);
        w                                = func_02059234();
        w->request.address               = SBServerGetPublicInetAddress(server);
    } else {
        func_02059234()->request.flag    = 1;
        func_02059234()->request.retries = result;
        func_02059234()->request.port    = result;
        func_02059234()->request.address = result;
        func_02059234()->request.active  = value;
        retry                            = 1;
    }
    if (retry) {
        result = func_02054014(&func_02059234()->request);
    } else {
        u32 socket = (u32) func_0206d4c4(*func_02059234()->peer);
        func_02058dd0(0, socket, ((void *) 0), &func_02059234()->request);
        w           = func_02059234();
        w->waitTick = 0;
    }
    return result;
}
int func_02054014(MatchRequest *req);
int func_020540d0(u8 command, u32 profile, u32 addr, u16 port, u32 *data, int count);
