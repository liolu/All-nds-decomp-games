/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_ReceiveFrame from https://github.com/Project-Holon/aletheia src/game/ov013/vct.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
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
typedef struct VctEvent {
    int code;
    VctPeer *peer;
} VctEvent;
typedef struct VctFrameHeader {
    u32 magic;
    u8 type;
} VctFrameHeader;
extern VctLibState data_021d84ac;
extern int func_020b4a18(int senderId, VctFrameHeader *frame, int length);
extern int func_020b4a8c(int senderId, VctFrameHeader *header, int length, VctEvent *eventOut);
int func_020b4a18(int senderId, VctFrameHeader *frame, int length) {
    VctEvent event;

    switch (func_020b4a8c(senderId, frame, length, &event)) {
        case 0:
            break;
        case 1:
            data_021d84ac.session.eventCallback(senderId, event.code, event.peer, data_021d84ac.session.callbackArg);
            return 1;
        case 2:
            return 0;
    }
    return 1;
}
int func_020b4a8c(int senderId, VctFrameHeader *header, int length, VctEvent *eventOut);
