/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_MIXER_RemoveMember from https://github.com/Project-Holon/aletheia src/game/ov013/vct_mixer.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
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
typedef struct VctRxPacket {
    struct VctRxPacket *freeLink;
    struct VctRxPacket *prev;
    struct VctRxPacket *next;
    int codecMode;
    u8 senderAid;
    u8 queueIndex;
    u8 pad12[2];
    u32 payloadSize;
    u32 seq;
    u8 buffer[0x45c - 0x1c];
    u32 marker;
    u32 timestamp;
    u64 arrivalTick;
    u64 playTick;
    void *payload;
} VctRxPacket;
typedef struct VctReceiveSource {
    u32 latency;
    u32 playoutDelay;
    u32 queueDepth;
    int drift;
    u32 lastSeq;
    u32 dropped;
    int jitterOut;
    u32 reordered;
    u32 playedFrames;
    int codecMode;
    u32 lastLatency;
    u32 latencyFilter;
    u32 noiseLevel;
    u32 queueIndex;
    int peerAid;
    VctRxPacket *lastPacket;
    u32 lastPacketSize;
    u64 tick0;
    u32 timestamp0;
    u32 prevTimestamp;
    u32 maxSeq;
    u32 lastPlayedSeq;
    u32 probation;
    u32 cycles;
    u32 badSeq;
    u16 baseSeq;
    u16 padSeq;
    u32 count;
    u32 pendingSkips;
    int avg;
    int base;
    int jitter;
    int transit;
    int hold;
    int lo;
    u32 hi;
    u32 lowCount;
} VctReceiveSource;
extern VctSendState data_021d6060;
extern VctReceiveSource data_021d6098[3];
extern void func_020b415c(void);
extern void func_020b2430(unsigned int slot);
extern void func_020b281c(u32 slot);
extern void func_020b2b4c(VctReceiveSource *source);
extern void func_020b17cc(VctPeer *peer);
extern VctPeer *data_021d608c[3];
#pragma opt_lifetimes reset
#pragma opt_propagation off
void func_020b17cc(VctPeer *peer) {
    u32 slotIndex;
    int oldCount;
    VctPeer *nullPeer;
    slotIndex = 0;
    do {
        if (data_021d608c[slotIndex] == peer) {
            nullPeer                  = 0;
            oldCount                  = data_021d6060.memberCount;
            data_021d608c[slotIndex]  = nullPeer;
            data_021d6060.memberCount = oldCount - 1;
            func_020b2b4c(&data_021d6098[slotIndex]);
            func_020b281c(slotIndex);
            func_020b2430(slotIndex);
            data_021d6060.memberMask &= ~peer->memberMask;
            break;
        }
        slotIndex++;
    } while (slotIndex < 3);
    if (data_021d6060.memberCount == 0) {
        data_021d6060.markerRequest = 1;
        func_020b415c();
        data_021d6060.memberMask = 0;
    }
}
