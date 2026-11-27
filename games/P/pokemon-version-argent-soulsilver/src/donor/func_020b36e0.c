/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_SESSION_FillAnnounceFields from https://github.com/Project-Holon/aletheia src/game/ov013/vct_session.c (license: none
 * (MIT = tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;
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
typedef struct VctGroup {
    int peerCount;
    int peerMask;
    u64 announceTick;
} VctGroup;
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
extern void func_020b36e0(VctPeer *peer, VctPacket *packet);
extern VctGroup data_021d6fb0;
void func_020b36e0(VctPeer *peer, VctPacket *packet) {
    if (packet->flag == 1) {
        packet->floorHolderId = peer->peerId;
        packet->memberMask    = data_021d6fb0.peerMask;
    }
}
