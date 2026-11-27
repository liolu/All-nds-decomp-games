/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_MIXER_SetCodecMode from https://github.com/Project-Holon/aletheia src/game/ov013/vct_mixer.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
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
typedef struct VctSendState {
    u16 sequence;
    u8 pad2[2];
    u32 memberMask;
    volatile u32 markerRequestNoVad;
    u32 packetBytes;
    u16 adpcmPredictor;
    u8 adpcmStepIndex;
    u8 pad13;
    volatile u32 markerRequest;
    u32 echoSuppressEnabled;
    int codecMode;
    int memberCount;
    u32 frameBytes;
    int lastGateResult;
} VctSendState;
typedef struct VctFrameSpec {
    u8 blocks;
    u8 extraBytes;
} VctFrameSpec;
extern VctSession data_021d84b8;
extern VctSendState data_021d6060;
extern const VctFrameSpec data_021090dc[];
extern int func_020b1cf8(int codecMode);
int func_020b1cf8(int codecMode) {
    if (codecMode >= 5) {
        return 0;
    }
    if (data_021d84b8.mode != 1 && (unsigned) codecMode <= 1) {
        return 0;
    }
    data_021d6060.packetBytes    = data_021090dc[codecMode].blocks * 0x44 + data_021090dc[codecMode].extraBytes + 0xC;
    data_021d6060.codecMode      = codecMode;
    data_021d6060.adpcmPredictor = 0;
    data_021d6060.adpcmStepIndex = 0;
    return 1;
}
