/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_SESSION_GetEventCode from https://github.com/Project-Holon/aletheia src/game/ov013/vct_session.c (license: none (MIT =
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
extern int func_020b3890(VctPacket *packet, VctPeer *peer);
extern u8 data_021090fc[];
extern u8 data_02109104[];
int func_020b3890(VctPacket *packet, VctPeer *peer) {
    peer->floorHolderId = packet->floorHolderId;
    if (packet->kind == 0xff) {
        if (packet->command == 0) {
            peer->memberMask = (peer->peerId != 0) ? (1 << peer->peerId) : 1;
        }
        return data_021090fc[packet->command];
    }
    if (packet->kind == 0) {
        if (packet->command == 0) {
            if (peer->phase == 1) {
                peer->memberMask = (peer->peerId != 0) ? (1 << peer->peerId) : 1;
                return 7;
            }
            if (peer->phase == 5) {
                return 9;
            }
            return 12;
        }
        return data_02109104[packet->command];
    }
    return 12;
}
