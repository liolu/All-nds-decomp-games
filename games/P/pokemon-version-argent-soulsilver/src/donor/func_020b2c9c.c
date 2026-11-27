/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* vct_calc_jitter_and_skew from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libVCT/src/vct_audio_queue.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef unsigned long long int u64;
typedef signed long long int s64;
typedef int BOOL;
typedef u64 OSTick;
extern OSTick func_020d34b0(void);
typedef struct AudioPacket {
    u32 unk_00;
    struct AudioPacket *prev;
    struct AudioPacket *next;
    int codec;
    u8 owner;
    u8 channel;
    u16 unk_12;
    u32 size;
    u32 sequence;
    u8 samples[0x440];
    BOOL flagged;
    u32 timestamp;
    u64 receive;
    u64 ready;
    void *data;
} AudioPacket;
typedef struct Stream {
    u32 jitter;
    u32 playoutDelay;
    u32 left;
    s32 drift;
    u32 seq;
    u32 lost;
    s32 jitterEstimate;
    u32 reordered;
    u32 retrans;
    u32 codec;
    u32 oldDelay;
    u32 delay;
    u32 silenceSeq;
    u32 owner;
    u32 session;
    AudioPacket *previous;
    u32 unk_40;
    u64 baseTick;
    u32 baseStamp;
    u32 unk_50;
    u32 lastSeq;
    u32 lastPlayed;
    BOOL needSeqInit;
    u32 seqCycles;
    u32 badSeq;
    u16 maxSeq;
    u16 unk_6A;
    u32 skewSamples;
    u32 skip;
    s32 averageSkew;
    s32 startSkew;
    s32 jitterAverage;
    s32 skew;
    s32 hold;
    s32 lowerBound;
    u32 upperBound;
    u32 boundCount;
} Stream;
extern void func_020b2ba4(Stream *stream, u32 seq);
extern int func_020b2bc4(Stream *stream, AudioPacket *packet, u32 seq);
extern int func_020b2c9c(Stream *stream, AudioPacket *packet);
void func_020b2ba4(Stream *stream, u32 seq);
int func_020b2bc4(Stream *stream, AudioPacket *packet, u32 seq);
int func_020b2c9c(Stream *s, AudioPacket *p) {
    u32 elapsed;
    s32 prev;
    s32 diff;
    s32 skew;
    int reset = 0;
    s32 delta;
    u64 now;
    s32 x;
    s32 d;

    if (s->needSeqInit) {
        func_020b2ba4(s, (u16) p->sequence);
    } else {
        if (func_020b2bc4(s, p, (u16) p->sequence) == 0) {
            s->lost++;
            return 0;
        }
        s->seq = p->sequence;
        if (s->lastSeq == p->sequence) {
            s->lost++;
            return 0;
        }
        if (s->lastSeq + 1 != p->sequence && p->flagged == 0) {
            delta = p->sequence - s->lastSeq;
            if (delta < 0) {
                delta = -delta;
            }
            if (delta > 100) {
                s->lastSeq = p->sequence;
                return 0;
            }
            if (s->lastSeq > p->sequence) {
                s->reordered++;
            }
        }
    }
    s->lastSeq = p->sequence;
    if (s->baseStamp == 0) {
        s->baseStamp   = p->timestamp;
        s->baseTick    = p->receive;
        s->skewSamples = 0;
    }
    elapsed = (p->timestamp - s->baseStamp) << 6;
    skew    = elapsed - (s64) (p->receive - s->baseTick);
    prev    = s->skew;
    if (prev == 0 || p->flagged != 0) {
        s->skew = skew;
    } else {
        s->skew = skew;
        diff    = skew - prev;
        if (diff < 0) {
            diff = -diff;
        }
        if (diff > (s64) ((s->jitterAverage + 35608) * 2) + 52365ULL) {
            s->hold = diff / 35608 + 2;
        }
        if (s->hold <= 0) {
            s->jitterAverage  = s->jitterAverage + ((diff - s->jitterAverage) >> 4);
            s->jitterEstimate = s->jitterAverage;
        }
    }
    p->ready = elapsed + s->baseTick + s->playoutDelay;
    now      = func_020d34b0();
    if (p->ready + 35608 < now) {
        return 0;
    }
    if (p->ready > now + 523656) {
        return 0;
    }
    if (s->hold <= 0) {
        x = s->jitterAverage * 3;
        d = x / 35608;
        if ((u32) x > s->upperBound) {
            s->upperBound   = (d + 1) * 35608 + 79071;
            s->lowerBound   = s->upperBound - 53412;
            s->playoutDelay = d * 35608 + 79071;
            s->boundCount   = 0;
        } else if (x < s->lowerBound) {
            if (++s->boundCount > 70) {
                s->upperBound = (d + 1) * 35608 + 79071;
                s->lowerBound = (s32) ((u32) d * 35608 - 17804);
                if (s->lowerBound < 0) {
                    s->lowerBound = 0;
                }
                s->playoutDelay = d * 35608 + 79071;
                s->boundCount   = 0;
            }
        }
        if (s->playoutDelay > 427296) {
            s->playoutDelay = 427296;
        }
        if (s->skewSamples < 16) {
            s->skewSamples++;
            s->averageSkew = skew;
            s->startSkew   = skew;
        } else {
            s->averageSkew = (s->averageSkew * 31 + skew) / 32;
        }
        s->drift = s->startSkew - s->averageSkew;
        if (s->drift > 34561) {
            reset = 1;
        }
        if (s->drift < -34561) {
            s->skip++;
            reset = -1;
        }
        if (reset) {
            s->skewSamples = 0;
            s->baseStamp   = 0;
        }
    }
    s->hold--;
    return 1;
}
