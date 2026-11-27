/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* vct_create_session_impl from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libVCT/src/vct_ssp.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef signed long s32;
typedef unsigned long long int u64;
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
extern Vct data_021d84b8;
extern VctSession *func_020b35ec(u32 aid);
extern void func_020b3808(VctSession *session, u32 aid);
VctSession *func_020b35ec(u32 aid) {
    VctSession *s;
    if (aid >= 32) {
        return 0;
    }
    if (aid == data_021d84b8.aid) {
        return 0;
    }
    s = data_021d6fb0.core.free;
    if (!s) {
        return 0;
    }
    data_021d6fb0.core.free = s->next;
    func_020b3808(s, aid);
    s->next                 = data_021d6fb0.core.used;
    data_021d6fb0.core.used = s;
    return s;
}
void func_020b3808(VctSession *session, u32 id);
