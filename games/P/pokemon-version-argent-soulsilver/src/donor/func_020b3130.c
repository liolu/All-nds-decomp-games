/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* vct_build_request_data from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libVCT/src/vct_ssp.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
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
extern int func_020b3130(VctSession *session, int type, VctPacketHeader *header, u32 size);
extern int func_020b393c(VctSession *session, VctPacketHeader *header, u32 type);
extern s32 func_020b3a5c(VctSession *session);
extern int func_020b3aa8(VctSession *session, VctPacketHeader *header);
int func_020b3130(VctSession *s, int kind, VctPacketHeader *b, u32 n) {
    if (!s) {
        return -1;
    }
    if (n < 16) {
        return -1;
    }
    if (data_021d84b8.state == 1) {
        return -3;
    }
    if (kind < 0 || kind >= 5) {
        return -3;
    }
    b->kind = 0xFF;
    func_020b393c(s, b, (u8) kind);
    if (!func_020b3aa8(s, b)) {
        return -3;
    }
    if (data_021d84b8.mode == 1 && kind == 0) {
        if (!func_020b3a5c(s)) {
            return -3;
        }
    }
    return 0;
}
int func_020b393c(VctSession *s, VctPacketHeader *h, u32 kind);
s32 func_020b3a5c(VctSession *session);
int func_020b3aa8(VctSession *s, VctPacketHeader *p);
