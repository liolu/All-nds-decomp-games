/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_ParseFrame from https://github.com/Project-Holon/aletheia src/game/ov013/vct.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed int s32;
typedef struct VctPeer {
    u32 mode;
    u8 peerId;
    u8 floorHolderId;
    u8 pad6[2];
    u32 memberMask;
    int phase;
    u32 pad10;
    struct VctPeer *next;
} VctPeer;
typedef void (*VctEventCallback)(int aid, int event, VctPeer *peer, int arg);
typedef struct VctSession {
    u8 localId;
    u8 hostId;
    u8 pad2[2];
    VctEventCallback eventCallback;
    int callbackArg;
    int sharedSession;
    int mode;
    u32 sessionFlags;
} VctSession;
typedef struct VctLibState {
    s32 tickCount;
    s32 audioFrameCount;
    s32 initialized;
    VctSession session;
} VctLibState;
typedef struct VctPacket {
    u32 magic;
    u8 kind;
    u8 protocol;
    u8 command;
    u8 reserved7;
    u8 srcId;
    u8 dstId;
    u8 flag;
    u8 floorHolderId;
    u32 memberMask;
} VctPacket;
typedef struct VctEvent {
    int code;
    VctPeer *peer;
} VctEvent;
typedef struct VctFrameHeader {
    u32 magic;
    u8 type;
} VctFrameHeader;
typedef struct VctAudioFrame {
    u32 magic;
    u8 type;
    volatile u8 flags;
    u16 seq;
    u32 timestamp;
    u8 data[0x460 - 0xC];
} VctAudioFrame;
extern VctLibState data_021d84ac;
typedef u64 OSTick;
extern OSTick func_020d34b0(void);
extern int func_020b2028(u32 senderAid, VctAudioFrame *frame, u32 size, u64 arrivalTick);
extern int func_020b3570(int senderId, VctPacket *packet, int length, VctEvent *event);
extern int func_020b4a8c(int senderId, VctFrameHeader *header, int length, VctEvent *eventOut);
#pragma opt_common_subs off
int func_020b4a8c(int senderId, VctFrameHeader *header, int length, VctEvent *eventOut) {
    unsigned long long tick;

    if (header == 0) {
        return 0;
    }
    if (header->magic != 0x5F564354) {
        return 2;
    }
    if (data_021d84ac.session.mode == 0 || data_021d84ac.initialized == 0) {
        return 0;
    }
    eventOut->code = 0;
    eventOut->peer = 0;
    tick           = func_020d34b0();
    if ((header->type & 0xf0) == 0x40) {
        data_021d84ac.audioFrameCount++;
        func_020b2028(senderId, (VctAudioFrame *) header, length, tick);
        return 0;
    }
    if (header->type == 0 || header->type == 0xff) {
        return func_020b3570(senderId, (VctPacket *) header, length, eventOut) != 0;
    }
    return 0;
}
