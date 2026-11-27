/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_SESSION_BroadcastState from https://github.com/Project-Holon/aletheia src/game/ov013/vct_session.c (license: none (MIT =
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
extern VctPeerPool data_021d6fc0;
extern int func_020b3708(VctPeer *peer, VctPacket *packet);
extern void func_020b37c8(int flag);
extern int func_020b393c(VctPeer *peer, VctPacket *packet, int command);
int func_020b3708(VctPeer *peer, VctPacket *packet);
void func_020b37c8(int flag) {
    u8 buffer[16];

    ((VctPacket *) buffer)->kind = 0xff;
    func_020b393c(&data_021d6fc0.active, (VctPacket *) buffer, 4);
    ((VctPacket *) buffer)->flag = flag;
    func_020b3708(&data_021d6fc0.active, (VctPacket *) buffer);
}
int func_020b393c(VctPeer *peer, VctPacket *packet, int command);
