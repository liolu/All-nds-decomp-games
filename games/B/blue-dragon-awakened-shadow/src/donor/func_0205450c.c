/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_ProcessMatchCommand from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/match_join.c (license: none),
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
extern void func_02059244(int state);
extern int func_02057fa8(unsigned error);
extern void func_02058dd0(int result, int unused, MatchAddr *addr, MatchRequest *req);
extern void func_02052cec(int kind, int code);
extern int func_02053ac4(int profile);
extern int func_02053d28(int mode, u32 value, void *server);
extern int func_0205450c(int command, int profile, u32 addr, int port, int *data, int count);
extern int func_020553f0(int profile, u32 addr, int port, int mode, BOOL resend);
extern int func_02055730(int profile, u32 addr, int port);
extern void func_020558f0(int profile, int *list);
extern int func_02055940();
extern int func_02055b28(int mode, BOOL same, int previous);
extern int func_02055df0(int profile);
extern int func_02055ec8(int profile);
extern int func_02055f1c(int profile);
extern int func_02056138(int profile);
extern int func_020561f8(void);
extern void func_020562dc(unsigned action);
extern int func_020569a4(int *profiles, u32 count);
extern int func_02056aec(void);
extern void func_02056bc0(int mode);
extern void func_02056cc0(void);
extern int func_02056cf4(void);
extern void func_02056e24(void);
extern int func_02057370(int profile, int message, int arg);
extern void func_0204e20c(int index);
extern int func_0204e34c(void);
extern int func_02050324(int profile);
extern int func_020540d0(int command, u32 profile, u32 addr, u32 port, u32 *data, int count);
extern int func_0205785c(int profile);
extern int func_020579a8(int profile, int first);
extern void func_02057a70(void);
extern int func_02058124(unsigned error);
extern void gt2CloseAllConnectionsHard(void *connection);
extern void *func_0206d4c4(void *connection);
extern void NNCancel(void *p);
extern void func_02071c70(void *reporting);
extern void *ServerBrowserGetServer(void *list, int index);
int func_0205450c(int command, int profile, u32 addr, int port, int *data, int count) {
    int n = 0;
    int newProfile;
    MatchAddr peerAddr;
    u32 reply[65];
    if (!func_02059234() || func_02059234()->state == 0) {
        return 1;
    }
    if (func_0204e34c() == 5 && func_02059234()->state == 1 && profile == func_02059234()->profiles[0]) {
        func_02057a70();
    }
    switch (command) {
        case 1:
        case 11: {
            int response;
            if (func_02059234()->mode != 0) {
                addr = data[1];
                port = (u16) data[2];
            }
            response = func_020553f0(profile, addr, port, data[0], command == 11);
            if (response == 2) {
                func_02059234()->friendCheckMask = 0;
                if (func_02055940(func_02055730(profile, addr, port))) {
                    return 0;
                }
                if (func_02059234()->mode == 2 && func_02059234()->newPeerCallback) {
                    MatchWork *w    = func_02059234();
                    int friendIndex = func_02050324(profile);
                    w->newPeerCallback(friendIndex, func_02059234()->newPeerParam);
                }
                reply[0] = func_02059234()->connections;
                for (n = 1; n <= func_02059234()->connections; n++) {
                    reply[n] = func_02059234()->profiles[n];
                }
                reply[n++] = func_02059234()->addr;
                reply[n++] = func_02059234()->port;
                func_02059244(11);
            } else if (response == 3 && func_02059234()->limit != 0) {
                MatchWork *w = func_02059234();
                if (w->connections == func_02059234()->limit && func_02059234()->mode == 2) {
                    reply[0] = 16;
                    n        = 1;
                }
            }
            if (response != 255) {
                if (func_02055940(func_020540d0(response, profile, addr, port, reply, n))) {
                    return 0;
                }
            }
            break;
        }
        case 2:
            if (func_02059234()->state != 4 || profile != func_02059234()->target) {
                break;
            }
            func_02059234()->nextServerProfile = 0;
            func_02059234()->nextServerRetries = 0;
            func_02059234()->delay             = 0;
            func_02059234()->active            = 0;
            func_02059234()->addresses[0]      = (data + data[0])[1];
            func_02059234()->ports[0]          = (data + data[0])[2];
            func_02059234()->remoteAddr        = (data + data[0])[1];
            func_02059234()->remotePort        = (data + data[0])[2];
            if (func_02059234()->mode == 1) {
                if (func_020569a4(data + 1, data[0])) {
                    if (func_02059234()->players) {
                        func_020558f0(profile, data);
                    }
                } else {
                    if (func_02055940(func_02055ec8(profile))) {
                        return 0;
                    }
                    if (func_02055940(func_02055b28(0, 0, profile))) {
                        return 0;
                    }
                    break;
                }
            }
            if (func_02059234()->mode == 0) {
                if (func_02059234()->players) {
                    func_020558f0(profile, data);
                    if (func_02055940(func_020561f8())) {
                        return 0;
                    }
                }
                func_02059244(6);
                if (func_02058124(func_02053d28(0, 0, ServerBrowserGetServer(func_02059234()->list, 0)))) {
                    return 0;
                }
            } else {
                func_02059244(5);
                if (func_02057fa8(func_02053ac4(profile))) {
                    return 0;
                }
            }
            break;
        case 3:
            if (func_02059234()->state != 4 || profile != func_02059234()->target) {
                break;
            }
            if (count > 0 && data[0] == 16) {
                func_02052cec(13, 0);
                return 0;
            }
            return func_02055df0(func_02059234()->target);
        case 4: {
            MatchWork *w;
            if (func_02059234()->state != 4 || profile != func_02059234()->target) {
                break;
            }
            w       = func_02059234();
            w->time = OS_GetTick();
            if ((func_02059234()->nextServerProfile && func_02059234()->nextServerRetries < 16) ||
                func_02059234()->mode == 3) {
                func_02059234()->active = 1;
                w                       = func_02059234();
                w->activeTick           = OS_GetTick();
                if (func_02059234()->mode != 3) {
                    func_02059234()->nextServerRetries++;
                }
            } else {
                func_02059234()->nextServerProfile = 0;
                func_02059234()->nextServerRetries = 0;
                if (func_02059234()->mode == 0) {
                    func_02059244(3);
                    func_02059234()->searchWait = 1;
                    w                           = func_02059234();
                    w->searchWaitTick           = OS_GetTick();
                } else if (func_02059234()->mode == 1) {
                    func_02055b28(1, 0, 0);
                }
            }
            break;
        }
        case 5:
            if (!func_02059234()->newPeerPending || profile != func_02059234()->newPeerProfile) {
                break;
            }
            if (func_02059234()->mode == 2 && func_02059234()->players == 1 && profile == func_02059234()->profiles[1]) {
                gt2CloseAllConnectionsHard(*func_02059234()->peer);
            }
            if (!func_02055f1c(profile)) {
                return 0;
            }
            break;
        case 6: {
            int newPort;
            int newAddr;
            newAddr = data[0];
            newPort = (u16) data[1];
            void *socket;
            MatchWork *w;
            if (func_02059234()->state == 1) {
                func_02059244(6);
            } else {
                if (func_02059234()->state != 6 && func_02059234()->state != 11) {
                    break;
                }
                if (profile != func_02059234()->newPeerProfile) {
                    break;
                }
            }
            func_02059234()->sentCommand = 255;
            w                            = func_02059234();
            if (w->profiles[func_02059234()->players + 1] != profile) {
                w                                         = func_02059234();
                w->profiles[func_02059234()->players + 1] = profile;
            }
            peerAddr.address              = newAddr;
            peerAddr.port                 = ((newPort >> 8) & 0xFF) | ((newPort << 8) & 0xFF00);
            func_02059234()->request.flag = 1;
            socket                        = func_0206d4c4(*func_02059234()->peer);
            func_02058dd0(0, (int) socket, &peerAddr, &func_02059234()->request);
            w           = func_02059234();
            w->waitTick = 0;
            break;
        }
        case 7: {
            int flag;
            MatchWork *w;
            if (func_02059234()->state != 1 || profile != func_02059234()->profiles[0]) {
                break;
            }
            newProfile = data[0];
            flag       = data[1] & 0xFF;
            if (func_02059234()->mode == 1 && !func_02059234()->unk_1A6) {
                reply[0] = func_0205785c(newProfile);
                if (func_02055940(func_020540d0(32, profile, addr, port, reply, 1))) {
                    return 0;
                }
            }
            w                                             = func_02059234();
            w->profiles[func_02059234()->connections + 1] = newProfile;
            w                                             = func_02059234();
            w->aids[func_02059234()->connections + 1]     = flag;
            func_02071c70(func_02059234()->reporting);
            if (func_02059234()->newPeerCallback) {
                int friendIndex;
                w           = func_02059234();
                friendIndex = func_02050324(newProfile);
                w->newPeerCallback(friendIndex, func_02059234()->newPeerParam);
            }
            break;
        }
        case 8: {
            int index;
            MatchWork *w;
            if (func_02059234()->state != 1 || profile != func_02059234()->profiles[0]) {
                break;
            }
            newProfile = data[0];
            if (!newProfile) {
                index                                                    = data[1];
                n                                                        = data[2];
                ((MatchWork *) (index + (u32) func_02059234()))->aids[0] = n;
                w                                                        = func_02059234();
                w->profiles[index]                                       = func_02059234()->identity;
                func_020562dc(3);
                break;
            }
            n     = data[2] & 0xFF;
            index = data[1];
            if (newProfile == func_02059234()->profiles[index] && index == func_02059234()->players - 1) {
                w = func_02059234();
                if (func_02055940(
                        func_020540d0(9, profile, w->addresses[0], func_02059234()->ports[0], (u32 *) &newProfile, 1))) {
                    return 0;
                }
                break;
            }
            func_02059234()->profiles[index]                         = newProfile;
            ((MatchWork *) (index + (u32) func_02059234()))->aids[0] = n;
            func_02059234()->addresses[index]                        = data[3];
            func_02059234()->ports[index]                            = data[4];
            func_02059234()->remoteAddr                              = data[3];
            func_02059234()->remotePort                              = data[4];
            func_02059244(5);
            if (func_02057fa8(func_02053ac4(newProfile))) {
                return 0;
            }
            func_02059234()->delay  = 0;
            func_02059234()->active = 0;
            break;
        }
        case 9: {
            MatchWork *w;
            if (func_02059234()->state != 13) {
                break;
            }
            w = func_02059234();
            if (data[0] != w->profiles[func_02059234()->initial + 1]) {
                break;
            }
            func_02059234()->initial++;
            func_020562dc(0);
            break;
        }
        case 10:
            if (func_02059234()->state != 1 && func_02059234()->state != 18) {
                break;
            }
            if (func_02059234()->mode == 0 || func_020569a4(data + 1, data[0])) {
                func_02059234()->nextServerProfile = data[1];
                func_02059234()->nextServerRetries = 0;
            } else {
                func_02059234()->nextServerProfile = 0;
            }
            if (func_02059234()->players) {
                gt2CloseAllConnectionsHard(*func_02059234()->peer);
            } else if (func_02056cf4()) {
                return 0;
            }
            break;
        case 12:
            if (profile != func_02059234()->profiles[0]) {
                break;
            }
            if (func_02059234()->mode == 0 || func_02059234()->mode == 1) {
                if (!func_02056138(profile)) {
                    return 0;
                }
            } else if (func_02059234()->mode == 3) {
                func_02059234()->eventPeerProfile = profile;
                func_02056e24();
                func_02056bc0(0);
            }
            break;
        case 13:
        case 14:
        case 15:
            if (!func_02057370(profile, command, data[0])) {
                return 0;
            }
            break;
        case 16: {
            int i;
            if (profile != func_02059234()->profiles[0]) {
                return 1;
            }
            for (i = 0; i < count; i++) {
                int index = func_020579a8(data[i], 0);
                if (index != 255) {
                    func_0204e20c(index);
                }
            }
            break;
        }
        case 17: {
            MatchTimer *timer = data_0210e8e0.timer;
            if (timer && timer->active && (((OS_GetTick() - timer->start) << 6) / 0x82EA) >= timer->timeout) {
                reply[0] = 1;
            } else {
                reply[0] = 0;
            }
            if (func_02055940(func_020540d0(18, profile, addr, port, reply, 1))) {
                return 0;
            }
            break;
        }
        case 18: {
            int index;
            if (func_02059234()->state != 19) {
                break;
            }
            index = func_020579a8(profile, 0);
            if (index == 255) {
                break;
            }
            data_0210e8e0.timer->mask |= 1 << index;
            if (data[0]) {
                data_0210e8e0.timer->all |= 1 << index;
            }
            break;
        }
        case 19:
            func_02052cec(12, 0);
            return 0;
        case 32: {
            int i;
            if (func_02059234()->mode != 1 || func_02059234()->unk_1A6) {
                break;
            }
            for (i = 1; i <= func_02059234()->players; i++) {
                if (profile == func_02059234()->profiles[i]) {
                    if (!data[0]) {
                        if (func_02059234()->state == 11 || func_02059234()->state == 12) {
                            if (func_02055940(func_02056aec())) {
                                return 0;
                            }
                        }
                        if (func_02059234()->request.active) {
                            NNCancel((void *) func_02059234()->request.active);
                            func_02059234()->request.active = 0;
                        }
                        func_02056cc0();
                    } else {
                        MatchWork *w = func_02059234();
                        w->friendCheckMask |= 1 << func_020579a8(profile, 0);
                    }
                    break;
                }
            }
            break;
        }
        case 64: {
            int i;
            for (i = 1; i <= func_02059234()->players; i++) {
                if (profile == func_02059234()->profiles[i]) {
                    if (func_02055940(func_020540d0(65, profile, addr, port, ((void *) 0), 0))) {
                        return 0;
                    }
                    break;
                }
            }
            break;
        }
        case 65:
            break;
    }
    return 1;
}
int func_020553f0(int profile, u32 addr, int port, int mode, BOOL resend);
int func_02055730(int profile, u32 addr, int port);
void func_020558f0(int profile, int *list);
int func_02055940(unsigned error);
int func_02055b28(int mode, BOOL same, int previous);
int func_02055df0(int profile);
int func_02055ec8(int profile);
int func_02055f1c(int profile);
