/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_SendMatchCommand from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/match_command.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef int BOOL;
extern void MIi_CpuCopy32(const register u32 *src, register u32 *dst, register u32 size);
extern void MI_CpuCopy8(const void *src, void *dst, u32 size);
extern int OS_SNPrintf(char *dest, u32 len, const char *format, ...);
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
extern int func_02054294(int command, u32 addr, u32 port, const u32 *data, u32 count);
extern int func_020543ac(void *connection, int command, u32 profile, const char *args);
extern const char data_020fa790[];
extern const char data_020fa87c[];
extern int func_020540d0(u8 command, u32 profile, u32 addr, u16 port, u32 *data, int count);
int func_020540d0(u8 command, u32 profile, u32 addr, u16 port, u32 *data, int count) {
    char number[16];
    char args[512];
    int length = 0, result, i, n;
    if (func_02059234()->mode == 0 || ((func_02059234()->mode == 3 || func_02059234()->unk_1A6 != 0) && command == 6)) {
        result = func_02054294(command, addr, port, data, count);
    } else {
        if (data && count) {
            length = OS_SNPrintf(args, 512, data_020fa790, data[0]);
            for (i = 1; i < count; i++) {
                n = OS_SNPrintf(number, 16, data_020fa87c, data[i]);
                if ((u32) (length + n + 1) > 512) {
                    break;
                }
                MI_CpuCopy8(number, args + length, n);
                length += n;
            }
        }
        args[length] = 0;
        result       = func_020543ac(func_02059234()->gpConnection, command, profile, args);
    }
    if (command == 2 || command == 6 || command == 8 || command == 9) {
        func_02059234()->sentCommand    = command;
        func_02059234()->commandPort    = port;
        func_02059234()->commandAddr    = addr;
        func_02059234()->commandProfile = profile;
        func_02059234()->commandSize    = count;
        {
            MatchWork *w   = func_02059234();
            w->commandTick = OS_GetTick();
        }
        if (data && count) {
            MIi_CpuCopy32(data, (u32 *) func_02059234()->commandData, count * 4);
        }
    }
    return result;
}
int func_02054294(int command, u32 addr, u32 port, const u32 *data, u32 count);
int func_020543ac(void *connection, int command, u32 profile, const char *args);
