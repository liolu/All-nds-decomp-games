/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_AUDIO_SetLastPacket from https://github.com/Project-Holon/aletheia src/game/ov013/vct_audio.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
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
extern void func_020b4128(VctRxPacket *frame);
extern int func_020b2a48(u32 slot);
extern int func_020b2b78(VctReceiveSource *source, VctRxPacket *packet);
int func_020b2a48(u32 slot);
int func_020b2b78(VctReceiveSource *source, VctRxPacket *packet) {
    if (source->lastPacket) {
        func_020b4128(source->lastPacket);
    }
    source->lastPacket = packet;
    return func_020b2a48(source->queueIndex);
}
