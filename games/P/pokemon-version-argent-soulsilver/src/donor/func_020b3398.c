/* compiler: 2.0/sp1p5 -O4,s -lang c99 -ipa file -inline on,noauto */
/* vct_init_ssp from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libVCT/src/vct_ssp.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef signed long s32;
typedef unsigned long long int u64;
extern void func_020d4994(void *dest, u8 data, u32 size);
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
typedef struct InitArgs {
    VctSession *data;
    u32 count;
    s32 mode;
    u8 id;
    u8 pad[3];
    void *buffer;
    u32 size;
    VctCallback callback;
    void *arg;
} InitArgs;
typedef struct SspBank {
    Ssp core;
    VctSession reject;
    VctSession server;
} SspBank;
extern SspBank data_021d6fb0;
extern VctSession data_021d6fd4;
extern VctSession data_021d6fec;
extern Vct data_021d84b8;
extern s32 func_020b3398(InitArgs *args);
static inline void LinkSessions(InitArgs *args) {
    u32 offset, index;
    index = 0;
    if (args->count - 1) {
        offset = 0;
        do {
            VctSession *base                             = data_021d6fb0.core.free;
            u8(*arena)[args->count * sizeof(VctSession)] = (void *) base;
            VctSession *current                          = (VctSession *) &(*arena)[offset];
            index++;
            current->next = base + index;
            offset += sizeof(VctSession);
        } while (index < args->count - 1);
    }
    data_021d6fb0.core.free[args->count - 1].next = ((void *) 0);
}
s32 func_020b3398(InitArgs *args) {
    VctSession *arena = args->data;
    if (!arena || !args->count || args->count > 8) {
        return 0;
    }
    data_021d6fb0.core.free = arena;
    func_020d4994(arena, 0, args->count * sizeof(VctSession));
    func_020d4994(&data_021d6fec, 0, sizeof(VctSession));
    func_020d4994(&data_021d6fd4, 0, sizeof(VctSession));
    LinkSessions(args);
    data_021d6fb0.core.used  = ((void *) 0);
    data_021d6fb0.core.mask  = 0;
    data_021d6fb0.core.count = 0;
    data_021d84b8.flag       = 0;
    data_021d6fb0.core.clock = func_020d34b0;
    data_021d6fb0.core.seed  = 0x5d588b65;
    data_021d6fb0.core.add   = 0x269ec3;
    return 1;
}
