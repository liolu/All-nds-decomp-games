/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* vct_check_timeout from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libVCT/src/vct_ssp.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef signed long s32;
typedef unsigned long long int u64;
typedef u64 OSTick;
extern OSTick func_020d34b0(void);
typedef struct VctSession {
    u32 state;
    u8 aid;
    u8 other;
    u8 pad[2];
    u32 mask;
    u32 mode;
    u32 pad2;
    struct VctSession *next;
} VctSession;
typedef void (*VctCallback)(u32 aid, u32 event, VctSession *session, void *context);
typedef struct Vct {
    u8 aid;
    u8 peer;
    u8 pad[2];
    VctCallback callback;
    void *context;
    s32 state;
    s32 mode;
    s32 flag;
} Vct;
typedef struct Ssp {
    u32 count;
    u32 mask;
    u64 tick;
    VctSession *free;
    VctSession *used;
    u64 (*clock)(void);
    u32 seed;
    u32 add;
} Ssp;
typedef struct SspBank {
    Ssp core;
    VctSession reject;
    VctSession server;
} SspBank;
extern SspBank data_021d6fb0;
extern VctSession data_021d6fec;
extern Vct data_021d84b8;
extern void func_020b34c4(void);
extern u64 data_0211091c;
extern void func_020b37c8(u32 notify);
void func_020b34c4(void) {
    u64 now = func_020d34b0();
    if (data_021d84b8.mode != 2) {
        return;
    }
    if (data_021d84b8.state == 0) {
        return;
    }
    if (data_021d6fb0.core.tick == 0) {
        return;
    }
    if (now - data_021d6fb0.core.tick <= data_0211091c) {
        return;
    }
    data_021d6fb0.core.tick    = 0;
    data_021d6fb0.server.state = 0;
    data_021d6fb0.server.mode  = 0;
    func_020b37c8(0);
    data_021d84b8.callback(data_021d6fb0.server.aid, 9, &data_021d6fec, data_021d84b8.context);
}
void func_020b37c8(u32 kind);
