/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_AUDIO_UpdateSequence from https://github.com/Project-Holon/aletheia src/game/ov013/vct_audio.c (license: none (MIT =
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
extern void func_020b2ba4(VctReceiveSource *source, u16 seq);
extern int func_020b2bc4(VctReceiveSource *source, VctRxPacket *packet, u16 seq);
void func_020b2ba4(VctReceiveSource *source, u16 seq);
int func_020b2bc4(VctReceiveSource *source, VctRxPacket *packet, u16 seq) {
    u16 last  = source->baseSeq;
    u16 delta = seq - last;

    if (delta < 3000) {
        if (seq < last) {
            source->cycles += 0x10000;
        }
        source->baseSeq = seq;
    } else if (delta <= 0x10000 - 100) {
        if (seq == source->badSeq) {
            func_020b2ba4(source, seq);
            source->maxSeq = (u16) (seq - 1);
        } else {
            source->badSeq = (u16) (seq + 1);
            return 0;
        }
    } else if (seq + source->cycles > source->maxSeq + 0x10000 - 100) {
        packet->seq = seq + source->cycles - 0x10000;
        return 1;
    }
    packet->seq = seq + source->cycles;
    return 1;
}
