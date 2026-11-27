/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_DeleteSession from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libVCT/src/vct_ssp.c (license: none), reused by
 * tools/donor_match.py */
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
extern VctSession data_021d6fec;
extern Vct data_021d84b8;
extern int func_020b3074(VctSession *session);
int func_020b3074(VctSession *s) {
    VctSession *prev = 0;
    VctSession *cur  = data_021d6fb0.core.used;
    if (!s) {
        return 0;
    }
    if (data_021d84b8.mode == 2) {
        if (s == &data_021d6fec) {
            data_021d6fb0.server.state = 0;
        }
        return 1;
    }
    while (cur) {
        if (cur == s) {
            s->state = 0;
            if (prev) {
                prev->next = s->next;
            } else {
                if (cur->next) {
                    data_021d6fb0.core.used = cur->next;
                } else {
                    data_021d6fb0.core.used = 0;
                }
            }
            s->next                 = data_021d6fb0.core.free;
            data_021d6fb0.core.free = s;
            return 1;
        }
        prev = cur;
        cur  = cur->next;
    }
    return 0;
}
