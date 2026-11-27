/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_SESSION_AddPeer from https://github.com/Project-Holon/aletheia src/game/ov013/vct_audio.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
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
typedef struct VctGroupCount {
    int peerCount;
    int peerMask;
} VctGroupCount;
extern VctSession data_021d84b8;
extern VctPeer *func_020b3b30(int peerId);
extern VctPeer *func_020b304c(unsigned int index);
extern int func_020b32e0(unsigned char aid);
extern VctGroupCount data_021d6fb0;
VctPeer *func_020b304c(unsigned int index);
int func_020b32e0(unsigned char aid) {
    VctPeer *peer;

    if (data_021d84b8.mode != 3) {
        return -2;
    }
    if (data_021d6fb0.peerCount == 3) {
        return -6;
    }
    if (aid == data_021d84b8.localId) {
        return -1;
    }
    if (func_020b3b30(aid)) {
        return 0;
    }
    peer = func_020b304c(aid);
    if (peer == 0) {
        return -1;
    }
    peer->peerId        = aid;
    peer->floorHolderId = aid;
    peer->phase         = 2;
    peer->memberMask    = 1 << aid;
    data_021d84b8.eventCallback(aid, 7, peer, data_021d84b8.callbackArg);
    data_021d6fb0.peerCount++;
    return 0;
}
