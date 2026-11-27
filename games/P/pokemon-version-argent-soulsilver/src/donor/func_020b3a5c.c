/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* vct_check_multisession from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libVCT/src/vct_ssp.c (license: none), reused
 * by tools/donor_match.py */
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
extern s32 func_020b3a5c(VctSession *session);
s32 func_020b3a5c(VctSession *session) {
    VctSession *p = data_021d6fb0.core.used;
    while (p) {
        if (p->state != 0 && p->mode == 2 && session != p) {
            return 0;
        }
        p = p->next;
    }
    return 1;
}
