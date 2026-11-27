/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* vct_handle_notify from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libVCT/src/vct_ssp.c (license: none), reused by
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
typedef struct VctPacketHeader {
    u32 magic;
    u8 kind;
    u8 size;
    u8 type;
    u8 pad;
    u8 id;
    u8 target;
    u8 notify;
    u8 peer;
    u32 mask;
} VctPacketHeader;
typedef struct Event {
    s32 event;
    VctSession *session;
} Event;
extern s32 func_020b3ef4(VctPacketHeader *header, Event *event);
s32 func_020b3ef4(VctPacketHeader *header, Event *event) {
    if (data_021d84b8.mode != 2) {
        return 0;
    }
    if (data_021d84b8.peer != header->id) {
        return 0;
    }
    switch (header->notify) {
        case 0:
            if (!data_021d6fb0.server.state) {
                return 0;
            }
            if (data_021d6fb0.server.mode == 5 || data_021d6fb0.server.mode == 2) {
                event->event = 9;
            } else {
                event->event = 5;
            }
            data_021d6fb0.server.state = 0;
            data_021d6fb0.server.mode  = 0;
            event->session             = &data_021d6fec;
            break;
        case 1:
            data_021d6fb0.server.state = 2;
            if (header->peer == data_021d84b8.aid) {
                data_021d6fb0.server.mode = 2;
                event->event              = 7;
                data_021d6fb0.server.mask = header->mask;
            } else {
                data_021d6fb0.server.mode = 3;
                event->event              = 6;
                data_021d6fb0.server.mask = header->peer ? 1 << header->peer : 1;
            }
            data_021d6fb0.server.other = header->peer;
            event->session             = &data_021d6fec;
            break;
        default:
            return 0;
    }
    return 1;
}
