/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_SESSION_HandlePacket from https://github.com/Project-Holon/aletheia src/game/ov013/vct_session.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
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
extern VctSession data_021d84b8;
extern int func_020b3570(int senderId, VctPacket *packet, int length, VctEvent *event);
extern int func_020b3bb0(VctPacket *packet, VctEvent *event);
extern int func_020b3cec(VctPacket *packet, VctEvent *event);
extern int func_020b3e7c(VctPacket *packet, VctEvent *event);
int func_020b3570(int senderId, VctPacket *packet, int length, VctEvent *event) {
    if (length != 0x10) {
        return 0;
    }
    if (packet->srcId != senderId || packet->dstId != data_021d84b8.localId) {
        return 0;
    }
    if (packet->protocol != 0x10) {
        return func_020b3e7c(packet, event);
    }
    if (data_021d84b8.sharedSession == 0) {
        return func_020b3bb0(packet, event);
    }
    return func_020b3cec(packet, event);
}
int func_020b3bb0(VctPacket *packet, VctEvent *event);
int func_020b3cec(VctPacket *packet, VctEvent *event);
int func_020b3e7c(VctPacket *packet, VctEvent *event);
