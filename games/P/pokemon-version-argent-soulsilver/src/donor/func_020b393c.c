/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_SESSION_InitPacketHeader from https://github.com/Project-Holon/aletheia src/game/ov013/vct_session.c (license: none (MIT
 * = tooling only)), reused by tools/donor_match.py */
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
extern VctSession data_021d84b8;
extern int func_020b393c(VctPeer *peer, VctPacket *packet, int command);
int func_020b393c(VctPeer *peer, VctPacket *packet, int command) {
    packet->magic         = 0x5f564354;
    packet->protocol      = 0x10;
    packet->command       = command;
    packet->srcId         = data_021d84b8.localId;
    packet->dstId         = peer->peerId;
    packet->flag          = 0;
    packet->floorHolderId = data_021d84b8.localId;
    packet->memberMask    = 0;
    return 0;
}
