/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_GT2UnrecognizedMessageCallback from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/match_connect.c
 * (license: none), reused by tools/donor_match.py */
typedef __typeof__(sizeof(0)) size_t;
extern int memcmp(const void *a, const void *b, size_t size);
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef int BOOL;
extern void MIi_CpuClear32(register u32 value, register u32 *dst, register u32 size);
static inline void MI_CpuFill32(void *dest, u32 data, u32 size) {
    MIi_CpuClear32(data, dest, size);
}
static inline void MI_CpuClear32(void *dest, u32 size) {
    MI_CpuFill32(dest, 0, size);
}
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
extern int func_02052688(void *unused, u32 address, int port, u8 *data, u32 size);
typedef struct MatchPacketAddr {
    u8 length;
    u8 family;
    u16 port;
    u32 address;
} MatchPacketAddr;
extern const u8 NNMagicData[];
extern int memcmp(const void *, const void *, u32);
extern void NNProcessData(u8 *data, u32 size, MatchPacketAddr *addr);
extern void func_02072dd4(void *reporting, u8 *data, u32 size, MatchPacketAddr *addr);
#pragma opt_optimizecontrolflow off
int func_02052688(void *unused, u32 address, int port, u8 *data, u32 size) {
    MatchPacketAddr addr;
    u8 tag;
    if (size == 0 || data == 0) {
        return 0;
    }
    MI_CpuClear32(&addr, sizeof(addr));
    addr.family  = 2;
    addr.port    = ((port >> 8) & 255) | ((port << 8) & 0xff00);
    addr.address = address;
    tag          = data[0];
    if ((tag == 254 && data[1] == 253) || tag == 92) {
        if (func_02059234()->reporting) {
            func_02072dd4(func_02059234()->reporting, data, size, &addr);
        }
    } else if (memcmp(data, NNMagicData, 6) == 0) {
        NNProcessData(data, size, &addr);
    } else {
        if (tag == 254) {
            return 0;
        } else {
            return 0;
        }
    }
    return 1;
}
