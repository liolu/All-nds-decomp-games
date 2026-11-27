/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* vct_check_send_state from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libVCT/src/vct_ssp.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef signed char s8;
typedef signed long s32;
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
extern const s8 data_0210914e[][11];
extern const s8 data_02109190[][11];
extern int func_020b3aa8(VctSession *session, VctPacketHeader *header);
int func_020b3aa8(VctSession *s, VctPacketHeader *p) {
    int state;
    int index = p->type;
    if (!p->kind) {
        index += 5;
    }
    if (index < 0 || index >= 11) {
        index = -1;
    }
    if (index < 0) {
        return -1;
    }
    state = s->mode;
    if (data_021d84b8.mode == 1) {
        state = data_0210914e[state][index];
    } else {
        state = data_02109190[state][index];
    }
    if (state == -1) {
        return 1;
    }
    if (state == -2) {
        return 0;
    }
    s->mode = state;
    return 1;
}
