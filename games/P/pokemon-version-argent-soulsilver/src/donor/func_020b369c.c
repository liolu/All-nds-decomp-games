/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_SESSION_SendCommand from https://github.com/Project-Holon/aletheia src/game/ov013/vct_session.c (license: none (MIT =
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
extern int func_020b3204(void *peer, unsigned int type, unsigned char *buffer, unsigned int size);
extern int func_020b369c(VctPeer *peer, int command);
extern int func_020b3850(VctPeer *peer, VctPacket *packet);
int func_020b369c(VctPeer *peer, int command) {
    u8 packet[16];
    int result;

    result = func_020b3204((void *) peer, command, packet, 16);
    if (result != 0) {
        return result;
    }
    if (func_020b3850((VctPeer *) peer, (VctPacket *) packet) != 0) {
        return 0;
    }
    return -4;
}
int func_020b3850(VctPeer *peer, VctPacket *packet);
