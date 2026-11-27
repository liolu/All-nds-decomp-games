/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_AUDIO_ReceiveFrame from https://github.com/Project-Holon/aletheia src/game/ov013/vct_audio.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef struct VctAudioFrame {
    u32 magic;
    u8 type;
    volatile u8 flags;
    u16 seq;
    u32 timestamp;
    u8 data[0x460 - 0xC];
} VctAudioFrame;
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
typedef struct VctFrameSpec {
    u8 blocks;
    u8 extraBytes;
} VctFrameSpec;
extern VctSendState data_021d6060;
extern VctReceiveSource data_021d6098[3];
extern const VctFrameSpec data_021090dc[];
extern VctRxPacket *func_020b40f4(void);
extern void func_020b4128(VctRxPacket *frame);
extern void func_020d4a50(const void *srcp, void *dstp, u32 size);
extern int func_020b2028(u32 senderAid, VctAudioFrame *frame, u32 size, u64 arrivalTick);
extern void func_020b2430(unsigned int slot);
extern void func_020b248c(void);
extern int func_020b24f8(VctRxPacket *packet);
extern void func_020b281c(u32 slot);
extern void func_020b288c(void);
extern int func_020b2c9c(VctReceiveSource *source, VctRxPacket *packet);
int func_020b2028(u32 senderAid, VctAudioFrame *frame, u32 size, u64 arrivalTick) {
    VctRxPacket *packet;
    VctReceiveSource *source;
    int mode;
    u32 i;
    u8 *dst;

    source = 0;
    if (data_021d6060.memberCount == 0) {
        return 0;
    }

    for (i = 0; i < 3; i++) {
        if (senderAid == data_021d6098[i].peerAid) {
            source = &data_021d6098[i];
            break;
        }
    }
    if (source == 0) {
        return 0;
    }

    if (frame->type == 0x41) {
        source->noiseLevel = frame->seq;
        source->timestamp0 = 0;
        source->count      = 1;
        return 0;
    }
    if (frame->type != 0x40) {
        return 0;
    }

    mode              = frame->flags & 0x7f;
    source->codecMode = mode;
    if (mode >= 5) {
        return 0;
    }
    if (size != data_021090dc[mode].blocks * 0x44 + data_021090dc[mode].extraBytes + 0xc) {
        return 0;
    }
    if ((data_021d6060.memberMask & (senderAid != 0 ? 1 << senderAid : 1)) == 0) {
        return 0;
    }

    if ((packet = func_020b40f4()) == 0) {
        func_020b281c(source->queueIndex);
        func_020b2430(source->queueIndex);
        if ((packet = func_020b40f4()) == 0) {
            func_020b288c();
            func_020b248c();
            packet = func_020b40f4();
        }
        if (packet == 0) {
            return 0;
        }
    }

    dst = &packet->buffer[sizeof(packet->buffer)] - (size - 0xc);
    func_020d4a50(frame->data, dst, size - 0xc);
    packet->queueIndex  = source->queueIndex;
    packet->codecMode   = mode;
    packet->payload     = dst;
    packet->payloadSize = size - 0xc;
    packet->arrivalTick = arrivalTick;
    packet->senderAid   = senderAid;
    packet->marker      = frame->flags & 0x80;
    packet->timestamp   = frame->timestamp;
    packet->seq         = frame->seq;
    if (func_020b2c9c(source, packet) == 0) {
        func_020b4128(packet);
        return 0;
    }
    func_020b24f8(packet);
    return 1;
}
void func_020b2430(unsigned int slot);
void func_020b248c(void);
int func_020b24f8(VctRxPacket *packet);
void func_020b281c(u32 slot);
void func_020b288c(void);
int func_020b2c9c(VctReceiveSource *source, VctRxPacket *packet);
