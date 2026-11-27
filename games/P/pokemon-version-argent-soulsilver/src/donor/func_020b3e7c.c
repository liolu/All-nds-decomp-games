/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_SESSION_HandleUnknownProtocolPacket from https://github.com/Project-Holon/aletheia src/game/ov013/vct_session.c
 * (license: none (MIT = tooling only)), reused by tools/donor_match.py */
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
typedef struct VctPeerPool {
    VctPeer *freePeers;
    VctPeer *activeHead;
    void *tickFunc;
    u32 rngMul;
    u32 rngAdd;
    VctPeer rejectPeer;
    VctPeer active;
} VctPeerPool;
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
extern VctPeerPool data_021d6fc0;
extern int func_020b369c(VctPeer *peer, int command);
extern void func_020b3808(VctPeer *peer, unsigned int peerId);
extern VctPeer *func_020b3b30(int peerId);
extern int func_020b3e7c(VctPacket *packet, VctEvent *event);
int func_020b369c(VctPeer *peer, int command);
void func_020b3808(VctPeer *peer, unsigned int peerId);
VctPeer *func_020b3b30(int peerId);
int func_020b3e7c(VctPacket *packet, VctEvent *event) {
    VctPeer *peer;

    if (packet->kind == 0xff && packet->command == 4) {
        return 0;
    }
    peer = func_020b3b30(packet->srcId);
    if (peer) {
        event->code = 2;
        event->peer = peer;
        peer->mode  = 0;
        func_020b369c(peer, 2);
        return 1;
    }
    func_020b3808(&data_021d6fc0.rejectPeer, packet->srcId);
    func_020b369c(&data_021d6fc0.rejectPeer, 2);
    return 0;
}
