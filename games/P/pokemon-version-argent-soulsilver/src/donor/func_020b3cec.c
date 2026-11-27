/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* vct_handle_ssp_server from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libVCT/src/vct_ssp.c (license: none), reused
 * by tools/donor_match.py */
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
extern void func_020b37c8(u32 notify);
extern s32 func_020b3890(VctPacketHeader *header, VctSession *session);
extern int func_020b3984(VctSession *session, VctPacketHeader *header);
extern s32 func_020b3cec(VctPacketHeader *header, Event *event);
void func_020b37c8(u32 kind);
s32 func_020b3890(VctPacketHeader *header, VctSession *session);
int func_020b3984(VctSession *s, VctPacketHeader *p);
s32 func_020b3cec(VctPacketHeader *header, Event *event) {
    s32 state;
    if (data_021d6fb0.server.state == 2) {
        if (data_021d6fb0.server.aid == header->id) {
            state = func_020b3984(&data_021d6fec, header);
            switch (state) {
                case -2:
                    event->event   = 12;
                    event->session = 0;
                    return 1;
                case -3:
                case -1:
                    return 0;
            }
            event->event       = func_020b3890(header, &data_021d6fec);
            event->session     = &data_021d6fec;
            data_021d6fec.mode = state;
        } else {
            func_020b37c8(1);
            return 0;
        }
    } else {
        u8 id   = header->id;
        u32 bit = id ? 1 << id : 1;
        if (!(data_021d6fb0.core.mask & bit)) {
            return 0;
        }
        data_021d6fb0.server.aid   = id;
        data_021d6fb0.server.state = 2;
        data_021d6fb0.server.mode  = 0;
        state                      = func_020b3984(&data_021d6fec, header);
        switch (state) {
            case -3:
            case -2:
            case -1:
                data_021d6fb0.server.state = 0;
                return 0;
        }
        event->event       = func_020b3890(header, &data_021d6fec);
        event->session     = &data_021d6fec;
        data_021d6fec.mode = state;
    }
    if (event->event == 10) {
        func_020b37c8(1);
        data_021d6fb0.core.tick = func_020d34b0();
    } else {
        func_020b37c8(0);
        data_021d6fb0.core.tick = 0;
    }
    return 1;
}
